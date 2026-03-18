/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18025B774
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@CGlobalCompositionSurfaceInfo@@UEAA_NPEAVIRenderTarget@@@Z @ 0x18025BE20 (-IsDirectFlipSupportedOnTarget@CGlobalCompositionSurfaceInfo@@UEAA_NPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180053120 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007F854 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800BFF10 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqqqqqqqq @ 0x18025C6B4 (McTemplateU0xqqqqqqqq.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::IsDirectFlipSupportedOnTarget(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct IRenderTarget *a2)
{
  struct CDisplaySet *v2; // rdi
  __int64 v4; // rcx
  CDisplayManager *v6; // rcx
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  unsigned int v10; // r12d
  CBitmapRealization *v11; // rcx
  struct _LUID AdapterLuid; // rax
  _QWORD *v13; // rcx
  int v14; // ebx
  _DWORD *v15; // rax
  __int64 v16; // rbx
  int (__fastcall *v17)(__int64, __int64 *, _QWORD); // rsi
  __int64 v18; // rbx
  __int64 v19; // rsi
  void (__fastcall *v20)(__int64, __int64, _QWORD, __int128 *); // r14
  __int64 v21; // rax
  __int64 v22; // r15
  struct _LUID v23; // r14
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  struct _LUID v27; // rax
  _QWORD *v28; // rcx
  int v29; // ebx
  _DWORD *v30; // rax
  __int64 *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  int (__fastcall *v34)(__int64 *, __int64 *, _QWORD); // r14
  __int64 v35; // rbx
  __int64 v36; // rsi
  void (__fastcall *v37)(__int64, __int64, _QWORD, _DWORD *); // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // r14
  __int64 v42; // rcx
  char v43; // r12
  DWORD LowPart; // ebx
  bool v45; // zf
  char v46; // r15
  __int64 v47; // rsi
  char v48; // al
  int v49; // edx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int128 v52; // xmm0
  struct CDisplaySet *v53; // rcx
  char v54; // bl
  _BYTE *v56; // [rsp+28h] [rbp-E0h]
  _BYTE v57[4]; // [rsp+68h] [rbp-A0h] BYREF
  float v58; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v59; // [rsp+70h] [rbp-98h] BYREF
  int v60; // [rsp+78h] [rbp-90h] BYREF
  int v61; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct CDisplaySet *v62; // [rsp+80h] [rbp-88h] BYREF
  __int64 v63; // [rsp+88h] [rbp-80h] BYREF
  int v64; // [rsp+90h] [rbp-78h] BYREF
  int v65; // [rsp+94h] [rbp-74h]
  struct _LUID v66; // [rsp+98h] [rbp-70h] BYREF
  struct IRenderTarget *v67; // [rsp+A0h] [rbp-68h]
  __int128 v68; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v69; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v70; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v71[4]; // [rsp+D8h] [rbp-30h] BYREF
  struct _LUID v72[2]; // [rsp+E8h] [rbp-20h] BYREF

  v2 = 0LL;
  v67 = a2;
  v57[0] = 0;
  v4 = *((_QWORD *)this + 9);
  v62 = 0LL;
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 144) + 80LL))(v4 + 144) )
  {
    if ( (int)CDisplayManager::GetCurrentDisplaySet(v6, &v62) < 0 )
    {
      v2 = v62;
    }
    else
    {
      CBitmapRealization::GetSourceRect(*((_QWORD *)this + 9), &v68);
      v2 = v62;
      v7 = *(float *)&v68 + 6291456.25;
      LODWORD(v69) = (int)(LODWORD(v7) << 10) >> 11;
      v8 = *((float *)&v68 + 1) + 6291456.25;
      DWORD1(v69) = (int)(LODWORD(v8) << 10) >> 11;
      v9 = *((float *)&v68 + 2) + 6291456.25;
      DWORD2(v69) = (int)(LODWORD(v9) << 10) >> 11;
      v58 = *((float *)&v68 + 3) + 6291456.25;
      HIDWORD(v69) = (int)(LODWORD(v58) << 10) >> 11;
      if ( *((_DWORD *)v62 + 1) == *((_DWORD *)this + 44)
        && *((struct IRenderTarget **)this + 21) == a2
        && *((_DWORD *)this + 46) == *(_DWORD *)((*(__int64 (__fastcall **)(__int64, struct _LUID *))(*(_QWORD *)(*((_QWORD *)this + 9) + 144LL) + 24LL))(
                                                   *((_QWORD *)this + 9) + 144LL,
                                                   v72)
                                               + 8)
        && operator==((_DWORD *)this + 47, &v69) )
      {
        v57[0] = *((_BYTE *)this + 181);
      }
      else
      {
        v63 = 0LL;
        v60 = DisplayId::Invalid;
        if ( (**(int (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))a2)(
               a2,
               &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
               &v63) >= 0
          && (*(int (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v63 + 120LL))(v63, &v64, &v60) >= 0 )
        {
          v10 = 0;
          v62 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, struct CDisplaySet **))v63)(
                 v63,
                 &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
                 &v62) >= 0 )
            v10 = (*(__int64 (__fastcall **)(struct CDisplaySet *))(*(_QWORD *)v62 + 40LL))(v62);
          if ( *((_DWORD *)this + 4) == 2 )
          {
            v11 = (CBitmapRealization *)*((_QWORD *)this + 9);
            v59 = 0LL;
            AdapterLuid = CBitmapRealization::GetAdapterLuid(v11, &v66);
            if ( *(_DWORD *)AdapterLuid.LowPart == v64 && *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) == v65 )
            {
              v14 = v60;
              v15 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, float *))(*v13 + 48LL))(v13, &v58);
              if ( *v15 == (_DWORD)DisplayId::None || *v15 == v14 || v14 == (_DWORD)DisplayId::All )
              {
                v16 = *((_QWORD *)this + 9);
                v17 = *(int (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v16 + 56LL);
                if ( v59 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
                if ( v17(v16, &v59, v10) >= 0 )
                {
                  v18 = v63;
                  v19 = v59;
                  v20 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int128 *))(*(_QWORD *)v63 + 376LL);
                  v21 = (*(__int64 (__fastcall **)(__int64, struct _LUID *))(*(_QWORD *)(*((_QWORD *)this + 9) + 144LL)
                                                                           + 24LL))(
                          *((_QWORD *)this + 9) + 144LL,
                          v72);
                  v56 = v57;
                  v20(v18, v19, *(unsigned int *)(v21 + 8), &v69);
                }
              }
            }
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v59);
          }
          else if ( *((_DWORD *)this + 4) == 3 )
          {
            v57[0] = 1;
            v22 = 0LL;
            do
            {
              if ( (unsigned int)v22 >= *((_DWORD *)this + 14) )
                break;
              v23 = (struct _LUID)*((_QWORD *)this + 4);
              v59 = 0LL;
              v66 = v23;
              CBitmapRealization::GetSourceRect(*(_QWORD *)(*(_QWORD *)&v23 + 8 * v22), &v70);
              v57[0] = 0;
              v24 = *(float *)&v70 + 6291456.25;
              v71[0] = (int)(LODWORD(v24) << 10) >> 11;
              v25 = *((float *)&v70 + 1) + 6291456.25;
              v71[1] = (int)(LODWORD(v25) << 10) >> 11;
              v26 = *((float *)&v70 + 2) + 6291456.25;
              v71[2] = (int)(LODWORD(v26) << 10) >> 11;
              v58 = *((float *)&v70 + 3) + 6291456.25;
              v71[3] = (int)(LODWORD(v58) << 10) >> 11;
              v27 = CBitmapRealization::GetAdapterLuid(*(CBitmapRealization **)(*(_QWORD *)&v23 + 8 * v22), v72);
              if ( *(_DWORD *)v27.LowPart == v64 && *(_DWORD *)(*(_QWORD *)&v27 + 4LL) == v65 )
              {
                v29 = v60;
                v30 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, int *))(*v28 + 48LL))(v28, &v61);
                if ( *v30 == (_DWORD)DisplayId::None || *v30 == v29 || v29 == (_DWORD)DisplayId::All )
                {
                  v31 = *(__int64 **)(*(_QWORD *)&v23 + 8 * v22);
                  v32 = v59;
                  v33 = *v31;
                  v59 = 0LL;
                  v34 = *(int (__fastcall **)(__int64 *, __int64 *, _QWORD))(v33 + 56);
                  if ( v32 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
                  if ( v34(v31, &v59, v10) >= 0 )
                  {
                    v35 = v63;
                    v36 = v59;
                    v37 = *(void (__fastcall **)(__int64, __int64, _QWORD, _DWORD *))(*(_QWORD *)v63 + 376LL);
                    v38 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v66
                                                                                                 + 8 * v22)
                                                                                     + 144LL)
                                                                         + 24LL))(
                            *(_QWORD *)(*(_QWORD *)&v66 + 8 * v22) + 144LL,
                            &v68);
                    v56 = v57;
                    v37(v35, v36, *(unsigned int *)(v38 + 8), v71);
                  }
                }
              }
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v59);
              v22 = (unsigned int)(v22 + 1);
            }
            while ( v57[0] );
          }
          if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DIRECTFLIP_SUPPORTEVENT) )
          {
            v39 = *((_QWORD *)this + 9);
            v58 = 0.0;
            v61 = 0;
            (*(void (__fastcall **)(__int64, float *, int *))(*(_QWORD *)(v39 + 144) + 32LL))(v39 + 144, &v58, &v61);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              v40 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 9) + 48LL))(
                                *((_QWORD *)this + 9),
                                &v59);
              v41 = *((_QWORD *)this + 9);
              v42 = *(_QWORD *)(v41 + 144);
              v43 = *v40 != (_DWORD)DisplayId::None;
              v45 = *(_DWORD *)(v41 + 272) == 3;
              v66 = *(struct _LUID *)(*(_QWORD *)this + 40LL);
              LowPart = v66.LowPart;
              v46 = v45;
              v47 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v42 + 24))(v41 + 144, &v68);
              v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 72LL))(v41);
              McTemplateU0xqqqqqqqq(
                (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
                v49,
                LowPart,
                v57[0],
                (_DWORD)v56,
                v48,
                *(_DWORD *)(v47 + 4),
                v46,
                v43,
                SLOBYTE(v58),
                v61);
            }
          }
          v50 = *((_QWORD *)this + 9);
          *((_DWORD *)this + 44) = *((_DWORD *)v2 + 1);
          *((_QWORD *)this + 21) = v67;
          *((_BYTE *)this + 181) = v57[0];
          v51 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v50 + 144) + 24LL))(v50 + 144, &v68);
          v52 = v69;
          *((_DWORD *)this + 46) = *(_DWORD *)(v51 + 8);
          v53 = v62;
          *(_OWORD *)((char *)this + 188) = v52;
          if ( v53 )
            (*(void (__fastcall **)(struct CDisplaySet *))(*(_QWORD *)v53 + 16LL))(v53);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v63);
      }
    }
  }
  v54 = v57[0];
  if ( v2 )
    CDisplaySet::Release(v2);
  return v54;
}
