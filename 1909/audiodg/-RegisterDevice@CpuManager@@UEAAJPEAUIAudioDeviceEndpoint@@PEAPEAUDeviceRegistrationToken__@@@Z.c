/*
 * XREFs of ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x14002DB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Attach@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z @ 0x14000E5D0 (-Attach@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z @ 0x14000E600 (-ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001368C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x14002CD1C (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PE.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002E518 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@CpuManager@@@Z @ 0x14002E8B8 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PEAU.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CpuManager::RegisterDevice(
        CpuManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct DeviceRegistrationToken__ **v3; // r12
  struct IAudioDeviceEndpoint *v4; // r15
  CpuManager *v5; // rsi
  int v6; // ebx
  char v7; // r14
  struct IUnknown *v8; // rax
  __int64 v9; // rbx
  __int64 Node; // rax
  __int64 v11; // rdi
  unsigned int *v13; // rbx
  int v14; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-A0h]
  __int64 v16; // [rsp+40h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-90h] BYREF
  char v18; // [rsp+50h] [rbp-88h]
  int v19; // [rsp+58h] [rbp-80h] BYREF
  __int64 v20; // [rsp+60h] [rbp-78h] BYREF
  __int64 v21; // [rsp+68h] [rbp-70h] BYREF
  char *v22; // [rsp+70h] [rbp-68h]
  _QWORD v23[3]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v24; // [rsp+90h] [rbp-48h] BYREF
  ATL::CAtlException *v25; // [rsp+98h] [rbp-40h] BYREF

  v23[2] = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v15 = 0LL;
  v16 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v18 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = (*(__int64 (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 128LL))(v5);
  if ( v6 < 0 )
    goto LABEL_14;
  v7 = 1;
  v8 = ListKeyForDevice(v4);
  Microsoft::WRL::ComPtr<IUnknown>::Attach(&v16, (__int64)v8);
  v9 = v16;
  v20 = v16;
  v22 = (char *)v5 + 200;
  Node = ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 200,
           (unsigned int *)&v20,
           &v19,
           (unsigned int *)&v14,
           &v24);
  v11 = Node;
  if ( Node )
  {
    _InterlockedAdd((volatile signed __int32 *)(Node + 8), 1u);
LABEL_9:
    *v3 = (struct DeviceRegistrationToken__ *)v11;
    v11 = 0LL;
    v7 = 0;
    v6 = 0;
    goto LABEL_10;
  }
  v23[1] = 0LL;
  v23[0] = 1LL;
  try
  {
    v21 = v9;
    v11 = ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::SetAt(
            (char *)v5 + 200,
            &v21,
            v23);
    v15 = v11;
  }
  catch ( ATL::CAtlException *v25 )
  {
    v13 = (unsigned int *)v25;
    if ( *(_DWORD *)v25 == -1073741571 )
      _o__resetstkoflw();
    v14 = *v13;
    v6 = v14;
    v5 = this;
    v11 = v15;
    v7 = 1;
    if ( v14 < 0 )
      goto LABEL_10;
    v3 = a3;
    v4 = a2;
  }
  v6 = (*(__int64 (__fastcall **)(CpuManager *, struct IAudioDeviceEndpoint *, __int64))(*(_QWORD *)v5 + 112LL))(
         v5,
         v4,
         v11 + 16);
  if ( v6 >= 0 )
    goto LABEL_9;
LABEL_10:
  if ( v11 )
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      v22,
      v11);
  if ( v7 )
    (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 136LL))(v5);
LABEL_14:
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return (unsigned int)v6;
}
