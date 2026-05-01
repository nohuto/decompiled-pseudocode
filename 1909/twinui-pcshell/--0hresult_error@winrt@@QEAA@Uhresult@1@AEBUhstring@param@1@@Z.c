/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1801FD834
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1801FD9BF (_winrt--to_hresult_--_1_--catch$17.c)
 *     _winrt::to_hresult_::_1_::catch$18 @ 0x1801FDA5F (_winrt--to_hresult_--_1_--catch$18.c)
 *     _winrt::to_hresult_::_1_::catch$19 @ 0x1801FDAFF (_winrt--to_hresult_--_1_--catch$19.c)
 * Callees:
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1801ED4E8 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, int a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = -1430532899;
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  winrt::hresult_error::originate();
  return a1;
}
