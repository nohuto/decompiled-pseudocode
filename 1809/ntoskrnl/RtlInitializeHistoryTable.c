/*
 * XREFs of RtlInitializeHistoryTable @ 0x1409D98D4
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14009DB60 (RtlLookupFunctionEntry.c)
 *     RtlpFunctionAddressTableEntry @ 0x1409D99BC (RtlpFunctionAddressTableEntry.c)
 */

PRUNTIME_FUNCTION RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__stdcall __noreturn *v1)(NTSTATUS); // rax
  PRUNTIME_FUNCTION v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  DWORD64 *v7; // rbx
  PRUNTIME_FUNCTION result; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__stdcall __noreturn *)(NTSTATUS))RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseStatus )
      byte_14055A905 = i;
    v2 = RtlLookupFunctionEntry((DWORD64)v1, &ImageBase, 0LL);
    v3 = 2LL * i;
    v4 = ImageBase + v2->BeginAddress;
    v5 = ImageBase + v2->EndAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 6] = ImageBase;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 8] = v2;
    if ( v4 < qword_14055A908 )
      qword_14055A908 = v4;
    if ( v5 > qword_14055A910 )
      qword_14055A910 = v5;
  }
  RtlpUnwindHistoryTable[0] = i;
  v6 = 3LL;
  v7 = (DWORD64 *)&RtlpSafeMachineFrameEntries;
  do
  {
    result = RtlLookupFunctionEntry(*v7, &ImageBase, 0LL);
    *v7++ = ImageBase + result->UnwindData;
    --v6;
  }
  while ( v6 );
  return result;
}
