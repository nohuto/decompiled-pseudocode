/*
 * XREFs of DestroyBaseWindow @ 0x1C00BC1B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     HMDestroyObject @ 0x1C005F1A0 (HMDestroyObject.c)
 *     ?DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C00BC128 (-DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E2D0 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C012E530 (HandleBaseWindowDestruction.c)
 */

__int64 __fastcall DestroyBaseWindow(struct tagBWND *a1)
{
  __int64 v2; // rdx
  _QWORD **v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax

  EditionClearInputTransforms();
  DeleteMinWindowProperties(a1, v2);
  v3 = (_QWORD **)((char *)a1 + 96);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, v4[2], 7LL, v4);
    Win32FreePool((__int64)v4);
  }
  HandleBaseWindowDestruction(a1);
  return HMDestroyObject(a1);
}
