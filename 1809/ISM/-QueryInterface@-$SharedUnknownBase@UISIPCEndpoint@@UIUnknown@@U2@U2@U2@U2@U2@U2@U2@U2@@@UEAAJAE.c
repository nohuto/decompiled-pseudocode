/*
 * XREFs of ?QueryInterface@?$SharedUnknownBase@UISIPCEndpoint@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A2410
 * Callers:
 *     ?QueryInterface@?$SharedUnknownBase@UISIPCEndpoint@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A2520 (-QueryInterface@-$SharedUnknownBase@UISIPCEndpoint@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@WEI@EAA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && a2[1] == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *a2 == *(_QWORD *)&GUID_660f874e_2d32_4a14_b690_0abd14d5c4fb.Data1
    && a2[1] == *(_QWORD *)GUID_660f874e_2d32_4a14_b690_0abd14d5c4fb.Data4 )
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
