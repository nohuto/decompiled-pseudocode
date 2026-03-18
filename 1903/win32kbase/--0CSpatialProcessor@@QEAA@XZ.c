/*
 * XREFs of ??0CSpatialProcessor@@QEAA@XZ @ 0x1C005CD7C
 * Callers:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C005CCC4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C005FCF0 (--0CMouseProcessor@@IEAA@XZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x1C00A6E74 (ApiSetEditionGetExecutionEvironment.c)
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
