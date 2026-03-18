/*
 * XREFs of Interrupter_InterruptEnable @ 0x1C001F0BC
 * Callers:
 *     Interrupter_ControllerResetPostReset @ 0x1C001DFB8 (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C001F570 (Interrupter_WdfEvtInterruptEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Interrupter_InterruptEnable(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = *(_QWORD *)(a1 + 8);
    LODWORD(v5) = *(_DWORD *)(a1 + 32);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 72),
      4u,
      9u,
      0x26u,
      (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
      v5);
  }
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 96) & 0xFFFFFFF9 | 4;
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) = 200;
  _InterlockedOr(v4, 0);
  result = **(_DWORD **)(a1 + 24) | 2u;
  **(_DWORD **)(a1 + 24) = result;
  _InterlockedOr(v4, 0);
  return result;
}
