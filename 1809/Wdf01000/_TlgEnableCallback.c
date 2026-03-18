/*
 * XREFs of _TlgEnableCallback @ 0x1C00C4010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TlgEnableCallback(
        const _GUID *pSourceId,
        __int64 callbackType,
        __int64 level,
        unsigned __int64 keywordAny,
        unsigned __int64 keywordAll,
        _EVENT_FILTER_DESCRIPTOR *pFilterData,
        _QWORD *pCallbackContext)
{
  void (__fastcall *v7)(const _GUID *, __int64, __int64, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, _QWORD); // rax
  int v8; // eax

  if ( pCallbackContext )
  {
    if ( (_DWORD)callbackType )
    {
      if ( (_DWORD)callbackType == 1 )
      {
        if ( (_BYTE)level )
          v8 = (unsigned __int8)level + 1;
        else
          v8 = 256;
        *(_DWORD *)pCallbackContext = v8;
        pCallbackContext[2] = keywordAny;
        pCallbackContext[3] = keywordAll;
      }
    }
    else
    {
      *(_DWORD *)pCallbackContext = 0;
    }
    v7 = (void (__fastcall *)(const _GUID *, __int64, __int64, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, _QWORD))pCallbackContext[5];
    if ( v7 )
      v7(pSourceId, callbackType, level, keywordAny, keywordAll, pFilterData, pCallbackContext[6]);
  }
}
