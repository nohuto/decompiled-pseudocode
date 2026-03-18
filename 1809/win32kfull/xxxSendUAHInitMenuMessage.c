/*
 * XREFs of xxxSendUAHInitMenuMessage @ 0x1C00A8448
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00A6E80 (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C00AB240 (xxxMNCompute.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHInitMenuMessage(ULONG_PTR a1, __int64 a2)
{
  unsigned int v3; // r8d

  v3 = xxxSendMessage(a1);
  if ( v3 )
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) |= 0x800u;
  else
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) &= ~0x800u;
  return v3;
}
