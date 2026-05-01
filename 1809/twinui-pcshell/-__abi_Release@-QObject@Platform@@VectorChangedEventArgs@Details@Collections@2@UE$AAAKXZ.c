/*
 * XREFs of ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ @ 0x180279D70
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@W7E$AAAKXZ @ 0x1800A58F0 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBA@E$AAAKXZ @ 0x1800A5900 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBI@E$AAAKXZ @ 0x1800A5910 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WCA@E$AAAKXZ @ 0x1800A5920 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WCA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18025C724 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x18025D4A8 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__VectorChangedEventArgs_Details_Collections_2_UE_AAAKXZ(__int64 a1)
{
  Platform::Details::ControlBlock **v1; // rbx
  unsigned int v2; // edi
  Platform::Details::ControlBlock *v3; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 48);
  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 48));
  if ( !v2 )
  {
    v3 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(v3);
    Platform::Details::ControlBlock::__abi_Release(v3);
  }
  return v2;
}
