/*
 * XREFs of ??$_Emplace_reallocate@UDeviceDisplayMapping@DWMInputRouter@@@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@QEAAPEAUDeviceDisplayMapping@DWMInputRouter@@QEAU23@$$QEAU23@@Z @ 0x1800C1BEC
 * Callers:
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x1800C2C50 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@AEAAXQEAUDeviceDisplayMapping@DWMInputRouter@@_K1@Z @ 0x1800C55F0 (-_Change_array@-$vector@UDeviceDisplayMapping@DWMInputRouter@@V-$allocator@UDeviceDisplayMapping.c)
 */

unsigned __int64 __fastcall std::vector<DWMInputRouter::DeviceDisplayMapping>::_Emplace_reallocate<DWMInputRouter::DeviceDisplayMapping>(
        char **a1,
        char *a2,
        _DWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  size_t v12; // rcx
  _QWORD *v13; // rax
  unsigned __int64 v14; // r14
  char *v15; // r9
  _QWORD *v16; // rcx
  char *v17; // r8
  char *v18; // rdx
  _QWORD *v19; // rcx
  signed __int64 v20; // rdx
  _QWORD *v21; // r9
  _QWORD *v22; // rcx
  signed __int64 v23; // rdx
  _QWORD *v24; // r8
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rbx
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 result; // rax
  void *v30; // [rsp+20h] [rbp-38h]
  char *v31; // [rsp+60h] [rbp+8h]
  __int64 v32; // [rsp+78h] [rbp+20h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = (char *)v13 + v14;
  v32 = (__int64)v13 + v14 + 16;
  try
  {
    *(_DWORD *)v15 = *a3;
    v16 = a3 + 2;
    *((_QWORD *)v15 + 1) = 0LL;
    if ( v15 + 8 != (char *)(a3 + 2) )
    {
      *((_QWORD *)v15 + 1) = *v16;
      *v16 = 0LL;
    }
    v31 = (char *)v13 + v14;
    v17 = a1[1];
    v18 = *a1;
    if ( a2 == v17 )
    {
      if ( v18 != v17 )
      {
        v19 = v13 + 1;
        v20 = v18 - (char *)v13;
        do
        {
          *((_DWORD *)v19 - 2) = *(_DWORD *)((char *)v19 + v20 - 8);
          *v19 = 0LL;
          v21 = (_QWORD *)((char *)v19 + v20);
          if ( v19 != (_QWORD *)((char *)v19 + v20) )
          {
            *v19 = *v21;
            *v21 = 0LL;
          }
          v19 += 2;
        }
        while ( (char *)v19 + v20 - 8 != v17 );
      }
    }
    else
    {
      if ( v18 != a2 )
      {
        v22 = v13 + 1;
        v23 = v18 - (char *)v13;
        do
        {
          *((_DWORD *)v22 - 2) = *(_DWORD *)((char *)v22 + v23 - 8);
          *v22 = 0LL;
          v24 = (_QWORD *)((char *)v22 + v23);
          if ( v22 != (_QWORD *)((char *)v22 + v23) )
          {
            *v22 = *v24;
            *v24 = 0LL;
          }
          v22 += 2;
        }
        while ( (char *)v22 + v23 - 8 != a2 );
        v17 = a1[1];
      }
      v31 = (char *)v13;
      if ( a2 != v17 )
      {
        v25 = v15 + 24;
        v26 = &a2[-v14] - (char *)v13;
        do
        {
          *((_DWORD *)v25 - 2) = *(_DWORD *)((char *)v25 + v26 - 24);
          *v25 = 0LL;
          v27 = (_QWORD *)((char *)v25 + v26 - 16);
          if ( v25 != v27 )
          {
            *v25 = *v27;
            *v27 = 0LL;
          }
          v25 += 2;
        }
        while ( (char *)v25 + v26 - 24 != v17 );
      }
    }
    std::vector<DWMInputRouter::DeviceDisplayMapping>::_Change_array(a1, v13, v8, v11, v13, -2LL);
    result = (unsigned __int64)&(*a1)[v14];
  }
  catch ( ... )
  {
    std::vector<DWMInputRouter::DeviceDisplayMapping>::_Destroy(v28, v31, v32);
    std::_Deallocate<16,0>(v30, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  return result;
}
