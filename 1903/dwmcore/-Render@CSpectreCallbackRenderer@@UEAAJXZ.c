/*
 * XREFs of ?Render@CSpectreCallbackRenderer@@UEAAJXZ @ 0x1801B1F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800B0530 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::vector_ISpectreLightNode___std::allocator_ISpectreLightNode_____::_Resize__lambda_2fdf39d790a9406f49f0ad6a00d9e097___ @ 0x18016BE40 (std--vector_ISpectreLightNode___std--allocator_ISpectreLightNode_____--_Resize__lambda_2fdf39d79.c)
 *     _lambda_5b9bd6bfe6515b530b44cdd44b946dc6_::operator() @ 0x18016C104 (_lambda_5b9bd6bfe6515b530b44cdd44b946dc6_--operator().c)
 */

__int64 __fastcall CSpectreCallbackRenderer::Render(CSpectreCallbackRenderer *this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  char v5; // r15
  void (__fastcall ***v6)(_QWORD); // rax
  void (__fastcall ***v7)(_QWORD); // r12
  __int64 v8; // r10
  __int64 v9; // r9
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r14
  _QWORD *i; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  void (__fastcall *v20)(__int64, __int64); // rbx
  __int64 v21; // rax
  void (__fastcall *v22)(_QWORD); // rax
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v27; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+40h] [rbp-C0h]
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v30; // [rsp+58h] [rbp-A8h] BYREF
  char v31; // [rsp+68h] [rbp-98h]
  _OWORD v32[4]; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+B0h] [rbp-50h]
  __m128 v34[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v35; // [rsp+100h] [rbp+0h]
  __int128 v36; // [rsp+110h] [rbp+10h] BYREF
  int v37; // [rsp+120h] [rbp+20h] BYREF
  int v38; // [rsp+124h] [rbp+24h]
  int v39; // [rsp+128h] [rbp+28h]
  int v40; // [rsp+12Ch] [rbp+2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
  v26 = 0LL;
  v3 = v2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 320LL))(v4, &v26);
  v5 = 1;
  v29 = 1;
  (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v26 + 768LL))(v26, &v29, &v37);
  if ( v39 <= v37 || v40 <= v38 )
  {
LABEL_15:
    v24 = 0;
    goto LABEL_16;
  }
  v6 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
  v27 = 0LL;
  v7 = v6;
  v28 = 0LL;
  (**v6)(v6);
  v8 = *((_QWORD *)this + 16);
  v9 = *((_QWORD *)this + 17);
  *((_QWORD *)&v36 + 1) = &v27;
  *(_QWORD *)&v36 = v7;
  v31 = 1;
  v30 = v36;
  if ( v8 != v9 )
  {
    v10 = *(_OWORD *)((char *)this + 40);
    v33 = 0;
    v11 = *(_OWORD *)((char *)this + 56);
    v35 = 0;
    v32[0] = v10;
    v12 = *(_OWORD *)((char *)this + 72);
    v32[1] = v11;
    v13 = *(_OWORD *)((char *)this + 88);
    v32[2] = v12;
    v32[3] = v13;
    if ( CMILMatrix::SetToInverse(v34, (const struct CMILMatrix *)v32) )
    {
      std::vector_ISpectreLightNode___std::allocator_ISpectreLightNode_____::_Resize__lambda_2fdf39d790a9406f49f0ad6a00d9e097___(
        (__int64)&v27,
        (v14 - v15) >> 3);
      v16 = 0LL;
      for ( i = v27; v16 < (__int64)(v28 - (_QWORD)v27) >> 3; i = v27 )
      {
        v18 = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v16);
        if ( (*(int (__fastcall **)(__int64, __m128 *, _QWORD *))(*(_QWORD *)v18 + 280LL))(v18, v34, &i[v16]) >= 0 )
        {
          v19 = v27[v16];
          v20 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 24LL);
          v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4));
          v20(v19, v21);
        }
        ++v16;
      }
      v5 = 0;
    }
  }
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), char *))(*v7)[1])(v7, (char *)this + 104);
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), _QWORD))(*v7)[2])(v7, *((_QWORD *)this + 3));
  v22 = (*v7)[3];
  *(float *)&v36 = (float)v37;
  *((float *)&v36 + 1) = (float)v38;
  *((float *)&v36 + 2) = (float)v39;
  *((float *)&v36 + 3) = (float)v40;
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), __int128 *))v22)(v7, &v36);
  v23 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), _QWORD, char *, _QWORD, char))(*v7)[4])(
          v7,
          *((_QWORD *)this + 4),
          (char *)this + 40,
          0LL,
          v5);
  v24 = v23;
  if ( v23 >= 0 )
  {
    lambda_5b9bd6bfe6515b530b44cdd44b946dc6_::operator()(&v30);
    if ( v27 )
      std::_Deallocate<16,0>(v27, (*((_QWORD *)&v28 + 1) - (_QWORD)v27) & 0xFFFFFFFFFFFFFFF8uLL);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x86,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\spatialcallbackrenderer.cpp",
    (const char *)(unsigned int)v23);
  lambda_5b9bd6bfe6515b530b44cdd44b946dc6_::operator()(&v30);
  if ( v27 )
    std::_Deallocate<16,0>(v27, (*((_QWORD *)&v28 + 1) - (_QWORD)v27) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_16:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v26);
  return v24;
}
