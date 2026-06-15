/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180062604
 * Callers:
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x1800630F4 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800369E4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // rcx
  char *v13; // rax
  char *v14; // rsi
  __int64 v15; // r13
  char *v16; // r14
  __int64 v17; // rcx
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  __int64 *v20; // rdi
  signed __int64 v22; // r8
  __int64 v23; // rax
  signed __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // r14
  _QWORD *v28; // [rsp+20h] [rbp-58h]
  char *v29; // [rsp+28h] [rbp-50h]
  char *v30; // [rsp+80h] [rbp+8h]
  unsigned __int64 v31; // [rsp+88h] [rbp+10h]
  __int64 v32; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = a1[2] - *a1;
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
  v31 = v11;
  v12 = 8 * v11;
  v32 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  try
  {
    v14 = v13;
    v29 = v13;
    v15 = v6;
    v16 = &v13[8 * v6];
    v28 = v16 + 8;
    v17 = *a3;
    *(_QWORD *)v16 = *a3;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v30 = v16;
    v18 = a1[1];
    v19 = *a1;
    if ( v4 == v18 )
    {
      if ( v19 != v18 )
      {
        v22 = v14 - (char *)v19;
        do
        {
          v23 = *v19;
          *v19 = 0LL;
          *(__int64 *)((char *)v19++ + v22) = v23;
        }
        while ( v19 != v18 );
      }
    }
    else
    {
      if ( v19 != v4 )
      {
        v24 = v14 - (char *)v19;
        do
        {
          v25 = *v19;
          *v19 = 0LL;
          *(__int64 *)((char *)v19++ + v24) = v25;
        }
        while ( v19 != v4 );
        v18 = a1[1];
      }
      v30 = v14;
      if ( v4 != v18 )
      {
        v19 = (__int64 *)&v14[v15 * 8 - (_QWORD)v4];
        do
        {
          v26 = *v4;
          *v4 = 0LL;
          *(__int64 *)((char *)v19 + (_QWORD)v4++ + 8) = v26;
        }
        while ( v4 != v18 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::_Destroy(v19, v30, v28);
    std::_Deallocate<16,0>(v29, (const struct std::nothrow_t *)(8 * v31));
    throw;
  }
  v20 = *a1;
  if ( *a1 )
  {
    v27 = a1[1];
    if ( v20 != v27 )
    {
      do
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v20++);
      while ( v20 != v27 );
      v20 = *a1;
    }
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(((char *)a1[2] - (char *)v20) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *a1 = (__int64 *)v14;
  a1[1] = (__int64 *)&v14[8 * v8];
  a1[2] = (__int64 *)&v14[v32];
  return (__int64)&(*a1)[v15];
}
