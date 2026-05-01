/*
 * XREFs of ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x180002BE8
 * Callers:
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x180002AD4 (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18001D560 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::ExternalResourceSet *__fastcall ExecutionModel::ExternalResourceSet::ExternalResourceSet(
        ExecutionModel::ExternalResourceSet *this)
{
  ExecutionModel::ExternalResourceSet *result; // rax

  ExecutionModel::BaseResourceSet::BaseResourceSet(this);
  *(_QWORD *)this = &ExecutionModel::ExternalResourceSet::`vftable';
  *((_QWORD *)this + 177) = 0LL;
  *((_QWORD *)this + 178) = 0LL;
  *((_QWORD *)this + 179) = (char *)this + 1432;
  *((_QWORD *)this + 180) = (char *)this + 1432;
  *((_QWORD *)this + 181) = 0LL;
  result = this;
  *((_QWORD *)this + 182) = 0LL;
  *((_QWORD *)this + 183) = 0LL;
  *((_DWORD *)this + 368) = 0;
  return result;
}
