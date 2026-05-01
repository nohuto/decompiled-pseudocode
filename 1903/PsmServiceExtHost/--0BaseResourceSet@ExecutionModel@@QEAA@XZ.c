/*
 * XREFs of ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000731C
 * Callers:
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x1800072C4 (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800439DC (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180043AA4 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

ExecutionModel::BaseResourceSet *__fastcall ExecutionModel::BaseResourceSet::BaseResourceSet(
        ExecutionModel::BaseResourceSet *this)
{
  __int64 v1; // rdx
  char *v2; // rax
  ExecutionModel::BaseResourceSet *result; // rax

  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  *((_DWORD *)this + 8) = -1;
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  v1 = 50LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 9) = 1;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 7) = 0LL;
  v2 = (char *)this + 72;
  *((_QWORD *)this + 8) = 0LL;
  do
  {
    *(_DWORD *)v2 = -1;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_DWORD *)v2 + 4) = 101;
    *((_WORD *)v2 + 10) = 0;
    v2 += 24;
    --v1;
  }
  while ( v1 );
  *((_QWORD *)this + 159) = 0LL;
  result = this;
  *((_QWORD *)this + 160) = 0LL;
  *((_DWORD *)this + 322) = -1;
  return result;
}
