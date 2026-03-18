/*
 * XREFs of TR_Create @ 0x1C0069444
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C001C8B0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_Create @ 0x1C0064D10 (Endpoint_Create.c)
 * Callees:
 *     XilUsbDevice_IsSecureUsbDevice @ 0x1C0004C00 (XilUsbDevice_IsSecureUsbDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     Endpoint_IsProxyEndpoint @ 0x1C0019174 (Endpoint_IsProxyEndpoint.c)
 *     TR_AcquireSegment @ 0x1C0028084 (TR_AcquireSegment.c)
 *     TR_CreateSecureObject @ 0x1C002867C (TR_CreateSecureObject.c)
 *     TR_EnsureSegments @ 0x1C0028D20 (TR_EnsureSegments.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C0029C00 (WPP_RECORDER_SF_DDDd.c)
 *     Bulk_GetConfiguration @ 0x1C0069D30 (Bulk_GetConfiguration.c)
 *     Counter_CreateTransferRingInstance @ 0x1C006A72C (Counter_CreateTransferRingInstance.c)
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
  __int64 (__fastcall *v21)(); // rax
  char v22; // al
  int v23; // edx
  int v24; // ecx
  __int64 v25; // rdx
  unsigned __int16 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rax
  __int128 v29; // xmm0
  __int64 v30; // rbx
  __int128 v31; // xmm1
  char IsSecureUsbDevice; // al
  __int64 (__fastcall *v33)(); // rax
  __int64 v34; // rax
  __int64 (__fastcall *v35)(); // r8
  __int64 (__fastcall *v36)(); // rax
  int v38; // [rsp+28h] [rbp-D8h]
  int v39; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+38h] [rbp-C8h]
  int v41; // [rsp+40h] [rbp-C0h]
  _BYTE v42[40]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v43[7]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-50h] BYREF
  __int64 (__fastcall *v45)(); // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h] BYREF
  __int64 (__fastcall *v48)(); // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  _QWORD v50[18]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v51; // [rsp+188h] [rbp+88h] BYREF
  __int64 v52; // [rsp+190h] [rbp+90h]

  v52 = a3;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  HIDWORD(v43[0]) = 0;
  v43[2] = 0LL;
  memset(&v42[12], 0, 28);
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
  *(_DWORD *)&v42[8] = v9;
  *(_DWORD *)&v42[4] = v10 - 4096;
  v12 = 3;
  v13 = (*(_BYTE *)(a2 + 99) & 3) == 0;
  v14 = *(_BYTE *)(a2 + 99) & 3;
  *(_DWORD *)v42 = v14;
  if ( v13 )
  {
    v12 = 1;
    v15 = ControlFunctionTable;
    v16 = 384;
    *(_DWORD *)&v42[12] = 1;
    *(_DWORD *)&v42[16] = 384;
    *(_QWORD *)&v42[32] = ControlFunctionTable;
    IsSecureDevice = Controller_IsSecureDevice(a1);
    v19 = (*(_QWORD *)(a1 + 336) & 8) != 0;
    *(_DWORD *)&v42[24] = IsSecureDevice != 0 ? 0 : 0x200;
    *(_DWORD *)&v42[20] = v19 ? 4096 : 512;
  }
  else if ( v14 == 1 )
  {
    v16 = 440;
    *(_DWORD *)&v42[12] = 3;
    v15 = IsochFunctionTable;
    *(_DWORD *)&v42[16] = 440;
    *(_QWORD *)&v42[32] = IsochFunctionTable;
    *(_QWORD *)&v42[20] = 512LL;
  }
  else
  {
    if ( v14 <= 1 )
      return (unsigned int)-1073741823;
    Bulk_GetConfiguration(a1, v42);
    v15 = *(__int64 (__fastcall ***)())&v42[32];
    v16 = *(_DWORD *)&v42[16];
    v12 = *(_DWORD *)&v42[12];
  }
  memset(v50, 0, 0x60uLL);
  v20 = v50[10];
  LODWORD(v50[0]) = 96;
  LODWORD(v50[1]) = 2;
  HIDWORD(v50[0]) = v12;
  if ( v12 == 2 )
    v20 = -1;
  LODWORD(v50[10]) = v20;
  v50[2] = v15[20];
  v21 = v15[21];
  v43[2] = 0LL;
  v50[9] = v21;
  v43[6] = off_1C0056388;
  v43[5] = v16;
  v43[1] = TR_WdfEvtCleanupCallback;
  v43[4] = v52;
  v43[0] = 56LL;
  v43[3] = 0x100000001LL;
  v22 = Endpoint_IsProxyEndpoint(a2);
  v24 = 1;
  if ( v22 )
    v24 = v23;
  v25 = *(_QWORD *)a1;
  LODWORD(v43[3]) = v24;
  SecureObject = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01023 + 1216))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   v25,
                   v50,
                   v43,
                   &v51);
  if ( SecureObject >= 0 )
  {
    v28 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v51,
            off_1C0056388);
    v29 = *(_OWORD *)v42;
    v30 = v28;
    v31 = *(_OWORD *)&v42[16];
    *(_QWORD *)(v28 + 40) = a1;
    *(_OWORD *)v28 = v29;
    *(_QWORD *)&v29 = *(_QWORD *)&v42[32];
    *(_OWORD *)(v28 + 16) = v31;
    *(_QWORD *)(v28 + 32) = v29;
    *(_QWORD *)(v28 + 48) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v28 + 56) = a2;
    *(_DWORD *)(v28 + 64) = a4;
    *(_QWORD *)(v28 + 72) = v51;
    *(_QWORD *)(v28 + 304) = 0LL;
    *(_DWORD *)(v28 + 312) = 0;
    if ( Controller_IsSecureDevice(a1) )
    {
      if ( *(_DWORD *)(a1 + 540) == 2 )
        IsSecureUsbDevice = XilUsbDevice_IsSecureUsbDevice(*(_QWORD *)(a2 + 16));
      else
        IsSecureUsbDevice = 1;
    }
    else
    {
      IsSecureUsbDevice = 0;
    }
    *(_BYTE *)(v30 + 280) = IsSecureUsbDevice;
    KeInitializeSpinLock((PKSPIN_LOCK)(v30 + 96));
    *(_QWORD *)(v30 + 216) = v30 + 208;
    *(_QWORD *)(v30 + 208) = v30 + 208;
    *(_QWORD *)(v30 + 232) = v30 + 224;
    *(_QWORD *)(v30 + 224) = v30 + 224;
    if ( *(_BYTE *)(v30 + 280) )
    {
      SecureObject = TR_CreateSecureObject(v30);
      if ( SecureObject < 0 )
        return (unsigned int)SecureObject;
      v33 = v15[24];
      LODWORD(v44) = 24;
      v45 = v33;
      LOBYTE(v46) = 1;
      memset(v43, 0, sizeof(v43));
      v43[4] = v51;
      LODWORD(v43[0]) = 56;
      v43[3] = 0x100000001LL;
      SecureObject = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *, _QWORD *, __int64))(WdfFunctions_01023
                                                                                               + 3032))(
                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                       &v44,
                       v43,
                       v30 + 88);
      if ( SecureObject < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)SecureObject;
        v26 = 11;
LABEL_29:
        v34 = *(_QWORD *)(a2 + 16);
LABEL_30:
        v41 = SecureObject;
        v40 = a4;
        v39 = *(_DWORD *)(a2 + 144);
        v38 = *(unsigned __int8 *)(v34 + 135);
        goto LABEL_18;
      }
    }
    else
    {
      SecureObject = TR_EnsureSegments(v30, 1u, 0, 0);
      if ( SecureObject < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)SecureObject;
        v34 = *(_QWORD *)(v30 + 48);
        v26 = 12;
        goto LABEL_30;
      }
    }
    v35 = v15[22];
    if ( v35
      && (SecureObject = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01023 + 1328))(
                           WPP_MAIN_CB.Dpc.ProcessorHistory,
                           v51,
                           v35,
                           v30),
          SecureObject < 0) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v26 = 13;
    }
    else
    {
      v36 = v15[23];
      LODWORD(v47) = 24;
      v48 = v36;
      LOBYTE(v49) = 1;
      memset(v43, 0, sizeof(v43));
      v43[4] = v51;
      LODWORD(v43[0]) = 56;
      v43[3] = 0x100000001LL;
      SecureObject = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *, _QWORD *, __int64))(WdfFunctions_01023 + 888))(
                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                       &v47,
                       v43,
                       v30 + 80);
      if ( SecureObject >= 0 )
      {
        *(_QWORD *)(v30 + 176) = TR_AcquireSegment(v30);
        SecureObject = ((__int64 (__fastcall *)(__int64))*v15)(v30);
        if ( SecureObject >= 0 )
        {
          Counter_CreateTransferRingInstance(*(_QWORD *)(v30 + 56), *(unsigned int *)(v30 + 64), v30 + 240);
          *a5 = v30;
          return (unsigned int)SecureObject;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)SecureObject;
        v26 = 15;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)SecureObject;
        v26 = 14;
      }
    }
    goto LABEL_29;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = 10;
    v41 = SecureObject;
    v40 = a4;
    v27 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
    v39 = *(_DWORD *)(a2 + 144);
    v38 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
LABEL_18:
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(a1 + 72),
      2u,
      v27,
      v26,
      (__int64)&WPP_36bc79e2af6f37d6aa20da6265b51b29_Traceguids,
      v38,
      v39,
      v40,
      v41);
  }
  return (unsigned int)SecureObject;
}
