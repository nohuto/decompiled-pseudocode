/*
 * XREFs of ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C0133C0C
 * Callers:
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C013674C (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::AssignPointerCaptureData(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        struct CPointerMsgData *a3)
{
  struct CInputPointerNode *v4; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  _WORD *v7; // rax

  v4 = a2;
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_QWORD *)a3 + 5) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v5 = (_QWORD *)*((unsigned int *)a3 + 9);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    if ( ((unsigned __int8)v5 & 8) != 0 )
      goto LABEL_14;
    v6 = *((_QWORD *)v4 + 36);
    if ( (struct CInputPointerNode *)v6 == (struct CInputPointerNode *)((char *)v4 + 288) )
      v6 = 0LL;
    if ( ((unsigned __int8)v5 & 2) != 0
      || !v6
      || (*(_DWORD *)(v6 + 36) & 1) != 0
      || (v7 = *(_WORD **)(v6 + 40)) == 0LL
      && (MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3), (v7 = *(_WORD **)(v6 + 40)) == 0LL) )
    {
LABEL_14:
      v7 = Win32AllocPoolZInit(0x1B8uLL, 0x43707355u);
      if ( !v7 )
        return;
      v7[10] = *((_WORD *)a3 + 8);
      *((_DWORD *)v7 + 6) = *((_DWORD *)a3 + 7);
      v5 = (_QWORD *)((char *)v4 + 272);
      a2 = (struct CInputPointerNode *)*((_QWORD *)v4 + 34);
      if ( *((struct CInputPointerNode **)a2 + 1) != (struct CInputPointerNode *)((char *)v4 + 272) )
        __fastfail(3u);
      *(_QWORD *)v7 = a2;
      *((_QWORD *)v7 + 1) = v5;
      *((_QWORD *)a2 + 1) = v7;
      *v5 = v7;
    }
    *((_QWORD *)a3 + 5) = v7;
    if ( (*((_DWORD *)v7 + 4))++ == -1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
  }
}
