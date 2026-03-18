/*
 * XREFs of ?GetArgonEmulationProcess@DXGSESSIONDATA@@QEAAPEAVDXGARGONEMULATIONPROCESS@@XZ @ 0x1C02418A4
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E04F8 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00EEAFC (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DeferredInitialize@DXGARGONEMULATIONPROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0228C04 (-DeferredInitialize@DXGARGONEMULATIONPROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 */

struct DXGARGONEMULATIONPROCESS *__fastcall DXGSESSIONDATA::GetArgonEmulationProcess(struct DXGPROCESS **this)
{
  char *v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)(this + 2347), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v2 = (char *)(this + 2352);
  v3 = DXGARGONEMULATIONPROCESS::DeferredInitialize((DXGARGONEMULATIONPROCESS *)(this + 2352), this[2329]);
  v7 = v3;
  if ( v3 < 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdWarning(v8);
    v2 = 0LL;
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return (struct DXGARGONEMULATIONPROCESS *)v2;
}
