/*
 * XREFs of ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x180054324
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x1800532C0 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1800D1080 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
        char **a1,
        char *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  char *v6; // rdi
  signed __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  size_t v14; // rdx
  size_t v15; // rcx
  void *v16; // rax
  const struct std::nothrow_t *v17; // rdx
  char *v18; // rcx
  char *v19; // rbx
  unsigned __int64 v20; // r15
  __int64 v21; // rcx
  char *v22; // rax
  signed __int64 v23; // rdx
  signed __int64 v24; // rcx
  signed __int64 v25; // rax
  char *v26; // rcx
  char *v27; // r8
  __int64 v29; // [rsp+20h] [rbp-38h]
  __int64 v30; // [rsp+68h] [rbp+10h]

  v6 = a2;
  v8 = a2 - *a1;
  v9 = (a1[1] - *a1) >> 4;
  if ( v9 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v10 = v9 + 1;
  v11 = (a1[2] - *a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v13 = v12 + v11;
    if ( v12 + v11 < v10 )
      v13 = v10;
  }
  else
  {
    v13 = v10;
  }
  v30 = v13;
  v29 = 16 * v13;
  v14 = 16 * v13;
  if ( v13 > 0xFFFFFFFFFFFFFFFLL )
    v14 = -1LL;
  if ( v14 < 0x1000 )
  {
    if ( v14 )
      v19 = (char *)operator new(v14);
    else
      v19 = 0LL;
  }
  else
  {
    v15 = v14 + 39;
    if ( v14 + 39 < v14 )
      v15 = -1LL;
    v16 = operator new(v15);
    if ( !v16 )
      goto LABEL_35;
    v19 = (char *)(((unsigned __int64)v16 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v19 - 1) = v16;
  }
  try
  {
    v20 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
    *(_DWORD *)&v19[v20] = *a3;
    *(_QWORD *)&v19[v20 + 8] = *a4;
    v21 = (__int64)a1[1];
    v22 = *a1;
    if ( v6 == (char *)v21 )
    {
      if ( v22 != (char *)v21 )
      {
        v23 = v19 - v22;
        do
        {
          *(_OWORD *)&v22[v23] = *(_OWORD *)v22;
          v22 += 16;
        }
        while ( v22 != (char *)v21 );
      }
    }
    else
    {
      if ( v22 != v6 )
      {
        v24 = v19 - v22;
        do
        {
          *(_OWORD *)&v22[v24] = *(_OWORD *)v22;
          v22 += 16;
        }
        while ( v22 != v6 );
        v21 = (__int64)a1[1];
      }
      if ( v6 != (char *)v21 )
      {
        v25 = &v19[v20 + 16] - v6;
        do
        {
          *(_OWORD *)&v6[v25] = *(_OWORD *)v6;
          v6 += 16;
        }
        while ( v6 != (char *)v21 );
      }
    }
  }
  catch ( ... )
  {
    std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(v21, v19, v30);
    throw;
  }
  v26 = *a1;
  if ( *a1 )
  {
    v17 = (const struct std::nothrow_t *)((a1[2] - v26) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v17 < 0x1000 )
    {
LABEL_33:
      operator delete(v26, v17);
      goto LABEL_34;
    }
    v17 = (const struct std::nothrow_t *)((char *)v17 + 39);
    v27 = (char *)*((_QWORD *)v26 - 1);
    v18 = (char *)(v26 - v27);
    if ( (unsigned __int64)(v18 - 8) <= 0x1F )
    {
      v26 = v27;
      goto LABEL_33;
    }
LABEL_35:
    _o__invalid_parameter_noinfo_noreturn(v18, v17);
    __debugbreak();
  }
LABEL_34:
  *a1 = v19;
  a1[1] = &v19[16 * v10];
  a1[2] = &v19[v29];
  return (unsigned __int64)&(*a1)[v20];
}
