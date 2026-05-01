/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18026785C
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18026E4EC (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@_K1@Z @ 0x180277260 (-_Change_array@-$vector@V-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VMonitor.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<MonitorFrame> const &>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  char *v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  size_t v12; // rcx
  char *v13; // rax
  char *v14; // r14
  __int64 *v15; // r15
  char *v16; // rdx
  char *v17; // rcx
  signed __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 result; // rax
  signed __int64 v22; // r8
  char *v23; // r9
  __int64 *v24; // [rsp+20h] [rbp-58h]
  char *v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+80h] [rbp+8h]
  __int64 *v27; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v25 = v13;
  v26 = 8 * v6;
  v15 = (__int64 *)&v13[8 * v6];
  v24 = v15 + 1;
  try
  {
    *v15 = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
    v27 = v15;
    v16 = a1[1];
    v17 = *a1;
    if ( v4 == v16 )
    {
      if ( v17 != v16 )
      {
        v18 = v14 - v17;
        do
        {
          *(_QWORD *)&v17[v18] = 0LL;
          if ( &v17[v18] != v17 )
          {
            *(_QWORD *)&v17[v18] = *(_QWORD *)v17;
            *(_QWORD *)v17 = 0LL;
          }
          v17 += 8;
        }
        while ( v17 != v16 );
      }
    }
    else
    {
      if ( v17 != v4 )
      {
        v22 = v14 - v17;
        do
        {
          *(_QWORD *)&v17[v22] = 0LL;
          if ( &v17[v22] != v17 )
          {
            *(_QWORD *)&v17[v22] = *(_QWORD *)v17;
            *(_QWORD *)v17 = 0LL;
          }
          v17 += 8;
        }
        while ( v17 != v4 );
        v16 = a1[1];
      }
      v27 = (__int64 *)v14;
      if ( v4 != v16 )
      {
        v19 = v26;
        v23 = &v14[v26 - (_QWORD)v4 + 8];
        do
        {
          *(_QWORD *)&v23[(_QWORD)v4] = 0LL;
          if ( &v23[(_QWORD)v4] != v4 )
          {
            *(_QWORD *)&v23[(_QWORD)v4] = *(_QWORD *)v4;
            *(_QWORD *)v4 = 0LL;
          }
          v4 += 8;
        }
        while ( v4 != v16 );
        goto LABEL_17;
      }
    }
    v19 = v26;
LABEL_17:
    std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::_Change_array(a1, v14, v8, v11);
    result = (__int64)&(*a1)[v19];
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::_Destroy(v20, v27, v24);
    std::_Deallocate<16,0>(v25, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
