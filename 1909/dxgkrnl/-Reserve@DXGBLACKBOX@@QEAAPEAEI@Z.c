/*
 * XREFs of ?Reserve@DXGBLACKBOX@@QEAAPEAEI@Z @ 0x1C0296F88
 * Callers:
 *     ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1C02967A0 (-LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

unsigned __int8 *__fastcall DXGBLACKBOX::Reserve(DXGBLACKBOX *this, int a2)
{
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_QWORD *)this + 6) )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGBLACKBOX *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v6 = *((_QWORD *)this + 6);
  v7 = *(unsigned int *)(v6 + 4);
  v8 = (unsigned int)(v7 + a2);
  if ( (unsigned int)v8 <= 0x1000 )
  {
    *(_DWORD *)(v6 + 4) = v8;
    v10 = v6 + v7;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v8, v5);
    *(_QWORD *)(v9 + 24) = 82LL;
    WdLogEvent5_WdError(v9);
    v10 = 0LL;
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return (unsigned __int8 *)v10;
}
