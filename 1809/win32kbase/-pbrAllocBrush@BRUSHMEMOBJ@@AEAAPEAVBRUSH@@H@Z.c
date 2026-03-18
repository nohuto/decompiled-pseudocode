/*
 * XREFs of ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C005F744
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00436E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C0043910 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C005F860 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C005F894 (--$AllocateIsolatedType@V-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C005F94C (--$AllocateIsolatedType@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C007E92C (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 */

struct BRUSH *__fastcall BRUSHMEMOBJ::pbrAllocBrush(BRUSHMEMOBJ *this, int a2)
{
  __int64 v3; // rax
  ULONG_PTR v4; // rbx

  *((_DWORD *)this + 12) = 0;
  if ( a2 )
    v3 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<49152,192>>();
  else
    v3 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>();
  v4 = v3;
  if ( v3 )
  {
    *(_QWORD *)(v3 + 88) = 0LL;
    *(_DWORD *)(v3 + 84) = 0;
    *(_DWORD *)(v3 + 96) = 0;
    *(_DWORD *)(v3 + 100) = -1;
    *(_DWORD *)(v3 + 144) = a2 != 0;
    *(_QWORD *)(v3 + 48) = v3 + 72;
    *(_DWORD *)(v3 + 44) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
    if ( !(unsigned __int8)AcquireReferenceCountedObjectHandle(2LL, v3, v3 + 136) )
    {
      FreeBrushMemory(v4);
      return 0LL;
    }
  }
  return (struct BRUSH *)v4;
}
