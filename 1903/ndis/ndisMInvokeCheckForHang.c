/*
 * XREFs of ndisMInvokeCheckForHang @ 0x1C00FBBB4
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C0009E80 (ndisQueuedCheckForHang.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ndisMInvokeCheckForHang(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // al
  int v4; // edx
  char v5; // di

  v1 = *(_QWORD *)(a1 + 3760);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      17,
      243,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 208))(*(_QWORD *)(a1 + 24));
  v5 = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      17,
      244,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v3);
  }
  return v5;
}
