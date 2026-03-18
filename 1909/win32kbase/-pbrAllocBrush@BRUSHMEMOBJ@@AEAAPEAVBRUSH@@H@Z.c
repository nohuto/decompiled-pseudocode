/*
 * XREFs of ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C000F054
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000ECA0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C008CDD0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 * Callees:
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C000E834 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C000F184 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C000F470 (--$AllocateIsolatedType@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C012010C (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct BRUSH *__fastcall BRUSHMEMOBJ::pbrAllocBrush(BRUSHMEMOBJ *this, int a2)
{
  __int64 v3; // rax
  ULONG_PTR v4; // rbx

  *((_DWORD *)this + 4) = 0;
  if ( a2 )
  {
    if ( !gpTypeIsolation[3] )
    {
      v4 = 0LL;
      goto LABEL_5;
    }
    v3 = NSInstrumentation::CTypeIsolation<49152,192>::Allocate();
  }
  else
  {
    v3 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>();
  }
  v4 = v3;
LABEL_5:
  if ( v4 )
  {
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_DWORD *)(v4 + 84) = 0;
    *(_DWORD *)(v4 + 96) = 0;
    *(_DWORD *)(v4 + 100) = -1;
    *(_DWORD *)(v4 + 144) = a2 != 0;
    *(_QWORD *)(v4 + 48) = v4 + 72;
    *(_DWORD *)(v4 + 44) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
    if ( !(unsigned __int8)AcquireReferenceCountedObjectHandle(2LL, v4, v4 + 136) )
    {
      FreeBrushMemory(v4);
      return 0LL;
    }
  }
  return (struct BRUSH *)v4;
}
