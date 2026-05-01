/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@QEAA@XZ @ 0x18028575C
 * Callers:
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x180287434 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 * Callees:
 *     memset_0 @ 0x18008A73A (memset_0.c)
 */

__int64 __fastcall std::_Ref_count_obj<ConnectedStandbyHelper>::_Ref_count_obj<ConnectedStandbyHelper>(__int64 a1)
{
  __int64 v2; // rcx
  int UniqueContext; // eax
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<ConnectedStandbyHelper>::`vftable';
  memset_0((void *)(a1 + 16), 0, 0x38uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  UniqueContext = SHTaskPoolGetUniqueContext(v2);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 32) = UniqueContext;
  result = a1;
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
