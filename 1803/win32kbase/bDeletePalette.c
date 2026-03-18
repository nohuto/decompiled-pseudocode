/*
 * XREFs of bDeletePalette @ 0x1C0040B60
 * Callers:
 *     GreDeleteObject @ 0x1C001E0C0 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C001EE60 (NtGdiDeleteObjectApp.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     GdiThreadCallout @ 0x1C0061970 (GdiThreadCallout.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003E880 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F93C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall bDeletePalette(HPALETTE a1, int a2, int a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // r8d
  struct _ERESOURCE *v10; // [rsp+20h] [rbp-18h] BYREF
  struct OBJECT *v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = (struct _ERESOURCE *)ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v11, a1);
  v7 = XEPALOBJ::bDeletePalette((XEPALOBJ *)&v11, a2, a3);
  if ( v11 )
    HmgDecrementShareReferenceCountEx(v11, 0LL);
  SEMOBJ::vUnlock(&v10, v6, v8);
  return v7;
}
