/*
 * XREFs of _GetClientRect @ 0x1C00BC9E8
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C001D674 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxSendSizeMessage @ 0x1C00BC968 (xxxSendSizeMessage.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01DEA84 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C022EB74 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     GetPrimaryMonitorRect @ 0x1C00BA848 (GetPrimaryMonitorRect.c)
 */

__m128i *__fastcall GetClientRect(__int64 a1, __m128i *a2)
{
  __int64 v3; // rdx
  __m128i *result; // rax
  __int32 v5; // edx
  __int32 v6; // ecx
  __m128i v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v3 + 31) & 0x20) == 0 || (*(_BYTE *)(v3 + 21) & 2) != 0 )
  {
    if ( (*(_WORD *)(v3 + 42) & 0x2FFF) == 0x29D )
    {
      result = GetPrimaryMonitorRect(&v7, v3);
      *a2 = *result;
    }
    else
    {
      *a2 = *(__m128i *)(v3 + 104);
      result = *(__m128i **)(a1 + 40);
      v5 = result[6].m128i_i32[3];
      v6 = result[6].m128i_i32[2];
      a2->m128i_i32[0] -= v6;
      a2->m128i_i32[2] -= v6;
      a2->m128i_i32[3] -= v5;
      a2->m128i_i32[1] -= v5;
    }
  }
  else
  {
    a2->m128i_i32[0] = 0;
    a2->m128i_i32[1] = 0;
    a2->m128i_i32[2] = *(_DWORD *)(gpsi + 2124LL);
    result = (__m128i *)gpsi;
    a2->m128i_i32[3] = *(_DWORD *)(gpsi + 2128LL);
  }
  return result;
}
