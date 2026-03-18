/*
 * XREFs of ??0CSpatialProcessor@@QEAA@XZ @ 0x1C005DDE0
 * Callers:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C005DE30 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C00A9718 (--0CMouseProcessor@@IEAA@XZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x1C00A6090 (ApiSetEditionGetExecutionEvironment.c)
 */

CSpatialProcessor *__fastcall CSpatialProcessor::CSpatialProcessor(CSpatialProcessor *this)
{
  int ExecutionEvironment; // eax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_DWORD *)this + 3) = 1;
  ExecutionEvironment = ApiSetEditionGetExecutionEvironment();
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 2) = ExecutionEvironment;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
