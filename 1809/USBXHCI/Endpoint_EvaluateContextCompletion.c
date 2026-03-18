/*
 * XREFs of Endpoint_EvaluateContextCompletion @ 0x1C0015DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000AC6C (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_dddL @ 0x1C001A264 (WPP_RECORDER_SF_dddL.c)
 *     Etw_EndpointUpdate @ 0x1C0039884 (Etw_EndpointUpdate.c)
 */

__int64 __fastcall Endpoint_EvaluateContextCompletion(__int64 a1, int a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // esi
  unsigned __int8 v6; // al
  __int64 v7; // r10
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rax

  v2 = *(_QWORD **)(a1 + 48);
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)*v2 + 120LL), (_DWORD *)v2[1]);
  v5 = 0;
  v2[1] = 0LL;
  if ( a2 == 3 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
      4u,
      0xDu,
      0x1Bu,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
      *(_DWORD *)(*v2 + 144LL));
LABEL_6:
    v5 = -1073741823;
    goto LABEL_7;
  }
  v6 = *(_BYTE *)(a1 + 60);
  v7 = *v2;
  if ( v6 != 1 )
  {
    v9 = v6;
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_dddL(*(_QWORD *)(*(_QWORD *)v7 + 72LL), v9, *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL), 29);
    goto LABEL_6;
  }
  *(_WORD *)(v7 + 100) = *((_WORD *)v2 + 8);
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
    4u,
    0xDu,
    0x1Cu,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
    *(_DWORD *)(*v2 + 144LL),
    *((_DWORD *)v2 + 4));
  Etw_EndpointUpdate(v8, *v2);
LABEL_7:
  v10 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *))(WdfFunctions_01023 + 1632))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v2);
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v10,
           v5);
}
