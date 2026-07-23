/*
 * XREFs of RtlpConvertCultureNamesToLCIDs @ 0x1800EC8D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpMultiSZCchLength @ 0x18000EEB4 (LdrpMultiSZCchLength.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     wcsnlen @ 0x180092B40 (wcsnlen.c)
 *     RtlConvertLCIDToString @ 0x1800EBBE0 (RtlConvertLCIDToString.c)
 */

__int64 __fastcall RtlpConvertCultureNamesToLCIDs(wchar_t *SourceString, _QWORD *a2)
{
  unsigned int v2; // ebx
  const wchar_t *v4; // rdi
  void *v5; // rbp
  unsigned int v6; // esi
  int v7; // r14d
  unsigned int v8; // eax
  unsigned int v9; // r15d
  unsigned int v10; // ecx
  DWORD *v11; // rax
  SIZE_T v12; // r12
  PVOID Heap; // rax
  WCHAR *v14; // rdi
  unsigned int v15; // r14d
  LCID *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  int v20; // [rsp+30h] [rbp-68h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  DWORD v22[4]; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  v4 = SourceString;
  v5 = 0LL;
  v6 = 0;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v20) < 0 )
    return 3221225485LL;
  v7 = 2 * v20;
  v8 = 2 * v20;
  while ( *v4 && v8 )
  {
    if ( v6 >= 4 )
      goto LABEL_17;
    v9 = 2 * wcsnlen(v4, (unsigned __int64)v8 >> 1);
    RtlInitUnicodeString(&DestinationString, v4);
    if ( !RtlCultureNameToLCID(&DestinationString, &v22[v6]) )
      goto LABEL_17;
    v10 = 0;
    if ( v6 )
    {
      v11 = v22;
      while ( v22[v6] != *v11 )
      {
        ++v10;
        ++v11;
        if ( v10 >= v6 )
          goto LABEL_14;
      }
LABEL_17:
      v2 = -1073741811;
LABEL_27:
      *a2 = v5;
      return v2;
    }
LABEL_14:
    v4 = (const wchar_t *)((char *)v4 + v9 + 2);
    ++v6;
    v7 += -2 - v9;
    v8 = v7;
    if ( !v4 )
      break;
  }
  v12 = (unsigned __int16)(((_WORD)v6 << 6) + 4);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  v5 = Heap;
  if ( !Heap )
  {
    v2 = -1073741801;
    goto LABEL_27;
  }
  v14 = (WCHAR *)Heap;
  v15 = 0;
  if ( !v6 )
  {
LABEL_26:
    *(_DWORD *)v14 = 0;
    goto LABEL_27;
  }
  v16 = v22;
  while ( 1 )
  {
    RtlConvertLCIDToString(*v16, 0x10u, 4u, v14, 0x20u);
    v17 = -1LL;
    do
      ++v17;
    while ( v14[v17] );
    LODWORD(v12) = -2 - v17 + v12;
    v18 = -1LL;
    do
      ++v18;
    while ( v14[v18] );
    v14 += v18 + 1;
    if ( (unsigned int)v12 < 4 )
      break;
    ++v15;
    ++v16;
    if ( v15 >= v6 )
      goto LABEL_26;
  }
  v2 = -1073741595;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return v2;
}
