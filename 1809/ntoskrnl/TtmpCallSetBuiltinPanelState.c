/*
 * XREFs of TtmpCallSetBuiltinPanelState @ 0x14087EC34
 * Callers:
 *     TtmpPushTerminalDisplayStateOntoDevice @ 0x14087F5C8 (TtmpPushTerminalDisplayStateOntoDevice.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PoSessionBuiltinPanelState @ 0x1402E7240 (PoSessionBuiltinPanelState.c)
 *     TtmpStartCallout @ 0x14087F840 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x14087F92C (TtmpStopCallout.c)
 */

__int64 __fastcall TtmpCallSetBuiltinPanelState(int *a1, __int64 a2, unsigned int a3)
{
  int v4; // ebx
  __int64 result; // rax
  _BYTE v7[56]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    result = *(unsigned int *)(a2 + 72);
    if ( (result & 1) != 0 )
    {
      memset(v7, 0, 0x28uLL);
      TtmpStartCallout((unsigned int)v7, (_DWORD)a1, v4, 5, (__int64)PoSessionBuiltinPanelState, a3);
      PoSessionBuiltinPanelState(a3, *a1);
      return TtmpStopCallout(v7, 0LL);
    }
  }
  return result;
}
