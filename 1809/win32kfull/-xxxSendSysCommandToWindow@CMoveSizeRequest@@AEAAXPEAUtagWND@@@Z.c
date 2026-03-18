/*
 * XREFs of ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C02271A0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C006B3D8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

void __fastcall CMoveSizeRequest::xxxSendSysCommandToWindow(CMoveSizeRequest *this, struct tagWND *a2)
{
  CMoveSizeRequest *v2; // rbx
  unsigned __int64 v4; // r9

  v2 = this;
  zzzSetCursor(*(struct tagCURSOR **)&gasyscur[276 * dword_1C02D9D60[*(int *)this] + 4]);
  LODWORD(v2) = dword_1C02D9D38[*(int *)v2];
  SetOrClrWF(1, (__int64)a2, 0xD920u, 0);
  v4 = *(unsigned __int16 *)(gptiCurrent + 764LL) | ((unsigned __int64)*(unsigned __int16 *)(gptiCurrent + 768LL) << 16);
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout((__int64 *)a2, 0x112u, (unsigned int)v2, v4, 0, 0, 0LL, 1, 0);
  SetOrClrWF(0, (__int64)a2, 0xD920u, 1);
}
