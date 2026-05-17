/*
 * XREFs of EtwpQueryRegString @ 0x1800527DC
 * Callers:
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180052654 (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpAddDebugInfoEvents @ 0x18010FAFC (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall EtwpQueryRegString(PCWSTR SourceString, PCWSTR a2, void *a3, unsigned int a4)
{
  int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 Heap; // rdi
  HANDLE Handle; // [rsp+38h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-11h] BYREF
  UNICODE_STRING v14; // [rsp+50h] [rbp-1h] BYREF
  _OWORD v15[3]; // [rsp+60h] [rbp+Fh] BYREF
  unsigned int v16; // [rsp+D0h] [rbp+7Fh] BYREF

  v16 = a4;
  RtlInitUnicodeString(&DestinationString, SourceString);
  memset(v15, 0, sizeof(v15));
  *((_QWORD *)&v15[0] + 1) = 0LL;
  *(_QWORD *)&v15[1] = &DestinationString;
  LODWORD(v15[0]) = 48;
  DWORD2(v15[1]) = 64;
  v15[2] = 0LL;
  v6 = NtOpenKey(&Handle, 131097LL, v15);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 2LL * v16;
  if ( v7 <= 0xFFFFFFFF )
  {
    v8 = v7 + 12;
    if ( 2 * v16 + 12 >= 2 * v16 )
    {
      v9 = v8;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v8);
      if ( Heap )
      {
        RtlInitUnicodeString(&v14, a2);
        v6 = NtQueryValueKey(Handle, &v14, 2LL, Heap, v9, &v16);
        if ( v6 >= 0 )
          memmove(a3, (const void *)(Heap + 12), *(unsigned int *)(Heap + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v6 = -1073741801;
      }
      NtClose(Handle);
      return (unsigned int)v6;
    }
  }
  NtClose(Handle);
  return 3221225621LL;
}
