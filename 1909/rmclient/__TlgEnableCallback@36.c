/*
 * XREFs of __TlgEnableCallback@36 @ 0x10006E00
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

void __stdcall _TlgEnableCallback(
        LPCGUID pSourceId,
        ULONG callbackType,
        UCHAR level,
        ULONGLONG keywordAny,
        ULONGLONG keywordAll,
        PEVENT_FILTER_DESCRIPTOR pFilterData,
        PVOID pCallbackContext)
{
  int v7; // ecx
  int v8; // ecx
  void (__thiscall *v9)(_DWORD, LPCGUID, ULONG, _DWORD, _DWORD, _DWORD, int, _DWORD, PEVENT_FILTER_DESCRIPTOR, _DWORD); // esi

  if ( pCallbackContext )
  {
    if ( callbackType )
    {
      if ( callbackType == 1 )
      {
        if ( level )
          v7 = level + 1;
        else
          v7 = 256;
        *(_DWORD *)pCallbackContext = v7;
        *((_QWORD *)pCallbackContext + 1) = keywordAny;
        v8 = keywordAll;
        *((_QWORD *)pCallbackContext + 2) = keywordAll;
        goto LABEL_7;
      }
    }
    else
    {
      *(_DWORD *)pCallbackContext = 0;
    }
    v8 = keywordAll;
LABEL_7:
    v9 = (void (__thiscall *)(_DWORD, LPCGUID, ULONG, _DWORD, _DWORD, _DWORD, int, _DWORD, PEVENT_FILTER_DESCRIPTOR, _DWORD))*((_DWORD *)pCallbackContext + 8);
    if ( v9 )
      v9(
        v9,
        pSourceId,
        callbackType,
        level,
        keywordAny,
        HIDWORD(keywordAny),
        v8,
        HIDWORD(keywordAll),
        pFilterData,
        *((_DWORD *)pCallbackContext + 9));
  }
}
