/*
 * XREFs of ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18007165C
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800710A4 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x180070764 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800713A4 (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180071C64 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180071F94 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800720B0 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x180072360 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x180073290 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x180073434 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x180073AB0 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall PnpDeviceWatcher::ProcessDeviceNotifications(PnpDeviceWatcher *this, unsigned int *a2)
{
  char *v2; // r12
  HSTRING *v3; // rbx
  char *v6; // rsi
  HSTRING *v7; // rdi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int DeviceListEntryByInterfacePath; // r15d
  PnpDeviceWatcher::RetryDeviceListEntry *v13; // rdi
  HSTRING v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  bool v17; // zf
  int v18; // eax
  int DeviceListEntryByInstanceId; // eax
  PnpDeviceWatcher::RetryDeviceListEntry *v20; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v21; // rax
  __int64 v22; // rax
  PnpDeviceWatcher *v23; // rbx
  PnpDeviceWatcher *v24; // rdi
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  unsigned int v27; // eax
  int v28; // eax
  PnpDeviceWatcher *v29; // rax
  PnpDeviceWatcher **v30; // rcx
  char v31; // cl
  unsigned int v32; // eax
  INT32 result; // [rsp+70h] [rbp+48h] BYREF
  PnpDeviceWatcher::RetryDeviceListEntry *v35; // [rsp+78h] [rbp+50h] BYREF
  HSTRING *v36; // [rsp+80h] [rbp+58h]
  LARGE_INTEGER PerformanceCount; // [rsp+88h] [rbp+60h] BYREF

  *a2 = -1;
  v2 = (char *)this + 32;
  v3 = 0LL;
  while ( 1 )
  {
    v6 = *(char **)v2;
    v22 = **(_QWORD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *(char **)(v22 + 8) != v6 )
LABEL_47:
      __fastfail(3u);
    *(_QWORD *)v2 = v22;
    *(_QWORD *)(v22 + 8) = v2;
    if ( v6 == v2 )
      v6 = 0LL;
    else
      --*((_QWORD *)v2 + 2);
    v7 = v3;
    v3 = (HSTRING *)v6;
    v36 = (HSTRING *)v6;
    if ( v7 )
    {
      WindowsDeleteString(v7[4]);
      v7[4] = 0LL;
      operator delete(v7, (const struct std::nothrow_t *)0x28);
    }
    if ( !v6 )
      break;
    v8 = *((_DWORD *)v6 + 6);
    if ( !v8 )
    {
      DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                                      this,
                                      *((HSTRING *)v6 + 4),
                                      1,
                                      &v35);
      v13 = v35;
      goto LABEL_42;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                                           this,
                                           *((HSTRING *)v6 + 4),
                                           0,
                                           &v35);
        if ( DeviceListEntryByInterfacePath < 0 )
          goto LABEL_26;
        v13 = v35;
        if ( v35 )
        {
          PnpDeviceWatcher::StopDeviceObject(this, v35);
          v20 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v13;
          if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v13 + 8LL) != v13 )
            goto LABEL_47;
          v21 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)v13 + 1);
          if ( *v21 != v13 )
            goto LABEL_47;
          *v21 = v20;
          *((_QWORD *)v20 + 1) = v21;
          --*((_QWORD *)this + 9);
          PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v13);
        }
        goto LABEL_43;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                                           this,
                                           *((HSTRING *)v6 + 4),
                                           1,
                                           &v35);
        if ( DeviceListEntryByInterfacePath < 0 )
          goto LABEL_26;
        v13 = v35;
        if ( v35 )
        {
          DeviceListEntryByInstanceId = PnpDevice::AddInterface(*((PnpDevice **)v35 + 2), *((HSTRING *)v6 + 4));
LABEL_42:
          DeviceListEntryByInterfacePath = DeviceListEntryByInstanceId;
          goto LABEL_43;
        }
        goto LABEL_43;
      }
      if ( v11 == 1 )
      {
        DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                                           this,
                                           *((HSTRING *)v6 + 4),
                                           0,
                                           &v35);
        if ( DeviceListEntryByInterfacePath < 0 )
        {
LABEL_26:
          v13 = v35;
LABEL_44:
          if ( v13 )
            PnpDeviceWatcher::StopDeviceObject(this, v13);
        }
        else
        {
          v13 = v35;
          if ( !v35 )
            goto LABEL_43;
          v14 = (HSTRING)*((_QWORD *)v6 + 4);
          v15 = *((_QWORD *)v35 + 2);
          v16 = *(_QWORD *)(v15 + 32);
          if ( v14 )
          {
            if ( !v16 || WindowsCompareStringOrdinal(v14, *(HSTRING *)(v15 + 32), &result) < 0 )
            {
LABEL_29:
              DeviceListEntryByInterfacePath = 1;
              goto LABEL_43;
            }
            v17 = result == 0;
          }
          else
          {
            v17 = v16 == 0;
          }
          if ( !v17 )
            goto LABEL_29;
          v18 = *(_DWORD *)(v15 + 116);
          if ( v18 == 1 )
          {
            *(GUID *)(v15 + 64) = DirectX::g_XMZero;
          }
          else if ( (unsigned int)(v18 - 2) > 1 )
          {
            v3 = v36;
            goto LABEL_26;
          }
          WindowsDeleteString(*(HSTRING *)(v15 + 32));
          *(_QWORD *)(v15 + 32) = 0LL;
          PnpDevice::CloseInterface((PnpDevice *)v15);
          v3 = v36;
        }
      }
      else
      {
        v35 = 0LL;
      }
    }
    else
    {
      DeviceListEntryByInterfacePath = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                                         this,
                                         *((HSTRING *)v6 + 4),
                                         1,
                                         &v35);
      if ( DeviceListEntryByInterfacePath < 0 )
        goto LABEL_26;
      v13 = v35;
      if ( v35 )
      {
        DeviceListEntryByInstanceId = PnpDeviceWatcher::StartDeviceObject(this, v35);
        goto LABEL_42;
      }
LABEL_43:
      if ( DeviceListEntryByInterfacePath < 0 )
        goto LABEL_44;
    }
  }
  v23 = (PnpDeviceWatcher *)*((_QWORD *)this + 10);
  while ( v23 != (PnpDeviceWatcher *)((char *)this + 80) )
  {
    v24 = v23;
    v23 = *(PnpDeviceWatcher **)v23;
    if ( QueryPerformanceCounter(&PerformanceCount) && (v25 = *((_QWORD *)this + 13)) != 0 )
      v26 = (*((_QWORD *)this + 14) * (PerformanceCount.QuadPart / v25)
           + *((_QWORD *)this + 14) * (PerformanceCount.QuadPart % v25) / v25)
          / 0x3E8;
    else
      LODWORD(v26) = GetTickCount();
    v27 = *((_DWORD *)v24 + 6);
    if ( (unsigned int)v26 < v27 )
    {
      v32 = v27 - v26;
      if ( *a2 > v32 )
        *a2 = v32;
    }
    else
    {
      v28 = PnpDevice::OpenInterface(*((PnpDevice **)v24 + 2));
      if ( v28 >= 0 )
      {
        LampArrayRawInputProvider::OnLampArrayAdded(
          *(LampArrayRawInputProvider **)this,
          *((struct PnpDevice **)v24 + 2));
        goto LABEL_56;
      }
      if ( v28 == -2147024864 && (v31 = *((_BYTE *)v24 + 28), *((_BYTE *)v24 + 28) = v31 - 1, v31 > 0) )
      {
        if ( *a2 == -1 )
          *a2 = 100;
      }
      else
      {
LABEL_56:
        v29 = *(PnpDeviceWatcher **)v24;
        if ( *(PnpDeviceWatcher **)(*(_QWORD *)v24 + 8LL) != v24 )
          goto LABEL_47;
        v30 = (PnpDeviceWatcher **)*((_QWORD *)v24 + 1);
        if ( *v30 != v24 )
          goto LABEL_47;
        *v30 = v29;
        *((_QWORD *)v29 + 1) = v30;
        --*((_QWORD *)this + 12);
        PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v24);
      }
    }
  }
  return 0LL;
}
