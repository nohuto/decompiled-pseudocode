/*
 * XREFs of _GetClientRect @ 0x1C00E9968
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0036384 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxSendSizeMessage @ 0x1C00E98E8 (xxxSendSizeMessage.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01BBEE4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0205A4C (xxxMNUpdateShownMenu.c)
 * Callees:
 *     GetPrimaryMonitorRect @ 0x1C00650A4 (GetPrimaryMonitorRect.c)
 */

_OWORD *__fastcall GetClientRect(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _OWORD *result; // rax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v3 + 31) & 0x20) == 0 || (*(_BYTE *)(v3 + 21) & 2) != 0 )
  {
    if ( (*(_WORD *)(v3 + 42) & 0x3FFF) == 0x29D )
    {
      result = GetPrimaryMonitorRect(&v8);
      *(_OWORD *)a2 = *result;
    }
    else
    {
      *(_OWORD *)a2 = *(_OWORD *)(v3 + 104);
      result = *(_OWORD **)(a1 + 40);
      v5 = *((_DWORD *)result + 26);
      v6 = -*((_DWORD *)result + 27);
      *(_DWORD *)(a2 + 12) -= *((_DWORD *)result + 27);
      v7 = -v5;
      *(_DWORD *)a2 += v7;
      *(_DWORD *)(a2 + 8) += v7;
      *(_DWORD *)(a2 + 4) += v6;
    }
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(gpsi + 2124LL);
    result = (_OWORD *)gpsi;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(gpsi + 2128LL);
  }
  return result;
}
