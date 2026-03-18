/*
 * XREFs of NullifyLookasideRef @ 0x1C01F98FC
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     MNFlushDestroyedPopups @ 0x1C01F9C90 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C01F9F80 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01FA6E4 (xxxMNStartMenuState.c)
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
