/*
 * XREFs of ndisMInvokeStartDevice @ 0x1C0031A50
 * Callers:
 *     ndisPnPIrpStartDevice @ 0x1C002F538 (ndisPnPIrpStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeStartDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v4; // r14
  unsigned int v6; // eax
  int v7; // edx

  v2 = *(_QWORD *)(a1 + 3760);
  v3 = 0;
  v4 = a2;
  if ( *(_QWORD *)(v2 + 808) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        1,
        221,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        a1);
      v2 = *(_QWORD *)(a1 + 3760);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 808))(*(_QWORD *)(a1 + 4112), v4);
    v3 = v6;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        1,
        222,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        a1,
        v6);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      223,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1);
  }
  return v3;
}
