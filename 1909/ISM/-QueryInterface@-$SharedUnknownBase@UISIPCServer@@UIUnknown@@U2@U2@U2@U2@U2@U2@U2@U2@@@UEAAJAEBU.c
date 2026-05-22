/*
 * XREFs of ?QueryInterface@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6680
 * Callers:
 *     ?QueryInterface@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038D30 (-QueryInterface@-$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@WEI@EAAJA.c)
 * Callees:
 *     ?AddPublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800D4A34 (-AddPublicReference@SharedObjectBase@@IEAAIXZ.c)
 */

__int64 __fastcall SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  SharedObjectBase *v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r8

  v3 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v3 )
    goto LABEL_7;
  v4 = *a2 - *(_QWORD *)&GUID_a2395c29_5063_428c_b815_9a39157e9ad2.Data1;
  if ( *a2 == *(_QWORD *)&GUID_a2395c29_5063_428c_b815_9a39157e9ad2.Data1 )
    v4 = a2[1] - *(_QWORD *)GUID_a2395c29_5063_428c_b815_9a39157e9ad2.Data4;
  if ( v4 )
  {
    if ( a3 )
      *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_7:
    v5 = (SharedObjectBase *)(a1 - 16);
    if ( a3 )
    {
      SharedObjectBase::AddPublicReference(v5);
      result = 0LL;
      *v8 = v7;
    }
    else
    {
      return 2147500035LL;
    }
  }
  return result;
}
