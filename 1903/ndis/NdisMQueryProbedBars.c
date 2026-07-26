/*
 * XREFs of NdisMQueryProbedBars @ 0x1C00B1470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisMQueryProbedBars(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rcx
  unsigned int v6; // edi

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      121,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 4808);
  if ( v4 && (v5 = *(_QWORD *)(a1 + 4816)) != 0 )
    v6 = v4(v5, v2);
  else
    v6 = -1073741637;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      122,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1,
      v6);
  }
  return v6;
}
