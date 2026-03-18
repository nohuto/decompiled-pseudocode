/*
 * XREFs of ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C001C130
 * Callers:
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0044B20 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0072744 (GreCreatePolyPolygonRgnInternal.c)
 *     ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1C00C1040 (-vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C001C1C0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgRemoveObject @ 0x1C003F690 (HmgRemoveObject.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00651D0 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

void __fastcall EPATHOBJ::vUnlock(EPATHOBJ *this)
{
  __int64 v2; // rcx
  struct OBJECT *v3; // rcx
  __int64 v4; // rbx

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
      v4 = *(_QWORD *)v3;
      HmgDecrementShareReferenceCountEx(v3);
      if ( HmgRemoveObject(v4, 0, 0, 1, 7, 0LL) )
      {
        EPATHOBJ::vFreeBlocks(this);
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(*((_QWORD *)this + 1));
      }
    }
    *((_QWORD *)this + 1) = 0LL;
  }
}
