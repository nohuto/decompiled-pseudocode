/*
 * XREFs of _TlgEnableCallback @ 0x1406D0970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __stdcall TlgEnableCallback(
        LPCGUID pSourceId,
        ULONG callbackType,
        UCHAR level,
        ULONGLONG keywordAny,
        ULONGLONG keywordAll,
        PEVENT_FILTER_DESCRIPTOR pFilterData,
        PVOID pCallbackContext)
{
  void (__fastcall *v7)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD); // rax
  int v8; // eax

  if ( pCallbackContext )
  {
    if ( callbackType )
    {
      if ( callbackType == 1 )
      {
        if ( level )
          v8 = level + 1;
        else
          v8 = 256;
        *(_DWORD *)pCallbackContext = v8;
        *((_QWORD *)pCallbackContext + 2) = keywordAny;
        *((_QWORD *)pCallbackContext + 3) = keywordAll;
      }
    }
    else
    {
      *(_DWORD *)pCallbackContext = 0;
    }
    v7 = (void (__fastcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD))*((_QWORD *)pCallbackContext + 5);
    if ( v7 )
      v7(pSourceId, callbackType, level, keywordAny, keywordAll, pFilterData, *((_QWORD *)pCallbackContext + 6));
  }
}
