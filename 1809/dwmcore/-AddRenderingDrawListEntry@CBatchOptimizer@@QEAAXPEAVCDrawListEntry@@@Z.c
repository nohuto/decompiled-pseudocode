/*
 * XREFs of ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180024778
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800239F0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z @ 0x180189CE0 (-AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z.c)
 * Callees:
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180024CD0 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x180025284 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?DoesIntersectInclusive@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180025934 (-DoesIntersectInclusive@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18006E7D8 (-reset@-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180189FF8 (-ContinueLayer@CBatchOptimizer@@AEAAXH@Z.c)
 */

void __fastcall CBatchOptimizer::AddRenderingDrawListEntry(CBatchOptimizer *this, struct CDrawListEntry *a2)
{
  void (__fastcall ***v2)(_QWORD); // rdi
  __int64 v5; // rax
  int v6; // esi
  char v7; // r9
  int v8; // r13d
  int *i; // rdx
  char *v10; // r15
  bool v11; // zf
  bool v12; // al
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  void (__fastcall ***v17)(_QWORD); // r14
  __int64 v18; // rcx
  void (__fastcall ***v19)(_QWORD); // rax
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rcx
  void (__fastcall ***v23)(_QWORD); // rax
  char *v24; // rdx
  __int64 v25; // rcx
  void (__fastcall ***v26)(_QWORD); // rsi
  void (__fastcall ***v27)(_QWORD); // rax
  int *v28; // r11
  int v29; // r10d
  char *v30; // rcx
  int v31; // r10d
  int v32; // ecx
  bool v33; // al
  char v34; // [rsp+30h] [rbp-40h]
  char v35[3]; // [rsp+31h] [rbp-3Fh] BYREF
  int v36; // [rsp+34h] [rbp-3Ch]
  __int128 v37; // [rsp+38h] [rbp-38h]
  _QWORD v38[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v39; // [rsp+58h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( !*((_DWORD *)this + 8) )
    CBatchOptimizer::AppendLayer(this);
  v5 = *(_QWORD *)a2;
  ++*((_DWORD *)a2 + 4);
  (*(void (__fastcall **)(struct CDrawListEntry *, CBatchOptimizer *))(v5 + 32))(a2, this);
  v37 = *(_OWORD *)(*(__int64 (__fastcall **)(struct CDrawListEntry *, _QWORD *))(*(_QWORD *)a2 + 56LL))(a2, v38);
  CMILMatrix::Transform2DBoundsHelper<0>((struct CDrawListEntry *)((char *)a2 + 56));
  v6 = 0;
  v36 = *((_DWORD *)this + 8);
  v7 = 1;
  v34 = 1;
  if ( !v36 )
  {
LABEL_50:
    v26 = v2;
    v27 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct CDrawListEntry *))(*(_QWORD *)a2 + 40LL))(a2);
    v2 = v27;
    if ( v27 )
      (**v27)(v27);
    if ( v26 )
      (*v26)[1](v26);
    CBatchOptimizer::AppendLayer(this);
    v6 = *((_DWORD *)this + 8) - 1;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v8 = v6;
    for ( i = (int *)((char *)this + 4 * v6 + 48); *((_DWORD *)this + 130 * *i + 26); ++i )
      ++v8;
    v6 = v8;
    v10 = (char *)this + 520 * *((int *)this + v8 + 12);
    if ( *((_QWORD *)v10 + 10) == *((_QWORD *)this + 2) )
    {
      if ( *((_QWORD *)v10 + 14) || *((_DWORD *)v10 + 25) == 1 )
        v11 = *((_DWORD *)v10 + 22) == *((_DWORD *)this + 6);
      else
        v11 = *((_DWORD *)v10 + 25) == 0;
      v12 = v11;
    }
    else
    {
      v12 = 0;
    }
    if ( !v12 )
      goto LABEL_45;
    if ( v7 )
    {
      v13 = v36 - 1;
      v14 = v36 - 1;
      if ( v14 != v8 )
      {
        v28 = (int *)((char *)this + 4 * v13 + 48);
        while ( 1 )
        {
          v29 = 0;
          v30 = (char *)this + 520 * *v28 + 80;
          *(_QWORD *)&v37 = v30;
          if ( *((_DWORD *)v30 + 5) )
            break;
LABEL_67:
          --v13;
          --v14;
          --v28;
          if ( v14 == v8 )
            goto LABEL_14;
        }
        while ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectInclusive(
                                    &v39,
                                    &v30[16 * v29 + 200]) )
        {
          v30 = (char *)v37;
          v29 = v31 + 1;
          if ( v29 == *(_DWORD *)(v37 + 20) )
            goto LABEL_67;
        }
        v32 = *((_DWORD *)this + 8);
        v7 = 0;
        v34 = 0;
        v6 = v13;
        if ( v32 == 8 && v13 == 7 )
        {
          if ( *((_BYTE *)this + 4240) )
          {
            if ( *((_DWORD *)this + 130 * *((int *)this + v13 + 12) + 25) == 1 )
            {
              v33 = CBatchOptimizer::TryMergeOneLayer(this);
              v7 = 0;
              if ( v33 )
              {
                v36 = *((_DWORD *)this + 8);
                v6 = v36 - 1;
              }
            }
          }
        }
        goto LABEL_46;
      }
    }
LABEL_14:
    v15 = (*(__int64 (__fastcall **)(struct CDrawListEntry *))(*(_QWORD *)a2 + 40LL))(a2);
    v16 = *((_QWORD *)v10 + 14);
    v17 = (void (__fastcall ***)(_QWORD))v15;
    if ( v16
      || *((_DWORD *)v10 + 25) == 1
      && (v18 = *(_QWORD *)&v10[8 * (*((_DWORD *)v10 + 24) - 1) + 120],
          (v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18)) != 0) )
    {
      (*(void (__fastcall **)(__int64, _QWORD *, void (__fastcall ***)(_QWORD), char *))(*(_QWORD *)v16 + 80LL))(
        v16,
        v38,
        v17,
        v35);
      if ( !v35[0] )
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::reset(v38);
      v17 = (void (__fastcall ***)(_QWORD))v38[0];
      v38[0] = 0LL;
    }
    else if ( v17 )
    {
      (**v17)(v17);
    }
    v19 = v17;
    if ( v2 )
    {
      (*v2)[1](v2);
      v19 = v17;
    }
    v2 = v17;
    if ( v19 )
      break;
    v7 = v34;
LABEL_45:
    v6 = v8 + 1;
LABEL_46:
    v20 = v36;
    if ( v6 == v36 )
      goto LABEL_28;
  }
  if ( !*((_DWORD *)v10 + 25) )
    *((_DWORD *)v10 + 22) = *((_DWORD *)this + 6);
  v20 = v36;
LABEL_28:
  if ( v6 == v20 )
    goto LABEL_50;
LABEL_29:
  (**(void (__fastcall ***)(struct CDrawListEntry *))a2)(a2);
  v21 = 520LL * *((int *)this + v6 + 12);
  if ( !v2 )
    goto LABEL_38;
  if ( !*(_DWORD *)((char *)this + v21 + 100) )
  {
    if ( *(_QWORD *)((char *)this + v21 + 112) )
      goto LABEL_38;
    if ( (((__int64 (__fastcall *)(_QWORD))(*v2)[9])(v2) & 0x10000) == 0 )
    {
      if ( v6 )
      {
        if ( !*((_DWORD *)this + 130 * *((int *)this + v6 + 11) + 26) )
          *((_BYTE *)this + 4240) = 1;
        goto LABEL_38;
      }
      goto LABEL_39;
    }
  }
  v22 = *(_QWORD *)((char *)this + v21 + 112);
  v23 = v2;
  v2 = 0LL;
  *(_QWORD *)((char *)this + v21 + 112) = v23;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
LABEL_38:
  if ( v6 && *(_DWORD *)((char *)this + v21 + 100) == 20 )
  {
LABEL_71:
    CBatchOptimizer::ContinueLayer(this, v6);
  }
  else
  {
LABEL_39:
    if ( *(_DWORD *)((char *)this + v21 + 96) == 20 )
      goto LABEL_71;
  }
  v24 = (char *)this + 520 * *((int *)this + v6 + 12);
  v25 = *((unsigned int *)v24 + 24);
  *((_DWORD *)v24 + 24) = v25 + 1;
  *(_QWORD *)&v24[8 * v25 + 120] = a2;
  if ( v6 )
    *(_OWORD *)&v24[16 * *((unsigned int *)v24 + 25) + 280] = v39;
  ++*((_DWORD *)v24 + 25);
  if ( v2 )
    (*v2)[1](v2);
}
