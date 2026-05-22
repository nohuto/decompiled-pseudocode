/*
 * XREFs of ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x180070764
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18007165C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800720B0 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x180070904 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800712E4 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800729D0 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x180073F24 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x180074338 (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::OnLampArrayAdded(LampArrayRawInputProvider *this, struct PnpDevice *a2)
{
  unsigned int v4; // ebp
  char *v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  LampArrayDevice **v9; // r15
  unsigned int v10; // edx
  LampArrayRawInputProvider **v11; // rcx
  __int64 *i; // rbx
  int active; // eax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 1;
  if ( *((_DWORD *)a2 + 28) == 65625 )
  {
    v5 = (char *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *((_QWORD *)v5 + 1) = 0LL;
      *((_QWORD *)v5 + 2) = 0LL;
      *((_QWORD *)v5 + 2) = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
    {
      v6 = -2147024882;
      v7 = 130LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v9 = (LampArrayDevice **)(v5 + 16);
    if ( (int)LampArrayDevice::CreateAndInitialize(a2, (struct LampArrayDevice **)v5 + 2) < 0 )
    {
LABEL_17:
      ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(
        (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v5,
        v10);
      return v4;
    }
    v11 = (LampArrayRawInputProvider **)*((_QWORD *)this + 7);
    if ( *v11 != (LampArrayRawInputProvider *)((char *)this + 48) )
      __fastfail(3u);
    *(_QWORD *)v5 = (char *)this + 48;
    *((_QWORD *)v5 + 1) = v11;
    *v11 = (LampArrayRawInputProvider *)v5;
    ++*((_QWORD *)this + 8);
    *((_QWORD *)this + 7) = v5;
    for ( i = (__int64 *)*((_QWORD *)this + 9); i != (__int64 *)((char *)this + 72); i = (__int64 *)*i )
    {
      LampArrayDevice::AddViewClient(*v9, (struct LampArrayEndpoint *)(i + 2));
      if ( *((_DWORD *)i + 6) == *((_DWORD *)this + 10) )
      {
        active = LampArrayRawInputProvider::SetActiveViewClient(this, *v9, (struct LampArrayEndpoint *)(i + 2));
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
  else if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 )
  {
    v14 = ConsumerControlManager::QueueAddRemoveDevice(*((ConsumerControlManager **)this + 31), a2, 1);
    v6 = v14;
    if ( v14 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)(unsigned int)v14);
    if ( v6 < 0 )
    {
      v7 = 161LL;
      goto LABEL_7;
    }
  }
  return 0LL;
}
