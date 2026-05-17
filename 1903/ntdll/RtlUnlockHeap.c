/*
 * XREFs of RtlUnlockHeap @ 0x180019BF0
 * Callers:
 *     sub_18006773C @ 0x18006773C (sub_18006773C.c)
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 *     sub_18006B390 @ 0x18006B390 (sub_18006B390.c)
 *     RtlValidateHeap @ 0x180070350 (RtlValidateHeap.c)
 *     sub_18007F060 @ 0x18007F060 (sub_18007F060.c)
 *     sub_180102590 @ 0x180102590 (sub_180102590.c)
 * Callees:
 *     sub_180016FFC @ 0x180016FFC (sub_180016FFC.c)
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_180103AE4 @ 0x180103AE4 (sub_180103AE4.c)
 */

char __fastcall RtlUnlockHeap(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    sub_180016FFC(a1, 0);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18015FA18)();
    if ( !(unsigned __int8)sub_180019C74(a1, "RtlUnlockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      v2 = *(_QWORD *)(a1 + 352);
      --*(_WORD *)(a1 + 416);
      RtlLeaveCriticalSection(v2);
    }
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v3 = 2147353472LL;
  if ( *(_BYTE *)v3 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_180103AE4(a1);
  }
  return 1;
}
