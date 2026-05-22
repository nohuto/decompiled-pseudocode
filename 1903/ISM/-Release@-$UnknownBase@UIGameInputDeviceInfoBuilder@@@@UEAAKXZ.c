/*
 * XREFs of ?Release@?$UnknownBase@UIGameInputDeviceInfoBuilder@@@@UEAAKXZ @ 0x1800D3F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UnknownBase<IGameInputDeviceInfoBuilder>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 && a1 )
    (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(*(_QWORD *)a1 + 40LL))(
      a1,
      1LL,
      a1);
  return v1;
}
