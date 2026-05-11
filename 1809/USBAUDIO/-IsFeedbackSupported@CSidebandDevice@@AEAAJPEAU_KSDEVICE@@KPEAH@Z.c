/*
 * XREFs of ?IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z @ 0x1C0009034
 * Callers:
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C0009244 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::IsFeedbackSupported(CSidebandDevice *this, struct _KSDEVICE *a2, int a3, int *a4)
{
  __int64 v4; // rax
  struct _KSDEVICE *v7; // r12
  unsigned int v8; // ebx
  __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r9
  int v16; // eax
  __int64 v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 4);
  v19 = 0;
  v7 = a2;
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 16);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x2Bu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  v10 = *(_DWORD *)(v9 + 164);
  v11 = 0;
  v12 = *(_QWORD *)(v9 + 168);
  v13 = (unsigned int)(a3 * v10);
  v14 = (unsigned int)v13;
  if ( *(_DWORD *)(v13 + v12 + 48) )
  {
    v15 = *(_QWORD *)(v13 + v12 + 56);
    while ( 1 )
    {
      v16 = (*(__int64 (__fastcall **)(struct _KSDEVICE *, _QWORD, int *))(pExtBusDeviceDispatchTable + 88))(
              v7,
              *(_QWORD *)(v15 + 8LL * v11),
              &v19);
      v8 = v16;
      if ( v16 < 0 )
        break;
      if ( v19 )
      {
        *a4 = 1;
        goto LABEL_11;
      }
      v15 = *(_QWORD *)(v14 + v12 + 56);
      a2 = (struct _KSDEVICE *)*(unsigned int *)(*(_QWORD *)(v15 + 8LL * v11) + 4LL);
      LOBYTE(a2) = -((unsigned __int8)a2 & 2);
      v11 += ((_BYTE)a2 != 0) + 1;
      if ( v11 >= *(_DWORD *)(v14 + v12 + 48) )
        goto LABEL_11;
    }
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x2Cu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v16);
  }
LABEL_11:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v18) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x2Du,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v18);
  }
  return v8;
}
