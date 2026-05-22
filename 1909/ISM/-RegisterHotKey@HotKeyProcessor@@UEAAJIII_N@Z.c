/*
 * XREFs of ?RegisterHotKey@HotKeyProcessor@@UEAAJIII_N@Z @ 0x180146C00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A030 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ??4?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180093E4C (--4-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@.c)
 *     ??4?$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C8EC4 (--4-$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyProcessor@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEBQEBG$$QEAPEAVHotKeyProcessor@@@Z @ 0x18010DEC0 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyProcessor@@@D.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$shared_ptr@UHOTKEY@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1801456F0 (--$_Try_emplace@AEBK$$V@-$map@KV-$shared_ptr@UHOTKEY@@@std@@U-$less@K@2@V-$allocator@U-$pair@$$C.c)
 *     ??$make_shared@UHOTKEY@@$$V@std@@YA?AV?$shared_ptr@UHOTKEY@@@0@XZ @ 0x180145790 (--$make_shared@UHOTKEY@@$$V@std@@YA-AV-$shared_ptr@UHOTKEY@@@0@XZ.c)
 *     ?FindHotKey@HotKeyProcessor@@AEAAJIIPEAV?$shared_ptr@UHOTKEY@@@std@@@Z @ 0x1801467AC (-FindHotKey@HotKeyProcessor@@AEAAJIIPEAV-$shared_ptr@UHOTKEY@@@std@@@Z.c)
 */

__int64 __fastcall HotKeyProcessor::RegisterHotKey(HotKeyProcessor *this, int a2, int a3, int a4, bool a5)
{
  MessageProxyReconnectAdapter **v5; // rbx
  bool v6; // zf
  int v7; // eax
  int v8; // r10d
  int v10; // eax
  unsigned int v11; // ebx
  int HotKey; // eax
  __int64 *v13; // rax
  std::_Ref_count_base *v14; // rcx
  int v16; // [rsp+30h] [rbp-81h] BYREF
  int v17; // [rsp+38h] [rbp-79h] BYREF
  HotKeyProcessor *v18; // [rsp+40h] [rbp-71h] BYREF
  std::_Ref_count_base *v19[2]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v20; // [rsp+58h] [rbp-59h] BYREF
  std::_Ref_count_base *v21; // [rsp+60h] [rbp-51h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-41h] BYREF
  const char *v23; // [rsp+90h] [rbp-21h]
  int v24; // [rsp+98h] [rbp-19h]
  int v25; // [rsp+9Ch] [rbp-15h]
  int *v26; // [rsp+A0h] [rbp-11h]
  int v27; // [rsp+A8h] [rbp-9h]
  int v28; // [rsp+ACh] [rbp-5h]
  int *v29; // [rsp+B0h] [rbp-1h]
  int v30; // [rsp+B8h] [rbp+7h]
  int v31; // [rsp+BCh] [rbp+Bh]
  bool *v32; // [rsp+C0h] [rbp+Fh]
  int v33; // [rsp+C8h] [rbp+17h]
  int v34; // [rsp+CCh] [rbp+1Bh]
  bool *v35; // [rsp+D0h] [rbp+1Fh]
  int v36; // [rsp+D8h] [rbp+27h]
  int v37; // [rsp+DCh] [rbp+2Bh]
  ULONG_PTR retaddr; // [rsp+108h] [rbp+57h]
  int v39; // [rsp+118h] [rbp+67h] BYREF

  v39 = a2;
  v5 = (MessageProxyReconnectAdapter **)((char *)this + 128);
  v17 = a4;
  v6 = *((_QWORD *)this + 16) == 0LL;
  v7 = a3;
  v16 = a3;
  v8 = a4;
  *(_OWORD *)v19 = 0LL;
  if ( v6 )
  {
    v18 = this;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 16);
    v10 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const * const &,HotKeyProcessor *>(
            v5,
            &GUID_f17ab79d_12a5_4878_ac23_c0eb1c6e1572,
            (const unsigned __int16 **)&c_wszHotKeyCallBackEndpointName,
            &v18);
    v11 = v10;
    if ( v10 < 0 )
    {
      if ( v10 == -2147024882 )
        FailFastWithHR(-2147024882, retaddr, 0x72uLL);
      FailFastWithHR(v11, retaddr, 0x72uLL);
      return v11;
    }
    v7 = v16;
    v8 = v17;
  }
  HotKey = HotKeyProcessor::FindHotKey((__int64)this, v7, v8, v19);
  v11 = HotKey;
  if ( HotKey >= 0 )
  {
    if ( v19[0] )
    {
      v11 = 1409;
      if ( (unsigned int)dword_1801DE450 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x20000uLL) )
      {
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v37 = 0;
        v23 = "RegisterHotKey failed because the HotKey is already registered.";
        v26 = &v39;
        v27 = 4;
        v30 = 4;
        v33 = 4;
        v29 = &v16;
        v35 = &a5;
        v24 = 64;
        v32 = (bool *)&v17;
        v36 = 1;
        TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A1B55, 0LL, 0LL, 7u, &pData);
      }
    }
    else
    {
      v13 = std::make_shared<HOTKEY,>(&v20);
      std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::operator=(v19, v13);
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      v14 = v19[0];
      *(_DWORD *)v19[0] = v39;
      *((_DWORD *)v14 + 2) = v17;
      *((_DWORD *)v14 + 1) = v16;
      *((_BYTE *)v14 + 24) = a5;
      LODWORD(v18) = (unsigned __int16)v16 | ((unsigned __int16)v17 << 16);
      std::map<unsigned long,std::shared_ptr<HOTKEY>>::_Try_emplace<unsigned long const &,>(
        (__int64 *)this + 3,
        (__int64)&v20,
        &v18);
      std::shared_ptr<CustomCursorApplication>::operator=((_QWORD *)(v20 + 40), v19);
      if ( (unsigned int)dword_1801DE450 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801DE450, 0x20000uLL) )
      {
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v23 = (const char *)&v39;
        v24 = 4;
        v27 = 4;
        v30 = 4;
        v26 = &v16;
        v32 = &a5;
        v29 = &v17;
        v33 = 1;
        TlgWrite((TraceLoggingHProvider)&dword_1801DE450, &unk_1801A1BF8, 0LL, 0LL, 6u, &pData);
      }
    }
  }
  else
  {
    if ( HotKey == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0x75uLL);
    FailFastWithHR(v11, retaddr, 0x75uLL);
  }
  if ( v19[1] )
    std::_Ref_count_base::_Decref(v19[1]);
  return v11;
}
