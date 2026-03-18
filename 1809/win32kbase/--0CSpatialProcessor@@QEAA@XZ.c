/*
 * XREFs of ??0CSpatialProcessor@@QEAA@XZ @ 0x1C00065BC
 * Callers:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C0005FE0 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C00064AC (--0CTouchProcessor@@QEAA@XZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x1C0094930 (ApiSetEditionGetExecutionEvironment.c)
 */

CSpatialProcessor *__fastcall CSpatialProcessor::CSpatialProcessor(CSpatialProcessor *this)
{
  int ExecutionEvironment; // eax

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  ExecutionEvironment = ApiSetEditionGetExecutionEvironment();
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = ExecutionEvironment;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
