/*
 * XREFs of DpiFdoStopAdapter @ 0x1C0266DB0
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C02655B0 (DpiFdoHandleStopDevice.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C02734C8 (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00BCCF0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00BCFB8 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00F6724 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0144DA8 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiPnpNotifyGdi @ 0x1C0145CE8 (DpiPnpNotifyGdi.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0145E18 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DxgkFinishPnPTransition @ 0x1C015DD24 (DxgkFinishPnPTransition.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01BFA94 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C02101C8 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C02103C0 (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 *     ?LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z @ 0x1C021B428 (-LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0263B28 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoIsDevicePresent @ 0x1C02662CC (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C0267558 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C026C8E8 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDeleteIoMmuDomain @ 0x1C026CC20 (DpiDeleteIoMmuDomain.c)
 *     DpiDxgkDdiStopDevice @ 0x1C0273F04 (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rdi
  __int64 v5; // rcx
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rcx
  struct DXGSHAREDPOWERREGISTRATIONOBJECT *v11; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v13; // rax
  int started; // r14d
  struct _ERESOURCE *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DXGGLOBAL *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  const GUID *v24; // r8
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // r8d
  __int64 *i; // rdx
  __int64 *v32; // rcx
  __int128 *v33; // rax
  DXGADAPTER *v34; // rcx
  DXGGLOBAL *v35; // rax
  int IsDevicePresent; // eax
  char v37; // bl
  int v38; // r14d
  PVOID v39; // rcx
  __int64 v40; // rcx
  char v42[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+38h] [rbp-C8h]
  _QWORD v44[3]; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v46[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v47[10]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v46, 0, 0x48uLL);
  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = *((_DWORD *)DeviceExtension + 69) & 7;
  v43 = *((_QWORD *)DeviceExtension + 5);
  *(_DWORD *)&DeviceExtension[4 * v5 + 244] = *((_DWORD *)DeviceExtension + 60);
  v6 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  v7 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 60) = v6;
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( v7 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v8 = *((_QWORD *)DeviceExtension + 325);
    memset(&v46[1], 0, 36);
    v9 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v46[6]) = (unsigned int)a1 & 0xFFFF00;
    v46[0] = 0x480000001ELL;
    LODWORD(v46[6]) = 36;
    v46[7] = 0LL;
    v46[8] = v8;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46);
    KeWaitForSingleObject(DeviceExtension + 4024, Executive, 0, 0, 0LL);
    if ( DeviceExtension[5432] )
    {
      v11 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT *)*((_QWORD *)DeviceExtension + 474);
      Global = DXGGLOBAL::GetGlobal(v10);
      DXGGLOBAL::NotifySharedPowerGraphicsRemoving(Global, v11);
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 5416), 0);
      RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 5416));
    }
    v13 = DXGGLOBAL::GetGlobal(v10);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)v13 + 77));
    if ( !DeviceExtension[480] )
    {
      v15 = (struct _ERESOURCE *)*((unsigned int *)DeviceExtension + 853);
      if ( (_DWORD)v15 != -1 )
        LPMDisplayUnregisterInternalDisplay(*((PFILE_OBJECT *)DeviceExtension + 474), v15);
    }
    if ( *((_DWORD *)DeviceExtension + 972) != 3 )
    {
      v16 = *((_QWORD *)DeviceExtension + 474);
      if ( v16 )
      {
        DxgkAcquireAdapterCoreSync(v16, 2);
        v17 = *((_QWORD *)DeviceExtension + 474);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v17) )
        {
          v19 = WdLogNewEntry5_WdAssertion(v18);
          *(_QWORD *)(v19 + 24) = 1384LL;
          WdLogEvent5_WdAssertion(v19);
        }
        *(_BYTE *)(v17 + 2429) = 1;
        v20 = DXGGLOBAL::GetGlobal(v18);
        QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)v20 + 143), v21, v22, v23);
        DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 474));
      }
    }
    if ( (DeviceExtension[3800] & 1) != 0 || (struct _DEVICE_OBJECT *)qword_1C008E760 == a1 )
    {
      v24 = (const GUID *)*((_QWORD *)DeviceExtension + 6);
      v25 = *((_QWORD *)DeviceExtension + 5);
      v44[0] = 83886077LL;
      v44[1] = 0LL;
      v44[2] = 0LL;
      v26 = DpiDxgkDdiDisplayDetectControl((__int64)DeviceExtension, v25, v24, (unsigned int *)v44);
      v28 = v26;
      if ( v26 < 0 )
      {
        v29 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v29 + 24) = *(_QWORD *)(v43 + 1128);
        *(_QWORD *)(v29 + 32) = v28;
        WdLogEvent5_WdError(v29);
      }
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C008E768 == a1 )
      {
        LOBYTE(word_1C008E75C) = 0;
        qword_1C008E768 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C008E760 == a1 )
      {
        qword_1C008E760 = 0LL;
        word_1C008E75C = 0;
      }
      _InterlockedExchange64(&qword_1C008E788, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (DeviceExtension[3800] & 1) != 0 )
        DpiPnpNotifyGdi((__int64)a1, 0, started, 0, a2);
      else
        DxgkFinishPnPTransition(0xFFFFFFFFLL);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    }
    else
    {
      DxgkFinishPnPTransition(0xFFFFFFFFLL);
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 167, 0);
    if ( *((_QWORD *)DeviceExtension + 337) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 168, 0);
    if ( *((_QWORD *)DeviceExtension + 341) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 170, 0);
    if ( *((_QWORD *)DeviceExtension + 343) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 171, 0);
    if ( *((_QWORD *)DeviceExtension + 347) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 173, 0);
    if ( *((_QWORD *)DeviceExtension + 345) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 172, 0);
    if ( *((_QWORD *)DeviceExtension + 349) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 174, 0);
    if ( *((_QWORD *)DeviceExtension + 339) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 169, 0);
    if ( DeviceExtension[1144] && dword_1C008EA8C != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3232), 1u);
      v30 = 0;
      for ( i = (__int64 *)*((_QWORD *)DeviceExtension + 443); v30 < *((_DWORD *)DeviceExtension + 890); i = v32 )
      {
        v32 = (__int64 *)*i;
        if ( *i == *((_QWORD *)DeviceExtension + 443) )
          break;
        if ( *((_DWORD *)i + 126) == dword_1C008EA8C )
        {
          v33 = (__int128 *)i[116];
          if ( v33 )
          {
            xmmword_1C008EA08 = *v33;
            xmmword_1C008EA18 = v33[1];
            xmmword_1C008EA28 = v33[2];
            xmmword_1C008EA38 = v33[3];
            xmmword_1C008EA48 = v33[4];
            xmmword_1C008EA58 = v33[5];
            xmmword_1C008EA68 = v33[6];
            xmmword_1C008EA78 = v33[7];
            v32 = (__int64 *)*i;
          }
        }
        ++v30;
      }
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3232));
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1, a2);
    DpiBrightnessStopDevice(a1);
    if ( *((_DWORD *)DeviceExtension + 972) != 3 )
    {
      v34 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 474);
      if ( v34 )
        DXGADAPTER::Stop(v34, 0LL, 0);
      v35 = DXGGLOBAL::GetGlobal((__int64)v34);
      DXGGLOBAL::NotifyAdapterRemoval(v35);
    }
  }
  else
  {
    v46[0] = 0x4000000006LL;
    v9 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v46[6]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v46[1], 0, 36);
    LODWORD(v46[6]) = 36;
    v46[7] = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46);
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v42);
  v37 = v42[0];
  if ( IsDevicePresent < 0 )
    v37 = 1;
  v38 = -1073741637;
  if ( DeviceExtension[1144] )
  {
    if ( v37 )
    {
      v38 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      memset(v47, 0, 0x48uLL);
      v47[0] = 0x480000001ELL;
      memset(&v47[1], 0, 36);
      v47[8] = *((_QWORD *)DeviceExtension + 325);
      v47[6] = 98LL;
      v47[7] = (unsigned int)v38;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v47);
      if ( v38 < 0 || dword_1C008EA00 != dword_1C008EA8C )
        memset(&xmmword_1C008EA08, 0, 0x80uLL);
    }
    else
    {
      dword_1C008EA88 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[3800] &= ~4u;
  if ( v37 && v38 < 0 )
    DpiDxgkDdiStopDevice(v43, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 162) )
  {
    v39 = a1->DeviceExtension;
    Parameters.Version = *((_DWORD *)v39 + 322);
    Parameters.ConnectionContext.Generic = (PVOID)*((_QWORD *)v39 + 162);
    *((_QWORD *)v39 + 162) = 0LL;
    IoDisconnectInterruptEx(&Parameters);
  }
  v40 = *((_QWORD *)DeviceExtension + 61);
  if ( v40 )
  {
    PoFxUnregisterDevice(v40);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 474) + 2568LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DpiDeleteIoMmuDomain(a1);
  memset(v46, 0, 0x48uLL);
  v46[0] = 0x4000000006LL;
  memset(&v46[1], 0, 36);
  LODWORD(v46[6]) = 36;
  HIDWORD(v46[6]) = v9;
  v46[7] = 1LL;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v46);
}
