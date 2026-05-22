/*
 * XREFs of ?QueryInterface@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A2390
 * Callers:
 *     ?QueryInterface@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A2510 (-QueryInterface@-$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@WEI@EAAJA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && a2[1] == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *a2 == *(_QWORD *)&GUID_a2395c29_5063_428c_b815_9a39157e9ad2.Data1
    && a2[1] == *(_QWORD *)GUID_a2395c29_5063_428c_b815_9a39157e9ad2.Data4 )
  {
    if ( a3 )
    {
      if ( (unsigned int)_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 8), 1uLL) + 1 <= 2 )
        __fastfail(0xEu);
      *a3 = a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 16) >> 64);
      return 0LL;
    }
    else
    {
      return 2147500035LL;
    }
  }
  else
  {
    if ( a3 )
      *a3 = 0LL;
    return 2147500034LL;
  }
}
