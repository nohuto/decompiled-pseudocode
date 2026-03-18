/*
 * XREFs of MNCheckButtonDownState @ 0x1C0222CDC
 * Callers:
 *     xxxCallHandleMenuMessages @ 0x1C02230F0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     UnlockMFMWFPWindow @ 0x1C0223004 (UnlockMFMWFPWindow.c)
 */

__int64 __fastcall MNCheckButtonDownState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // cf
  __int64 result; // rax

  v5 = GetKeyState(*(_DWORD *)(a1 + 76), a2, a3, a4) < 0;
  result = *(_DWORD *)(a1 + 8) & 0xFFFFFFF7;
  *(_DWORD *)(a1 + 8) = result | (v5 ? 8 : 0);
  if ( !(result & 8 | (v5 ? 8 : 0)) )
  {
    *(_DWORD *)(a1 + 8) = result & 0xFFFFDF7F | (v5 ? 8 : 0);
    return UnlockMFMWFPWindow(a1 + 64);
  }
  return result;
}
