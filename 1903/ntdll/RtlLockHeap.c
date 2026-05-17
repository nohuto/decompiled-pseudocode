/*
 * XREFs of RtlLockHeap @ 0x180019CB0
 * Callers:
 *     sub_18006773C @ 0x18006773C (sub_18006773C.c)
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x180070350 (RtlValidateHeap.c)
 *     sub_18007F060 @ 0x18007F060 (sub_18007F060.c)
 *     sub_180102590 @ 0x180102590 (sub_180102590.c)
 * Callees:
 *     sub_1800170E8 @ 0x1800170E8 (sub_1800170E8.c)
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1801034F4 @ 0x1801034F4 (sub_1801034F4.c)
 */

char __fastcall RtlLockHeap(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 16) == -571548178;
  v5 = -1;
  if ( v1 )
  {
    sub_1800170E8(a1, &v5);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18015FA10)();
    if ( !sub_180019C74((_DWORD *)a1, "RtlLockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      ++*(_WORD *)(a1 + 416);
    }
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v3 = 2147353472LL;
  if ( *(_BYTE *)v3 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1801034F4(a1);
  }
  return 1;
}
