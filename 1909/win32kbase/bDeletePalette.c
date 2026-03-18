/*
 * XREFs of bDeletePalette @ 0x1C00699E0
 * Callers:
 *     GreDeleteObject @ 0x1C0018180 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 *     GdiThreadCallout @ 0x1C0067F40 (GdiThreadCallout.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007C408 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001AA60 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029F78 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0069A58 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall bDeletePalette(HPALETTE a1, unsigned int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // r8
  struct _ERESOURCE *v8; // [rsp+20h] [rbp-18h] BYREF
  struct OBJECT *v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = (struct _ERESOURCE *)ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v9, a1);
  v5 = XEPALOBJ::bDeletePalette(&v9, a2);
  if ( v9 )
    HmgDecrementShareReferenceCountEx(v9, 0LL);
  SEMOBJ::vUnlock(&v8, v4, v6);
  return v5;
}
