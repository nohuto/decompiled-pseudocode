/*
 * XREFs of TR_Create @ 0x1C0061390
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C00195E0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_Create @ 0x1C005D370 (Endpoint_Create.c)
 * Callees:
 *     XilUsbDevice_IsSecureUsbDevice @ 0x1C0004094 (XilUsbDevice_IsSecureUsbDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Controller_IsSecureDevice @ 0x1C000CF68 (Controller_IsSecureDevice.c)
 *     Endpoint_IsProxyEndpoint @ 0x1C00162D4 (Endpoint_IsProxyEndpoint.c)
 *     TR_AcquireSegment @ 0x1C0023A40 (TR_AcquireSegment.c)
 *     TR_CreateSecureObject @ 0x1C0023FEC (TR_CreateSecureObject.c)
 *     TR_EnsureSegments @ 0x1C0024620 (TR_EnsureSegments.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C00254B0 (WPP_RECORDER_SF_DDDd.c)
 *     Bulk_GetConfiguration @ 0x1C0061BE4 (Bulk_GetConfiguration.c)
 *     Counter_CreateTransferRingInstance @ 0x1C006254C (Counter_CreateTransferRingInstance.c)
 */

__int64 __fastcall TR_Create(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  char IsProxyEndpoint; // al
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  int v12; // ebx
  bool v13; // zf
  unsigned int v14; // eax
  __int64 (__fastcall **v15)(); // r12
  unsigned int v16; // edi
  int SecureObject; // edi
  char IsSecureDevice; // al
  bool v19; // cf
  int v20; // eax
  char v21; // al
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // eax
  unsigned __int16 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rax
  __int128 v28; // xmm0
  __int64 v29; // rbx
  __int128 v30; // xmm1
  char IsSecureUsbDevice; // al
  __int64 (__fastcall *v32)(); // rax
  __int64 v33; // rax
  __int64 (__fastcall *v34)(); // r8
  __int64 (__fastcall *v35)(); // rax
  int v37; // [rsp+28h] [rbp-D8h]
  int v38; // [rsp+30h] [rbp-D0h]
  int v39; // [rsp+38h] [rbp-C8h]
  int v40; // [rsp+40h] [rbp-C0h]
  _BYTE v41[40]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v42[7]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v43[3]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v44[3]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v45[18]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v46; // [rsp+188h] [rbp+88h] BYREF
  __int64 v47; // [rsp+190h] [rbp+90h]

  v47 = a3;
  memset(v41, 0, sizeof(v41));
  IsProxyEndpoint = Endpoint_IsProxyEndpoint(a2);
  v9 = -1;
  if ( IsProxyEndpoint )
  {
    v10 = 16776704;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 96);
    v10 = *(_DWORD *)(v11 + 16);
    v9 = *(_DWORD *)(v11 + 20);
  }
  *(_DWORD *)&v41[8] = v9;
  *(_DWORD *)&v41[4] = v10 - 4096;
  v12 = 3;
  v13 = (*(_BYTE *)(a2 + 99) & 3) == 0;
  v14 = *(_BYTE *)(a2 + 99) & 3;
  *(_DWORD *)v41 = v14;
  if ( v13 )
  {
    v12 = 1;
    v15 = ControlFunctionTable;
    v16 = 384;
    *(_DWORD *)&v41[12] = 1;
    *(_DWORD *)&v41[16] = 384;
    *(_QWORD *)&v41[32] = ControlFunctionTable;
    IsSecureDevice = Controller_IsSecureDevice(a1);
    v19 = (*(_QWORD *)(a1 + 272) & 8) != 0;
    *(_DWORD *)&v41[24] = IsSecureDevice != 0 ? 0 : 0x200;
    *(_DWORD *)&v41[20] = v19 ? 4096 : 512;
LABEL_11:
    memset(v45, 0, 0x60uLL);
    v20 = v45[10];
    LODWORD(v45[1]) = 2;
    HIDWORD(v45[0]) = v12;
    if ( v12 == 2 )
      v20 = -1;
    LODWORD(v45[0]) = 96;
    LODWORD(v45[10]) = v20;
    v45[2] = v15[20];
    v45[9] = v15[21];
    memset(v42, 0, sizeof(v42));
    v42[6] = off_1C004F360;
    v42[5] = v16;
    v42[1] = TR_WdfEvtCleanupCallback;
    v42[4] = v47;
    LODWORD(v42[0]) = 56;
    v42[3] = 0x100000001LL;
    v21 = Endpoint_IsProxyEndpoint(a2);
    v22 = *(_QWORD *)a1;
    v23 = 1;
    if ( v21 )
      v23 = 2;
    LODWORD(v42[3]) = v23;
    v24 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01023 + 1216))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v22,
            v45,
            v42,
            &v46);
    SecureObject = v24;
    if ( v24 < 0 )
    {
      v25 = 10;
      v40 = v24;
      v39 = a4;
      v26 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
      v38 = *(_DWORD *)(a2 + 144);
      v37 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
LABEL_17:
      WPP_RECORDER_SF_DDDd(
        *(_QWORD *)(a1 + 72),
        2u,
        v26,
        v25,
        (__int64)&WPP_c0473ac1803d3d5f2d8c1e2b9467d5ec_Traceguids,
        v37,
        v38,
        v39,
        v40);
      return (unsigned int)SecureObject;
    }
    v27 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v46,
            off_1C004F360);
    v28 = *(_OWORD *)v41;
    v29 = v27;
    v30 = *(_OWORD *)&v41[16];
    *(_QWORD *)(v27 + 40) = a1;
    *(_OWORD *)v27 = v28;
    *(_QWORD *)&v28 = *(_QWORD *)&v41[32];
    *(_OWORD *)(v27 + 16) = v30;
    *(_QWORD *)(v27 + 32) = v28;
    *(_QWORD *)(v27 + 48) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v27 + 56) = a2;
    *(_DWORD *)(v27 + 64) = a4;
    *(_QWORD *)(v27 + 72) = v46;
    *(_QWORD *)(v27 + 304) = 0LL;
    *(_DWORD *)(v27 + 312) = 0;
    if ( Controller_IsSecureDevice(a1) )
    {
      if ( *(_DWORD *)(a1 + 476) == 2 )
        IsSecureUsbDevice = XilUsbDevice_IsSecureUsbDevice(*(_QWORD *)(a2 + 16));
      else
        IsSecureUsbDevice = 1;
    }
    else
    {
      IsSecureUsbDevice = 0;
    }
    *(_BYTE *)(v29 + 280) = IsSecureUsbDevice;
    KeInitializeSpinLock((PKSPIN_LOCK)(v29 + 96));
    *(_QWORD *)(v29 + 216) = v29 + 208;
    *(_QWORD *)(v29 + 208) = v29 + 208;
    *(_QWORD *)(v29 + 232) = v29 + 224;
    *(_QWORD *)(v29 + 224) = v29 + 224;
    if ( *(_BYTE *)(v29 + 280) )
    {
      SecureObject = TR_CreateSecureObject(v29);
      if ( SecureObject < 0 )
        return (unsigned int)SecureObject;
      v32 = v15[24];
      v43[0] = 24LL;
      v43[1] = v32;
      v43[2] = 1LL;
      memset(v42, 0, sizeof(v42));
      v42[4] = v46;
      LODWORD(v42[0]) = 56;
      v42[3] = 0x100000001LL;
      SecureObject = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 3032))(
                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                       v43,
                       v42,
                       v29 + 88);
      if ( SecureObject < 0 )
      {
        v25 = 11;
LABEL_27:
        v33 = *(_QWORD *)(a2 + 16);
LABEL_28:
        v40 = SecureObject;
        v39 = a4;
        v38 = *(_DWORD *)(a2 + 144);
        v37 = *(unsigned __int8 *)(v33 + 135);
        goto LABEL_17;
      }
    }
    else
    {
      SecureObject = TR_EnsureSegments(v29, 1u, 0, 0);
      if ( SecureObject < 0 )
      {
        v33 = *(_QWORD *)(v29 + 48);
        v25 = 12;
        goto LABEL_28;
      }
    }
    v34 = v15[22];
    if ( v34
      && (SecureObject = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01023 + 1328))(
                           WPP_MAIN_CB.Dpc.ProcessorHistory,
                           v46,
                           v34,
                           v29),
          SecureObject < 0) )
    {
      v25 = 13;
    }
    else
    {
      v35 = v15[23];
      v44[0] = 24LL;
      v44[1] = v35;
      v44[2] = 1LL;
      memset(v42, 0, sizeof(v42));
      v42[4] = v46;
      LODWORD(v42[0]) = 56;
      v42[3] = 0x100000001LL;
      SecureObject = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 888))(
                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                       v44,
                       v42,
                       v29 + 80);
      if ( SecureObject >= 0 )
      {
        *(_QWORD *)(v29 + 176) = TR_AcquireSegment(v29);
        SecureObject = ((__int64 (__fastcall *)(__int64))*v15)(v29);
        if ( SecureObject >= 0 )
        {
          Counter_CreateTransferRingInstance(*(_QWORD *)(v29 + 56), *(unsigned int *)(v29 + 64), v29 + 240);
          *a5 = v29;
          return (unsigned int)SecureObject;
        }
        v25 = 15;
      }
      else
      {
        v25 = 14;
      }
    }
    goto LABEL_27;
  }
  if ( v14 == 1 )
  {
    v15 = IsochFunctionTable;
    v16 = 440;
    *(_DWORD *)&v41[12] = 3;
    *(_DWORD *)&v41[16] = 440;
    *(_QWORD *)&v41[32] = IsochFunctionTable;
    *(_QWORD *)&v41[20] = 512LL;
    goto LABEL_11;
  }
  if ( v14 > 1 )
  {
    Bulk_GetConfiguration(a1, v41);
    v15 = *(__int64 (__fastcall ***)())&v41[32];
    v16 = *(_DWORD *)&v41[16];
    v12 = *(_DWORD *)&v41[12];
    goto LABEL_11;
  }
  return (unsigned int)-1073741823;
}
