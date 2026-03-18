/*
 * XREFs of ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006FC34
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006F790 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002B064 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18006FE74 (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E51D0 (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800E5334 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800E5DA4 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800E777C (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180180FC0 (--$-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInfo@.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@PEA_N@Z @ 0x1801834F8 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AEB.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180185C40 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?clear_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180186178 (-clear_region@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPl.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x1801866C8 (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfigurationForAdapter(_QWORD *a1)
{
  int v1; // esi
  char v2; // r15
  char v3; // r12
  COverlayContext **v4; // r13
  __int64 v5; // rdi
  __int64 i; // r14
  COverlayContext *v7; // rbx
  __int64 *v8; // r14
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // r9
  char v14; // di
  char v15; // dl
  COverlayContext **v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rbx
  COverlayContext **v20; // rbx
  COverlayContext **v21; // r13
  COverlayContext *v22; // r14
  __int64 v23; // rcx
  __int64 *v24; // r15
  __int64 v25; // r12
  __int64 v26; // rbx
  _BYTE *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r8
  bool v30; // cf
  unsigned int v31; // ecx
  __int64 v32; // r8
  unsigned int v33; // ecx
  char v34; // al
  __int64 v35; // rcx
  unsigned int j; // r12d
  unsigned __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // [rsp+28h] [rbp-99h]
  char v41; // [rsp+38h] [rbp-89h] BYREF
  _BYTE v42[7]; // [rsp+39h] [rbp-88h] BYREF
  _BYTE v43[8]; // [rsp+40h] [rbp-81h] BYREF
  _QWORD v44[2]; // [rsp+48h] [rbp-79h] BYREF
  _BYTE *v45; // [rsp+58h] [rbp-69h] BYREF
  _BYTE *v46; // [rsp+60h] [rbp-61h]
  __int64 *v47; // [rsp+68h] [rbp-59h]
  _BYTE v48[128]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v49; // [rsp+F0h] [rbp+2Fh] BYREF

  v44[0] = a1;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = (COverlayContext **)a1[1];
  v5 = *a1 & 0x1FFFFFFFFFFFFFFFLL;
  if ( v4 > &v4[*a1] )
    v5 = 0LL;
  if ( v5 )
  {
    for ( i = 0LL; i != v5; ++i )
    {
      v7 = *v4;
      if ( COverlayContext::HaveOverlayCandidatesChanged(*v4) )
        v2 = 1;
      ++v4;
      if ( *((_DWORD *)v7 + 3255) )
        v3 = 1;
    }
    v8 = (__int64 *)v44[0];
    if ( v2 )
    {
      if ( v3 )
      {
        v45 = v48;
        v10 = 0;
        v41 = 0;
        v46 = v48;
        v47 = &v49;
        v42[0] = 0;
        do
        {
          v11 = COverlayContext::DeriveCheckCandidatesList(v8, &v45, v42);
          v1 = v11;
          if ( v11 < 0 )
          {
            v40 = 2015;
            goto LABEL_76;
          }
          v14 = v42[0];
          if ( v42[0] )
          {
            gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v44, &v45);
            v11 = COverlayContext::CheckMultiPlaneOverlaySupport(v8, v44, &v41);
            v1 = v11;
            if ( v11 < 0 )
            {
              v40 = 2021;
LABEL_76:
              MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v40, 0LL);
              goto LABEL_31;
            }
          }
          v15 = v41;
          ++v10;
        }
        while ( v14 && !v41 && v10 <= 8 );
        v16 = (COverlayContext **)v8[1];
        v17 = 0LL;
        v18 = *v8;
        v19 = *v8 & 0x1FFFFFFFFFFFFFFFLL;
        if ( v16 > &v16[*v8] )
          v19 = 0LL;
        if ( v19 )
        {
          while ( 1 )
          {
            COverlayContext::PushCandidates(*v16, (unsigned __int64)&v45 & -(__int64)(v15 != 0));
            ++v17;
            ++v16;
            if ( v17 == v19 )
              break;
            v15 = v41;
          }
          v16 = (COverlayContext **)v8[1];
          v18 = *v8;
        }
        v20 = &v16[v18];
        if ( v16 != v20 )
        {
          while ( 1 )
          {
            v11 = COverlayContext::ReleaseObsoletePlaneAssignments(*v16);
            v1 = v11;
            if ( v11 < 0 )
              break;
            if ( ++v16 == v20 )
            {
              v16 = (COverlayContext **)v8[1];
              v18 = *v8;
              goto LABEL_26;
            }
          }
          v40 = 2044;
          goto LABEL_76;
        }
LABEL_26:
        v21 = &v16[v18];
        while ( v16 != v21 )
        {
          v22 = *v16;
          v1 = 0;
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)*v16 + 1054);
          v24 = (__int64 *)((char *)v22 + 192);
          v25 = *((_QWORD *)v22 + 25);
          v26 = *((_QWORD *)v22 + 24);
          if ( ((v25 - v26) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
          {
            v29 = 0LL;
            while ( v26 != v25 )
            {
              if ( *(_BYTE *)(v26 + 200) )
              {
                v29 = 0LL;
              }
              else
              {
                v30 = CCommonRegistryData::m_dwOverlayTestMode < 3;
                *(_BYTE *)(v26 + 248) = 1;
                if ( v30 )
                {
                  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v26 + 24) + 88LL))(
                         *(_QWORD *)(v26 + 24),
                         *((_QWORD *)v22 + 10),
                         0LL);
                  if ( v1 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v1, 0x108Cu, 0LL);
                  LOBYTE(v32) = 1;
                  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v26 + 24) + 296LL))(
                    *(_QWORD *)(v26 + 24),
                    2LL,
                    v32);
                  if ( v1 == -2005532292 )
                  {
                    v35 = *v24;
                    v1 = 0;
                    for ( j = 0;
                          j < (unsigned int)((__int64)(*((_QWORD *)v22 + 25) - *((_QWORD *)v22 + 24)) >> 8);
                          v35 = *v24 )
                    {
                      v37 = (unsigned __int64)j << 8;
                      if ( *(_BYTE *)(v37 + v35 + 248) )
                      {
                        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v37 + v35 + 24) + 112LL))(*(_QWORD *)(v37 + v35 + 24)) )
                          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v24 + v37 + 24) + 96LL))(*(_QWORD *)(*v24 + v37 + 24));
                        v44[0] = v37 + *v24;
                        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
                          (char *)v22 + 192,
                          v43,
                          v44);
                      }
                      else
                      {
                        ++j;
                      }
                    }
                    break;
                  }
                  if ( v1 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v1, 0x109Cu, 0LL);
                    goto LABEL_29;
                  }
                }
                if ( *((_BYTE *)v22 + 13447) )
                {
                  v29 = 0LL;
                }
                else
                {
                  v34 = COverlayContext::RectContainedInDirty(v22, v26 + 152, v29);
                  v29 = 0LL;
                  if ( !v34 )
                    *((_BYTE *)v22 + 13447) = 1;
                }
                *(_BYTE *)(v26 + 200) = 1;
                *(_BYTE *)(v26 + 224) = 1;
              }
              v26 += 256LL;
            }
            v38 = *((_QWORD *)v22 + 25);
            v39 = *v24;
            if ( ((v38 - *((_QWORD *)v22 + 24)) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
            {
              while ( v39 != v38 )
              {
                *(_BYTE *)(v39 + 248) = 0;
                v39 += 256LL;
              }
              detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
                (char *)v22 + 8432,
                (char *)v22 + 192,
                0LL);
              *((_BYTE *)v22 + 13433) = 1;
            }
            else
            {
              *((_DWORD *)v22 + 27) = *((_DWORD *)v22 + 26);
              *((_BYTE *)v22 + 13446) = 1;
            }
            v23 = *((_QWORD *)v22 + 1570) - *((_QWORD *)v22 + 1569);
            if ( v23 / 120 && !*((_DWORD *)v22 + 3355) )
              *((_BYTE *)v22 + 13447) = 1;
          }
LABEL_29:
          *((_DWORD *)v22 + 3255) = 0;
          if ( v1 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v1, 0x804u, 0LL);
            break;
          }
          ++v16;
        }
LABEL_31:
        v27 = v45;
        v28 = (v46 - v45) >> 3;
        if ( v28 )
        {
          detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
            &v45,
            0LL,
            v28,
            v13);
          v27 = v45;
        }
        v45 = 0LL;
        if ( v27 == v48 )
          v27 = 0LL;
        operator delete(v27);
      }
    }
  }
  return (unsigned int)v1;
}
