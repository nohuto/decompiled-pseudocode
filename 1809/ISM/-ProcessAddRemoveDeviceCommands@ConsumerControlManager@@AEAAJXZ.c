/*
 * XREFs of ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x180072C58
 * Callers:
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x180072B94 (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x180070904 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800730B0 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800733F0 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x180077360 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 *     ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x180078E54 (-CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ConsumerControlManager::ProcessAddRemoveDeviceCommands(
        ConsumerControlManager *this,
        unsigned int a2)
{
  struct PnpDevice ***v3; // r12
  struct PnpDevice **v4; // r14
  struct PnpDevice *v5; // rax
  int v6; // ecx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v7; // rbx
  PnpDevice *v8; // rdi
  __int64 v9; // r13
  int InterfacePath; // eax
  bool v11; // di
  HSTRING v12; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v13; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v14; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v15; // rbx
  PnpDevice *v16; // rdi
  __int64 v17; // r13
  int v18; // eax
  bool v19; // di
  HSTRING v20; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v21; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v22; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v23; // rcx
  void *v24; // rdi
  ConsumerControlManager **v25; // rcx
  void *v26; // rsi
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v27; // rbx
  ConsumerControlManager **v28; // rcx
  unsigned int v30; // edx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  INT32 result; // [rsp+70h] [rbp+40h] BYREF
  INT32 v33; // [rsp+78h] [rbp+48h] BYREF
  HSTRING string; // [rsp+80h] [rbp+50h] BYREF

  if ( !*((_QWORD *)this + 10) )
    return 0LL;
  v3 = (struct PnpDevice ***)((char *)this + 64);
  while ( 1 )
  {
    v4 = *v3;
    if ( (*v3)[1] != (struct PnpDevice *)v3 || (v5 = *v4, *((struct PnpDevice ***)*v4 + 1) != v4) )
LABEL_71:
      __fastfail(3u);
    *v3 = (struct PnpDevice **)v5;
    *((_QWORD *)v5 + 1) = v3;
    if ( v4 == (struct PnpDevice **)v3 )
      v4 = 0LL;
    else
      v3[2] = (struct PnpDevice **)((char *)v3[2] - 1);
    v6 = *((_DWORD *)v4 + 4);
    if ( !v6 )
      break;
    if ( v6 == 1 )
    {
      v7 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)*((_QWORD *)this + 2);
      if ( v7 != (ConsumerControlManager *)((char *)this + 16) )
      {
        while ( 1 )
        {
          v8 = v4[4];
          v9 = *((_QWORD *)v7 + 2);
          string = 0LL;
          WindowsDeleteString(0LL);
          string = 0LL;
          InterfacePath = PnpDevice::GetInterfacePath(v8, &string);
          if ( InterfacePath >= 0 )
          {
            v12 = string;
            if ( *(_QWORD *)(v9 + 24) )
            {
              if ( string )
              {
                v11 = WindowsCompareStringOrdinal(*(HSTRING *)(v9 + 24), string, &result) >= 0 && !result;
                v12 = string;
              }
              else
              {
                v11 = 0;
              }
            }
            else
            {
              v11 = string == 0LL;
            }
            WindowsDeleteString(v12);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x31,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolgenericdevice.cpp",
              (const char *)(unsigned int)InterfacePath);
            WindowsDeleteString(string);
            v11 = 1;
          }
          v13 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v7;
          if ( v11 )
            break;
          v7 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v7;
          if ( v13 == (ConsumerControlManager *)((char *)this + 16) )
            goto LABEL_29;
        }
        if ( *((ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v13 + 1) != v7 )
          goto LABEL_71;
        v14 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)*((_QWORD *)v7 + 1);
        if ( *v14 != v7 )
          goto LABEL_71;
        *v14 = v13;
        *((_QWORD *)v13 + 1) = v14;
        --*((_QWORD *)this + 4);
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v7);
      }
LABEL_29:
      v15 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)*((_QWORD *)this + 5);
      if ( v15 != (ConsumerControlManager *)((char *)this + 40) )
      {
        while ( 1 )
        {
          v16 = v4[4];
          v17 = *((_QWORD *)v15 + 2);
          string = 0LL;
          WindowsDeleteString(0LL);
          string = 0LL;
          v18 = PnpDevice::GetInterfacePath(v16, &string);
          if ( v18 >= 0 )
          {
            v20 = string;
            if ( *(_QWORD *)(v17 + 24) )
            {
              if ( string )
              {
                v19 = WindowsCompareStringOrdinal(*(HSTRING *)(v17 + 24), string, &v33) >= 0 && !v33;
                v20 = string;
              }
              else
              {
                v19 = 0;
              }
            }
            else
            {
              v19 = string == 0LL;
            }
            WindowsDeleteString(v20);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xED,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
              (const char *)(unsigned int)v18);
            WindowsDeleteString(string);
            v19 = 1;
          }
          v21 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v15;
          if ( v19 )
            break;
          v15 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v15;
          if ( v21 == (ConsumerControlManager *)((char *)this + 40) )
            goto LABEL_66;
        }
        if ( *((ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v21 + 1) != v15 )
          goto LABEL_71;
        v22 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)*((_QWORD *)v15 + 1);
        if ( *v22 != v15 )
          goto LABEL_71;
        *v22 = v21;
        *((_QWORD *)v21 + 1) = v22;
        v23 = v15;
        --*((_QWORD *)this + 7);
LABEL_65:
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v23);
      }
    }
LABEL_66:
    ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'(
      (ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v4,
      a2);
    if ( !*((_QWORD *)this + 10) )
      return 0LL;
  }
  v24 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v24 )
  {
    *(_QWORD *)v24 = 0LL;
    *((_QWORD *)v24 + 1) = 0LL;
    *((_QWORD *)v24 + 2) = 0LL;
    *((_QWORD *)v24 + 2) = 0LL;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v24 )
  {
    if ( (int)ConsumerControlNexusDevice::TryCreateAndInitialize(
                v4[4],
                *((struct IRawInputClient **)this + 14),
                *((struct IMessageSession **)this + 15),
                *((struct IRawInputProvider **)this + 16),
                (struct ConsumerControlNexusDevice **)v24 + 2) >= 0 )
    {
      v25 = (ConsumerControlManager **)*((_QWORD *)this + 6);
      if ( *v25 != (ConsumerControlManager *)((char *)this + 40) )
        goto LABEL_71;
      *(_QWORD *)v24 = (char *)this + 40;
      *((_QWORD *)v24 + 1) = v25;
      *v25 = (ConsumerControlManager *)v24;
      ++*((_QWORD *)this + 7);
      *((_QWORD *)this + 6) = v24;
      goto LABEL_66;
    }
    v26 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v26 )
    {
      *(_QWORD *)v26 = 0LL;
      *((_QWORD *)v26 + 1) = 0LL;
      *((_QWORD *)v26 + 2) = 0LL;
      *((_QWORD *)v26 + 2) = 0LL;
    }
    else
    {
      v26 = 0LL;
    }
    v27 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v26;
    if ( !v26 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)0x8007000ELL);
      ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v24);
      goto LABEL_70;
    }
    if ( (int)ConsumerControlGenericDevice::CreateAndInitialize(v4[4], (struct ConsumerControlGenericDevice **)v26 + 2) >= 0 )
    {
      v27 = 0LL;
      v28 = (ConsumerControlManager **)*((_QWORD *)this + 3);
      if ( *v28 != (ConsumerControlManager *)((char *)this + 16) )
        goto LABEL_71;
      *(_QWORD *)v26 = (char *)this + 16;
      *((_QWORD *)v26 + 1) = v28;
      *v28 = (ConsumerControlManager *)v26;
      ++*((_QWORD *)this + 4);
      *((_QWORD *)this + 3) = v26;
      v26 = 0LL;
    }
    if ( v26 )
      ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v27);
    v23 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v24;
    goto LABEL_65;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF2,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
    (const char *)0x8007000ELL);
LABEL_70:
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'(
    (ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v4,
    v30);
  return 2147942414LL;
}
