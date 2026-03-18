/*
 * XREFs of MNCheckButtonDownState @ 0x1C01E5288
 * Callers:
 *     xxxCallHandleMenuMessages @ 0x1C01E5680 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     UnlockMFMWFPWindow @ 0x1C01E55A8 (UnlockMFMWFPWindow.c)
 */

__int64 __fastcall MNCheckButtonDownState(__int64 a1, __int64 a2)
{
  bool v3; // cf
  __int64 result; // rax

  v3 = (GetKeyState(*(_DWORD *)(a1 + 76), a2) & 0x8000u) != 0LL;
  result = *(_DWORD *)(a1 + 8) & 0xFFFFFFF7;
  *(_DWORD *)(a1 + 8) = result | (v3 ? 8 : 0);
  if ( !(result & 8 | (v3 ? 8 : 0)) )
  {
    *(_DWORD *)(a1 + 8) = result & 0xFFFFDF7F | (v3 ? 8 : 0);
    return UnlockMFMWFPWindow(a1 + 64);
  }
  return result;
}
