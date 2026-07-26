/*
 * XREFs of ndisFInvokeDetach @ 0x1C0116D14
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFInvokeDetach(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      107,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1);
  result = (*(__int64 (__fastcall **)(_QWORD))(v1 + 184))(*(_QWORD *)(a1 + 24));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4,
             6,
             108,
             (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
             a1);
  return result;
}
