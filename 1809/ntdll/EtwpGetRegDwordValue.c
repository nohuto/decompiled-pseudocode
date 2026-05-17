/*
 * XREFs of EtwpGetRegDwordValue @ 0x1800524E4
 * Callers:
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180052654 (EtwpQueryPartitionRegistryInformationUm.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     StringCopyWorkerW @ 0x180052B64 (StringCopyWorkerW.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall EtwpGetRegDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  wchar_t *Heap; // rsi
  int v5; // ebx
  size_t v6; // rdx
  unsigned __int64 v7; // rdi
  size_t *v8; // r8
  const wchar_t *v9; // r9
  size_t v11; // [rsp+20h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING v13; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v14[3]; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+28h] BYREF

  v16 = a2;
  Handle = (HANDLE)-1LL;
  Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 4096LL);
  if ( !Heap )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  memset(v14, 0, sizeof(v14));
  *((_QWORD *)&v14[0] + 1) = 0LL;
  *(_QWORD *)&v14[1] = &DestinationString;
  LODWORD(v14[0]) = 48;
  DWORD2(v14[1]) = 64;
  v14[2] = 0LL;
  v5 = NtOpenKey(&Handle, 131097LL, v14);
  if ( v5 >= 0 )
  {
    v7 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 16LL);
    if ( v7 )
    {
      StringCopyWorkerW(Heap, v6, v8, v9, v11);
      RtlInitUnicodeString(&v13, Heap);
      v5 = NtQueryValueKey(Handle, &v13, 2LL, v7, 16, &v16);
      if ( v5 >= 0 )
        *a3 = *(_DWORD *)(v7 + 12);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    }
    else
    {
      v5 = -1073741801;
    }
    NtClose(Handle);
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  return (unsigned int)v5;
}
