/*
 * XREFs of ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x1800072C4
 * Callers:
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x1800071A4 (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000731C (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::ExternalResourceSet(ExecutionModel::ExternalResourceSet *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  ExecutionModel::BaseResourceSet::BaseResourceSet(this);
  *(_QWORD *)(v1 + 1296) = 0LL;
  *(_QWORD *)(v1 + 1304) = 0LL;
  *(_QWORD *)v1 = &ExecutionModel::ExternalResourceSet::`vftable';
  *(_QWORD *)(v1 + 1312) = v1 + 1312;
  *(_QWORD *)(v1 + 1320) = v1 + 1312;
  *(_QWORD *)(v1 + 1328) = 0LL;
  result = v1;
  *(_QWORD *)(v1 + 1336) = 0LL;
  *(_QWORD *)(v1 + 1344) = 0LL;
  *(_DWORD *)(v1 + 1352) = 0;
  return result;
}
