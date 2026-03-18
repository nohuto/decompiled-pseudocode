/*
 * XREFs of ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C002E870
 * Callers:
 *     GreExtCreateRegion @ 0x1C001A670 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C009FC3C (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00FA8E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001EEA0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C001F078 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     PushThreadGuardedObject @ 0x1C00243F0 (PushThreadGuardedObject.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C002E940 (--$AllocateIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C006E118 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00F5DF8 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

PATHMEMOBJ *__fastcall PATHMEMOBJ::PATHMEMOBJ(PATHMEMOBJ *this)
{
  __int64 v2; // rdi
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

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
    PushThreadGuardedObject((_QWORD *)this + 10, (__int64)this, (__int64)THREAD_GUARDED_EPATHOBJ::vThreadCleanup);
    *((_DWORD *)this + 28) = 1;
  }
  v2 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>();
  if ( v2 )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
    if ( v5 || !HmgInsertObjectInternal((struct _BASEOBJECT *)v2, 3u, 7) )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(v2);
    }
    else
    {
      v5 = v2;
      *((_QWORD *)this + 1) = v2;
      *(_DWORD *)(v2 + 80) = 3;
      *(_QWORD *)this = 0LL;
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
  }
  return this;
}
