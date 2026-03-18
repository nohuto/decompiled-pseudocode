/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C0068550
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C00695E0 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0069D50 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0021040 (HmgIncrementShareReferenceCount.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0028358 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C0069750 (HmgSafeNextObjt.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C006BB50 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgQueryAltLock @ 0x1C006C2E0 (HmgQueryAltLock.c)
 */

__int64 __fastcall vDynamicConvertNewSurfaceDCs(int a1, struct OBJECT *a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  DC *Objt; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  DC *v9; // rdi
  struct OBJECT *v10; // rbx
  struct _BASEOBJECT *v11; // rsi

  v3 = 0LL;
  GreAcquireHmgrSemaphore(a1, (int)a2, a3);
  while ( 1 )
  {
    LOBYTE(v5) = 1;
    Objt = (DC *)HmgSafeNextObjt(v3, v5);
    v9 = Objt;
    if ( !Objt )
      break;
    v10 = (struct OBJECT *)*((_QWORD *)Objt + 62);
    if ( v10 )
    {
      v11 = (struct _BASEOBJECT *)*((_QWORD *)v10 + 70);
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
            return GreReleaseHmgrSemaphore(v7, v5, v8);
        }
        else
        {
          HmgDecrementShareReferenceCountEx(v10, 0LL);
        }
      }
    }
    v3 = *(_QWORD *)v9;
  }
  return GreReleaseHmgrSemaphore(v7, v5, v8);
}
