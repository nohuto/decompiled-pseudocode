/*
 * XREFs of ?SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z @ 0x18000C020
 * Callers:
 *     _lambda_d6825bbef0718a568adec6fcdf443266_::operator() @ 0x18003585C (_lambda_d6825bbef0718a568adec6fcdf443266_--operator().c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$As@UIActivationListenerInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000DD28 (--$As@UIActivationListenerInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000DD7C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800C77A8 (--$_Emplace_reallocate@AEBV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@-$vec.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ActivationListenerWindowIdAdapter::SetActiveWindowId(__int64 a1)
{
  unsigned int v1; // edi
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v3; // rsi
  __int64 *i; // r13
  __int64 v5; // rbx
  char *v6; // r12
  int v7; // edi
  __int64 v8; // rbp
  __int64 v9; // rbx
  char *j; // r15
  __int64 v11; // rcx
  char *v12; // rbx
  char *v13; // r14
  HWND v14; // rbx
  int v15; // eax
  HWND v16; // rax
  __int64 v17; // rdx
  char *k; // r14
  __int64 v19; // rcx
  __int128 v20; // [rsp+28h] [rbp-50h] BYREF
  char *v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF
  HWND Ancestor; // [rsp+90h] [rbp+18h]

  v1 = 0;
  Ancestor = 0LL;
  if ( a1 )
    Ancestor = GetAncestor((HWND)(int)a1, 2u);
  InputSiteManager = ISMStatics::GetInputSiteManager();
  v3 = (__int64 *)*((_QWORD *)InputSiteManager + 7);
  for ( i = (__int64 *)*((_QWORD *)InputSiteManager + 8); v3 != i; ++v3 )
  {
    v5 = *v3;
    v20 = 0LL;
    v6 = 0LL;
    v21 = 0LL;
    v7 = v1 | 1;
    v22 = 0LL;
    v8 = *(_QWORD *)(v5 + 400);
    v9 = *(_QWORD *)(v5 + 392);
    for ( j = 0LL; v9 != v8; v9 += 16LL )
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IActivationListenerInputObjectProxy>(v9 + 8, &v22) >= 0 )
      {
        if ( v6 == j )
        {
          std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> const &>(
            &v20,
            j,
            &v22);
          v6 = v21;
          j = (char *)*((_QWORD *)&v20 + 1);
        }
        else
        {
          *(_QWORD *)j = v22;
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
          j += 8;
          *((_QWORD *)&v20 + 1) = j;
        }
      }
    }
    v11 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = (char *)v20;
    v13 = (char *)v20;
    if ( (char *)v20 != j )
    {
      v14 = Ancestor;
      do
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 32LL))(*(_QWORD *)v13);
        v16 = GetAncestor((HWND)v15, 2u);
        v17 = 1LL;
        if ( v16 == v14 )
          v17 = 3LL;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v13 + 24LL))(*(_QWORD *)v13, v17);
        v13 += 8;
      }
      while ( v13 != j );
      v12 = (char *)v20;
    }
    v1 = v7 & 0xFFFFFFFE;
    if ( v12 )
    {
      for ( k = v12; k != j; k += 8 )
      {
        v19 = *(_QWORD *)k;
        if ( *(_QWORD *)k )
        {
          *(_QWORD *)k = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
      std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)((v6 - v12) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
}
