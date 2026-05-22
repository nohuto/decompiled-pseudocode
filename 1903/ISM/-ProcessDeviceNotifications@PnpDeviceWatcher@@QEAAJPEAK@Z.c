/*
 * XREFs of ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180016BA0
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180016A84 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x1800168E0 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800174E0 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180017900 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x1800298B0 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_SmartLightFix_25315772@@@wil@@SA_NXZ @ 0x1800356BC (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_SmartLightFix_25315772@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18005A0D4 (--1HString@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800ABFF8 (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800AC1DC (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x1800AC778 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x1800AC878 (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800ACAA8 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800ACDEC (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x1800ACE84 (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800AD8D4 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800ADB38 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800ADC40 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800ADD84 (-RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall PnpDeviceWatcher::ProcessDeviceNotifications(PnpDeviceWatcher *this, unsigned int *a2)
{
  char *v3; // r13
  char *v4; // rsi
  __int64 v5; // rax
  HSTRING *v6; // rbx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int DeviceListEntryByInterfacePath; // edi
  struct PnpDeviceWatcher::DeviceListEntry *i; // rbx
  int DeviceListEntryByInstanceId; // eax
  __int64 v14; // r14
  int DeviceStringProperty; // eax
  __int64 v16; // rsi
  __int64 *j; // rbx
  unsigned int v18; // edx
  __int64 *v19; // rcx
  __int64 **v20; // rax
  HSTRING v21; // rdi
  struct PnpDeviceWatcher::DeviceListEntry *v22; // r14
  struct PnpDeviceWatcher::DeviceListEntry *v23; // rsi
  RefCountedObject *v24; // rdi
  __int128 v25; // xmm0
  bool v26; // r15
  bool v27; // si
  bool v28; // bl
  struct PnpDeviceWatcher::DeviceListEntry *v29; // rax
  RefCountedObject *v30; // rcx
  struct PnpDeviceWatcher::DeviceListEntry **v31; // rax
  PnpDeviceWatcher *v32; // rbx
  unsigned int *v33; // r15
  PnpDeviceWatcher::RetryDeviceListEntry *v34; // rsi
  unsigned int CurrentMilliSecTime; // edi
  unsigned int v36; // ecx
  PnpDevice *v37; // rdi
  int InterfacePath; // eax
  unsigned int v39; // edi
  int v40; // eax
  unsigned int v41; // edx
  const WCHAR *v42; // rax
  PnpDeviceWatcher::RetryDeviceListEntry *v43; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v44; // rax
  const WCHAR *StringRawBuffer; // rax
  __int16 v46; // ax
  __int16 v47; // cx
  unsigned int v48; // ecx
  HSTRING *cData; // [rsp+20h] [rbp-E0h]
  struct PnpDeviceWatcher::DeviceListEntry *v51; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v52; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v53; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+48h] [rbp-B8h] BYREF
  RefCountedObject *v55; // [rsp+50h] [rbp-B0h] BYREF
  void *v56; // [rsp+58h] [rbp-A8h]
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  struct PnpDeviceWatcher::DeviceListEntry *v58; // [rsp+70h] [rbp-90h]
  unsigned int *v59; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  struct PnpDeviceWatcher::DeviceListEntry *v62; // [rsp+90h] [rbp-70h]
  __int128 v63; // [rsp+98h] [rbp-68h]
  __int128 v64; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR v65; // [rsp+C0h] [rbp-40h] BYREF
  const char *v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+F0h] [rbp-10h] BYREF
  __int16 *v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  const char *v72; // [rsp+130h] [rbp+30h]
  __int64 v73; // [rsp+138h] [rbp+38h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v60 = -2LL;
  v59 = a2;
  *a2 = -1;
  v61 = 0LL;
  v56 = 0LL;
  v3 = (char *)this + 32;
  while ( 1 )
  {
LABEL_2:
    v4 = *(char **)v3;
    v5 = **(_QWORD **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || *(char **)(v5 + 8) != v4 )
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 == v3 )
      v4 = 0LL;
    else
      --*((_QWORD *)v3 + 2);
    v6 = (HSTRING *)v56;
    v56 = v4;
    if ( v6 )
    {
      WindowsDeleteString(v6[4]);
      v6[4] = 0LL;
      operator delete(v6, (const struct std::nothrow_t *)0x28);
    }
    if ( !v4 )
      break;
    v7 = *((_DWORD *)v4 + 6);
    if ( !v7 )
    {
      DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                                      this,
                                      *((HSTRING *)v4 + 4),
                                      1,
                                      &v51);
      i = v51;
      goto LABEL_79;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v21 = (HSTRING)*((_QWORD *)v4 + 4);
      v22 = (PnpDeviceWatcher *)((char *)this + 56);
      for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 7);
            i != v22;
            i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
      {
        if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(
                                *(_QWORD *)(*((_QWORD *)i + 2) + 24LL),
                                v21) )
        {
          v51 = i;
          v23 = i;
          goto LABEL_74;
        }
      }
      v51 = 0LL;
      v55 = 0LL;
      if ( (int)PnpDevice::MakeAndInitialize(v21, &v55) < 0 )
      {
        if ( v55 )
          RefCountedObject::Release(v55);
        continue;
      }
      v24 = v55;
      v25 = *((_OWORD *)v55 + 3);
      v63 = v25;
      v26 = 1;
      if ( v25 != __PAIR128__(0xDA570FC9A000FEB6uLL, 0x11D074D3745A17A0LL) )
      {
        v64 = v25;
        if ( v25 != __PAIR128__(0x74F9F0433B268ABBLL, 0x4647CD8BE0CBF06CLL) )
          v26 = 0;
      }
      v27 = *((_WORD *)v55 + 56) == 89 && *((_WORD *)v55 + 57) == 1;
      v28 = 0;
      if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
        __fastfail(7u);
      if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 )
        v28 = *((_WORD *)v24 + 56) == 12 && *((_WORD *)v24 + 57) == 1;
      if ( !v26 || !v27 && !v28 )
      {
        v55 = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v24 + 2, 0xFFFFFFFF) == 1 )
        {
          *((_DWORD *)v24 + 2) = 1;
          (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v24 + 32LL))(v24);
          *((_DWORD *)v24 + 2) = 0;
          (*(void (__fastcall **)(RefCountedObject *, __int64))(*(_QWORD *)v24 + 24LL))(v24, 1LL);
        }
        continue;
      }
      v29 = (struct PnpDeviceWatcher::DeviceListEntry *)operator new(
                                                          0x20uLL,
                                                          (const struct std::nothrow_t *)&std::nothrow);
      i = v29;
      if ( v29 )
      {
        *(_QWORD *)v29 = 0LL;
        *((_QWORD *)v29 + 1) = 0LL;
        *((_QWORD *)v29 + 3) = 0LL;
        *((_QWORD *)v29 + 2) = 0LL;
      }
      else
      {
        i = 0LL;
      }
      v23 = i;
      v62 = i;
      v58 = i;
      if ( !i )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x193,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
          (const char *)0x8007000ELL);
        RefCountedObject::Release(v24);
        continue;
      }
      v30 = (RefCountedObject *)*((_QWORD *)i + 2);
      *((_QWORD *)i + 2) = v24;
      *((_BYTE *)i + 24) = 0;
      v31 = (struct PnpDeviceWatcher::DeviceListEntry **)*((_QWORD *)this + 8);
      if ( *v31 != v22 )
        __fastfail(3u);
      *(_QWORD *)i = v22;
      *((_QWORD *)i + 1) = v31;
      *v31 = i;
      *((_QWORD *)this + 8) = i;
      ++*((_QWORD *)this + 9);
      v58 = 0LL;
      v51 = i;
      if ( v30 )
        RefCountedObject::Release(v30);
LABEL_74:
      if ( !v23 )
        continue;
      DeviceListEntryByInstanceId = PnpDeviceWatcher::StartDeviceObject(this, i);
      goto LABEL_79;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        v14 = *((_QWORD *)v4 + 4);
        for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 7);
              i != (PnpDeviceWatcher *)((char *)this + 56);
              i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
        {
          if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(
                                  *(_QWORD *)(*((_QWORD *)i + 2) + 32LL),
                                  v14) )
          {
            v51 = i;
            DeviceListEntryByInterfacePath = 0;
            goto LABEL_31;
          }
        }
        i = 0LL;
        v51 = 0LL;
        string = 0LL;
        WindowsDeleteString(0LL);
        string = 0LL;
        v57 = v14;
        DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                                 (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceInterfaceProperty,
                                 (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v57,
                                 (void *)&DEVPKEY_Device_InstanceId,
                                 (const struct _DEVPROPKEY *)&string,
                                 cData);
        DeviceListEntryByInterfacePath = DeviceStringProperty;
        if ( string )
        {
          if ( DeviceStringProperty >= 0 )
          {
            DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(this, string, 1, &v51);
            WindowsDeleteString(string);
            i = v51;
            goto LABEL_30;
          }
        }
        else if ( DeviceStringProperty >= 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2EB,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
            (const char *)0x80004005LL);
          DeviceListEntryByInterfacePath = -2147467259;
          WindowsDeleteString(string);
LABEL_30:
          string = 0LL;
          if ( DeviceListEntryByInterfacePath < 0 )
            goto LABEL_81;
LABEL_31:
          if ( !i )
            goto LABEL_80;
          DeviceListEntryByInstanceId = PnpDevice::AddInterface(*((PnpDevice **)i + 2), *((HSTRING *)v4 + 4));
          goto LABEL_79;
        }
        WindowsDeleteString(string);
        goto LABEL_30;
      }
      if ( v10 != 1 )
        goto LABEL_15;
      DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                                         this,
                                         *((HSTRING *)v4 + 4),
                                         0,
                                         &v51);
      i = v51;
      if ( DeviceListEntryByInterfacePath < 0 )
      {
LABEL_81:
        if ( i )
          PnpDeviceWatcher::StopDeviceObject(this, i);
      }
      else
      {
        if ( v51 )
        {
          DeviceListEntryByInstanceId = PnpDevice::RemoveInterface(*((PnpDevice **)v51 + 2), *((HSTRING *)v4 + 4));
LABEL_79:
          DeviceListEntryByInterfacePath = DeviceListEntryByInstanceId;
        }
LABEL_80:
        if ( DeviceListEntryByInterfacePath < 0 )
          goto LABEL_81;
      }
    }
    else
    {
      v16 = *((_QWORD *)v4 + 4);
      for ( j = (__int64 *)*((_QWORD *)this + 7); j != (__int64 *)((char *)this + 56); j = (__int64 *)*j )
      {
        if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(j[2] + 24), v16) )
        {
          v51 = (struct PnpDeviceWatcher::DeviceListEntry *)j;
          PnpDeviceWatcher::StopDeviceObject(this, (struct PnpDeviceWatcher::DeviceListEntry *)j);
          v19 = (__int64 *)*j;
          v20 = (__int64 **)j[1];
          if ( *(__int64 **)(*j + 8) != j || *v20 != j )
            __fastfail(3u);
          *v20 = v19;
          v19[1] = (__int64)v20;
          --*((_QWORD *)this + 9);
          PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(
            (PnpDeviceWatcher::RetryDeviceListEntry *)j,
            v18);
          goto LABEL_2;
        }
      }
LABEL_15:
      v51 = 0LL;
    }
  }
  v32 = (PnpDeviceWatcher *)*((_QWORD *)this + 10);
  v33 = v59;
  while ( v32 != (PnpDeviceWatcher *)((char *)this + 80) )
  {
    v34 = v32;
    v32 = *(PnpDeviceWatcher **)v32;
    CurrentMilliSecTime = QpcTimeConverter::GetCurrentMilliSecTime((PnpDeviceWatcher *)((char *)this + 104));
    v36 = *((_DWORD *)v34 + 6);
    if ( CurrentMilliSecTime < v36 )
    {
      v48 = v36 - CurrentMilliSecTime;
      if ( *v33 > v48 )
        *v33 = v48;
    }
    else
    {
      if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_Servicing_SmartLightFix_25315772>::__private_IsEnabled() )
        *((_DWORD *)v34 + 6) = CurrentMilliSecTime + 100;
      v52 = 0LL;
      v37 = (PnpDevice *)*((_QWORD *)v34 + 2);
      WindowsDeleteString(0LL);
      v52 = 0LL;
      InterfacePath = PnpDevice::GetInterfacePath(v37, &v52);
      v39 = InterfacePath;
      if ( InterfacePath < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDA,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
          (const char *)(unsigned int)InterfacePath);
        Microsoft::WRL::Wrappers::HString::~HString((Microsoft::WRL::Wrappers::HString *)&v52);
        return v39;
      }
      v40 = PnpDevice::OpenInterface(*((PnpDevice **)v34 + 2));
      if ( v40 < 0 )
      {
        if ( v40 != -2147024864 )
          goto LABEL_94;
        if ( hProvider > 5u )
        {
          v66 = "Failed to exclusively open LampArray";
          v67 = 37LL;
          StringRawBuffer = WindowsGetStringRawBuffer(v52, 0LL);
          TlgCreateWsz(&v68, StringRawBuffer);
          v53 = *((_WORD *)v34 + 14);
          v69 = &v53;
          v70 = 2LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D260, 0LL, 0LL, 5u, &v65);
        }
        if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_Servicing_SmartLightFix_25315772>::__private_IsEnabled() )
        {
          v46 = *((_WORD *)v34 + 14);
          if ( v46 <= 0 )
            goto LABEL_94;
          *((_WORD *)v34 + 14) = v46 - 1;
          if ( *v33 > 0x64 )
LABEL_103:
            *v33 = 100;
        }
        else
        {
          v47 = *((_WORD *)v34 + 14);
          *((_WORD *)v34 + 14) = v47 - 1;
          if ( v47 <= 0 )
            goto LABEL_94;
          if ( *v33 == -1 )
            goto LABEL_103;
        }
        Microsoft::WRL::Wrappers::HString::~HString((Microsoft::WRL::Wrappers::HString *)&v52);
      }
      else
      {
        LampArrayRawInputProvider::OnLampArrayAdded(
          *(LampArrayRawInputProvider **)this,
          *((struct PnpDevice **)v34 + 2));
        if ( hProvider > 5u )
        {
          v72 = "Successfully exclusively opened LampArray";
          v73 = 42LL;
          v42 = WindowsGetStringRawBuffer(v52, 0LL);
          TlgCreateWsz(&pDesc, v42);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D30F, 0LL, 0LL, 4u, &pData);
        }
LABEL_94:
        v43 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v34;
        v44 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)v34 + 1);
        if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v34 + 8LL) != v34 || *v44 != v34 )
          __fastfail(3u);
        *v44 = v43;
        *((_QWORD *)v43 + 1) = v44;
        --*((_QWORD *)this + 12);
        PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v34, v41);
        Microsoft::WRL::Wrappers::HString::~HString((Microsoft::WRL::Wrappers::HString *)&v52);
      }
    }
  }
  return 0LL;
}
