/*
 * XREFs of ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000BAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000BF44 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180029740 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180035AFC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180079F80 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18008B5C0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C1348 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     tanf_0 @ 0x1800F01E7 (tanf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSpotLight::AffectsVisual(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  bool v3; // zf
  const struct CVisualTree *v5; // r15
  CCompositionSpotLight *v6; // rbx
  char DoesIntersectUnsafe; // r13
  float v8; // xmm1_4
  float v9; // xmm7_4
  int v10; // r12d
  float v11; // xmm7_4
  struct _LIST_ENTRY *v12; // rdi
  _DWORD *v13; // r8
  struct CTreeData *TreeData; // r14
  bool v15; // r11
  unsigned __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // eax
  unsigned int v22; // ecx
  CVisual *v23; // rcx
  float v24; // xmm0_4
  int v25; // esi
  float v26; // xmm2_4
  float v27; // xmm1_4
  CVisual *v28; // r14
  float v29; // xmm0_4
  unsigned int v30; // xmm2_4
  unsigned int v31; // xmm1_4
  float v32; // xmm0_4
  struct _LIST_ENTRY *v33; // rdi
  _DWORD *v34; // r8
  struct CTreeData *v35; // rsi
  bool v36; // r11
  struct _LIST_ENTRY *v37; // r12
  unsigned __int64 v38; // rax
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  char *v43; // rbx
  unsigned int v44; // edx
  __int64 v45; // r8
  struct CVisual **v46; // r9
  struct CVisual **v47; // rcx
  char v48; // al
  int updated; // eax
  unsigned int v51; // ecx
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // ebx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v56; // r10
  struct _LIST_ENTRY *Flink; // rax
  __int64 v58; // rcx
  unsigned int i; // eax
  CCompositionSpotLight **v60; // rcx
  CCompositionSpotLight *v61; // rax
  unsigned int v62; // ecx
  struct _LIST_ENTRY *v63; // rax
  struct _LIST_ENTRY *v64; // r10
  struct _LIST_ENTRY *v65; // rax
  __int64 v66; // rcx
  _BYTE *v67; // rdx
  unsigned int j; // eax
  CVisual **v69; // rcx
  CVisual *v70; // rax
  struct _LIST_ENTRY *v71; // rax
  struct _LIST_ENTRY *v72; // r10
  struct _LIST_ENTRY *v73; // rax
  int v74; // eax
  unsigned int v75; // ecx
  unsigned int v76; // ecx
  struct CVisual *v77; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v78; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v79; // [rsp+58h] [rbp-B0h]
  __int128 v80; // [rsp+68h] [rbp-A0h]
  __int128 v81; // [rsp+78h] [rbp-90h]
  int Blink; // [rsp+88h] [rbp-80h]
  unsigned __int64 v83; // [rsp+98h] [rbp-70h] BYREF
  float v84; // [rsp+A0h] [rbp-68h]
  float v85; // [rsp+A4h] [rbp-64h]
  _BYTE v86[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v87[16]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v88[16]; // [rsp+C8h] [rbp-40h] BYREF

  v3 = *((_BYTE *)this + 162) == 0;
  v5 = a2;
  v77 = a3;
  v6 = this;
  DoesIntersectUnsafe = 1;
  if ( !v3 )
  {
    if ( *((float *)this + 90) != 0.0 )
      return 1;
    if ( *((float *)this + 91) != 0.0 )
      return 1;
    if ( *((float *)this + 92) != -1.0 )
      return 1;
    v8 = *((float *)this + 94);
    if ( *((float *)this + 93) > v8 || v8 > 1.5707952 )
      return 1;
    v3 = *((_BYTE *)a2 + 32) == 0;
    v9 = *((float *)this + 89);
    v10 = -2003292412;
    Blink = 0;
    v11 = v9 - *((float *)a3 + 28);
    if ( v3 )
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(a3);
      v56 = TreeDataListHead;
      if ( !TreeDataListHead )
        goto LABEL_63;
      Flink = TreeDataListHead->Flink;
      if ( Flink == v56 )
        goto LABEL_63;
      while ( 1 )
      {
        v12 = Flink - 14;
        if ( (const struct CVisualTree *)Flink[2].Flink == v5 )
          break;
        Flink = Flink->Flink;
        if ( Flink == v56 )
          goto LABEL_63;
      }
    }
    else
    {
      v12 = (struct _LIST_ENTRY *)((char *)a3 + 328);
    }
    if ( !v12 )
      goto LABEL_63;
    v10 = 0;
    v13 = (_DWORD *)*((_QWORD *)a3 + 28);
    TreeData = 0LL;
    v15 = 0;
    v3 = (*v13 & 0x800000) == 0;
    v83 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 384LL);
    if ( !v3 )
    {
      v58 = (unsigned int)v13[1];
      a2 = (const struct CVisualTree *)(v13 + 2);
      for ( i = 0; i < (unsigned int)v58; a2 = (const struct CVisualTree *)((char *)a2 + 1) )
      {
        if ( *(_BYTE *)a2 == 9 )
          break;
        ++i;
      }
      if ( i >= (unsigned int)v58 )
      {
        v60 = 0LL;
      }
      else
      {
        a2 = (const struct CVisualTree *)(v58 + 15);
        v60 = (CCompositionSpotLight **)((char *)a2 + 8LL * i - ((unsigned __int8)a2 & 7) + (_QWORD)v13);
      }
      this = *v60;
      if ( this )
      {
        this = (CCompositionSpotLight *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 192LL))(*(_QWORD *)this);
        if ( !this || ((__int64)v12[1].Flink & 4) != 0 && v12[13].Blink == (struct _LIST_ENTRY *)v83 )
        {
          v15 = 0;
        }
        else
        {
          TreeData = CVisual::FindTreeData(this, v5);
          if ( TreeData )
            goto LABEL_15;
        }
      }
    }
    if ( a3 != *((struct CVisual **)v5 + 3) )
    {
      this = (CCompositionSpotLight *)*((_QWORD *)a3 + 10);
      TreeData = 0LL;
      if ( *((_BYTE *)v5 + 32) )
      {
        TreeData = (CCompositionSpotLight *)((char *)this + 328);
      }
      else
      {
        v61 = (CCompositionSpotLight *)CVisual::GetTreeDataListHead(this);
        if ( v61 )
        {
          this = *(CCompositionSpotLight **)v61;
          if ( *(CCompositionSpotLight **)v61 != v61 )
          {
            while ( *((const struct CVisualTree **)this + 4) != v5 )
            {
              this = *(CCompositionSpotLight **)this;
              if ( this == v61 )
                goto LABEL_14;
            }
            TreeData = (CCompositionSpotLight *)((char *)this - 224);
          }
        }
      }
    }
LABEL_14:
    if ( !TreeData )
    {
      v16 = 1LL;
LABEL_16:
      if ( v12[7].Blink < (struct _LIST_ENTRY *)v16 )
      {
        updated = CVisual::UpdateWorldTransform(a3, v5, (struct CTreeData *)v12, v15, TreeData);
        v10 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, updated, 0x80Bu, 0LL);
      }
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v10, 0x768u, 0LL);
      }
      else
      {
        if ( !v12[7].Blink )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292412, 0x65u, 0LL);
          v10 = -2003292412;
          MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, -2003292412, 0x76Fu, 0LL);
          goto LABEL_63;
        }
        v17 = *(_OWORD *)&v12[2].Blink;
        v10 = 0;
        v18 = *(_OWORD *)&v12[3].Blink;
        Blink = (int)v12[6].Blink;
        v78 = v17;
        v19 = *(_OWORD *)&v12[4].Blink;
        v79 = v18;
        v20 = *(_OWORD *)&v12[5].Blink;
        v80 = v19;
        v81 = v20;
      }
      if ( v10 >= 0 )
      {
        LOBYTE(a2) = 1;
        if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(&v78, a2) )
        {
          if ( v11 <= 0.0 || *((float *)v6 + 94) <= 0.0 )
          {
            DoesIntersectUnsafe = 0;
LABEL_39:
            v43 = (char *)v6 + 256;
            v44 = 0;
            v45 = *((unsigned int *)v43 + 6);
            v46 = *(struct CVisual ***)v43;
            if ( (_DWORD)v45 )
            {
              v47 = *(struct CVisual ***)v43;
              while ( v77 != *v47 )
              {
                ++v44;
                ++v47;
                if ( v44 >= (unsigned int)v45 )
                  goto LABEL_43;
              }
              v48 = 1;
            }
            else
            {
LABEL_43:
              v48 = 0;
            }
            if ( DoesIntersectUnsafe )
            {
              if ( v48 )
                DynArray<CVisual *,0>::Remove(v43, &v77, v45, v46);
              return DoesIntersectUnsafe;
            }
            if ( v48 )
              return DoesIntersectUnsafe;
            v51 = v45 + 1;
            DoesIntersectUnsafe = 1;
            if ( (int)v45 + 1 < (unsigned int)v45 )
            {
              v54 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, -2147024362, 0xB8u, 0LL);
            }
            else
            {
              if ( v51 <= *((_DWORD *)v43 + 5) )
              {
                v46[v45] = v77;
                *((_DWORD *)v43 + 6) = v51;
                return DoesIntersectUnsafe;
              }
              v52 = DynArrayImpl<0>::AddMultipleAndSet(v43, 8LL, 1LL, &v77);
              v54 = v52;
              if ( v52 >= 0 )
                return DoesIntersectUnsafe;
              MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0xC3u, 0LL);
            }
            MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, v54, 0x2A6u, 0LL);
            return DoesIntersectUnsafe;
          }
          v21 = (*(__int64 (__fastcall **)(struct CVisual *, _QWORD, _BYTE *))(*(_QWORD *)v77 + 232LL))(v77, 0LL, v86);
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x274u, 0LL);
            return DoesIntersectUnsafe;
          }
          CMILMatrix::Transform2DBoundsHelper<1>(&v78, v86, v87);
          v24 = tanf_0(*((float *)v6 + 94));
          v3 = *((_BYTE *)v5 + 32) == 0;
          v25 = -2003292412;
          v26 = *((float *)v6 + 88);
          v27 = *((float *)v6 + 87);
          v28 = (CVisual *)*((_QWORD *)v6 + 31);
          v29 = v24 * v11;
          Blink = 0;
          *(float *)&v30 = v26 - v29;
          *(float *)&v31 = v27 - v29;
          v32 = v29 + v29;
          v83 = __PAIR64__(v30, v31);
          v84 = *(float *)&v31 + v32;
          v85 = *(float *)&v30 + v32;
          if ( v3 )
          {
            v63 = CVisual::GetTreeDataListHead(v28);
            v64 = v63;
            if ( !v63 )
              goto LABEL_116;
            v65 = v63->Flink;
            if ( v65 == v64 )
              goto LABEL_116;
            while ( 1 )
            {
              v33 = v65 - 14;
              if ( (const struct CVisualTree *)v65[2].Flink == v5 )
                break;
              v65 = v65->Flink;
              if ( v65 == v64 )
                goto LABEL_116;
            }
          }
          else
          {
            v33 = (struct _LIST_ENTRY *)((char *)v28 + 328);
          }
          if ( !v33 )
            goto LABEL_116;
          v34 = (_DWORD *)*((_QWORD *)v28 + 28);
          v35 = 0LL;
          v36 = 0;
          v37 = *(struct _LIST_ENTRY **)(*((_QWORD *)v28 + 2) + 384LL);
          if ( (*v34 & 0x800000) != 0 )
          {
            v66 = (unsigned int)v34[1];
            v67 = v34 + 2;
            for ( j = 0; j < (unsigned int)v66; ++v67 )
            {
              if ( *v67 == 9 )
                break;
              ++j;
            }
            v69 = j >= (unsigned int)v66
                ? 0LL
                : (CVisual **)((char *)v34 + 8LL * j - (((_BYTE)v66 + 15) & 7) + v66 + 15);
            v23 = *v69;
            if ( v23 )
            {
              v70 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v23 + 192LL))(*(_QWORD *)v23);
              if ( !v70 || ((__int64)v33[1].Flink & 4) != 0 && v33[13].Blink == v37 )
              {
                v36 = 0;
              }
              else
              {
                v35 = CVisual::FindTreeData(v70, v5);
                if ( v35 )
                  goto LABEL_33;
              }
            }
          }
          if ( v28 != *((CVisual **)v5 + 3) )
          {
            v23 = (CVisual *)*((_QWORD *)v28 + 10);
            v35 = 0LL;
            if ( *((_BYTE *)v5 + 32) )
            {
              v35 = (CVisual *)((char *)v23 + 328);
            }
            else
            {
              v71 = CVisual::GetTreeDataListHead(v23);
              v72 = v71;
              if ( v71 )
              {
                v73 = v71->Flink;
                if ( v73 != v72 )
                {
                  while ( (const struct CVisualTree *)v73[2].Flink != v5 )
                  {
                    v73 = v73->Flink;
                    if ( v73 == v72 )
                      goto LABEL_32;
                  }
                  v35 = (struct CTreeData *)&v73[-14];
                }
              }
            }
          }
LABEL_32:
          if ( !v35 )
          {
            v38 = 1LL;
LABEL_34:
            if ( v33[7].Blink >= (struct _LIST_ENTRY *)v38 )
              goto LABEL_35;
            v74 = CVisual::UpdateWorldTransform(v28, v5, (struct CTreeData *)v33, v36, v35);
            v25 = v74;
            if ( v74 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v23, 0LL, 0, v74, 0x80Bu, 0LL);
            if ( v25 >= 0 )
            {
LABEL_35:
              if ( !v33[7].Blink )
              {
                MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v23, 0LL, 0, -2003292412, 0x65u, 0LL);
                v25 = -2003292412;
                MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, -2003292412, 0x76Fu, 0LL);
                goto LABEL_116;
              }
              v39 = *(_OWORD *)&v33[2].Blink;
              v25 = 0;
              v40 = *(_OWORD *)&v33[3].Blink;
              Blink = (int)v33[6].Blink;
              v78 = v39;
              v41 = *(_OWORD *)&v33[4].Blink;
              v79 = v40;
              v42 = *(_OWORD *)&v33[5].Blink;
              v80 = v41;
              v81 = v42;
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v23, 0LL, 0, v25, 0x768u, 0LL);
            }
            if ( v25 >= 0 )
            {
              CMILMatrix::Transform2DBoundsHelper<1>(&v78, &v83, v88);
              DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v88, v87);
              goto LABEL_39;
            }
LABEL_116:
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v23, 0LL, 0, v25, 0x286u, 0LL);
            return DoesIntersectUnsafe;
          }
LABEL_33:
          v38 = *((_QWORD *)v35 + 15);
          goto LABEL_34;
        }
        return 1;
      }
LABEL_63:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v10, 0x264u, 0LL);
      return DoesIntersectUnsafe;
    }
LABEL_15:
    v16 = *((_QWORD *)TreeData + 15);
    goto LABEL_16;
  }
  return 0;
}
