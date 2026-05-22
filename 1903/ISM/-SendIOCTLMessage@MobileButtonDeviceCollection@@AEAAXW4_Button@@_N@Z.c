/*
 * XREFs of ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800A2268
 * Callers:
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800A1814 (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18002283C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?ButtonToGPIOButtonMapping@MobileButtonDeviceCollection@@AEAAJW4_Button@@PEAW4GPIOBUTTONS_BUTTON_TYPE@@@Z @ 0x1800A125C (-ButtonToGPIOButtonMapping@MobileButtonDeviceCollection@@AEAAJW4_Button@@PEAW4GPIOBUTTONS_BUTTON.c)
 *     ?OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ @ 0x1800A2204 (-OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ.c)
 */

int __fastcall MobileButtonDeviceCollection::SendIOCTLMessage(__int64 a1, int a2, char a3)
{
  char *v5; // rax
  MobileButtonDeviceCollection *v6; // rcx
  void **v7; // rbx
  char *v8; // rcx
  void *v9; // rcx
  int InBuffer; // [rsp+40h] [rbp-18h] BYREF
  char v12; // [rsp+44h] [rbp-14h]
  char v13; // [rsp+48h] [rbp-10h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v5) = MobileButtonDeviceCollection::ButtonToGPIOButtonMapping(a1, a2, &v14);
  if ( (int)v5 >= 0 )
  {
    v7 = (void **)(a1 + 2888);
    if ( (((unsigned __int64)*v7 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
LABEL_8:
      v9 = *v7;
      InBuffer = v14;
      v12 = a3;
      LODWORD(v5) = DeviceIoControl(v9, 0xB02A8u, &InBuffer, 8u, 0LL, 0, 0LL, 0LL);
      return (int)v5;
    }
    v5 = (char *)MobileButtonDeviceCollection::OpenMobileButtonDriver(v6);
    if ( v5 != (char *)-1LL )
    {
      v8 = v5;
      if ( v7 != (void **)&v13 )
      {
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          v7,
          v5);
        v5 = 0LL;
        v8 = 0LL;
      }
      if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v5);
      goto LABEL_8;
    }
  }
  return (int)v5;
}
