/*
 * XREFs of Endpoint_EvaluateContextCompletion @ 0x1C0018BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000CE9C (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_dddL @ 0x1C001D624 (WPP_RECORDER_SF_dddL.c)
 *     Etw_EndpointUpdate @ 0x1C003F0F4 (Etw_EndpointUpdate.c)
 */

__int64 __fastcall Endpoint_EvaluateContextCompletion(__int64 a1, int a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // esi
  unsigned __int8 v6; // cl
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax

  v2 = *(_QWORD **)(a1 + 48);
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)*v2 + 120LL), (_DWORD *)v2[1]);
  v5 = 0;
  v2[1] = 0LL;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
        4u,
        0xDu,
        0x1Bu,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
        *(_DWORD *)(*v2 + 144LL));
LABEL_10:
    v5 = -1073741823;
    goto LABEL_11;
  }
  v6 = *(_BYTE *)(a1 + 60);
  if ( v6 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = v6;
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_dddL(
        *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
        v8,
        *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
        29);
    }
    goto LABEL_10;
  }
  v7 = *v2;
  *(_WORD *)(*v2 + 100LL) = *((_WORD *)v2 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
      4u,
      0xDu,
      0x1Cu,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
      *(_DWORD *)(*v2 + 144LL),
      *((_DWORD *)v2 + 4));
  Etw_EndpointUpdate(v7, *v2);
LABEL_11:
  v9 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *))(WdfFunctions_01023 + 1632))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v2);
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v9,
           v5);
}
