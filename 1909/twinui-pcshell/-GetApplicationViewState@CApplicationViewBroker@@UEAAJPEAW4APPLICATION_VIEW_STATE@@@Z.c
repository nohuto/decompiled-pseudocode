/*
 * XREFs of ?GetApplicationViewState@CApplicationViewBroker@@UEAAJPEAW4APPLICATION_VIEW_STATE@@@Z @ 0x1803ADB00
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1803ADD24 (-_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z.c)
 */

__int64 __fastcall CApplicationViewBroker::GetApplicationViewState(
        CApplicationViewBroker *this,
        enum APPLICATION_VIEW_STATE *a2)
{
  __int64 result; // rax
  _DWORD v4[14]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)a2 = 0;
  result = CApplicationViewBroker::_GetAppViewDataForCallingProcess(this, (struct APPLICATION_VIEW_DATA *)v4);
  if ( (int)result >= 0 )
    *(_DWORD *)a2 = v4[0];
  return result;
}
