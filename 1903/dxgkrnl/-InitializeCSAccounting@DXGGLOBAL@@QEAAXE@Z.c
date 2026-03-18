/*
 * XREFs of ?InitializeCSAccounting@DXGGLOBAL@@QEAAXE@Z @ 0x1C0243F34
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C0240D00 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

void __fastcall DXGGLOBAL::InitializeCSAccounting(DXGGLOBAL *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 1696), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  if ( a2 != *((_BYTE *)this + 1736) )
  {
    if ( *((_DWORD *)this + 422) )
    {
      v7 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      *(_QWORD *)(v7 + 24) = *((unsigned __int8 *)this + 1736);
      WdLogEvent5_WdWarning(v7);
    }
    *((_BYTE *)this + 1736) = a2;
    memset((char *)this + 1744, 0, 0x49C30uLL);
    *((_QWORD *)this + 37985) = 0LL;
    *((_QWORD *)this + 37986) = 0LL;
    *((_QWORD *)this + 37987) = 0LL;
    *((_BYTE *)this + 303872) = 1;
    *((_DWORD *)this + 422) = 1;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
