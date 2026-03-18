/*
 * XREFs of ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C000EE80
 * Callers:
 *     GreExtCreateRegion @ 0x1C0018220 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00ADCC4 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0124510 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C000EFB0 (PushThreadGuardedObject.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022E70 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C008B050 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C012119C (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

PATHMEMOBJ *__fastcall PATHMEMOBJ::PATHMEMOBJ(PATHMEMOBJ *this)
{
  __int64 v2; // rsi
  __int64 v3; // rbx

  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((char *)this + 80, this, THREAD_GUARDED_EPATHOBJ::vThreadCleanup);
    *((_DWORD *)this + 28) = 1;
  }
  if ( gpTypeIsolation[4] )
    v2 = NSInstrumentation::CTypeIsolation<81920,320>::Allocate();
  else
    v2 = 0LL;
  if ( v2 )
  {
    v3 = 0LL;
    if ( HmgInsertObjectInternal((struct _BASEOBJECT *)v2, 3u, 7u) )
    {
      *((_QWORD *)this + 1) = v2;
      v3 = v2;
      *(_DWORD *)(v2 + 80) = 3;
      *(_QWORD *)this = 0LL;
    }
    else
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(v2);
    }
    if ( v3 )
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
  }
  return this;
}
