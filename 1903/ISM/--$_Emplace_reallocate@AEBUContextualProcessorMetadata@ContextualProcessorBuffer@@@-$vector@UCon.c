/*
 * XREFs of ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x18000BE60
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18000B840 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 *     ?AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800FA0DC (-AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInit.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // r12
  char *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 *v18; // rdi
  __int64 v20; // rdx
  size_t v21; // rcx
  void *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // r9
  signed __int64 v25; // rdx
  _QWORD *v26; // r11
  _QWORD *v27; // r10
  _QWORD *v28; // rcx
  signed __int64 v29; // r9
  _QWORD *v30; // r11
  _QWORD *v31; // r10
  _QWORD *v32; // rdi
  __int64 v33; // r8
  __int64 v34; // r11
  __int64 v35; // r15
  __int64 v36; // r10
  _QWORD *v37; // r9
  _QWORD *v38; // r8
  __int64 *v39; // r15
  _QWORD *v40; // [rsp+20h] [rbp-58h]
  char *v41; // [rsp+28h] [rbp-50h]
  unsigned __int64 v42; // [rsp+80h] [rbp+8h]
  __int64 v44; // [rsp+88h] [rbp+10h]
  void *v45; // [rsp+98h] [rbp+20h]

  v5 = ((char *)a2 - (char *)*a1) / 24;
  v6 = ((char *)a1[1] - (char *)*a1) / 24;
  if ( v6 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = ((char *)a1[2] - (char *)*a1) / 24;
  if ( v8 > 0xAAAAAAAAAAAAAAALL - (v8 >> 1) || (v9 = v8 + (v8 >> 1), v9 < v7) )
    v9 = v7;
  v42 = v9;
  v10 = 3 * v9;
  v11 = 24 * v9;
  if ( v9 > 0xAAAAAAAAAAAAAAALL )
  {
    v20 = -1LL;
    v11 = -1LL;
  }
  else
  {
    if ( v11 < 0x1000 )
    {
      if ( v11 )
        v12 = operator new(24 * v9);
      else
        v12 = 0LL;
      goto LABEL_54;
    }
    v20 = -1LL;
  }
  v21 = v11 + 39;
  if ( v11 + 39 >= v11 )
    goto LABEL_23;
  while ( 1 )
  {
    v21 = v20;
LABEL_23:
    v22 = operator new(v21);
    if ( v22 )
      break;
    _o__invalid_parameter_noinfo_noreturn(v23);
  }
  v12 = (_QWORD *)(((unsigned __int64)v22 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *(v12 - 1) = v22;
LABEL_54:
  try
  {
    v45 = v12;
    v13 = 3 * v5;
    v14 = (char *)&v12[3 * v5];
    v41 = v14 + 24;
    v15 = *a3;
    *(_QWORD *)v14 = *a3;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    *((_DWORD *)v14 + 2) = *((_DWORD *)a3 + 2);
    *((_DWORD *)v14 + 3) = *((_DWORD *)a3 + 3);
    v16 = a3[2];
    *((_QWORD *)v14 + 2) = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v40 = v14;
    v17 = a1[1];
    if ( a2 == v17 )
    {
      if ( *a1 != v17 )
      {
        v24 = v12 + 2;
        v25 = (char *)*a1 - (char *)v12;
        do
        {
          *(v24 - 2) = 0LL;
          v26 = (_QWORD *)((char *)v24 + v25 - 16);
          if ( v24 - 2 != v26 )
          {
            *(v24 - 2) = *v26;
            *v26 = 0LL;
          }
          *((_DWORD *)v24 - 2) = *(_DWORD *)((char *)v24 + v25 - 8);
          *((_DWORD *)v24 - 1) = *(_DWORD *)((char *)v24 + v25 - 4);
          *v24 = 0LL;
          v27 = (_QWORD *)((char *)v24 + v25);
          if ( v24 != (_QWORD *)((char *)v24 + v25) )
          {
            *v24 = *v27;
            *v27 = 0LL;
          }
          v24 += 3;
        }
        while ( (_QWORD *)((char *)v24 + v25 - 16) != v17 );
      }
    }
    else
    {
      if ( *a1 != a2 )
      {
        v28 = v12 + 2;
        v29 = (char *)*a1 - (char *)v12;
        do
        {
          *(v28 - 2) = 0LL;
          v30 = (_QWORD *)((char *)v28 + v29 - 16);
          if ( v28 - 2 != v30 )
          {
            *(v28 - 2) = *v30;
            *v30 = 0LL;
          }
          *((_DWORD *)v28 - 2) = *(_DWORD *)((char *)v28 + v29 - 8);
          *((_DWORD *)v28 - 1) = *(_DWORD *)((char *)v28 + v29 - 4);
          *v28 = 0LL;
          v31 = (_QWORD *)((char *)v28 + v29);
          if ( v28 != (_QWORD *)((char *)v28 + v29) )
          {
            *v28 = *v31;
            *v31 = 0LL;
          }
          v28 += 3;
        }
        while ( (_QWORD *)((char *)v28 + v29 - 16) != a2 );
        v17 = a1[1];
      }
      v40 = v12;
      if ( a2 != v17 )
      {
        v32 = v14 + 40;
        v33 = (char *)a2 - (char *)v12 - v13 * 8;
        v34 = v33 - 32;
        v35 = v33 - 28;
        v44 = v33 - 24;
        v36 = v33 - 40;
        do
        {
          *(v32 - 2) = 0LL;
          v37 = (_QWORD *)((char *)v32 + v36);
          if ( v32 - 2 != (_QWORD *)((char *)v32 + v36) )
          {
            *(v32 - 2) = *v37;
            *v37 = 0LL;
          }
          *((_DWORD *)v32 - 2) = *(_DWORD *)((char *)v32 + v34);
          *((_DWORD *)v32 - 1) = *(_DWORD *)((char *)v32 + v35);
          *v32 = 0LL;
          v38 = (_QWORD *)((char *)v32 + v44);
          if ( v32 != (_QWORD *)((char *)v32 + v44) )
          {
            *v32 = *v38;
            *v38 = 0LL;
          }
          v32 += 3;
        }
        while ( (_QWORD *)((char *)v32 + v36) != v17 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Destroy(v17, v40, v41);
    std::_Deallocate<16,0>(v45, (const struct std::nothrow_t *)(24 * v42));
    throw;
  }
  v18 = *a1;
  if ( *a1 )
  {
    v39 = a1[1];
    if ( v18 != v39 )
    {
      do
      {
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v18 + 2);
        Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v18);
        v18 += 3;
      }
      while ( v18 != v39 );
      v18 = *a1;
    }
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(24 * (((char *)a1[2] - (char *)v18) / 24)));
  }
  *a1 = v12;
  a1[1] = &v12[3 * v7];
  a1[2] = &v12[v10];
  return (__int64)&(*a1)[v13];
}
