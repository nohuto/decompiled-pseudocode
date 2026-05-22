/*
 * XREFs of ?FindHotKey@HotKeyProcessor@@AEAAJIIPEAV?$shared_ptr@UHOTKEY@@@std@@@Z @ 0x1801467AC
 * Callers:
 *     ?FindEnabledHotKey@HotKeyProcessor@@AEAAJIIPEAV?$shared_ptr@UHOTKEY@@@std@@@Z @ 0x18014666C (-FindEnabledHotKey@HotKeyProcessor@@AEAAJIIPEAV-$shared_ptr@UHOTKEY@@@std@@@Z.c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJIII_N@Z @ 0x180146C00 (-RegisterHotKey@HotKeyProcessor@@UEAAJIII_N@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ??4?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180093E4C (--4-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@.c)
 *     ??4?$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C8EC4 (--4-$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall HotKeyProcessor::FindHotKey(__int64 a1, int a2, int a3, _QWORD *a4)
{
  __int64 *v5; // r9
  __int64 *v7; // rbx
  unsigned int v8; // r10d
  __int64 *v9; // rax
  __int64 v11; // [rsp+30h] [rbp-69h] BYREF
  std::_Ref_count_base *v12[2]; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  const char *v14; // [rsp+70h] [rbp-29h]
  __int64 v15; // [rsp+78h] [rbp-21h]
  int *v16; // [rsp+80h] [rbp-19h]
  __int64 v17; // [rsp+88h] [rbp-11h]
  int *v18; // [rsp+90h] [rbp-9h]
  __int64 v19; // [rsp+98h] [rbp-1h]
  std::_Ref_count_base **v20; // [rsp+A0h] [rbp+7h]
  __int64 v21; // [rsp+A8h] [rbp+Fh]
  std::_Ref_count_base **v22; // [rsp+B0h] [rbp+17h]
  __int64 v23; // [rsp+B8h] [rbp+1Fh]
  int v24; // [rsp+108h] [rbp+6Fh] BYREF
  int v25; // [rsp+110h] [rbp+77h] BYREF

  v25 = a3;
  v24 = a2;
  v5 = *(__int64 **)(a1 + 24);
  v7 = v5;
  v8 = (unsigned __int16)a2 | ((unsigned __int16)a3 << 16);
  v9 = (__int64 *)v5[1];
  if ( *((_BYTE *)v9 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v9 + 8) >= v8 )
    {
      v7 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  while ( !*((_BYTE *)v9 + 25) );
  if ( v7 == v5 || v8 < *((_DWORD *)v7 + 8) )
LABEL_8:
    v7 = *(__int64 **)(a1 + 24);
  if ( (unsigned int)dword_1801DE450 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x40000uLL) )
  {
    v15 = 21LL;
    v14 = "Searching for hotkey";
    v16 = &v25;
    v18 = &v24;
    v11 = *(_QWORD *)(a1 + 48);
    v20 = (std::_Ref_count_base **)&v11;
    v12[0] = *(std::_Ref_count_base **)(a1 + 32);
    v22 = v12;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 8LL;
    v23 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A2055, 0LL, 0LL, 7u, &pData);
    v5 = *(__int64 **)(a1 + 24);
  }
  if ( v7 == v5 )
  {
    *(_OWORD *)v12 = 0LL;
    std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::operator=(a4, (__int64 *)v12);
    if ( v12[1] )
      std::_Ref_count_base::_Decref(v12[1]);
  }
  else
  {
    std::shared_ptr<CustomCursorApplication>::operator=(a4, v7 + 5);
    if ( (unsigned int)dword_1801DE450 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x40000uLL) )
    {
      v15 = 24LL;
      v14 = "Registered hotkey found";
      v16 = &v25;
      v18 = &v24;
      v12[0] = *(std::_Ref_count_base **)(a1 + 48);
      v20 = v12;
      v11 = *(_QWORD *)(a1 + 32);
      v22 = (std::_Ref_count_base **)&v11;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 8LL;
      v23 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A214A, 0LL, 0LL, 7u, &pData);
    }
  }
  return 0LL;
}
