/*
 * XREFs of ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801F6830
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _lambda_05398b4549421d065ab404e0dbeea144_::operator() @ 0x1801F6714 (_lambda_05398b4549421d065ab404e0dbeea144_--operator().c)
 *     _lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator() @ 0x1801F6750 (_lambda_a6cadc748e29644dcd3cf84dc08806d7_--operator().c)
 *     ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@E$0?0@gsl@@XZ @ 0x1801FA58C (-GetSharedSectionData@CSharedSectionWrapper@@QEBA-AV-$span@E$0-0@gsl@@XZ.c)
 */

__int64 __fastcall CSceneMesh::OnSceneFrameTick(CSceneMesh *this, struct ISpectreRenderer *a2)
{
  CSceneMesh *v3; // rbx
  __int64 v4; // rdx
  unsigned int v5; // r9d
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 SharedSectionData; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 (__fastcall *v23)(struct ISpectreRenderer *, __int64 *); // rbx
  int v24; // eax
  unsigned int v26; // [rsp+28h] [rbp-39h]
  __int128 v27; // [rsp+38h] [rbp-29h] BYREF
  __int128 v28; // [rsp+48h] [rbp-19h] BYREF
  char v29; // [rsp+58h] [rbp-9h]
  unsigned int v30; // [rsp+68h] [rbp+7h] BYREF
  CSceneMesh *v31; // [rsp+70h] [rbp+Fh]
  __int128 v32; // [rsp+78h] [rbp+17h]
  __int128 v33; // [rsp+88h] [rbp+27h]
  __int64 v34; // [rsp+98h] [rbp+37h]
  int v35; // [rsp+A0h] [rbp+3Fh]
  CSceneMesh *v36; // [rsp+A8h] [rbp+47h]
  __int64 v37; // [rsp+C8h] [rbp+67h] BYREF

  v3 = this;
  if ( !*((_BYTE *)this + 16) )
    return 0;
  v4 = *((_QWORD *)this - 6);
  *(_QWORD *)&v27 = (char *)this - 144;
  *((_QWORD *)&v27 + 1) = &v37;
  v37 = 0LL;
  v29 = 1;
  v28 = v27;
  if ( !v4 )
  {
LABEL_46:
    lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator()(&v28);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v37);
    return 0;
  }
  if ( *((_DWORD *)this - 20) == 6 )
  {
    v34 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    v35 = 0;
    v36 = 0LL;
    v7 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v4, 6);
    v8 = *((_QWORD *)v3 - 6);
    v30 = v7;
    SharedSectionData = CSharedSectionWrapper::GetSharedSectionData(v8, &v27);
    v10 = *((_QWORD *)v3 - 7);
    this = *(CSceneMesh **)(SharedSectionData + 8);
    v31 = this;
    if ( v10 )
    {
      if ( *((_DWORD *)v3 - 21) != 57 )
      {
        v26 = 95;
        goto LABEL_5;
      }
      v11 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v10, 57);
      v12 = *((_QWORD *)v3 - 7);
      v35 = v11;
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(v12, &v27) + 8);
      v36 = this;
    }
    v13 = *((_QWORD *)v3 - 5);
    if ( v13 )
    {
      if ( *((_DWORD *)v3 - 19) != 6 )
      {
        v26 = 104;
        goto LABEL_5;
      }
      v14 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v13, 6);
      if ( v30 > v14 )
      {
        v26 = 107;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 5), &v27) + 8);
      *(_QWORD *)&v32 = this;
    }
    v15 = *((_QWORD *)v3 - 1);
    if ( v15 )
    {
      if ( *((_DWORD *)v3 - 15) != 2 )
      {
        v26 = 115;
        goto LABEL_5;
      }
      v16 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v15, 2);
      if ( v30 > v16 )
      {
        v26 = 118;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 1), &v27) + 8);
      *((_QWORD *)&v32 + 1) = this;
    }
    v17 = *((_QWORD *)v3 - 2);
    if ( v17 )
    {
      if ( *((_DWORD *)v3 - 16) != 42 )
      {
        v26 = 126;
        goto LABEL_5;
      }
      v18 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v17, 42);
      if ( v30 > v18 )
      {
        v26 = 129;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 2), &v27) + 8);
      *(_QWORD *)&v33 = this;
    }
    v19 = *((_QWORD *)v3 - 4);
    if ( v19 )
    {
      if ( *((_DWORD *)v3 - 18) != 16 )
      {
        v26 = 137;
        goto LABEL_5;
      }
      v20 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v19, 16);
      if ( v30 > v20 )
      {
        v26 = 140;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 4), &v27) + 8);
      *((_QWORD *)&v33 + 1) = this;
    }
    v21 = *((_QWORD *)v3 - 3);
    if ( v21 )
    {
      if ( *((_DWORD *)v3 - 17) != 16 )
      {
        v26 = 148;
        goto LABEL_5;
      }
      v22 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v21, 16);
      if ( v30 > v22 )
      {
        v26 = 151;
        goto LABEL_5;
      }
      v34 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 3), &v27) + 8);
    }
    v23 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64 *))(*(_QWORD *)a2 + 72LL);
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v37);
    v24 = v23(a2, &v37);
    v6 = v24;
    if ( v24 < 0 )
    {
      v26 = 157;
      goto LABEL_45;
    }
    v24 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v37 + 24LL))(v37, &v30);
    v6 = v24;
    if ( v24 < 0 )
    {
      v26 = 158;
LABEL_45:
      v5 = v24;
      goto LABEL_6;
    }
    goto LABEL_46;
  }
  v26 = 86;
LABEL_5:
  v5 = -2147024809;
  v6 = -2147024809;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v5, v26, 0LL);
  lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator()(&v28);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v37);
  return v6;
}
