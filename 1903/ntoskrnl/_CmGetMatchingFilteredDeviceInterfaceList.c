/*
 * XREFs of _CmGetMatchingFilteredDeviceInterfaceList @ 0x140625D38
 * Callers:
 *     IopGetDeviceInterfaces @ 0x1406239A8 (IopGetDeviceInterfaces.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140706B8C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140715760 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PnpDisableDeviceInterfaces @ 0x140730F74 (PnpDisableDeviceInterfaces.c)
 *     _CmGetMatchingDeviceInterfaceList @ 0x140787F7C (_CmGetMatchingDeviceInterfaceList.c)
 *     PnpDeleteDeviceInterfaces @ 0x14085FF14 (PnpDeleteDeviceInterfaces.c)
 *     _CmDeleteDeviceWorker @ 0x140935264 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140935DA4 (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140767CB8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10)
{
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, __int64, int, _QWORD *); // r10
  int v14; // eax
  unsigned int v15; // ebx
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64, __int64, int, _QWORD *); // rdi
  unsigned int MatchingFilteredDeviceInterfaceListWorker; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  __int64 (__fastcall *v23)(__int64, _QWORD, __int64, __int64, int, _QWORD *); // [rsp+58h] [rbp-79h]
  _QWORD v24[12]; // [rsp+60h] [rbp-71h] BYREF

  memset(v24, 0, 0x58uLL);
  v24[2] = a2;
  v24[3] = a3;
  LODWORD(v24[4]) = a4;
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int, _QWORD *))(a1 + 504);
  LODWORD(v24[8]) = a8;
  v24[5] = a5;
  v24[9] = a9;
  LODWORD(v24[10]) = a10;
  v23 = v13;
  v24[6] = a6;
  v24[7] = a7;
  if ( v13 )
  {
    v14 = v13(a1, 0LL, 3LL, 17LL, 1, v24);
    if ( v14 == -1073741822 )
    {
      v17 = 0LL;
    }
    else
    {
      if ( v14 == -1073741536 )
        return LODWORD(v24[0]);
      if ( v14 )
        return (unsigned int)-1073741595;
      v17 = v23;
    }
  }
  else
  {
    v17 = 0LL;
  }
  MatchingFilteredDeviceInterfaceListWorker = CmGetMatchingFilteredDeviceInterfaceListWorker(
                                                a1,
                                                v24[2],
                                                v24[3],
                                                LODWORD(v24[4]),
                                                v24[5],
                                                v24[6],
                                                v24[7],
                                                v24[8],
                                                v24[9],
                                                v24[10]);
  v15 = MatchingFilteredDeviceInterfaceListWorker;
  if ( v17 )
  {
    LODWORD(v24[0]) = MatchingFilteredDeviceInterfaceListWorker;
    v19 = v17(a1, 0LL, 3LL, 17LL, 2, v24);
    v20 = v19;
    if ( v19 != -1073741822 )
    {
      if ( v19 == -1073741536 )
        return LODWORD(v24[0]);
      v21 = v15;
      if ( v20 )
        return (unsigned int)-1073741595;
      return v21;
    }
  }
  return v15;
}
