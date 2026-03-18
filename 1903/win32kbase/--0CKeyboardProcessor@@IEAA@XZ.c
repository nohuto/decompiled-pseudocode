/*
 * XREFs of ??0CKeyboardProcessor@@IEAA@XZ @ 0x1C005CD34
 * Callers:
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00A95E0 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x1C00A6E74 (ApiSetEditionGetExecutionEvironment.c)
 */

CKeyboardProcessor *__fastcall CKeyboardProcessor::CKeyboardProcessor(CKeyboardProcessor *this)
{
  int ExecutionEvironment; // eax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_DWORD *)this + 3) = 1;
  ExecutionEvironment = ApiSetEditionGetExecutionEvironment();
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 2) = ExecutionEvironment;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  return this;
}
