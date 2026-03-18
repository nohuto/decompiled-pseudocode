/*
 * XREFs of ?ProcessPendingUnpin@CD3DDeviceLevel1@@QEAAJ_N@Z @ 0x1800EA180
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002436C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180058B80 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180043B90 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180059A50 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800E9CAC (--$_Emplace_reallocate@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 *     ?erase@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@2@V?$basic_iterator@$$CBVCUnpinResource@CD3DDeviceLevel1@@@2@@Z @ 0x1800EA630 (-erase@-$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V-$buffer_impl@VCUnpinResource@CD3DDevi.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18015E980 (-_Destroy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ProcessPendingUnpin(CD3DDeviceLevel1 *this, char a2)
{
  char *v2; // r14
  __int64 *v3; // rsi
  __int64 *v5; // rdi
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // r14
  unsigned int v10; // r12d
  int v11; // ebp
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  int v16; // r8d
  __int64 v17; // rax
  signed int v18; // eax
  int v19; // r13d
  signed int v20; // ebx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 *v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v25; // [rsp+38h] [rbp-50h]
  __int64 *v26; // [rsp+40h] [rbp-48h]
  __int64 *v27; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v28; // [rsp+A0h] [rbp+18h] BYREF

  v24 = 0LL;
  v2 = (char *)this + 992;
  v3 = 0LL;
  v5 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v7 = (__int64 *)*((_QWORD *)this + 124);
  v26 = 0LL;
  while ( v7 != *((__int64 **)this + 125) )
  {
    if ( v7[1] <= GetCurrentFrameId() || a2 )
    {
      if ( v5 == v3 )
      {
        std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
          &v24,
          v3,
          v7);
        v5 = v26;
        v3 = v25;
      }
      else
      {
        v8 = *v7;
        *v7 = 0LL;
        *v3++ = v8;
        v25 = v3;
      }
      v27 = v7;
      v7 = *(__int64 **)detail::vector_facade<CD3DDeviceLevel1::CUnpinResource,detail::buffer_impl<CD3DDeviceLevel1::CUnpinResource,7,1,detail::liberal_expansion_policy>>::erase(
                          v2,
                          &v28,
                          &v27);
    }
    else
    {
      v7 += 2;
    }
  }
  v9 = v24;
  v10 = 0;
  v28 = v5;
  v11 = 0;
  v12 = v3 - v24;
  if ( v12 )
  {
    v13 = 0LL;
    do
    {
      v14 = (__int64 *)*((_QWORD *)this + 74);
      v15 = &v9[v13];
      v16 = v12 - v10;
      v17 = *v14;
      if ( (unsigned int)v12 - v10 > 0x10 )
        v16 = 16;
      LODWORD(v27) = v16;
      v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v17 + 32))(v14, v15);
      v19 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v18, 0x1009u, 0LL);
      if ( !v11 || v11 >= 0 && v19 < 0 )
        v11 = v19;
      v10 += (unsigned int)v27;
      v13 = v10;
    }
    while ( v10 < v12 );
    v5 = v28;
  }
  v20 = *((_DWORD *)this + 220);
  if ( v20 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v20, 0x100Eu, 0LL);
  if ( !v11 || v11 >= 0 && v20 < 0 )
    v11 = v20;
  v22 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v11, 0);
  if ( v9 )
  {
    std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Destroy(v21, v9, v3);
    std::_Deallocate<16,0>(v9, ((char *)v5 - (char *)v9) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v22;
}
