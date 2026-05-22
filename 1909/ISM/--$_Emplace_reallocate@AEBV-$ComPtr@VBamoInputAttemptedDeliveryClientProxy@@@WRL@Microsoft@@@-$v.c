/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180002530
 * Callers:
 *     ?RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x180002490 (-RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBam.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy> const &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r13
  _QWORD *v15; // r14
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 *v18; // rdi
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 *v23; // r14
  __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+88h] [rbp+10h]
  __int64 v26; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v6 = ((__int64)a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v25 = v11;
  v12 = 8 * v11;
  v26 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 8 * v6;
  v15 = (_QWORD *)(v13 + 8 * v6);
  *v15 = *a3;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(v15);
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( v4 == v16 )
  {
    if ( v17 != v16 )
    {
      try
      {
        v20 = v13 - (_QWORD)v17;
        do
        {
          *(_QWORD *)((char *)v17 + v20) = 0LL;
          if ( (_QWORD *)((char *)v17 + v20) != v17 )
          {
            *(_QWORD *)((char *)v17 + v20) = *v17;
            *v17 = 0LL;
          }
          ++v17;
        }
        while ( v17 != v16 );
      }
      catch ( ... )
      {
        std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::_Destroy(v17, v15, v15 + 1);
        std::_Deallocate<16,0>(v13, 8 * v25);
        throw;
      }
    }
  }
  else
  {
    if ( v17 != v4 )
    {
      v21 = v13 - (_QWORD)v17;
      do
      {
        *(_QWORD *)((char *)v17 + v21) = 0LL;
        if ( (_QWORD *)((char *)v17 + v21) != v17 )
        {
          *(_QWORD *)((char *)v17 + v21) = *v17;
          *v17 = 0LL;
        }
        ++v17;
      }
      while ( v17 != v4 );
      v16 = (_QWORD *)a1[1];
    }
    if ( v4 != v16 )
    {
      v22 = v13 + v14 - (_QWORD)v4 + 8;
      do
      {
        *(_QWORD *)((char *)v4 + v22) = 0LL;
        if ( (_QWORD *)((char *)v4 + v22) != v4 )
        {
          *(_QWORD *)((char *)v4 + v22) = *v4;
          *v4 = 0LL;
        }
        ++v4;
      }
      while ( v4 != v16 );
    }
  }
  v18 = (__int64 *)*a1;
  if ( *a1 )
  {
    v23 = (__int64 *)a1[1];
    if ( v18 != v23 )
    {
      do
      {
        v24 = *v18;
        if ( *v18 )
        {
          *v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
        }
        ++v18;
      }
      while ( v18 != v23 );
      v18 = (__int64 *)*a1;
    }
    std::_Deallocate<16,0>(v18, (a1[2] - (_QWORD)v18) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  a1[1] = v13 + 8 * v8;
  a1[2] = v13 + v26;
  return v14 + *a1;
}
