/*
 * XREFs of _GetClientRect @ 0x1C0011124
 * Callers:
 *     xxxSendSizeMessage @ 0x1C0011098 (xxxSendSizeMessage.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4800 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0246C60 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     GetPrimaryMonitorRect @ 0x1C001161C (GetPrimaryMonitorRect.c)
 */

__int64 __fastcall GetClientRect(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  int v5; // edx
  int v6; // ecx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v3 + 31) & 0x20) == 0 || (*(_BYTE *)(v3 + 21) & 2) != 0 )
  {
    if ( (*(_WORD *)(v3 + 42) & 0x3FFF) == 0x29D )
    {
      result = GetPrimaryMonitorRect(v7);
      *(_OWORD *)a2 = *(_OWORD *)result;
    }
    else
    {
      *(_OWORD *)a2 = *(_OWORD *)(v3 + 104);
      result = *(_QWORD *)(a1 + 40);
      v5 = *(_DWORD *)(result + 108);
      v6 = *(_DWORD *)(result + 104);
      *(_DWORD *)a2 -= v6;
      *(_DWORD *)(a2 + 8) -= v6;
      *(_DWORD *)(a2 + 12) -= v5;
      *(_DWORD *)(a2 + 4) -= v5;
    }
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(gpsi + 2124LL);
    result = gpsi;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(gpsi + 2128LL);
  }
  return result;
}
