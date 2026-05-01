/*
 * XREFs of ?AddRef@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x1800839B0
 * Callers:
 *     ?AddRef@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x1800C19C0 (-AddRef@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x1800C19D0 (-AddRef@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x1800C19E0 (-AddRef@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x1800C19F0 (-AddRef@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WIA@EAAKXZ @ 0x1800C1A00 (-AddRef@CLaunchActivatedEventArgs@@WIA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WII@EAAKXZ @ 0x1800C1A10 (-AddRef@CLaunchActivatedEventArgs@@WII@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WJA@EAAKXZ @ 0x1800C1A20 (-AddRef@CLaunchActivatedEventArgs@@WJA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WMA@EAAKXZ @ 0x1800C1A30 (-AddRef@CLaunchActivatedEventArgs@@WMA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WNA@EAAKXZ @ 0x1800C1A40 (-AddRef@CLaunchActivatedEventArgs@@WNA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WNI@EAAKXZ @ 0x1800C1A50 (-AddRef@CLaunchActivatedEventArgs@@WNI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WOA@EAAKXZ @ 0x1800C1A60 (-AddRef@CLaunchActivatedEventArgs@@WOA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WOI@EAAKXZ @ 0x1800C1A70 (-AddRef@CLaunchActivatedEventArgs@@WOI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::AddRef(CLaunchActivatedEventArgs *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 31);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 31, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
