/*
 * XREFs of ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18003E7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ExecutionModel::_ResourceInfo *__fastcall ExecutionModel::_ResourceInfo::_ResourceInfo(
        ExecutionModel::_ResourceInfo *this)
{
  ExecutionModel::_ResourceInfo *result; // rax

  *(_DWORD *)this = -1;
  *((_QWORD *)this + 1) = 0LL;
  *((_WORD *)this + 10) = 0;
  result = this;
  *((_DWORD *)this + 4) = 101;
  return result;
}
