/*
 * XREFs of ?CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJPEBVCCompositionSurfaceInfo@@@Z @ 0x1801DB7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180015EDC (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::CommitRecordedStatistics(
        CCompositionSwapchainStatistics *this,
        const struct CCompositionSurfaceInfo *a2)
{
  char *v2; // rdi
  __int128 *v4; // rbx
  __int128 *v6; // r14
  unsigned int v7; // esi
  __int64 v8; // rcx
  int v9; // eax
  __int128 v10; // xmm0
  int Rotation; // eax
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // xmm1_4
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  void *v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  _QWORD v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v23; // [rsp+40h] [rbp-C0h]
  char v24; // [rsp+41h] [rbp-BFh]
  int v25; // [rsp+44h] [rbp-BCh]
  int v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+4Ch] [rbp-B4h]
  int v28; // [rsp+50h] [rbp-B0h]
  __int128 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+70h] [rbp-90h]
  __int128 v31; // [rsp+80h] [rbp-80h]
  __int128 v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+A0h] [rbp-60h]
  _BYTE v34[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v35; // [rsp+F0h] [rbp-10h]
  _OWORD v36[2]; // [rsp+100h] [rbp+0h] BYREF
  GUID v37; // [rsp+120h] [rbp+20h] BYREF
  int v38; // [rsp+130h] [rbp+30h]
  _OWORD *v39; // [rsp+138h] [rbp+38h]
  GUID v40; // [rsp+140h] [rbp+40h]
  int v41; // [rsp+150h] [rbp+50h]
  _QWORD *v42; // [rsp+158h] [rbp+58h]

  v2 = (char *)this + 8;
  v4 = (__int128 *)*((_QWORD *)this + 1);
  v6 = (__int128 *)*((_QWORD *)this + 2);
  v7 = 0;
  while ( v4 != v6 )
  {
    v8 = *((_QWORD *)a2 + 15);
    v9 = *((_DWORD *)v4 + 16);
    v29 = *v4;
    v33 = v9;
    v10 = v4[2];
    v30 = v4[1];
    v31 = v10;
    v32 = v4[3];
    if ( v8 )
    {
      v35 = 0;
      (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)(v8 + 144) + 40LL))(v8 + 144, v34, 0LL);
      CMILMatrix::Multiply((CMILMatrix *)&v29, (const struct CMILMatrix *)v34);
    }
    v22[0] = *((_QWORD *)v4 + 9);
    v23 = *((_BYTE *)v4 + 85);
    v24 = *((_BYTE *)v4 + 84);
    v36[0] = GUID_621deea1_86be_4408_bc62_fba15802fbd0;
    Rotation = CMILMatrix::GetRotation((CMILMatrix *)&v29);
    v25 = Rotation;
    switch ( Rotation )
    {
      case 1:
        v12 = v29;
        v13 = DWORD1(v30);
        goto LABEL_13;
      case 2:
        v27 = v30 ^ _xmm;
        v28 = DWORD1(v29);
        goto LABEL_15;
      case 3:
        v12 = v29 ^ _xmm;
        v14 = DWORD1(v30);
        goto LABEL_12;
      case 4:
        v12 = v30;
        v14 = DWORD1(v29);
LABEL_12:
        v13 = v14 ^ _xmm;
LABEL_13:
        v27 = v12;
        v28 = v13;
        goto LABEL_15;
    }
    v27 = 0;
    v28 = 0;
LABEL_15:
    v15 = *((_QWORD *)this + 4);
    v26 = *((_DWORD *)v4 + 20);
    v22[1] = *((unsigned int *)a2 + 18);
    v39 = v36;
    v42 = v22;
    v37 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
    v38 = 16;
    v40 = GUID_621deea1_86be_4408_bc62_fba15802fbd0;
    v41 = 40;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *))(*(_QWORD *)v15 + 56LL))(v15, 2LL, &v37);
    v7 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xC1u);
      return v7;
    }
    v4 = (__int128 *)((char *)v4 + 88);
  }
  if ( v36 != (_OWORD *)v2 )
  {
    v18 = *(void **)v2;
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    v19 = *((_QWORD *)v2 + 2);
    *((_QWORD *)v2 + 2) = 0LL;
    if ( v18 )
    {
      v20 = (__int64)((unsigned __int128)((v19 - (__int64)v18) * (__int128)0x2E8BA2E8BA2E8BA3LL) >> 64) >> 4;
      std::_Deallocate<16,0>(v18, 88 * ((v20 >> 63) + v20));
    }
  }
  return v7;
}
