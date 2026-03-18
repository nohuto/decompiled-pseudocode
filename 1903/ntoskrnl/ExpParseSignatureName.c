/*
 * XREFs of ExpParseSignatureName @ 0x14090EBF8
 * Callers:
 *     ExpConvertSignatureName @ 0x14090D5AC (ExpConvertSignatureName.c)
 * Callees:
 *     wcsncpy_s @ 0x1401A66E0 (wcsncpy_s.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 *     ExpTranslateHexStringToGUID @ 0x140910424 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1409105AC (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x140910650 (ExpTranslateHexStringToULONGLONG.c)
 */

NTSTATUS __fastcall ExpParseSignatureName(
        wchar_t *Src,
        unsigned int a2,
        GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        bool *a7,
        char *a8)
{
  wchar_t v8; // r10
  char v12; // dl
  char v13; // r12
  __int64 v14; // rdi
  wchar_t v15; // cx
  bool v16; // r15
  NTSTATUS result; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v19; // r14
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rdi
  wchar_t *v23; // r14
  int v24; // eax
  const wchar_t *v25; // r8
  unsigned int v26; // ecx
  __int64 v27; // rbx
  __int64 v28; // rdi
  int v29; // edx
  const wchar_t *v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // rbx
  int v33; // eax
  int v34; // r9d
  const wchar_t *v35; // r8
  unsigned int v36; // ecx
  __int64 v37; // rbx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-48h] BYREF

  v8 = *Src;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v12 = 0;
  v13 = 0;
  LODWORD(v14) = 0;
  if ( a2 )
  {
    do
    {
      v15 = Src[(unsigned int)v14];
      if ( v15 == 41 )
        break;
      if ( v8 == 123 )
      {
        if ( v15 == 125 )
        {
          v12 = 1;
          break;
        }
      }
      else if ( v15 == 45 )
      {
        break;
      }
      LODWORD(v14) = v14 + 1;
    }
    while ( (unsigned int)v14 < a2 );
  }
  if ( v8 == 123 && !v12 )
    return -1073741811;
  v16 = v8 == 123;
  if ( (unsigned int)v14 > 8 )
    v16 = 1;
  if ( !v16 || v12 != 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * (unsigned int)(v14 + 1), 0x72766E45u);
    v19 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    wcsncpy_s(PoolWithTag, (unsigned int)(v14 + 1), Src, (unsigned int)v14);
    v19[(unsigned int)v14] = 0;
    if ( v16 )
      v20 = ExpTranslateHexStringToGUID(v19, a3);
    else
      v20 = ExpTranslateHexStringToULONG(v19, a3);
    v21 = v20;
    ExFreePoolWithTag(v19, 0);
    if ( v21 < 0 )
      return v21;
    v13 = 0;
LABEL_24:
    if ( (unsigned int)v14 < a2 )
    {
      if ( Src[(unsigned int)v14] != 45 )
      {
LABEL_46:
        if ( (unsigned int)v14 < a2 && Src[(unsigned int)v14] == 41 && (v16 || v13) )
        {
          *a7 = v16;
          *a8 = v13;
          return 0;
        }
        return -1073741811;
      }
      v22 = (unsigned int)(v14 + 1);
      v13 = 1;
      if ( (unsigned int)v22 < a2 )
      {
        v23 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x22uLL, 0x72766E45u);
        if ( v23 )
        {
          v24 = v22;
          v25 = &Src[v22];
          do
          {
            if ( Src[v22] == 45 )
              break;
            v22 = (unsigned int)(v22 + 1);
          }
          while ( (unsigned int)v22 < a2 );
          v26 = v22 - v24;
          if ( (unsigned int)(v22 - v24 - 1) > 7 )
            goto LABEL_51;
          v27 = v26;
          wcsncpy_s(v23, 0x11uLL, v25, v26);
          v23[v27] = 0;
          v21 = ExpTranslateHexStringToULONG(v23, a4);
          if ( v21 < 0 )
          {
LABEL_52:
            ExFreePoolWithTag(v23, 0);
            return v21;
          }
          v28 = (unsigned int)(v22 + 1);
          if ( (unsigned int)v28 >= a2 )
            goto LABEL_51;
          v29 = v28;
          v30 = &Src[v28];
          do
          {
            if ( Src[v28] == 45 )
              break;
            v28 = (unsigned int)(v28 + 1);
          }
          while ( (unsigned int)v28 < a2 );
          v31 = v28 - v29;
          if ( (unsigned int)(v28 - v29 - 1) > 0xF )
            goto LABEL_51;
          v32 = v31;
          wcsncpy_s(v23, 0x11uLL, v30, v31);
          v23[v32] = 0;
          v33 = ExpTranslateHexStringToULONGLONG(v23, a5);
          if ( v33 < 0 )
          {
            v21 = v33;
            goto LABEL_52;
          }
          v14 = (unsigned int)(v28 + 1);
          if ( (unsigned int)v14 >= a2 )
            goto LABEL_51;
          v34 = v14;
          v35 = &Src[v14];
          do
          {
            if ( Src[v14] == 41 )
              break;
            v14 = (unsigned int)(v14 + 1);
          }
          while ( (unsigned int)v14 < a2 );
          v36 = v14 - v34;
          if ( (unsigned int)(v14 - v34 - 1) > 0xF )
          {
LABEL_51:
            v21 = -1073741811;
            goto LABEL_52;
          }
          v37 = v36;
          wcsncpy_s(v23, 0x11uLL, v35, v36);
          v23[v37] = 0;
          v21 = ExpTranslateHexStringToULONGLONG(v23, a6);
          ExFreePoolWithTag(v23, 0);
          if ( v21 < 0 )
            return v21;
          goto LABEL_46;
        }
        return -1073741670;
      }
    }
    return -1073741811;
  }
  LODWORD(v14) = v14 + 1;
  GuidString.Buffer = Src;
  GuidString.Length = 2 * v14;
  GuidString.MaximumLength = 2 * v14;
  result = RtlGUIDFromString(&GuidString, a3);
  if ( result >= 0 )
    goto LABEL_24;
  return result;
}
