/*
 * XREFs of ?OnMouseInputGenerated@BamoInputObserverClientProxyImpl@BamoImpl@@QEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x1800675B0
 * Callers:
 *     ?OnMouseInputGenerated@BamoInputObserverClientProxy@@UEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x180067560 (-OnMouseInputGenerated@BamoInputObserverClientProxy@@UEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@In.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoInputObserverClientProxyImpl::OnMouseInputGenerated(
        BamoImpl::BamoInputObserverClientProxyImpl *this,
        const struct InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _QWORD v9[2]; // [rsp+40h] [rbp-9h] BYREF
  __int128 v10; // [rsp+50h] [rbp+7h]
  __int128 v11; // [rsp+60h] [rbp+17h]
  __int128 v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+80h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  unsigned int v15; // [rsp+B0h] [rbp+67h] BYREF
  unsigned int v16; // [rsp+C0h] [rbp+77h] BYREF
  struct IMessageCallSendHost *v17; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 3578LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v17, &v15, &v16);
  if ( v3 < 0 )
  {
    v4 = 3585LL;
    goto LABEL_3;
  }
  v6 = *(_OWORD *)a2;
  v7 = *((_OWORD *)a2 + 1);
  v9[0] = v15;
  v9[1] = v16;
  v10 = v6;
  v8 = *((_OWORD *)a2 + 2);
  v11 = v7;
  *(_QWORD *)&v7 = *((_QWORD *)a2 + 6);
  v12 = v8;
  v13 = v7;
  return CoreUICallSend(v17, v9, 2LL, 28LL);
}
