/*
 * XREFs of ndisFInvokeDirectOidRequestComplete @ 0x1C008EC6C
 * Callers:
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qDqD @ 0x1C008DDFC (WPP_RECORDER_SF_qDqD_ea_1C008DDFC.c)
 */

__int64 __fastcall ndisFInvokeDirectOidRequestComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebp
  int v5; // esi
  __int64 result; // rax
  int v9; // edx
  int v10; // r8d
  int v11; // [rsp+20h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 32);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqD(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 0x80u, v11);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 304))(*(_QWORD *)(a1 + 24), a2, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    return WPP_RECORDER_SF_qDq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v9,
             v10,
             129,
             (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
             a1,
             v5,
             a2);
  }
  return result;
}
