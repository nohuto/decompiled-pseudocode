/*
 * XREFs of NullifyLookasideRef @ 0x1C02105C4
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     MNFlushDestroyedPopups @ 0x1C0210930 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C0210C40 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C0211324 (xxxMNStartMenuState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NullifyLookasideRef(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  v1 = *(_DWORD *)(a1 + 8) == 0;
  *(_BYTE *)(a1 + 12) = 1;
  if ( v1 )
    return Win32FreeToPagedLookasideList(gpStackRefLookAside, a1);
  return result;
}
