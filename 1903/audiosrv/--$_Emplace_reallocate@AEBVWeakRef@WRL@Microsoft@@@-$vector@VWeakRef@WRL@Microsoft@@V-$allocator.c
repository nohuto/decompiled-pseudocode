/*
 * XREFs of ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180030AB0
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18002F520 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180030200 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18003F970 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800D7918 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180053D70 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
        unsigned __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r13
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  SIZE_T v11; // r12
  unsigned __int64 v12; // rdi
  HANDLE ProcessHeap; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  __int64 *v20; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  void *v24; // rax
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r8
  __int64 v27; // r8
  __int64 *v28; // r13
  __int64 v29; // rcx
  _QWORD *v30; // [rsp+20h] [rbp-48h]
  unsigned __int64 v31; // [rsp+70h] [rbp+8h]
  unsigned __int64 v32; // [rsp+78h] [rbp+10h]
  _QWORD *v33; // [rsp+80h] [rbp+18h]
  _QWORD *v34; // [rsp+88h] [rbp+20h]

  v33 = a3;
  v3 = a2;
  v5 = (__int64)((__int64)a2 - *a1) >> 3;
  v6 = (__int64)(a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (__int64)(a1[2] - *a1) >> 3;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) || (v10 = v8 + v9, v8 + v9 < v7) )
    v10 = v7;
  v31 = v10;
  v11 = 8 * v10;
  v12 = 8 * v10;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v22 = -1LL;
    v12 = -1LL;
  }
  else
  {
    if ( v11 < 0x1000 )
    {
      if ( v11 )
      {
        ProcessHeap = GetProcessHeap();
        v14 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, v11);
        a3 = v33;
      }
      else
      {
        v14 = 0LL;
      }
      goto LABEL_49;
    }
    v22 = -1LL;
  }
  v23 = v12 + 39;
  if ( v12 + 39 >= v12 )
    goto LABEL_21;
  while ( 1 )
  {
    v23 = v22;
LABEL_21:
    v24 = operator new(v23);
    if ( v24 )
      break;
    v22 = _o__invalid_parameter_noinfo_noreturn();
  }
  v14 = ((unsigned __int64)v24 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v14 - 8) = v24;
  a3 = v33;
LABEL_49:
  try
  {
    v32 = v14;
    v15 = 8 * v5;
    v16 = (_QWORD *)(v14 + 8 * v5);
    v30 = v16 + 1;
    v17 = *a3;
    *v16 = *a3;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v34 = v16;
    v18 = (_QWORD *)a1[1];
    v19 = (_QWORD *)*a1;
    if ( v3 == v18 )
    {
      if ( v19 != v18 )
      {
        v25 = v14 - (_QWORD)v19;
        do
        {
          *(_QWORD *)((char *)v19 + v25) = 0LL;
          if ( (_QWORD *)((char *)v19 + v25) != v19 )
          {
            *(_QWORD *)((char *)v19 + v25) = *v19;
            *v19 = 0LL;
          }
          ++v19;
        }
        while ( v19 != v18 );
      }
    }
    else
    {
      if ( v19 != v3 )
      {
        v26 = v14 - (_QWORD)v19;
        do
        {
          *(_QWORD *)((char *)v19 + v26) = 0LL;
          if ( (_QWORD *)((char *)v19 + v26) != v19 )
          {
            *(_QWORD *)((char *)v19 + v26) = *v19;
            *v19 = 0LL;
          }
          ++v19;
        }
        while ( v19 != v3 );
        v18 = (_QWORD *)a1[1];
      }
      v34 = (_QWORD *)v14;
      if ( v3 != v18 )
      {
        v27 = v14 - (_QWORD)v3 + v15 + 8;
        do
        {
          *(_QWORD *)((char *)v3 + v27) = 0LL;
          if ( (_QWORD *)((char *)v3 + v27) != v3 )
          {
            *(_QWORD *)((char *)v3 + v27) = *v3;
            *v3 = 0LL;
          }
          ++v3;
        }
        while ( v3 != v18 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(v18, v34, v30);
    std::_Deallocate<16,0>(v32, 8 * v31);
    throw;
  }
  v20 = (__int64 *)*a1;
  if ( *a1 )
  {
    v28 = (__int64 *)a1[1];
    if ( v20 != v28 )
    {
      do
      {
        v29 = *v20;
        if ( *v20 )
        {
          *v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        ++v20;
      }
      while ( v20 != v28 );
      v20 = (__int64 *)*a1;
    }
    std::_Deallocate<16,0>(v20, (a1[2] - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v14;
  a1[1] = v14 + 8 * v7;
  a1[2] = v14 + v11;
  return v15 + *a1;
}
