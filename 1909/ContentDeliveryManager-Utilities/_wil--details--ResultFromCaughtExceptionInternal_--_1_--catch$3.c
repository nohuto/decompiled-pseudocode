/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$3 @ 0x1800CC066
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180001C7C (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  wchar_t *v5; // rcx
  unsigned __int16 *v6; // rdx
  __int64 v7; // rbx

  **(_BYTE **)(a2 + 48) = 1;
  v5 = *(wchar_t **)(a2 + 32);
  if ( v5 && (v6 = *(unsigned __int16 **)(a2 + 40)) != 0LL )
  {
    v7 = *(_QWORD *)(a2 + 64);
    wil::GetFailureLogString(v5, v6, v7 + 24, a4);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 64);
  }
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(v7 + 28);
  return &loc_180002B24;
}
