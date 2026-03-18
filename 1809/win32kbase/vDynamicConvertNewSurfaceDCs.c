/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C003E0E0
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C003DF70 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00A03D0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C001381C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgSafeNextObjt @ 0x1C001FB50 (HmgSafeNextObjt.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0021480 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0022880 (HmgDecrementShareReferenceCountEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     HmgQueryAltLock @ 0x1C008BC90 (HmgQueryAltLock.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, struct OBJECT *a2, int a3)
{
  __int64 v3; // rbx
  DC *Objt; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  DC *v9; // rdi
  struct OBJECT *v10; // rbx
  struct OBJECT *v11; // rsi

  LODWORD(v3) = 0;
  GreAcquireHmgrSemaphore(a1, (int)a2, a3);
  while ( 1 )
  {
    Objt = (DC *)HmgSafeNextObjt(v3, 1);
    v9 = Objt;
    if ( !Objt )
      break;
    v10 = (struct OBJECT *)*((_QWORD *)Objt + 62);
    if ( v10 )
    {
      v11 = (struct OBJECT *)*((_QWORD *)v10 + 70);
      if ( v11 )
      {
        DC::pSurface(Objt, *((struct SURFACE **)v10 + 70));
        *((_DWORD *)v9 + 79) |= 0xFu;
        HmgIncrementShareReferenceCount(v11);
        if ( (unsigned int)HmgQueryAltLock(*(_QWORD *)v10) == 1 )
        {
          *((_QWORD *)v10 + 70) = 0LL;
          SURFACE::bDeleteSurface(v10, 0LL, 0LL);
          if ( v10 == a2 )
            return GreReleaseHmgrSemaphore(v7, v6, v8);
        }
        else
        {
          HmgDecrementShareReferenceCountEx(v10, 0LL);
        }
      }
    }
    v3 = *(_QWORD *)v9;
  }
  return GreReleaseHmgrSemaphore(v7, v6, v8);
}
