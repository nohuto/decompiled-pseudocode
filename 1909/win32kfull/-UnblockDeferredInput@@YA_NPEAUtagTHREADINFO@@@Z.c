/*
 * XREFs of ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C000AC80
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@W4tagINPUTSERVICE_STATE@@@Z @ 0x1C00051EC (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@W4tagINPUTSERVICE_STATE@@@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002BA90 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z @ 0x1C00FCD8C (-GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z.c)
 */

char __fastcall UnblockDeferredInput(struct tagTHREADINFO *a1)
{
  char v1; // si
  __int64 v4; // rbx
  __int64 *v5; // rbx
  int v6; // eax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( (*((_DWORD *)a1 + 306) & 0x10000000) != 0 )
  {
    v4 = *((_QWORD *)a1 + 53);
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v7, v4);
    v5 = *(__int64 **)(v4 + 24);
    if ( !v5 )
      goto LABEL_10;
    do
    {
      v6 = *((_DWORD *)v5 + 25);
      if ( ((v6 & 0x10000) != 0 || (v6 & 0x20000) != 0) && (struct tagTHREADINFO *)v5[13] == a1 )
        break;
      v5 = (__int64 *)*v5;
    }
    while ( v5 );
    if ( !v5 || KeyboardInputTelemetry::GetKeyboardInputLatency(v5[16]) > 0x2710 )
    {
LABEL_10:
      v1 = 1;
      if ( v5 )
        HandleDeferredInput(a1, 4);
      else
        *((_DWORD *)a1 + 306) &= ~0x10000000u;
    }
  }
  return v1;
}
