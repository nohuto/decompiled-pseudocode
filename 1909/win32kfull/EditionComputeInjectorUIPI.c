/*
 * XREFs of EditionComputeInjectorUIPI @ 0x1C01088D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionComputeInjectorUIPI(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  EnterCrit(0LL, 1LL);
  v4 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v3, v2) + 872);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(PsGetCurrentProcessWin32Process(v5, v4) + 12) >> 31;
  return UserSessionSwitchLeaveCrit(v6);
}
