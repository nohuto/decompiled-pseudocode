/*
 * XREFs of CMFReadCompressedSegment @ 0x1408DA2BC
 * Callers:
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1401B87F0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1401B8830 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1401B8C30 (ZwCreateSection.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     XpressDecode @ 0x14032CAB4 (XpressDecode.c)
 *     XpressDecodeClose @ 0x14032CBE0 (XpressDecodeClose.c)
 *     XpressDecodeCreate @ 0x14032CC0C (XpressDecodeCreate.c)
 */

__int64 __fastcall CMFReadCompressedSegment(HANDLE FileHandle, char *a2, unsigned int a3, _DWORD *a4)
{
  _DWORD *v4; // r14
  char *v7; // rsi
  NTSTATUS v9; // ebx
  int v10; // ebx
  char *v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  char *v14; // r13
  unsigned int v15; // r12d
  __int64 v16; // r15
  unsigned int v17; // ebx
  unsigned int v18; // eax
  PVOID BaseAddress; // [rsp+58h] [rbp-29h] BYREF
  void *i; // [rsp+60h] [rbp-21h]
  HANDLE SectionHandle; // [rsp+68h] [rbp-19h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+70h] [rbp-11h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-1h] BYREF
  int v26; // [rsp+E8h] [rbp+67h]

  SectionHandle = 0LL;
  v4 = 0LL;
  ViewSize = 0LL;
  BaseAddress = 0LL;
  v7 = a2;
  if ( !FileHandle || !a4 || !a2 )
  {
    v9 = -1073741811;
    goto LABEL_29;
  }
  if ( a4[21] > 0x400u )
    return (unsigned int)-1073741811;
  v4 = (_DWORD *)XpressDecodeCreate();
  if ( !v4 )
  {
    v9 = -1073741801;
    goto LABEL_29;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  if ( v9 < 0 )
  {
LABEL_29:
    if ( BaseAddress )
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    goto LABEL_31;
  }
  SectionOffset.QuadPart = 0LL;
  v9 = ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0x400000u,
         2u);
  if ( v9 >= 0 )
  {
    v10 = ViewSize;
    if ( ViewSize < 0x1060 || a3 < 0x1060 )
    {
LABEL_12:
      v9 = -1073741306;
      goto LABEL_29;
    }
    memmove(v7, a4, 0x1060uLL);
    v11 = v7 + 4192;
    v12 = a4[21];
    v13 = v10 - 4192;
    LODWORD(v7) = a4[20];
    v14 = (char *)BaseAddress + 4192;
    v15 = a3 - 4192;
    v26 = v10 - 4192;
    v16 = 0LL;
    for ( i = v11; (unsigned int)v16 < v12; i = (char *)i + (_QWORD)v7 )
    {
      if ( (_DWORD)v16 == v12 - 1 )
      {
        v17 = a4[22];
      }
      else
      {
        v11 = (char *)i;
        v17 = a4[(unsigned int)(v16 + 1) + 23] - a4[v16 + 23];
      }
      if ( v17 > v13 || !v15 )
        goto LABEL_12;
      v18 = v15;
      if ( (unsigned int)v7 <= v15 )
        v18 = (unsigned int)v7;
      v7 = (char *)v18;
      if ( v17 == v18 )
      {
        memmove(v11, v14, v18);
      }
      else if ( (unsigned int)XpressDecode((__int64)v4, (__int64)v11, v18, v18, (__int64)v14, v17) != v18 )
      {
        v9 = -1073741217;
        goto LABEL_29;
      }
      v15 -= (unsigned int)v7;
      v13 = v26 - v17;
      v11 = (char *)i + (_QWORD)v7;
      v14 += v17;
      v26 -= v17;
      v12 = a4[21];
      v16 = (unsigned int)(v16 + 1);
    }
    v9 = 0;
    goto LABEL_29;
  }
  BaseAddress = 0LL;
LABEL_31:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v4 )
    XpressDecodeClose(v4);
  return (unsigned int)v9;
}
