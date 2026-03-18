/*
 * XREFs of ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C023EE28
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002E7F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 */

void __fastcall CMoveSizeRequest::xxxSendSysCommandToWindow(
        CMoveSizeRequest *this,
        struct tagWND *a2,
        __int64 a3,
        __int64 a4)
{
  CMoveSizeRequest *v4; // rbx
  __int64 v6; // r8
  struct _LARGE_STRING *v7; // r9

  v4 = this;
  v6 = 69LL * (unsigned int)dword_1C02EC580[*(int *)this];
  zzzSetCursor((struct tagCURSOR *)gasyscur[v6 + 1], (__int64)a2, v6 * 8, a4);
  LODWORD(v4) = dword_1C02EC558[*(int *)v4];
  SetOrClrWF(1, (__int64)a2, 0xD920u, 0);
  v7 = (struct _LARGE_STRING *)(*(unsigned __int16 *)(gptiCurrent + 756LL) | ((unsigned __int64)*(unsigned __int16 *)(gptiCurrent + 760LL) << 16));
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout((__int64 *)a2, 0x112u, (HWND)(unsigned int)v4, v7, 0, 0, 0LL, 1u, 0);
  SetOrClrWF(0, (__int64)a2, 0xD920u, 1);
}
