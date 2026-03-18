/*
 * XREFs of Isoch_MappingLoop @ 0x1C0029F94
 * Callers:
 *     Isoch_MapTransfers @ 0x1C0029E90 (Isoch_MapTransfers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     TR_AttemptStateChange @ 0x1C0023E60 (TR_AttemptStateChange.c)
 *     Isoch_MapStage @ 0x1C0029B84 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C002A0E4 (Isoch_PrepareStage.c)
 *     Isoch_RetrieveNextStage @ 0x1C002B308 (Isoch_RetrieveNextStage.c)
 */

__int64 __fastcall Isoch_MappingLoop(_QWORD *a1, char a2)
{
  int i; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  for ( i = 0; ; ++i )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = a1[7];
      LODWORD(v11) = i;
      LODWORD(v10) = *(_DWORD *)(v5 + 144);
      LODWORD(v9) = *(unsigned __int8 *)(a1[6] + 135LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v5 + 80),
        5u,
        0xEu,
        0x41u,
        (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
        v9,
        v10,
        v11);
    }
    a1[43] = 0LL;
    if ( !(unsigned __int8)Isoch_RetrieveNextStage(a1) )
      return TR_AttemptStateChange((__int64)a1, 3, 2);
    LOBYTE(v6) = a2;
    result = Isoch_PrepareStage(a1, v6);
    if ( (_DWORD)result == 1 )
      continue;
    if ( (_DWORD)result == 3 )
      return result;
    if ( (_DWORD)result == 2 )
      break;
    if ( (_DWORD)result == 4 )
      return TR_AttemptStateChange((__int64)a1, 3, 2);
    result = Isoch_MapStage((__int64)a1, a2);
    if ( (_DWORD)result == 2 )
      return result;
    v8 = (__int64)a1;
    if ( (_DWORD)result == 4 )
      goto LABEL_14;
    result = TR_AttemptStateChange((__int64)a1, 3, 3);
    if ( (_DWORD)result != 3 )
      return result;
  }
  v8 = (__int64)a1;
LABEL_14:
  result = TR_AttemptStateChange(v8, 3, 4);
  if ( (_DWORD)result == 3 )
    return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a1[40],
             -100000000LL);
  return result;
}
