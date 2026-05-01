/*
 * XREFs of ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x18003D288
 * Callers:
 *     ?RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z @ 0x18003D100 (-RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180043FAC (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::InitializeResource(
        ExecutionModel::BaseResourceSet *this,
        const struct ExecutionModel::_ResourceInfo *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = *(int *)a2 + 3LL;
  if ( *((_DWORD *)this + 6 * v3) != -1 )
    return 2147943642LL;
  *(_OWORD *)((char *)this + 24 * v3) = *(_OWORD *)a2;
  *((_QWORD *)this + 3 * v3 + 2) = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 1) == 0xFFFFFFFFLL )
  {
    v4 = *((_QWORD *)this + 159);
    _bittestandset64(&v4, *(int *)a2);
    *((_QWORD *)this + 159) = v4;
  }
  return 0LL;
}
