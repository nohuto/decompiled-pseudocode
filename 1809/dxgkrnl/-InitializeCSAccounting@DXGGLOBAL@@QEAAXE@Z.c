/*
 * XREFs of ?InitializeCSAccounting@DXGGLOBAL@@QEAAXE@Z @ 0x1C020FF0C
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C020DD30 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?MarkProcessCSStartTimes@DXGGLOBAL@@QEAAXXZ @ 0x1C0210190 (-MarkProcessCSStartTimes@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::InitializeCSAccounting(DXGGLOBAL *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 1736), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  if ( a2 != *((_BYTE *)this + 1776) )
  {
    if ( *((_DWORD *)this + 430) )
    {
      v7 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      *(_QWORD *)(v7 + 24) = *((unsigned __int8 *)this + 1776);
      WdLogEvent5_WdWarning(v7);
    }
    *((_DWORD *)this + 446) = 0;
    *((_BYTE *)this + 1776) = a2;
    memset((char *)this + 1800, 0, 0x4800uLL);
    *((_BYTE *)this + 20232) = 1;
    *((_DWORD *)this + 430) = 1;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
    DXGGLOBAL::MarkProcessCSStartTimes(this);
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
