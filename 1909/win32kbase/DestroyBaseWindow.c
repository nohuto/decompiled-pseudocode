/*
 * XREFs of DestroyBaseWindow @ 0x1C011D050
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     HMDestroyObject @ 0x1C0073400 (HMDestroyObject.c)
 *     ?DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C011CF8C (-DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0173630 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C0182190 (HandleBaseWindowDestruction.c)
 */

__int64 __fastcall DestroyBaseWindow(struct tagBWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD **v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  EditionClearInputTransforms();
  DeleteMinWindowProperties(a1, v2, v3);
  v4 = (_QWORD **)((char *)a1 + 96);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, v5[2], 7LL, v5);
    Win32FreePool((__int64)v5);
  }
  HandleBaseWindowDestruction(a1);
  return HMDestroyObject(a1, v7, v8);
}
