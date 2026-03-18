/*
 * XREFs of DwmAsyncChildUnlink @ 0x1C001B8A8
 * Callers:
 *     UnlinkWindow @ 0x1C001B6E4 (UnlinkWindow.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00C7A58 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall DwmAsyncChildUnlink(PVOID Object, __int64 a2, __int64 a3)
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
    v8[10] = 1073741843;
    *(_QWORD *)&v8[11] = a2;
    *(_QWORD *)&v8[13] = a3;
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
