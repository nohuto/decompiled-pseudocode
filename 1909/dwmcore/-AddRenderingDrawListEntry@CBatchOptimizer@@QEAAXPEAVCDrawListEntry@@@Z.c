/*
 * XREFs of ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180065F38
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180065430 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z @ 0x1801AD174 (-AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z.c)
 * Callees:
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18001473C (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800582A8 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x180058510 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800666A0 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x1800C5098 (-GetCommonSuperset@CRenderingEffect@@SA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@.c)
 *     ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800CBD84 (-DoesIntersectInclusive@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBatchOptimizer::AddRenderingDrawListEntry(CBatchOptimizer *this, struct CDrawListEntry *a2)
{
  __int64 v2; // rbx
  __int128 v5; // xmm0
  __int64 v6; // rax
  int v7; // r15d
  int v8; // esi
  char v9; // r9
  int v10; // r13d
  int *i; // rdx
  __int64 v12; // rdx
  char *v13; // r14
  bool v14; // al
  bool v15; // zf
  int v16; // r8d
  __int64 v17; // r9
  void (__fastcall ***v18)(_QWORD); // r15
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r14
  char *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rcx
  void (__fastcall ***v27)(_QWORD); // rax
  int *v28; // r11
  int v29; // r10d
  char *v30; // rcx
  int v31; // r10d
  int v32; // ecx
  char v33; // al
  char v34; // [rsp+20h] [rbp-50h]
  int v35; // [rsp+24h] [rbp-4Ch]
  void (__fastcall ***v36)(_QWORD); // [rsp+28h] [rbp-48h] BYREF
  __int128 v37; // [rsp+30h] [rbp-40h]
  _QWORD v38[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v39; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0LL;
  v36 = 0LL;
  if ( !*((_DWORD *)this + 8) )
  {
    v5 = *((_OWORD *)this + 1);
    *((_DWORD *)this + 8) = 1;
    *(_OWORD *)((char *)this + 520 * *((int *)this + 12) + 80) = v5;
  }
  v6 = *(_QWORD *)a2;
  ++*((_DWORD *)a2 + 4);
  (*(void (__fastcall **)(struct CDrawListEntry *, CBatchOptimizer *))(v6 + 32))(a2, this);
  v37 = *(_OWORD *)(*(__int64 (__fastcall **)(struct CDrawListEntry *, _QWORD *))(*(_QWORD *)a2 + 56LL))(a2, v38);
  CMILMatrix::Transform2DBoundsHelper<0>((struct CDrawListEntry *)((char *)a2 + 64));
  v7 = *((_DWORD *)this + 8);
  v8 = 0;
  v35 = v7;
  v9 = 1;
  v34 = 1;
  if ( !v7 )
  {
LABEL_50:
    v27 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct CDrawListEntry *))(*(_QWORD *)a2 + 40LL))(a2);
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=((__int64 *)&v36, v27);
    CBatchOptimizer::AppendLayer(this);
    v2 = (__int64)v36;
    v8 = *((_DWORD *)this + 8) - 1;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v10 = v8;
    for ( i = (int *)((char *)this + 4 * v8 + 48); *((_DWORD *)this + 130 * *i + 26); ++i )
      ++v10;
    v12 = v10;
    v8 = v10;
    v13 = (char *)this + 520 * *((int *)this + v10 + 12);
    if ( *((_QWORD *)v13 + 10) != *((_QWORD *)this + 2) )
    {
      v14 = 0;
      goto LABEL_10;
    }
    if ( !*((_QWORD *)v13 + 14) && *((_DWORD *)v13 + 25) != 1 )
    {
      v14 = *((_DWORD *)v13 + 25) == 0;
LABEL_10:
      v15 = !v14;
      goto LABEL_11;
    }
    if ( *((_DWORD *)v13 + 22) != *((_DWORD *)this + 6) )
      goto LABEL_47;
    v25 = v13[92];
    if ( v25 != *((_BYTE *)this + 28) )
      goto LABEL_47;
    v15 = v25 == 2;
LABEL_11:
    if ( !v15 )
      break;
LABEL_47:
    v8 = v10 + 1;
LABEL_48:
    if ( v8 == v7 )
      goto LABEL_23;
  }
  if ( v9 )
  {
    v16 = v7 - 1;
    v17 = v7 - 1;
    if ( v17 != v10 )
    {
      v28 = (int *)((char *)this + 4 * v16 + 48);
      while ( 1 )
      {
        v29 = 0;
        v30 = (char *)this + 520 * *v28 + 80;
        *(_QWORD *)&v37 = v30;
        if ( *((_DWORD *)v30 + 5) )
          break;
LABEL_63:
        --v16;
        --v17;
        --v28;
        if ( v17 == v12 )
          goto LABEL_14;
      }
      while ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(
                                  &v39,
                                  &v30[16 * v29 + 200]) )
      {
        v30 = (char *)v37;
        v29 = v31 + 1;
        if ( v29 == *(_DWORD *)(v37 + 20) )
        {
          v12 = v10;
          goto LABEL_63;
        }
      }
      v32 = *((_DWORD *)this + 8);
      v9 = 0;
      v8 = v16;
      v34 = 0;
      if ( v16 == v32 - 1 )
      {
        if ( *((_BYTE *)this + 4240) )
        {
          if ( v32 == 8 && *((_DWORD *)this + 130 * *((int *)this + v16 + 12) + 25) == 1 )
          {
            v33 = CBatchOptimizer::TryMergeOneLayer(this);
            v9 = 0;
            if ( v33 )
            {
              v7 = *((_DWORD *)this + 8);
              v35 = v7;
              v8 = v7 - 1;
            }
          }
        }
      }
      goto LABEL_48;
    }
  }
LABEL_14:
  v18 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct CDrawListEntry *))(*(_QWORD *)a2 + 40LL))(a2);
  v19 = *((_QWORD *)v13 + 14);
  if ( v19
    || *((_DWORD *)v13 + 25) == 1
    && (v26 = *(_QWORD *)&v13[8 * (*((_DWORD *)v13 + 24) - 1) + 120],
        (v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 40LL))(v26)) != 0) )
  {
    CRenderingEffect::GetCommonSuperset(v38, v19, v18);
    v18 = (void (__fastcall ***)(_QWORD))v38[0];
  }
  else if ( v18 )
  {
    (**v18)(v18);
  }
  v38[0] = 0LL;
  v20 = v2;
  v2 = (__int64)v18;
  v36 = v18;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  v15 = v18 == 0LL;
  v7 = v35;
  if ( v15 )
  {
    v9 = v34;
    goto LABEL_47;
  }
  if ( !*((_DWORD *)v13 + 25) )
  {
    *((_DWORD *)v13 + 22) = *((_DWORD *)this + 6);
    v13[92] = *((_BYTE *)this + 28);
  }
LABEL_23:
  if ( v8 == v7 )
    goto LABEL_50;
LABEL_24:
  (**(void (__fastcall ***)(struct CDrawListEntry *))a2)(a2);
  v21 = 520LL * *((int *)this + v8 + 12);
  if ( !v2 )
    goto LABEL_38;
  if ( *(_DWORD *)((char *)this + v21 + 100) )
  {
    v24 = *(_QWORD *)((char *)this + v21 + 112);
    *(_QWORD *)((char *)this + v21 + 112) = v2;
LABEL_36:
    v2 = 0LL;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    goto LABEL_38;
  }
  if ( *(_QWORD *)((char *)this + v21 + 112) )
    goto LABEL_38;
  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2) & 0x10000) != 0 )
  {
    v24 = *(_QWORD *)((char *)this + v21 + 112);
    *(_QWORD *)((char *)this + v21 + 112) = v2;
    goto LABEL_36;
  }
  if ( !v8 )
    goto LABEL_29;
  if ( !*((_DWORD *)this + 130 * *((int *)this + v8 + 11) + 26) )
    *((_BYTE *)this + 4240) = 1;
LABEL_38:
  if ( v8 && *(_DWORD *)((char *)this + v21 + 100) == 20 )
  {
LABEL_69:
    CBatchOptimizer::ContinueLayer(this, v8);
  }
  else
  {
LABEL_29:
    if ( *(_DWORD *)((char *)this + v21 + 96) == 20 )
      goto LABEL_69;
  }
  v22 = (char *)this + 520 * *((int *)this + v8 + 12);
  v23 = *((unsigned int *)v22 + 24);
  *((_DWORD *)v22 + 24) = v23 + 1;
  *(_QWORD *)&v22[8 * v23 + 120] = a2;
  if ( v8 )
    *(_OWORD *)&v22[16 * *((unsigned int *)v22 + 25) + 280] = v39;
  ++*((_DWORD *)v22 + 25);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
}
