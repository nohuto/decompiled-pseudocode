/*
 * XREFs of bDeletePalette @ 0x1C00713D0
 * Callers:
 *     GreDeleteObject @ 0x1C001CBF0 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C00207E0 (NtGdiDeleteObjectApp.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     GdiThreadCallout @ 0x1C00711D0 (GdiThreadCallout.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00AA2D4 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00AA328 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C00F84C0 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall bDeletePalette(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF
  HSEMAPHORE v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v9);
  v6 = HmgShareLockCheck(a1, 8);
  v7 = 0;
  v9[0] = v6;
  if ( v6 )
    v7 = XEPALOBJ::bDeletePalette(v9, a2, a3);
  XEPALOBJ2::~XEPALOBJ2((XEPALOBJ2 *)v9);
  SEMOBJ::vUnlock((PERESOURCE *)&v10);
  return v7;
}
