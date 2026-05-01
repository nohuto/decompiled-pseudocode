/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ @ 0x1802E5720
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@W7E$AAAKXZ @ 0x1800BD6D0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ @ 0x1800BD6E0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAKXZ @ 0x1800BD6F0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ @ 0x1800BD700 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAKXZ @ 0x1800BD710 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAKXZ @ 0x1800BD720 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WJA@E$AAAKXZ @ 0x1800BD730 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WJA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAKXZ @ 0x1800BD740 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAKXZ @ 0x1800BD750 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x1802B4E64 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1802B5FD8 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ??1XamlAllUpViewController@@AE$AAA@XZ @ 0x1802E03F8 (--1XamlAllUpViewController@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlAllUpViewController__UE_AAAKXZ(__int64 a1)
{
  unsigned int v2; // edi
  Platform::Details::ControlBlock *v3; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 120));
  if ( !v2 )
  {
    XamlAllUpViewController::~XamlAllUpViewController((__int64 *)a1);
    v3 = *(Platform::Details::ControlBlock **)(a1 + 120);
    Platform::Details::ControlBlock::ReleaseTarget(v3);
    Platform::Details::ControlBlock::__abi_Release(v3);
  }
  return v2;
}
