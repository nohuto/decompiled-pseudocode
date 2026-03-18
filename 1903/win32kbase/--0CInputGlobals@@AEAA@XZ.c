/*
 * XREFs of ??0CInputGlobals@@AEAA@XZ @ 0x1C0060988
 * Callers:
 *     InitializeInputComponents @ 0x1C0060348 (InitializeInputComponents.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 *     ApiSetGetUndimSourceInputTypeMask @ 0x1C019F638 (ApiSetGetUndimSourceInputTypeMask.c)
 *     ApiSetGetWakeSourceInputTypeMask @ 0x1C019F7A8 (ApiSetGetWakeSourceInputTypeMask.c)
 */

CInputGlobals *__fastcall CInputGlobals::CInputGlobals(CInputGlobals *this)
{
  *((_QWORD *)this + 2) = 0LL;
  memset((char *)this + 24, 0, 0x38uLL);
  *((_DWORD *)this + 20) = 0;
  *((_WORD *)this + 42) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 48) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 98) = 0;
  *((_DWORD *)this + 25) = 30;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  if ( (int)IsGetWakeSourceInputTypeMaskSupported() >= 0 )
    *((_DWORD *)this + 25) = ApiSetGetWakeSourceInputTypeMask();
  if ( (int)IsGetUndimSourceInputTypeMaskSupported() >= 0 )
    *((_DWORD *)this + 26) = ApiSetGetUndimSourceInputTypeMask();
  return this;
}
