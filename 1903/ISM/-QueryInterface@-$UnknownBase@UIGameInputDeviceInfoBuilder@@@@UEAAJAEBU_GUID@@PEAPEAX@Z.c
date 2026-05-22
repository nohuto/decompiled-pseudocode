/*
 * XREFs of ?QueryInterface@?$UnknownBase@UIGameInputDeviceInfoBuilder@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D3EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnknownBase<IGameInputDeviceInfoBuilder>::QueryInterface(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v3 )
    goto LABEL_10;
  v4 = *a2 - *(_QWORD *)&GUID_3878b15c_3476_4a6c_8e26_f64b4c6523c9.Data1;
  if ( *a2 == *(_QWORD *)&GUID_3878b15c_3476_4a6c_8e26_f64b4c6523c9.Data1 )
    v4 = a2[1] - *(_QWORD *)GUID_3878b15c_3476_4a6c_8e26_f64b4c6523c9.Data4;
  if ( v4 )
  {
    if ( a3 )
      *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_10:
    if ( a3 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 1u);
      *a3 = a1;
      return 0LL;
    }
    else
    {
      return 2147500035LL;
    }
  }
}
