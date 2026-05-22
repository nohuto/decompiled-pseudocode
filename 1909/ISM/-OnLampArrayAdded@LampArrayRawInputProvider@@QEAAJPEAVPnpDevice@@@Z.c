/*
 * XREFs of ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800AC0AC
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180016B10 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800AC978 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001AFE8 (-IsEdition@@YA_N_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800ABF58 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800AC52C (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800AD4AC (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800AE3A8 (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800AE544 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::OnLampArrayAdded(LampArrayRawInputProvider *this, struct PnpDevice *a2)
{
  unsigned int v4; // ebp
  LampArrayDevice **v5; // rax
  LampArrayDevice **v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  LampArrayDevice **v10; // r14
  LampArrayRawInputProvider **v11; // rcx
  __int64 *i; // rbx
  int active; // eax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 1;
  if ( *((_DWORD *)a2 + 28) == 65625 )
  {
    v5 = (LampArrayDevice **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
      v5[2] = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( !v6 )
    {
      v7 = -2147024882;
      v8 = 130LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    v10 = v6 + 2;
    if ( (int)LampArrayDevice::CreateAndInitialize(a2, v6 + 2) < 0 )
    {
LABEL_17:
      ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v6);
      return v4;
    }
    v11 = (LampArrayRawInputProvider **)*((_QWORD *)this + 7);
    if ( *v11 != (LampArrayRawInputProvider *)((char *)this + 48) )
      __fastfail(3u);
    *v6 = (LampArrayRawInputProvider *)((char *)this + 48);
    v6[1] = (LampArrayDevice *)v11;
    *v11 = (LampArrayRawInputProvider *)v6;
    ++*((_QWORD *)this + 8);
    *((_QWORD *)this + 7) = v6;
    for ( i = (__int64 *)*((_QWORD *)this + 9); i != (__int64 *)((char *)this + 72); i = (__int64 *)*i )
    {
      LampArrayDevice::AddViewClient(*v10, (struct LampArrayEndpoint *)(i + 2));
      if ( *((_DWORD *)i + 6) == *((_DWORD *)this + 10) )
      {
        active = LampArrayRawInputProvider::SetActiveViewClient(this, *v10, (struct LampArrayEndpoint *)(i + 2));
        v4 = active;
        if ( active < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x90,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
            (const char *)(unsigned int)active);
          goto LABEL_17;
        }
      }
    }
  }
  else if ( IsEdition(6176LL) )
  {
    v14 = ConsumerControlManager::QueueAddRemoveDevice(*((ConsumerControlManager **)this + 31), a2, 1);
    v7 = v14;
    if ( v14 >= 0 )
      v7 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)(unsigned int)v14);
    if ( v7 < 0 )
    {
      v8 = 161LL;
      goto LABEL_7;
    }
  }
  return 0LL;
}
