/*
 * XREFs of ?FindEnabledHotKey@HotKeyProcessor@@AEAAJIIPEAV?$shared_ptr@UHOTKEY@@@std@@@Z @ 0x18014662C
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z @ 0x180145CDC (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A298 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ??4?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009406C (--4-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@.c)
 *     ?FindHotKey@HotKeyProcessor@@AEAAJIIPEAV?$shared_ptr@UHOTKEY@@@std@@@Z @ 0x18014676C (-FindHotKey@HotKeyProcessor@@AEAAJIIPEAV-$shared_ptr@UHOTKEY@@@std@@@Z.c)
 */

__int64 __fastcall HotKeyProcessor::FindEnabledHotKey(__int64 a1, int a2, int a3, _QWORD *a4)
{
  int HotKey; // eax
  unsigned int v7; // ebx
  const struct _TlgProvider_t *v8; // rcx
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+38h] [rbp-41h] BYREF
  std::_Ref_count_base *v12[2]; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  const char *v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+7Ch] [rbp+3h]
  int *v17; // [rsp+80h] [rbp+7h]
  int v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+8Ch] [rbp+13h]
  int *v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+9Ch] [rbp+23h]
  ULONG_PTR retaddr; // [rsp+D8h] [rbp+5Fh]

  v10 = a2;
  v11 = a3;
  HotKey = HotKeyProcessor::FindHotKey();
  v7 = HotKey;
  if ( HotKey >= 0 )
  {
    if ( *a4 && *(_BYTE *)(*a4 + 24LL) && (*(_BYTE *)(a1 + 80) & 1) != 0 )
    {
      *(_OWORD *)v12 = 0LL;
      std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::operator=(a4, (__int64 *)v12);
      if ( v12[1] )
        std::_Ref_count_base::_Decref(v12[1]);
      if ( (unsigned int)dword_1801DE450 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x20000uLL) )
      {
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v14 = "Registered HotKey was found, but was ignored because of KeyProcessingFlag_NoHotkeys flag.";
        v17 = &v10;
        v20 = &v11;
        v15 = 90;
        v18 = 4;
        v21 = 4;
        TlgWrite(v8, &unk_1801A1AD6, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  else
  {
    if ( HotKey == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0x10DuLL);
    FailFastWithHR(v7, retaddr, 0x10DuLL);
  }
  return v7;
}
