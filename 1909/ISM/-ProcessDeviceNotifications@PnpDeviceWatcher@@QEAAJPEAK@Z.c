/*
 * XREFs of ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180016B10
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180016850 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180016964 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x180017000 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180017420 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180029430 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800ABEC8 (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800AC0AC (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x1800AC648 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x1800AC748 (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800AC978 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800ACCA4 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x1800ACD3C (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800AD784 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800AD9E8 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800ADAF0 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800ADC34 (-RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall PnpDeviceWatcher::ProcessDeviceNotifications(PnpDeviceWatcher *this, unsigned int *a2)
{
  char *v3; // rsi
  char *v4; // rbx
  __int64 v5; // rax
  HSTRING *v6; // rdi
  int v7; // ecx
  HSTRING v8; // r14
  struct PnpDeviceWatcher::DeviceListEntry *v9; // rbx
  struct PnpDeviceWatcher::DeviceListEntry *i; // rdi
  RefCountedObject *v11; // r14
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // di
  bool v16; // r15
  bool v17; // r12
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // r15
  int DeviceStringProperty; // eax
  int DeviceListEntryByInstanceId; // r14d
  HSTRING v23; // rdx
  PnpDeviceWatcher *v24; // rbx
  unsigned int *v25; // r15
  int started; // eax
  __int64 v28; // r14
  __int64 *j; // rbx
  unsigned int v30; // edx
  __int64 *v31; // rcx
  __int64 **v32; // rax
  struct PnpDeviceWatcher::DeviceListEntry *v33; // r15
  struct PnpDeviceWatcher::DeviceListEntry *v34; // rax
  RefCountedObject *v35; // rcx
  struct PnpDeviceWatcher::DeviceListEntry **v36; // rax
  PnpDeviceWatcher::RetryDeviceListEntry *v37; // r14
  unsigned int CurrentMilliSecTime; // eax
  unsigned int v39; // ecx
  PnpDevice *v40; // rdi
  int InterfacePath; // eax
  unsigned int v42; // edi
  int v43; // eax
  unsigned int v44; // edx
  const WCHAR *StringRawBuffer; // rax
  PnpDeviceWatcher::RetryDeviceListEntry *v46; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v47; // rax
  const WCHAR *v48; // rax
  __int16 v49; // ax
  unsigned int v50; // ecx
  HSTRING *cData; // [rsp+20h] [rbp-E0h]
  struct PnpDeviceWatcher::DeviceListEntry *v52; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v53; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v55; // [rsp+48h] [rbp-B8h] BYREF
  RefCountedObject *v56; // [rsp+50h] [rbp-B0h] BYREF
  void *v57; // [rsp+58h] [rbp-A8h]
  __int64 v58; // [rsp+68h] [rbp-98h] BYREF
  struct PnpDeviceWatcher::DeviceListEntry *v59; // [rsp+70h] [rbp-90h]
  unsigned int *v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h]
  __int64 v62; // [rsp+88h] [rbp-78h]
  struct PnpDeviceWatcher::DeviceListEntry *v63; // [rsp+90h] [rbp-70h]
  __int128 v64; // [rsp+98h] [rbp-68h]
  __int128 v65; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR v66; // [rsp+C0h] [rbp-40h] BYREF
  const char *v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+F0h] [rbp-10h] BYREF
  __int16 *v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  const char *v73; // [rsp+130h] [rbp+30h]
  __int64 v74; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v61 = -2LL;
  v60 = a2;
  *a2 = -1;
  v62 = 0LL;
  v57 = 0LL;
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
    v6 = (HSTRING *)v57;
    v57 = v4;
    if ( v6 )
    {
      WindowsDeleteString(v6[4]);
      v6[4] = 0LL;
      operator delete(v6, (const struct std::nothrow_t *)0x28);
    }
    if ( !v4 )
      break;
    v7 = *((_DWORD *)v4 + 6);
    if ( v7 == 1 )
    {
      v8 = (HSTRING)*((_QWORD *)v4 + 4);
      v9 = (PnpDeviceWatcher *)((char *)this + 56);
      for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 7);
            i != v9;
            i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
      {
        if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 24LL), v8) )
        {
          v52 = i;
          v33 = i;
          goto LABEL_89;
        }
      }
      v52 = 0LL;
      v56 = 0LL;
      if ( (int)PnpDevice::MakeAndInitialize(v8, &v56) < 0 )
      {
        if ( v56 )
          RefCountedObject::Release(v56);
        continue;
      }
      v11 = v56;
      v12 = *((_OWORD *)v56 + 3);
      v64 = v12;
      v13 = v12 - 0x11D074D3745A17A0LL;
      if ( (_QWORD)v12 == 0x11D074D3745A17A0LL )
        v13 = *((_QWORD *)&v64 + 1) + 0x25A8F0365FFF014ALL;
      if ( !v13 )
        goto LABEL_44;
      v65 = v12;
      v14 = v12 - 0x4647CD8BE0CBF06CLL;
      if ( (_QWORD)v12 == 0x4647CD8BE0CBF06CLL )
        v14 = *((_QWORD *)&v65 + 1) - 0x74F9F0433B268ABBLL;
      if ( v14 )
        v15 = 0;
      else
LABEL_44:
        v15 = 1;
      v16 = *((_WORD *)v56 + 56) == 89 && *((_WORD *)v56 + 57) == 1;
      v17 = 0;
      if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
        __fastfail(7u);
      if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 )
        v17 = *((_WORD *)v11 + 56) == 12 && *((_WORD *)v11 + 57) == 1;
      if ( !v15 || !v16 && !v17 )
      {
        v56 = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
        {
          *((_DWORD *)v11 + 2) = 1;
          (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v11 + 32LL))(v11);
          *((_DWORD *)v11 + 2) = 0;
          (*(void (__fastcall **)(RefCountedObject *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
        }
        continue;
      }
      v34 = (struct PnpDeviceWatcher::DeviceListEntry *)operator new(
                                                          0x20uLL,
                                                          (const struct std::nothrow_t *)&std::nothrow);
      i = v34;
      if ( v34 )
      {
        *(_QWORD *)v34 = 0LL;
        *((_QWORD *)v34 + 1) = 0LL;
        *((_QWORD *)v34 + 3) = 0LL;
        *((_QWORD *)v34 + 2) = 0LL;
      }
      else
      {
        i = 0LL;
      }
      v33 = i;
      v63 = i;
      v59 = i;
      if ( !i )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x181,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
          (const char *)0x8007000ELL);
        RefCountedObject::Release(v11);
        continue;
      }
      v35 = (RefCountedObject *)*((_QWORD *)i + 2);
      *((_QWORD *)i + 2) = v11;
      *((_BYTE *)i + 24) = 0;
      v36 = (struct PnpDeviceWatcher::DeviceListEntry **)*((_QWORD *)this + 8);
      if ( *v36 != v9 )
        __fastfail(3u);
      *(_QWORD *)i = v9;
      *((_QWORD *)i + 1) = v36;
      *v36 = i;
      *((_QWORD *)this + 8) = i;
      ++*((_QWORD *)this + 9);
      v59 = 0LL;
      v52 = i;
      if ( v35 )
        RefCountedObject::Release(v35);
LABEL_89:
      if ( !v33 )
        continue;
      started = PnpDeviceWatcher::StartDeviceObject(this, i);
      goto LABEL_49;
    }
    if ( !v7 )
    {
      started = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(this, *((HSTRING *)v4 + 4), 1, &v52);
      i = v52;
      goto LABEL_49;
    }
    v18 = v7 - 2;
    if ( !v18 )
    {
      v28 = *((_QWORD *)v4 + 4);
      for ( j = (__int64 *)*((_QWORD *)this + 7); j != (__int64 *)((char *)this + 56); j = (__int64 *)*j )
      {
        if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(j[2] + 24), v28) )
        {
          v52 = (struct PnpDeviceWatcher::DeviceListEntry *)j;
          PnpDeviceWatcher::StopDeviceObject(this, (struct PnpDeviceWatcher::DeviceListEntry *)j);
          v31 = (__int64 *)*j;
          v32 = (__int64 **)j[1];
          if ( *(__int64 **)(*j + 8) != j || *v32 != j )
            __fastfail(3u);
          *v32 = v31;
          v31[1] = (__int64)v32;
          --*((_QWORD *)this + 9);
          PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(
            (PnpDeviceWatcher::RetryDeviceListEntry *)j,
            v30);
          goto LABEL_2;
        }
      }
      goto LABEL_52;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v20 = *((_QWORD *)v4 + 4);
      for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 7);
            i != (PnpDeviceWatcher *)((char *)this + 56);
            i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
      {
        if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(
                                *(_QWORD *)(*((_QWORD *)i + 2) + 32LL),
                                v20) )
        {
          v52 = i;
          DeviceListEntryByInstanceId = 0;
          goto LABEL_37;
        }
      }
      i = 0LL;
      v52 = 0LL;
      string = 0LL;
      WindowsDeleteString(0LL);
      string = 0LL;
      v58 = v20;
      DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                               (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceInterfaceProperty,
                               (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v58,
                               (void *)&DEVPKEY_Device_InstanceId,
                               (const struct _DEVPROPKEY *)&string,
                               cData);
      DeviceListEntryByInstanceId = DeviceStringProperty;
      v23 = string;
      if ( string )
      {
        if ( DeviceStringProperty >= 0 )
        {
          DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(this, string, 1, &v52);
          WindowsDeleteString(string);
          i = v52;
LABEL_36:
          string = 0LL;
          if ( DeviceListEntryByInstanceId < 0 )
            goto LABEL_91;
LABEL_37:
          if ( !i )
            goto LABEL_38;
          started = PnpDevice::AddInterface(*((PnpDevice **)i + 2), *((HSTRING *)v4 + 4));
          goto LABEL_49;
        }
      }
      else if ( DeviceStringProperty >= 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2EB,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
          (const char *)0x80004005LL);
        DeviceListEntryByInstanceId = -2147467259;
        v23 = string;
      }
      WindowsDeleteString(v23);
      goto LABEL_36;
    }
    if ( v19 == 1 )
    {
      DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                                      this,
                                      *((HSTRING *)v4 + 4),
                                      0,
                                      &v52);
      i = v52;
      if ( DeviceListEntryByInstanceId < 0 )
      {
LABEL_91:
        if ( i )
          PnpDeviceWatcher::StopDeviceObject(this, i);
      }
      else
      {
        if ( !v52 )
          goto LABEL_38;
        started = PnpDevice::RemoveInterface(*((PnpDevice **)v52 + 2), *((HSTRING *)v4 + 4));
LABEL_49:
        DeviceListEntryByInstanceId = started;
LABEL_38:
        if ( DeviceListEntryByInstanceId < 0 )
          goto LABEL_91;
      }
    }
    else
    {
LABEL_52:
      v52 = 0LL;
    }
  }
  v24 = (PnpDeviceWatcher *)*((_QWORD *)this + 10);
  v25 = v60;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v24 == (PnpDeviceWatcher *)((char *)this + 80) )
        return 0LL;
      v37 = v24;
      v24 = *(PnpDeviceWatcher **)v24;
      CurrentMilliSecTime = QpcTimeConverter::GetCurrentMilliSecTime((PnpDeviceWatcher *)((char *)this + 104));
      v39 = *((_DWORD *)v37 + 6);
      if ( CurrentMilliSecTime >= v39 )
        break;
      v50 = v39 - CurrentMilliSecTime;
      if ( *v25 > v50 )
        *v25 = v50;
    }
    *((_DWORD *)v37 + 6) = CurrentMilliSecTime + 100;
    v55 = 0LL;
    v40 = (PnpDevice *)*((_QWORD *)v37 + 2);
    WindowsDeleteString(0LL);
    v55 = 0LL;
    InterfacePath = PnpDevice::GetInterfacePath(v40, &v55);
    v42 = InterfacePath;
    if ( InterfacePath < 0 )
      break;
    v43 = PnpDevice::OpenInterface(*((PnpDevice **)v37 + 2));
    if ( v43 >= 0 )
    {
      LampArrayRawInputProvider::OnLampArrayAdded(*(LampArrayRawInputProvider **)this, *((struct PnpDevice **)v37 + 2));
      if ( hProvider > 5u )
      {
        v73 = "Successfully exclusively opened LampArray";
        v74 = 42LL;
        StringRawBuffer = WindowsGetStringRawBuffer(v55, 0LL);
        TlgCreateWsz(&pDesc, StringRawBuffer);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D205, 0LL, 0LL, 4u, &pData);
      }
      goto LABEL_100;
    }
    if ( v43 != -2147024864 )
      goto LABEL_100;
    if ( hProvider > 5u )
    {
      v67 = "Failed to exclusively open LampArray";
      v68 = 37LL;
      v48 = WindowsGetStringRawBuffer(v55, 0LL);
      TlgCreateWsz(&v69, v48);
      v53 = *((_WORD *)v37 + 14);
      v70 = &v53;
      v71 = 2LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D1A0, 0LL, 0LL, 5u, &v66);
    }
    v49 = *((_WORD *)v37 + 14);
    if ( v49 > 0 )
    {
      *((_WORD *)v37 + 14) = v49 - 1;
      if ( *v25 > 0x64 )
        *v25 = 100;
      WindowsDeleteString(v55);
    }
    else
    {
LABEL_100:
      v46 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v37;
      v47 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)v37 + 1);
      if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v37 + 8LL) != v37 || *v47 != v37 )
        __fastfail(3u);
      *v47 = v46;
      *((_QWORD *)v46 + 1) = v47;
      --*((_QWORD *)this + 12);
      PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v37, v44);
      WindowsDeleteString(v55);
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD7,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
    (const char *)(unsigned int)InterfacePath);
  WindowsDeleteString(v55);
  return v42;
}
