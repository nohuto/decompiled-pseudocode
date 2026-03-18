/*
 * XREFs of ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C013674C
 * Callers:
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01462B8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C0133C0C (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0138450 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01428E0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall CTouchProcessor::CreateAndReferenceMsgData(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6)
{
  int v7; // r12d
  unsigned __int16 v8; // r14
  int v10; // esi
  struct CInputPointerNode *NodeById; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx

  v7 = a3;
  v8 = a2;
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v10 = 0;
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)this, v8, 0, 0);
  if ( !NodeById )
    return 0LL;
  v12 = Win32AllocPoolZInit(0x40uLL, 0x64707355u);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  *((_WORD *)v12 + 8) = v8;
  *((_DWORD *)v12 + 7) = v7;
  *((_DWORD *)v12 + 8) = a4;
  LOBYTE(v10) = (a5 & 0x40004) == 0;
  *((_DWORD *)v12 + 9) = *((_DWORD *)v12 + 9) & 0xFFFFFFE0 | (8 * (a6 & 1)) | v10 & 0xFFFFFFE1 | ((a5 & 0x2000 | ((a5 & 0x10000 | (a5 >> 1) & 0x20000) >> 6)) >> 9);
  CTouchProcessor::AssignPointerCaptureData(this, NodeById, (struct CPointerMsgData *)v12);
  v14 = (_QWORD *)((char *)NodeById + 288);
  v15 = *((_QWORD *)NodeById + 36);
  if ( *(struct CInputPointerNode **)(v15 + 8) != (struct CInputPointerNode *)((char *)NodeById + 288) )
    __fastfail(3u);
  *v13 = v15;
  v13[1] = v14;
  *(_QWORD *)(v15 + 8) = v13;
  *v14 = v13;
  CTouchProcessor::ReferenceMsgData(this, v13, 1LL);
  return v13;
}
