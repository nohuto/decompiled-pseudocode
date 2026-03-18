/*
 * XREFs of ?CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJPEBVCCompositionSurfaceInfo@@@Z @ 0x180263790
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18001543C (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::CommitRecordedStatistics(
        CCompositionSwapchainStatistics *this,
        const struct CCompositionSurfaceInfo *a2)
{
  char *v2; // rdi
  __int128 *v4; // rbx
  __int128 *v6; // r14
  unsigned int v7; // esi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 (__fastcall *v12)(const struct CCompositionSurfaceInfo *); // rax
  __int128 v13; // xmm1
  __int64 v14; // rax
  int Rotation; // eax
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm1_4
  unsigned int v19; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  __int64 v22; // rcx
  void *v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  _QWORD v27[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v28; // [rsp+40h] [rbp-C0h]
  char v29; // [rsp+41h] [rbp-BFh]
  int v30; // [rsp+44h] [rbp-BCh]
  int v31; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+4Ch] [rbp-B4h]
  int v33; // [rsp+50h] [rbp-B0h]
  __int128 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+70h] [rbp-90h]
  __int128 v36; // [rsp+80h] [rbp-80h]
  __int128 v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+A0h] [rbp-60h]
  _BYTE v39[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v40; // [rsp+F0h] [rbp-10h]
  _OWORD v41[2]; // [rsp+100h] [rbp+0h] BYREF
  GUID v42; // [rsp+120h] [rbp+20h] BYREF
  int v43; // [rsp+130h] [rbp+30h]
  _OWORD *v44; // [rsp+138h] [rbp+38h]
  GUID v45; // [rsp+140h] [rbp+40h]
  int v46; // [rsp+150h] [rbp+50h]
  _QWORD *v47; // [rsp+158h] [rbp+58h]

  v2 = (char *)this + 8;
  v4 = (__int128 *)*((_QWORD *)this + 1);
  v6 = (__int128 *)*((_QWORD *)this + 2);
  v7 = 0;
  while ( v4 != v6 )
  {
    v8 = *v4;
    v9 = v4[1];
    v38 = *((_DWORD *)v4 + 16);
    v10 = *(_QWORD *)a2;
    v34 = v8;
    v11 = v4[2];
    v12 = *(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(v10 + 48);
    v35 = v9;
    v13 = v4[3];
    v36 = v11;
    v37 = v13;
    v14 = v12(a2);
    if ( v14 )
    {
      v40 = 0;
      (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)(v14 + 144) + 40LL))(v14 + 144, v39, 0LL);
      CMILMatrix::Multiply((CMILMatrix *)&v34, (const struct CMILMatrix *)v39);
    }
    v27[0] = *((_QWORD *)v4 + 9);
    v28 = *((_BYTE *)v4 + 85);
    v29 = *((_BYTE *)v4 + 84);
    v41[0] = GUID_621deea1_86be_4408_bc62_fba15802fbd0;
    Rotation = CMILMatrix::GetRotation((CMILMatrix *)&v34);
    v30 = Rotation;
    switch ( Rotation )
    {
      case 1:
        v16 = v34;
        v17 = DWORD1(v35);
        goto LABEL_13;
      case 2:
        v32 = v35 ^ _xmm;
        v33 = DWORD1(v34);
        goto LABEL_15;
      case 3:
        v16 = v34 ^ _xmm;
        v18 = DWORD1(v35);
        goto LABEL_12;
      case 4:
        v16 = v35;
        v18 = DWORD1(v34);
LABEL_12:
        v17 = v18 ^ _xmm;
LABEL_13:
        v32 = v16;
        v33 = v17;
        goto LABEL_15;
    }
    v32 = 0;
    v33 = 0;
LABEL_15:
    v31 = *((_DWORD *)v4 + 20);
    v19 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 224LL))(a2);
    v20 = *((_QWORD *)this + 4);
    v27[1] = v19;
    v44 = v41;
    v42 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
    v47 = v27;
    v43 = 16;
    v46 = 40;
    v45 = GUID_621deea1_86be_4408_bc62_fba15802fbd0;
    v21 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *))(*(_QWORD *)v20 + 56LL))(v20, 2LL, &v42);
    v7 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xBFu, 0LL);
      return v7;
    }
    v4 = (__int128 *)((char *)v4 + 88);
  }
  if ( v41 != (_OWORD *)v2 )
  {
    v23 = *(void **)v2;
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    v24 = *((_QWORD *)v2 + 2);
    *((_QWORD *)v2 + 2) = 0LL;
    if ( v23 )
    {
      v25 = (__int64)((unsigned __int128)((v24 - (__int64)v23) * (__int128)0x2E8BA2E8BA2E8BA3LL) >> 64) >> 4;
      std::_Deallocate<16,0>(v23, 88 * ((v25 >> 63) + v25));
    }
  }
  return v7;
}
