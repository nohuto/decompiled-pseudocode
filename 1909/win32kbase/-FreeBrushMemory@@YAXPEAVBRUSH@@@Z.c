/*
 * XREFs of ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C000E834
 * Callers:
 *     bDeleteBrush @ 0x1C000DDC0 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000ECA0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C000F054 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C008CDD0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C000EA38 (--$FreeIsolatedType@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C012022C (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall FreeBrushMemory(ULONG_PTR BugCheckParameter2)
{
  int v1; // edx

  v1 = *(_DWORD *)(BugCheckParameter2 + 144);
  if ( v1 )
  {
    if ( v1 != 1 )
      KeBugCheckEx(0x164u, 0x19uLL, BugCheckParameter2, 0LL, 0LL);
    if ( gpTypeIsolation[3] )
      NSInstrumentation::CTypeIsolation<49152,192>::Free(gpTypeIsolation[3], BugCheckParameter2);
  }
  else
  {
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>();
  }
}
