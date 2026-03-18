/*
 * XREFs of DpiFdoStopAdapter @ 0x1C02A2680
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C02A0D00 (DpiFdoHandleStopDevice.c)
 *     DpiKsrStopAdapters @ 0x1C02A96E8 (DpiKsrStopAdapters.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C02AE8D4 (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018EF0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CE98C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0127678 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0127A7C (DxgkReleaseAdapterCoreSync.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0157300 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiPnpNotifyGdi @ 0x1C015A7C8 (DpiPnpNotifyGdi.c)
 *     DxgkFinishPnPTransition @ 0x1C017E4A0 (DxgkFinishPnPTransition.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EEFE8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0244224 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     ?LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z @ 0x1C024FA38 (-LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z.c)
 *     _lambda_2f836dd47adc312419d8f41257eabf02_::operator() @ 0x1C0276844 (_lambda_2f836dd47adc312419d8f41257eabf02_--operator().c)
 *     DpiDestroyBlockList @ 0x1C029DAD4 (DpiDestroyBlockList.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C029F000 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoIsDevicePresent @ 0x1C02A1B7C (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C02A2FB0 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02A814C (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDestroyIoMmuContext @ 0x1C02A83CC (DpiDestroyIoMmuContext.c)
 *     DpiDxgkDdiStopDevice @ 0x1C02AF114 (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v3; // r8
  char *DeviceExtension; // rdi
  __int64 v5; // r12
  __int64 v6; // rcx
  int v7; // eax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rdx
  const GUID *v16; // r8
  struct _KEVENT *v17; // rcx
  unsigned int v18; // eax
  unsigned int i; // ebx
  int v20; // r15d
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct DXGGLOBAL *Global; // rax
  const GUID *v27; // r8
  __int64 v28; // r14
  __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // r8d
  __int64 *j; // rdx
  __int64 *v40; // rcx
  __int128 *v41; // rax
  __int64 v42; // rdx
  DXGADAPTER *v43; // rcx
  DXGGLOBAL *v44; // rax
  unsigned int v45; // r15d
  int IsDevicePresent; // eax
  char v47; // r14
  int v48; // ebx
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // rdx
  PVOID v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  char v56[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v57; // [rsp+34h] [rbp-CCh]
  __int64 v58; // [rsp+38h] [rbp-C8h]
  __int64 v59; // [rsp+40h] [rbp-C0h]
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v61[16]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v62[3]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v63[10]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v64[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-28h]
  __int128 v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h]
  int v70; // [rsp+108h] [rbp+8h]
  int v71; // [rsp+10Ch] [rbp+Ch]
  __int64 v72; // [rsp+110h] [rbp+10h]

  v58 = a2;
  memset(v63, 0, 0x48uLL);
  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = 0x200000000LL;
  v6 = *((_DWORD *)DeviceExtension + 69) & 7;
  v59 = *((_QWORD *)DeviceExtension + 5);
  *(_DWORD *)&DeviceExtension[4 * v6 + 244] = *((_DWORD *)DeviceExtension + 60);
  v7 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  v8 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 60) = v7;
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( !v8 || *((_DWORD *)DeviceExtension + 5) != 2 )
  {
    v63[0] = 0x4000000006LL;
    v45 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v63[6]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v63[1], 0, 36);
    LODWORD(v63[6]) = 36;
    v63[7] = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v63, 0x200000000LL, v3);
    goto LABEL_76;
  }
  v9 = *((_QWORD *)DeviceExtension + 334);
  memset(&v63[1], 0, 36);
  v63[0] = 0x480000001ELL;
  HIDWORD(v63[6]) = (unsigned int)a1 & 0xFFFF00;
  v57 = (unsigned int)a1 & 0xFFFF00;
  LODWORD(v63[6]) = 36;
  v63[7] = 0LL;
  v63[8] = v9;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v63, *((_QWORD *)DeviceExtension + 720), v3);
  KeWaitForSingleObject(DeviceExtension + 4128, Executive, 0, 0, 0LL);
  v12 = 0x100000000LL;
  if ( DeviceExtension[2743] )
    v13 = *((_QWORD *)DeviceExtension + 720);
  else
    v13 = 0x100000000LL;
  v14 = *((_QWORD *)DXGGLOBAL::GetGlobal(v11, v10) + 74);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v61, (struct DXGFASTMUTEX *const)(v14 + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
  v17 = *(struct _KEVENT **)(v14 + 136);
  if ( v17 )
    KeResetEvent(v17);
  if ( v13 != 0x300000000LL )
  {
    if ( v13 == 0x200000000LL )
    {
      v18 = *(_DWORD *)(v14 + 128);
      if ( v18 == -1 )
      {
LABEL_13:
        for ( i = 0; i < *(_DWORD *)(v14 + 72); ++i )
          lambda_2f836dd47adc312419d8f41257eabf02_::operator()(
            (__int64)v17,
            *(_QWORD *)(*(_QWORD *)(v14 + 40) + 8LL * i));
        goto LABEL_18;
      }
      v13 = v18;
    }
    if ( v13 != 0x100000000LL )
    {
      if ( (unsigned int)v13 < *(_DWORD *)(v14 + 72) )
        lambda_2f836dd47adc312419d8f41257eabf02_::operator()(
          (__int64)v17,
          *(_QWORD *)(*(_QWORD *)(v14 + 40) + 8LL * (unsigned int)v13));
      goto LABEL_18;
    }
    goto LABEL_13;
  }
LABEL_18:
  v20 = *(_DWORD *)(v14 + 144) + 1;
  *(_DWORD *)(v14 + 144) = v20;
  if ( v61[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v61);
  if ( !DeviceExtension[480] )
  {
    v15 = *((unsigned int *)DeviceExtension + 871);
    if ( (_DWORD)v15 != -1 )
      LPMDisplayUnregisterInternalDisplay(*((PFILE_OBJECT *)DeviceExtension + 487), (struct _ERESOURCE *)v15);
  }
  if ( *((_DWORD *)DeviceExtension + 998) != 3 )
  {
    v21 = *((_QWORD *)DeviceExtension + 487);
    if ( v21 )
    {
      DxgkAcquireAdapterCoreSync(v21, 2, v16);
      v22 = *((_QWORD *)DeviceExtension + 487);
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v22) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v25 + 24) = 1430LL;
        WdLogEvent5_WdAssertion(v25);
      }
      *(_BYTE *)(v22 + 2465) = 1;
      Global = DXGGLOBAL::GetGlobal(v24, v23);
      QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 139), 0LL);
      DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 487), 2u, v27);
    }
  }
  if ( (DeviceExtension[3904] & 1) != 0 || (struct _DEVICE_OBJECT *)qword_1C00A2760 == a1 )
  {
    v29 = *((_QWORD *)DeviceExtension + 6);
    v30 = *((_QWORD *)DeviceExtension + 5);
    v62[0] = 83886077LL;
    v62[1] = 0LL;
    v62[2] = 0LL;
    v31 = DpiDxgkDdiDisplayDetectControl((__int64)DeviceExtension, v30, v29, (unsigned int *)v62);
    v35 = v31;
    if ( v31 < 0 )
    {
      v36 = WdLogNewEntry5_WdError(v33, v32, v34);
      *(_QWORD *)(v36 + 24) = *(_QWORD *)(v59 + 1128);
      *(_QWORD *)(v36 + 32) = v35;
      WdLogEvent5_WdError(v36);
    }
    ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    AcquireMiniportListMutex();
    if ( (struct _DEVICE_OBJECT *)qword_1C00A2768 == a1 )
    {
      LOBYTE(word_1C00A275C) = 0;
      qword_1C00A2768 = 0LL;
    }
    if ( (struct _DEVICE_OBJECT *)qword_1C00A2760 == a1 )
    {
      qword_1C00A2760 = 0LL;
      word_1C00A275C = 0;
    }
    _InterlockedExchange64(&qword_1C00A2788, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( (DeviceExtension[3904] & 1) != 0 )
    {
      if ( DeviceExtension[2743] )
        v12 = *((_QWORD *)DeviceExtension + 720);
      v28 = v58;
      DpiPnpNotifyGdi((__int64)a1, 0, v20, v12, 0, v58);
    }
    else
    {
      DxgkFinishPnPTransition(0x300000000LL, v37);
      v28 = v58;
    }
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  }
  else
  {
    DxgkFinishPnPTransition(0x300000000LL, v15);
    v28 = v58;
  }
  IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2744), 0);
  if ( DeviceExtension[5560] )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 5544), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 5544));
  }
  if ( *((_QWORD *)DeviceExtension + 346) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2760), 0);
  if ( *((_QWORD *)DeviceExtension + 350) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2792), 0);
  if ( *((_QWORD *)DeviceExtension + 352) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2808), 0);
  if ( *((_QWORD *)DeviceExtension + 356) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2840), 0);
  if ( *((_QWORD *)DeviceExtension + 354) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2824), 0);
  if ( *((_QWORD *)DeviceExtension + 358) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2856), 0);
  if ( *((_QWORD *)DeviceExtension + 348) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2776), 0);
  if ( DeviceExtension[1152] && dword_1C00A2A8C != -1 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3304), 1u);
    v38 = 0;
    for ( j = (__int64 *)*((_QWORD *)DeviceExtension + 456); v38 < *((_DWORD *)DeviceExtension + 916); j = v40 )
    {
      v40 = (__int64 *)*j;
      if ( *j == *((_QWORD *)DeviceExtension + 456) )
        break;
      if ( *((_DWORD *)j + 126) == dword_1C00A2A8C )
      {
        v41 = (__int128 *)j[116];
        if ( v41 )
        {
          xmmword_1C00A2A08 = *v41;
          xmmword_1C00A2A18 = v41[1];
          xmmword_1C00A2A28 = v41[2];
          xmmword_1C00A2A38 = v41[3];
          xmmword_1C00A2A48 = v41[4];
          xmmword_1C00A2A58 = v41[5];
          xmmword_1C00A2A68 = v41[6];
          xmmword_1C00A2A78 = v41[7];
          v40 = (__int64 *)*j;
        }
      }
      ++v38;
    }
    ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3304));
    KeLeaveCriticalRegion();
  }
  DpiFdoDestroyRelatedObjects((__int64)a1, v28);
  DpiBrightnessStopDevice(a1);
  DpiDestroyBlockList((__int64)DeviceExtension);
  if ( *((_DWORD *)DeviceExtension + 998) != 3 )
  {
    v43 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 487);
    if ( v43 && *((_DWORD *)v43 + 44) != 2 && *((_DWORD *)v43 + 44) != 4 )
      DXGADAPTER::Stop(v43, 0, 0);
    v44 = DXGGLOBAL::GetGlobal((__int64)v43, v42);
    DXGGLOBAL::NotifyAdapterRemoval(v44);
  }
  KeSetEvent((PRKEVENT)DeviceExtension + 147, 0, 0);
  v45 = v57;
  v5 = 0x200000000LL;
LABEL_76:
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v56);
  v47 = v56[0];
  v48 = -1073741637;
  if ( IsDevicePresent < 0 )
    v47 = 1;
  if ( DeviceExtension[1152] )
  {
    if ( v47 )
    {
      v49 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v68 = 0LL;
      v48 = v49;
      v64[0] = 30;
      v8 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      v65 = 0LL;
      v66 = 0uLL;
      v72 = *((_QWORD *)DeviceExtension + 334);
      v64[1] = 72;
      v67 = 0LL;
      v69 = 98LL;
      v70 = v49;
      v71 = 0;
      if ( v8 && *((_DWORD *)DeviceExtension + 5) == 2 )
        v51 = *((_QWORD *)DeviceExtension + 720);
      else
        v51 = 0x200000000LL;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v64, v51, v50);
      if ( v48 < 0 || dword_1C00A2A00 != dword_1C00A2A8C )
        memset(&xmmword_1C00A2A08, 0, 0x80uLL);
    }
    else
    {
      dword_1C00A2A88 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[3904] &= ~4u;
  if ( v47 && v48 < 0 )
    DpiDxgkDdiStopDevice(v59, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 171) )
  {
    v52 = a1->DeviceExtension;
    *(_QWORD *)&Parameters.Version = 0LL;
    Parameters.ConnectionContext.Generic = 0LL;
    Parameters.Version = *((_DWORD *)v52 + 340);
    Parameters.ConnectionContext.Generic = (PVOID)*((_QWORD *)v52 + 171);
    *((_QWORD *)v52 + 171) = 0LL;
    IoDisconnectInterruptEx(&Parameters);
  }
  v53 = *((_QWORD *)DeviceExtension + 61);
  if ( v53 )
  {
    PoFxUnregisterDevice(v53);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 487) + 2600LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DpiDestroyIoMmuContext(DeviceExtension);
  memset(v63, 0, 0x48uLL);
  v63[0] = 0x4000000006LL;
  memset(&v63[1], 0, 36);
  LODWORD(v63[6]) = 36;
  HIDWORD(v63[6]) = v45;
  v63[7] = 1LL;
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    v5 = *((_QWORD *)DeviceExtension + 720);
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v63, v5, v54);
}
