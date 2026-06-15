/*
 * XREFs of ??$make_unique@VSpatialBlock@@$$V$0A@@std@@YA?AV?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@0@XZ @ 0x14005B060
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14005C838 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGI.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14005CC34 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ??0_unnamed_type__changeSet_@SpatialBlock@@QEAA@XZ @ 0x140014F80 (--0_unnamed_type__changeSet_@SpatialBlock@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140015704 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::make_unique<SpatialBlock,,0>(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  SpatialBlock::_unnamed_type__changeSet_ *v4; // rsi
  __int64 v5; // rbp

  v2 = operator new(0x38uLL);
  v3 = v2;
  if ( v2 )
  {
    *v2 = 0LL;
    v4 = (SpatialBlock::_unnamed_type__changeSet_ *)(v2 + 1);
    v5 = 2LL;
    do
    {
      SpatialBlock::_unnamed_type__changeSet_::_unnamed_type__changeSet_(v4);
      v4 = (SpatialBlock::_unnamed_type__changeSet_ *)((char *)v4 + 24);
      --v5;
    }
    while ( v5 );
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
