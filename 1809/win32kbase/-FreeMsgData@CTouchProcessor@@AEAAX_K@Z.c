/*
 * XREFs of ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C0138DE8
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146784 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0138F08 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z @ 0x1C0138FB4 (-FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C0142B4C (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeMsgData(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx
  __int16 v6; // r14
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rdi

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *(_DWORD *)(a2 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v5 = *(_QWORD **)a2;
  v6 = *(_WORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v8 = *(_QWORD **)(a2 + 8), *v8 != a2) )
    __fastfail(3u);
  *v8 = v5;
  v5[1] = v8;
  Win32FreePool(a2);
  if ( v7 )
  {
    v12 = *(_DWORD *)(v7 + 16);
    if ( v12 == 1 )
    {
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v7 + 32));
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v7 + 232));
      v12 = *(_DWORD *)(v7 + 16);
    }
    v13 = v12 - 1;
    *(_DWORD *)(v7 + 16) = v13;
    if ( !v13 )
      CTouchProcessor::FreePointerCaptureData((CTouchProcessor *)this, (struct CPointerCaptureData *)v7);
  }
  v14 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
    v15 = v5 - 36;
    if ( *((_WORD *)v5 - 128) != v6 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
      v14 = (_QWORD *)*v5;
    }
    if ( v14 != v5 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( (_QWORD *)v15[34] != v15 + 34 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    if ( *((_DWORD *)v15 + 9) == 3 )
      CTouchProcessor::FreeNode((CTouchProcessor *)this, (struct CInputPointerNode *)(v5 - 36));
  }
}
