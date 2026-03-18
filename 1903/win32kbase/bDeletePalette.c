/*
 * XREFs of bDeletePalette @ 0x1C0058600
 * Callers:
 *     GreDeleteObject @ 0x1C0016C60 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0022090 (NtGdiDeleteObjectApp.c)
 *     GdiThreadCallout @ 0x1C0059760 (GdiThreadCallout.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007FEC8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0018218 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0058678 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0058824 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall bDeletePalette(HPALETTE a1, unsigned int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // r8
  PERESOURCE v8; // [rsp+20h] [rbp-18h] BYREF
  struct OBJECT *v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = ghsemPalette;
  EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v9, a1);
  v5 = XEPALOBJ::bDeletePalette(&v9, a2);
  if ( v9 )
    HmgDecrementShareReferenceCountEx(v9, 0LL);
  SEMOBJ::vUnlock(&v8, v4, v6);
  return v5;
}
