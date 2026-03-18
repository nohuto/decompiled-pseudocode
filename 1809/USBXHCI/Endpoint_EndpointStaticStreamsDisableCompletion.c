/*
 * XREFs of Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0015960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00121D8 (WPP_RECORDER_SF_dddd.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C001470C (XilEndpoint_FreeStreamContextArray.c)
 *     TR_Disable_Internal @ 0x1C0024200 (TR_Disable_Internal.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_EndpointStaticStreamsDisableCompletion(__int64 a1, int a2)
{
  __int64 v4; // r15
  __int64 **v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // rbx
  unsigned int i; // esi
  int v10; // eax
  _QWORD *v11; // rcx
  int v13; // [rsp+28h] [rbp-80h]
  int v14; // [rsp+28h] [rbp-80h]
  int v15; // [rsp+30h] [rbp-78h]
  int v16; // [rsp+30h] [rbp-78h]
  int v17; // [rsp+38h] [rbp-70h]
  int v18; // [rsp+38h] [rbp-70h]
  int v19; // [rsp+40h] [rbp-68h]
  _QWORD v20[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v20, 0, sizeof(v20));
  LOWORD(v20[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a1,
    v20);
  v4 = v20[1];
  v5 = (__int64 **)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F068);
  v7 = *v5;
  v8 = **v5;
  if ( a2 < 0 )
  {
    v11 = *(_QWORD **)(v8 + 128);
    *(_QWORD *)(v8 + 136) = v7;
    XilEndpoint_FreeStreamContextArray(v11);
    ExFreePoolWithTag(*(PVOID *)(v8 + 128), 0x49434858u);
    *(_QWORD *)(v8 + 128) = 0LL;
    v19 = a2;
    v18 = *((_DWORD *)v7 + 2);
    v16 = *(_DWORD *)(v8 + 144);
    v14 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v8 + 80),
      2u,
      0xDu,
      0x71u,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v14,
      v16,
      v18,
      v19);
    v10 = -2147481600;
  }
  else
  {
    for ( i = 1; i <= *((_DWORD *)v7 + 2); ++i )
    {
      LOBYTE(v6) = 1;
      TR_Disable_Internal(v7[13 * i - 7], v6);
    }
    XilEndpoint_FreeStreamContextArray(v7);
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1232))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL));
    v17 = *((_DWORD *)v7 + 2);
    v15 = *(_DWORD *)(v8 + 144);
    v13 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v8 + 80),
      4u,
      0xDu,
      0x70u,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v13,
      v15,
      v17);
    v10 = 0;
  }
  *(_DWORD *)(v4 + 4) = v10;
  if ( a2 >= 0 )
    ESM_AddEvent((PVOID)(v8 + 288));
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a1,
           (unsigned int)a2);
}
