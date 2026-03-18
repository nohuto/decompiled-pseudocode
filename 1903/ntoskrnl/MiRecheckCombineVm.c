/*
 * XREFs of MiRecheckCombineVm @ 0x1401411C8
 * Callers:
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiGetTopLevelPfn @ 0x1400E2680 (MiGetTopLevelPfn.c)
 *     MiCombineCandidate @ 0x1401400F0 (MiCombineCandidate.c)
 */

_BOOL8 __fastcall MiRecheckCombineVm(__int64 *a1, char a2, __int64 a3, char *a4)
{
  int v6; // eax
  int v7; // edi
  __int64 TopLevelPfn; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  char *AnyMultiplexedVm; // rax

  v6 = MiCombineCandidate(a1, a2, a3);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  if ( v6 == 2 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  }
  else
  {
    TopLevelPfn = MiGetTopLevelPfn(a3);
    v9 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    v10 = (*(_QWORD *)(TopLevelPfn + 24) >> 62) & 1LL;
    if ( TopLevelPfn != a3 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v7 != 1 )
      return !(_DWORD)v10 && a4 == (char *)(v9 + 256);
    AnyMultiplexedVm = (char *)(v9 + 1280);
  }
  return a4 == AnyMultiplexedVm;
}
