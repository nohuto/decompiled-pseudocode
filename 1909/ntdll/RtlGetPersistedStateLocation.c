/*
 * XREFs of RtlGetPersistedStateLocation @ 0x18006FF10
 * Callers:
 *     GetOverlayRootFolder @ 0x180012E38 (GetOverlayRootFolder.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CC524 (LdrpAppxGetRemediationRegistryKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlExpandEnvironmentStrings @ 0x1800171C0 (RtlExpandEnvironmentStrings.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlGetPersistedStateLocation(
        PCWSTR SourceString,
        const WCHAR *a2,
        _WORD *a3,
        unsigned int a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 Heap; // rdi
  int v11; // eax
  signed int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // r8d
  unsigned int v15; // eax
  size_t v16; // r8
  _WORD *v17; // rdx
  unsigned __int64 v19; // r14
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  HANDLE Handle; // [rsp+30h] [rbp-41h] BYREF
  HANDLE v25; // [rsp+38h] [rbp-39h] BYREF
  __int64 v26; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  int v28; // [rsp+58h] [rbp-19h] BYREF
  HANDLE v29; // [rsp+60h] [rbp-11h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-9h]
  int v31; // [rsp+70h] [rbp-1h]
  __int128 v32; // [rsp+78h] [rbp+7h]
  int v33; // [rsp+D8h] [rbp+67h] BYREF

  Handle = 0LL;
  v25 = 0LL;
  Heap = 0LL;
  if ( a4 > 1 )
    return 3221225713LL;
  v28 = 48;
  p_DestinationString = (UNICODE_STRING *)((char *)&unk_180118510 + 16 * (int)a4);
  v29 = 0LL;
  v31 = 64;
  v32 = 0LL;
  v11 = NtOpenKey(&Handle, 131097LL, &v28);
  v12 = v11;
  if ( v11 != -1073741772 )
  {
    if ( v11 < 0 )
      goto LABEL_12;
    RtlInitUnicodeString(&DestinationString, SourceString);
    v29 = Handle;
    v28 = 48;
    p_DestinationString = &DestinationString;
    v31 = 64;
    v32 = 0LL;
    v12 = NtOpenKey(&v25, 131097LL, &v28);
    if ( v12 != -1073741772 )
      goto LABEL_19;
  }
  if ( !a3 )
  {
LABEL_19:
    if ( v12 < 0 )
      goto LABEL_12;
    if ( !a2 )
      a2 = L"TargetPath";
    RtlInitUnicodeString(&DestinationString, a2);
    v19 = a6;
    v20 = a6 + 16;
    if ( a6 + 16 >= a6 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v20);
      if ( !Heap )
      {
        v12 = -1073741801;
        goto LABEL_12;
      }
      v12 = NtQueryValueKey(v25, &DestinationString, 2LL, Heap, v20, &v33);
      if ( v12 < 0 )
      {
        if ( v12 != -2147483643 )
          goto LABEL_12;
      }
      else if ( (unsigned int)(*(_DWORD *)(Heap + 4) - 1) > 1 )
      {
        v12 = -1073741788;
        goto LABEL_12;
      }
      v21 = *(_DWORD *)(Heap + 8);
      v17 = (_WORD *)(Heap + 12);
      v33 = v21;
      if ( v12 >= 0 )
      {
        if ( v17[((unsigned __int64)v21 >> 1) - 1] )
        {
          v22 = v21 + 2;
          v33 = v22;
          v21 += 2;
          if ( (unsigned int)v19 < (unsigned int)v22 )
          {
            v12 = -2147483643;
          }
          else
          {
            v17[(v22 >> 1) - 1] = 0;
            v21 = v33;
          }
        }
        if ( v12 >= 0 && *(_DWORD *)(Heap + 4) == 2 )
        {
          v23 = -1LL;
          do
            ++v23;
          while ( v17[v23] );
          v12 = RtlExpandEnvironmentStrings(0LL, v17, v23, a5, v19 >> 1, &v26);
          if ( (int)(v12 + 0x80000000) < 0 || v12 == -1073741789 )
          {
            if ( a7 )
              *a7 = 2 * v26;
            if ( v12 == -1073741789 )
              v12 = -2147483643;
          }
          goto LABEL_12;
        }
      }
      if ( a7 )
        *a7 = v21;
      if ( v12 < 0 )
        goto LABEL_12;
      v16 = v21;
      goto LABEL_11;
    }
LABEL_25:
    v12 = -1073741675;
    goto LABEL_12;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( a3[v13] );
  v14 = v13 + 1;
  v15 = 2 * v14;
  v33 = 2 * v14;
  if ( 2 * v14 < v14 )
    goto LABEL_25;
  v12 = a6 < v15 ? 0x80000005 : 0;
  if ( a7 )
    *a7 = v15;
  if ( v15 > a6 )
    goto LABEL_12;
  v16 = v15;
  v17 = a3;
LABEL_11:
  memmove(a5, v17, v16);
LABEL_12:
  if ( Handle )
    NtClose(Handle);
  if ( v25 )
    NtClose(v25);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v12;
}
