/*
 * XREFs of DestroyBaseWindow @ 0x1C00F3B70
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     HMDestroyObject @ 0x1C0065980 (HMDestroyObject.c)
 *     ?DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C00F3AD4 (-DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146880 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C0151230 (HandleBaseWindowDestruction.c)
 */

__int64 __fastcall DestroyBaseWindow(struct tagBWND *a1)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax

  EditionClearInputTransforms();
  DeleteMinWindowProperties(a1);
  v2 = (_QWORD **)((char *)a1 + 96);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    CTouchProcessor::UnreferenceMsgDataExternal(WPP_MAIN_CB.Queue.ListEntry.Blink, v3[2], 7LL);
    Win32FreePool((__int64)v3);
  }
  HandleBaseWindowDestruction(a1);
  return HMDestroyObject(a1);
}
