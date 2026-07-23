/*
 * XREFs of MiRecheckCombineVm @ 0x14013EFF4
 * Callers:
 *     MiConvertStandbyToProto @ 0x14013EB50 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiGetTopLevelPfn @ 0x140083810 (MiGetTopLevelPfn.c)
 *     MiCombineCandidate @ 0x1400B2610 (MiCombineCandidate.c)
 */

_BOOL8 __fastcall MiRecheckCombineVm(__int64 *a1, char a2, __int64 a3, char *a4)
{
  int v6; // eax
  int v7; // edi
  char *AnyMultiplexedVm; // rax
  __int64 TopLevelPfn; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx

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
    v11 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    v12 = (*(_QWORD *)(TopLevelPfn + 24) >> 62) & 1LL;
    if ( TopLevelPfn != a3 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v7 != 1 )
      return !(_DWORD)v12 && a4 == (char *)(v11 + 3008);
    AnyMultiplexedVm = (char *)(v11 + 1280);
  }
  return a4 == AnyMultiplexedVm;
}
