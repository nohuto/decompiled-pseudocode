/*
 * XREFs of ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C007E720
 * Callers:
 *     GreExtCreateRegion @ 0x1C002BE30 (GreExtCreateRegion.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C007E6F0 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00B0A74 (GreCreatePolyPolygonRgnInternal.c)
 *     ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1C0123F10 (-vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0126D80 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C00174C0 (HmgRemoveObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C007E7B0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C007E864 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

void __fastcall EPATHOBJ::vUnlock(EPATHOBJ *this)
{
  __int64 v2; // rcx
  struct OBJECT *v3; // rcx
  struct HOBJ__ *v4; // rbx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 84) & 1) != 0 )
    {
      EPATHOBJ::vFreeBlocks(this);
    }
    else
    {
      *(_DWORD *)(v2 + 92) = *((_DWORD *)this + 1);
      *(_DWORD *)(*((_QWORD *)this + 1) + 88LL) = *(_DWORD *)this;
      v3 = (struct OBJECT *)*((_QWORD *)this + 1);
      v4 = *(struct HOBJ__ **)v3;
      HmgDecrementShareReferenceCountEx(v3, 0LL);
      if ( HmgRemoveObject(v4, 0, 0, 1, 7, 0LL) )
      {
        EPATHOBJ::vFreeBlocks(this);
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(*((_QWORD *)this + 1));
      }
    }
    *((_QWORD *)this + 1) = 0LL;
  }
}
