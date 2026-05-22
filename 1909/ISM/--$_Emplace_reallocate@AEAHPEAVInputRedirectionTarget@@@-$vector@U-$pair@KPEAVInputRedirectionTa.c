/*
 * XREFs of ??$_Emplace_reallocate@AEAHPEAVInputRedirectionTarget@@@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAVInputRedirectionTarget@@@1@QEAU21@AEAH$$QEAPEAVInputRedirectionTarget@@@Z @ 0x180106878
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x180106D70 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@AEAAXQEAUCursorDeviceInfo@@_K1@Z @ 0x1800302C8 (-_Change_array@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDeviceInfo@@@std@@@std@@AEAAXQEAU.c)
 */

unsigned __int64 __fastcall std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::_Emplace_reallocate<int &,InputRedirectionTarget *>(
        _QWORD *a1,
        _OWORD *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  _OWORD *v6; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  size_t v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r10
  unsigned __int64 v17; // r14
  _OWORD *v18; // rcx
  _OWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 result; // rax
  void *v24; // [rsp+68h] [rbp+10h]

  v6 = a2;
  v8 = (unsigned __int64)a2 - *a1;
  v9 = (__int64)(a1[1] - *a1) >> 4;
  if ( v9 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v10 = v9 + 1;
  v11 = (__int64)(a1[2] - *a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v13 = v12 + v11;
    if ( v12 + v11 < v10 )
      v13 = v9 + 1;
  }
  else
  {
    v13 = v9 + 1;
  }
  v14 = 16 * v13;
  if ( v13 > 0xFFFFFFFFFFFFFFFLL )
    v14 = -1LL;
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v14);
  v16 = (__int64)v15;
  v24 = v15;
  try
  {
    v17 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
    *(_DWORD *)((char *)v15 + v17) = *a3;
    *(_QWORD *)((char *)v15 + v17 + 8) = *a4;
    v18 = (_OWORD *)a1[1];
    v19 = (_OWORD *)*a1;
    if ( v6 == v18 )
    {
      if ( v19 != v18 )
      {
        v20 = v16 - (_QWORD)v19;
        do
        {
          *(_OWORD *)((char *)v19 + v20) = *v19;
          ++v19;
        }
        while ( v19 != v18 );
      }
    }
    else
    {
      if ( v19 != v6 )
      {
        v21 = v16 - (_QWORD)v19;
        do
        {
          *(_OWORD *)((char *)v19 + v21) = *v19;
          ++v19;
        }
        while ( v19 != v6 );
        v18 = (_OWORD *)a1[1];
      }
      if ( v6 != v18 )
      {
        v22 = v16 + v17 + 16 - (_QWORD)v6;
        do
        {
          *(_OWORD *)((char *)v6 + v22) = *v6;
          ++v6;
        }
        while ( v6 != v18 );
      }
    }
    std::vector<CursorDeviceInfo>::_Change_array((__int64)a1, v16, v10, v13);
    result = v17 + *a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)(16 * v13));
    throw;
  }
  return result;
}
