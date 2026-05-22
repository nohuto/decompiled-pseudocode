/*
 * XREFs of ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800720B0
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18007165C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x180070764 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x180072360 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x180073034 (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x180073434 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PnpDeviceWatcher::StartDeviceObject(
        PnpDeviceWatcher *this,
        struct PnpDeviceWatcher::DeviceListEntry *a2)
{
  __int64 v4; // rdx
  struct PnpDeviceWatcher::DeviceListEntry *v5; // r15
  struct PnpDeviceWatcher::DeviceListEntry *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  const char *v11; // r8
  __int64 v12; // rdx
  int v13; // ebx
  PnpDevice *v15; // rcx
  void *v16; // rax
  void *v17; // rbx
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rax
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  PnpDeviceWatcher **v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 116LL) == 2 )
    return 0LL;
  v4 = *((_QWORD *)a2 + 2);
  if ( *(_QWORD *)(v4 + 16)
    || (v5 = (PnpDeviceWatcher *)((char *)this + 56),
        v6 = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 7),
        v6 == (PnpDeviceWatcher *)((char *)this + 56)) )
  {
LABEL_14:
    if ( *(_DWORD *)(v4 + 116) == 1 )
    {
      _InterlockedExchange((volatile __int32 *)(v4 + 116), 2);
    }
    else if ( *(_DWORD *)(v4 + 116) != 2 )
    {
      v11 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
      v12 = 448LL;
      goto LABEL_18;
    }
    if ( !*((_BYTE *)a2 + 24) )
    {
      v15 = (PnpDevice *)*((_QWORD *)a2 + 2);
      if ( *((_QWORD *)v15 + 4) )
      {
        *((_BYTE *)a2 + 24) = 1;
        if ( PnpDevice::OpenInterface(v15) == -2147024864 )
        {
          v16 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          v17 = v16;
          if ( v16 )
          {
            memset_0(v16, 0, 0x20uLL);
            *((_QWORD *)v17 + 2) = 0LL;
          }
          else
          {
            v17 = 0LL;
          }
          if ( !v17 )
          {
            v13 = -2147024882;
            v11 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
            v12 = 459LL;
            goto LABEL_19;
          }
          v18 = (volatile signed __int32 *)*((_QWORD *)v17 + 2);
          v19 = (volatile signed __int32 *)*((_QWORD *)a2 + 2);
          if ( v18 != v19 )
          {
            if ( v19 )
            {
              _InterlockedIncrement(v19 + 2);
              v18 = (volatile signed __int32 *)*((_QWORD *)v17 + 2);
            }
            *((_QWORD *)v17 + 2) = v19;
            if ( v18 && _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
            {
              *((_DWORD *)v18 + 2) = 1;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 32LL))(v18);
              *((_DWORD *)v18 + 2) = 0;
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 24LL))(v18, 1LL);
            }
          }
          *((_BYTE *)v17 + 28) = 100;
          if ( QueryPerformanceCounter(&PerformanceCount) && (v20 = *((_QWORD *)this + 13)) != 0 )
            v21 = (*((_QWORD *)this + 14) * (PerformanceCount.QuadPart / v20)
                 + *((_QWORD *)this + 14) * (PerformanceCount.QuadPart % v20) / v20)
                / 0x3E8;
          else
            LODWORD(v21) = GetTickCount();
          *((_DWORD *)v17 + 6) = v21 + 100;
          v22 = (PnpDeviceWatcher **)*((_QWORD *)this + 11);
          if ( *v22 != (PnpDeviceWatcher *)((char *)this + 80) )
            __fastfail(3u);
          *(_QWORD *)v17 = (char *)this + 80;
          *((_QWORD *)v17 + 1) = v22;
          *v22 = (PnpDeviceWatcher *)v17;
          *((_QWORD *)this + 11) = v17;
          ++*((_QWORD *)this + 12);
        }
        else
        {
          v13 = LampArrayRawInputProvider::OnLampArrayAdded(
                  *(LampArrayRawInputProvider **)this,
                  *((struct PnpDevice **)a2 + 2));
          if ( v13 < 0 )
          {
            v11 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp";
            v12 = 473LL;
            goto LABEL_19;
          }
          if ( v13 == 1 )
          {
            PnpDeviceWatcher::StopDeviceObject(this, a2);
            return 1LL;
          }
        }
      }
    }
    return 0LL;
  }
  while ( v6 == a2 )
  {
LABEL_12:
    v6 = *(struct PnpDeviceWatcher::DeviceListEntry **)v6;
    if ( v6 == v5 )
    {
      v4 = *((_QWORD *)a2 + 2);
      goto LABEL_14;
    }
  }
  v7 = *((_QWORD *)v6 + 2);
  v8 = *((_QWORD *)a2 + 2);
  if ( *(_DWORD *)(v8 + 116) == 1 )
  {
    if ( *(_DWORD *)(v7 + 104) == *(_DWORD *)(v8 + 104) )
    {
      v9 = *(_QWORD *)(v8 + 16);
      v10 = v9 ? *(_DWORD *)(v9 + 100) : *(_DWORD *)(v8 + 100);
      if ( *(_DWORD *)(v7 + 100) < v10 )
        Microsoft::WRL::ComPtr<PnpDevice>::operator=(v8 + 16);
    }
    goto LABEL_12;
  }
  v11 = "onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp";
  v12 = 852LL;
LABEL_18:
  v13 = -2147418113;
LABEL_19:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v12, (__int64)v11, (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
