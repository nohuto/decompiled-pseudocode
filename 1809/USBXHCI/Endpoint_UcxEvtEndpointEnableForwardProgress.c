/*
 * XREFs of Endpoint_UcxEvtEndpointEnableForwardProgress @ 0x1C0019100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C00242E0 (TR_EnableForwardProgress_Internal.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointEnableForwardProgress(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edi
  unsigned __int16 v6; // r8
  unsigned __int8 v7; // al
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-10h]

  v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F180);
  v4 = v3;
  if ( !*(_BYTE *)(v3 + 37) )
  {
    v5 = TR_EnableForwardProgress_Internal(*(_QWORD *)(v3 + 88), a2);
    if ( v5 < 0 )
    {
      v6 = 59;
      v7 = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
      goto LABEL_6;
    }
LABEL_7:
    *(_BYTE *)(v4 + 36) = 1;
    return (unsigned int)v5;
  }
  v5 = TR_EnableForwardProgress_Internal(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 48LL), a2);
  if ( v5 >= 0 )
    goto LABEL_7;
  v6 = 58;
  v7 = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
LABEL_6:
  v11 = v5;
  v10 = *(_DWORD *)(v4 + 144);
  v9 = v7;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v4 + 80),
    3u,
    0xDu,
    v6,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    v9,
    v10,
    v11);
  return (unsigned int)v5;
}
