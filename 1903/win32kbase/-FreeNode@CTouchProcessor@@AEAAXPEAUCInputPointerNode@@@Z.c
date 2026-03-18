/*
 * XREFs of ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0167230
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0162064 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C0167110 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C0172044 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeNode(struct _KTHREAD **this, struct CInputPointerNode *a2, __int64 a3)
{
  struct CInputPointerNode *v4; // rax
  struct CInputPointerNode **v5; // rcx
  char *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rcx

  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((struct CInputPointerNode **)a2 + 31) != (struct CInputPointerNode *)((char *)a2 + 248) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((struct CInputPointerNode **)a2 + 29) != (struct CInputPointerNode *)((char *)a2 + 232) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = *(struct CInputPointerNode **)a2;
  if ( *(struct CInputPointerNode **)(*(_QWORD *)a2 + 8LL) != a2 )
    goto LABEL_16;
  v5 = (struct CInputPointerNode **)*((_QWORD *)a2 + 1);
  if ( *v5 != a2 )
    goto LABEL_16;
  *v5 = v4;
  *((_QWORD *)v4 + 1) = v5;
  v6 = (char *)a2 + 16;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v7 = *((_QWORD *)a2 + 2);
  if ( (struct CInputPointerNode *)v7 == (struct CInputPointerNode *)((char *)a2 + 16) )
    goto LABEL_13;
  if ( *(char **)(v7 + 8) != v6 || (v8 = (__int64 *)*((_QWORD *)a2 + 3), (char *)*v8 != v6) )
LABEL_16:
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
LABEL_13:
  if ( *((_DWORD *)a2 + 16) )
    CInputDest::SetEmpty((struct CInputPointerNode *)((char *)a2 + 64), v7, a3);
  Win32FreePool((__int64)a2);
}
