/*
 * XREFs of DwmAsyncOwnerChange @ 0x1C0036950
 * Callers:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C000FCB8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     zzzImeSetFutureOwner @ 0x1C0017114 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C0018FCC (zzzImeSetOwnerWindow.c)
 *     zzzImeCanDestroyDefIME @ 0x1C001C420 (zzzImeCanDestroyDefIME.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0034E48 (xxxDW_DestroyOwnedWindows.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C010A194 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall DwmAsyncOwnerChange(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD v8[16]; // [rsp+20h] [rbp-48h] BYREF

  v6 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v8, 0, 0x3CuLL);
    v8[0] = 3932180;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741878;
    *(_QWORD *)&v8[11] = a2;
    *(_QWORD *)&v8[13] = a3;
    EtwUpdateEvent(a2);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
