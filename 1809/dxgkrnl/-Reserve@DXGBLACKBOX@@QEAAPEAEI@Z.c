/*
 * XREFs of ?Reserve@DXGBLACKBOX@@QEAAPEAEI@Z @ 0x1C025FFA0
 * Callers:
 *     ?LogDisplayState@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C025F9C8 (-LogDisplayState@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

unsigned __int8 *__fastcall DXGBLACKBOX::Reserve(DXGBLACKBOX *this, int a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_QWORD *)this + 6) )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGBLACKBOX *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v5 = *((_QWORD *)this + 6);
  v6 = *(unsigned int *)(v5 + 4);
  if ( (unsigned int)(v6 + a2) <= 0x1000 )
  {
    *(_DWORD *)(v5 + 4) = v6 + a2;
    v8 = v5 + v6;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 82LL;
    WdLogEvent5_WdError(v7);
    v8 = 0LL;
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return (unsigned __int8 *)v8;
}
