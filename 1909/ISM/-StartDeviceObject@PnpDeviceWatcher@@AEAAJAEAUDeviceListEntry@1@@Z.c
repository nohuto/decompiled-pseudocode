/*
 * XREFs of ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800AC978
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180016B10 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001AFE8 (-IsEdition@@YA_N_K@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180029430 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800AC0AC (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x1800AC748 (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800ACCA4 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800ACEAC (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800AD9E8 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800ADAF0 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 */

__int64 __fastcall PnpDeviceWatcher::StartDeviceObject(
        PnpDeviceWatcher *this,
        struct PnpDeviceWatcher::DeviceListEntry *a2)
{
  __int64 v4; // rcx
  struct PnpDeviceWatcher::DeviceListEntry *i; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // eax
  const char *v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // ebx
  PnpDevice *v14; // rbx
  int InterfacePath; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  const WCHAR *StringRawBuffer; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  RefCountedObject *v21; // rcx
  volatile signed __int32 *v22; // rax
  PnpDeviceWatcher **v23; // rcx
  HSTRING string[2]; // [rsp+30h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  const char *v26; // [rsp+60h] [rbp-58h]
  int v27; // [rsp+68h] [rbp-50h]
  int v28; // [rsp+6Ch] [rbp-4Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  string[1] = (HSTRING)-2LL;
  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 116LL) == 2 )
    return 0LL;
  v4 = *((_QWORD *)a2 + 2);
  if ( !*(_QWORD *)(v4 + 16) )
  {
    for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 7);
          i != (PnpDeviceWatcher *)((char *)this + 56);
          i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
    {
      if ( i != a2 )
      {
        v6 = *((_QWORD *)a2 + 2);
        v7 = *((_QWORD *)i + 2);
        if ( *(_DWORD *)(v6 + 116) != 1 )
        {
          v10 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp";
          v11 = 852LL;
          goto LABEL_15;
        }
        if ( *(_DWORD *)(v7 + 104) == *(_DWORD *)(v6 + 104) )
        {
          v8 = *(_QWORD *)(v6 + 16);
          if ( v8 )
            v9 = *(_DWORD *)(v8 + 100);
          else
            v9 = *(_DWORD *)(v6 + 100);
          if ( *(_DWORD *)(v7 + 100) < v9 )
            Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=(v6 + 16);
        }
      }
    }
    v4 = *((_QWORD *)a2 + 2);
  }
  if ( *(_DWORD *)(v4 + 116) == 1 )
  {
    _InterlockedExchange((volatile __int32 *)(v4 + 116), 2);
  }
  else if ( *(_DWORD *)(v4 + 116) != 2 )
  {
    v10 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
    v11 = 456LL;
LABEL_15:
    v12 = -2147418113;
    goto LABEL_16;
  }
  if ( *((_BYTE *)a2 + 24) || !*(_QWORD *)(*((_QWORD *)a2 + 2) + 32LL) )
    return 0LL;
  *((_BYTE *)a2 + 24) = 1;
  if ( (!IsEdition(6176LL) || *(_DWORD *)(*((_QWORD *)a2 + 2) + 112LL) != 65548)
    && PnpDevice::OpenInterface(*((PnpDevice **)a2 + 2)) == -2147024864 )
  {
    string[0] = 0LL;
    v14 = (PnpDevice *)*((_QWORD *)a2 + 2);
    WindowsDeleteString(0LL);
    string[0] = 0LL;
    InterfacePath = PnpDevice::GetInterfacePath(v14, string);
    v12 = InterfacePath;
    if ( InterfacePath >= 0 )
    {
      if ( (unsigned int)hProvider > 5 )
      {
        v26 = "Failed to exclusively open LampArray device, adding to retry list";
        v27 = 66;
        v28 = 0;
        StringRawBuffer = WindowsGetStringRawBuffer(string[0], 0LL);
        TlgCreateWsz(&pDesc, StringRawBuffer);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D258, 0LL, 0LL, 4u, &pData);
      }
      v19 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v20 = v19;
      if ( v19 )
      {
        *v19 = 0LL;
        v19[1] = 0LL;
        v19[3] = 0LL;
        v19[2] = 0LL;
      }
      else
      {
        v20 = 0LL;
      }
      if ( v20 )
      {
        v21 = (RefCountedObject *)v20[2];
        v22 = (volatile signed __int32 *)*((_QWORD *)a2 + 2);
        if ( v21 != (RefCountedObject *)v22 )
        {
          if ( v22 )
          {
            _InterlockedAdd(v22 + 2, 1u);
            v21 = (RefCountedObject *)v20[2];
          }
          v20[2] = v22;
          if ( v21 )
            RefCountedObject::Release(v21);
        }
        *((_WORD *)v20 + 14) = 3000;
        *((_DWORD *)v20 + 6) = QpcTimeConverter::GetCurrentMilliSecTime((PnpDeviceWatcher *)((char *)this + 104)) + 100;
        v23 = (PnpDeviceWatcher **)*((_QWORD *)this + 11);
        if ( *v23 != (PnpDeviceWatcher *)((char *)this + 80) )
          __fastfail(3u);
        *v20 = (char *)this + 80;
        v20[1] = v23;
        *v23 = (PnpDeviceWatcher *)v20;
        *((_QWORD *)this + 11) = v20;
        ++*((_QWORD *)this + 12);
        v12 = 0;
        goto LABEL_46;
      }
      v12 = -2147024882;
      v16 = 2147942414LL;
      v17 = 477LL;
    }
    else
    {
      v16 = (unsigned int)InterfacePath;
      v17 = 472LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
      (const char *)v16);
LABEL_46:
    WindowsDeleteString(string[0]);
    return v12;
  }
  v12 = LampArrayRawInputProvider::OnLampArrayAdded(*(LampArrayRawInputProvider **)this, *((struct PnpDevice **)a2 + 2));
  if ( (v12 & 0x80000000) != 0 )
  {
    v10 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
    v11 = 491LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v11, (__int64)v10, (const char *)v12);
    return v12;
  }
  if ( v12 != 1 )
    return 0LL;
  PnpDeviceWatcher::StopDeviceObject(this, a2);
  return 1LL;
}
