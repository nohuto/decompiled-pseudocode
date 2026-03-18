/*
 * XREFs of xxxSendUAHInitMenuMessage @ 0x1C00F939C
 * Callers:
 *     xxxMNCompute @ 0x1C00218EC (xxxMNCompute.c)
 *     xxxPaintMenuBar @ 0x1C00F912C (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 * Callees:
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
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
