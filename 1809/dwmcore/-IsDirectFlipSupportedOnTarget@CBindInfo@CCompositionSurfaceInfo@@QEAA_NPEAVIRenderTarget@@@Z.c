/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x1801BC6E4
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z @ 0x180192400 (-IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180030524 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x180067C3C (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x18009AF04 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqqqqqqqq @ 0x1801BD604 (McTemplateU0xqqqqqqqq.c)
 */

char __fastcall CCompositionSurfaceInfo::CBindInfo::IsDirectFlipSupportedOnTarget(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct IRenderTarget *a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rcx
  struct CDisplaySet *v6; // rdi
  CDisplayManager *v7; // rcx
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  int (__fastcall **v11)(struct IRenderTarget *, GUID *, __int64 *); // rax
  unsigned int v12; // r12d
  CBitmapRealization *v13; // rcx
  struct _LUID AdapterLuid; // rax
  _QWORD *v15; // rcx
  int v16; // ebx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r14
  int (__fastcall **v21)(__int64, GUID *, struct CDisplaySet **); // rsi
  __int64 v22; // rax
  struct _LUID v23; // r14
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  struct _LUID v27; // rax
  _QWORD *v28; // rcx
  int v29; // ebx
  _DWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r14
  int (__fastcall **v34)(__int64, GUID *, struct CDisplaySet **); // rsi
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // rax
  __int64 v39; // rbx
  char v40; // r12
  __int64 v41; // r14
  char v42; // r15
  __int64 v43; // rsi
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int128 v47; // xmm0
  struct CDisplaySet *v48; // rcx
  char v49; // bl
  _BYTE *v51; // [rsp+28h] [rbp-E0h]
  _BYTE v52[4]; // [rsp+68h] [rbp-A0h] BYREF
  float v53; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v54; // [rsp+70h] [rbp-98h] BYREF
  int v55; // [rsp+78h] [rbp-90h] BYREF
  int v56; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct CDisplaySet *v57; // [rsp+80h] [rbp-88h] BYREF
  int (__fastcall ***v58)(__int64, GUID *, struct CDisplaySet **); // [rsp+88h] [rbp-80h] BYREF
  int v59; // [rsp+90h] [rbp-78h] BYREF
  int v60; // [rsp+94h] [rbp-74h]
  struct _LUID v61; // [rsp+98h] [rbp-70h] BYREF
  struct IRenderTarget *v62; // [rsp+A0h] [rbp-68h]
  __int128 v63; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v64; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v65; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v66[4]; // [rsp+D8h] [rbp-30h] BYREF
  struct _LUID v67[2]; // [rsp+E8h] [rbp-20h] BYREF

  v2 = 0;
  v62 = a2;
  v52[0] = 0;
  v4 = *((_QWORD *)this + 9);
  v6 = 0LL;
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 144) + 80LL))(v4 + 144) )
  {
    v57 = 0LL;
    if ( (int)CDisplayManager::GetCurrentDisplaySet(v7, &v57) < 0 )
    {
      v6 = v57;
    }
    else
    {
      CBitmapRealization::GetSourceRect(*((_QWORD *)this + 9), &v63);
      v6 = v57;
      v8 = *(float *)&v63 + 6291456.25;
      LODWORD(v64) = (int)(LODWORD(v8) << 10) >> 11;
      v9 = *((float *)&v63 + 1) + 6291456.25;
      DWORD1(v64) = (int)(LODWORD(v9) << 10) >> 11;
      v10 = *((float *)&v63 + 2) + 6291456.25;
      DWORD2(v64) = (int)(LODWORD(v10) << 10) >> 11;
      v53 = *((float *)&v63 + 3) + 6291456.25;
      HIDWORD(v64) = (int)(LODWORD(v53) << 10) >> 11;
      if ( *((_DWORD *)v57 + 1) == *((_DWORD *)this + 44)
        && *((struct IRenderTarget **)this + 21) == a2
        && *((_DWORD *)this + 46) == *(_DWORD *)((*(__int64 (__fastcall **)(__int64, struct _LUID *))(*(_QWORD *)(*((_QWORD *)this + 9) + 144LL) + 24LL))(
                                                   *((_QWORD *)this + 9) + 144LL,
                                                   v67)
                                               + 8)
        && operator==((_DWORD *)this + 47, &v64) )
      {
        v52[0] = *((_BYTE *)this + 181);
      }
      else
      {
        v55 = DisplayId::Invalid;
        v11 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))a2;
        v58 = 0LL;
        if ( (*v11)(a2, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, (__int64 *)&v58) >= 0
          && (*v58)[15]((__int64)v58, (GUID *)&v59, (struct CDisplaySet **)&v55) >= 0 )
        {
          v57 = 0LL;
          v12 = 0;
          if ( (**v58)((__int64)v58, &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31, &v57) >= 0 )
            v12 = (*(__int64 (__fastcall **)(struct CDisplaySet *))(*(_QWORD *)v57 + 40LL))(v57);
          if ( *((_DWORD *)this + 4) == 2 )
          {
            v13 = (CBitmapRealization *)*((_QWORD *)this + 9);
            v54 = 0LL;
            AdapterLuid = CBitmapRealization::GetAdapterLuid(v13, &v61);
            if ( *(_DWORD *)AdapterLuid.LowPart == v59 && *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) == v60 )
            {
              v16 = v55;
              v17 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, float *))(*v15 + 48LL))(v15, &v53);
              if ( *v17 == DisplayId::None || *v17 == v16 || v16 == DisplayId::All )
              {
                v18 = v54;
                v54 = 0LL;
                if ( v18 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
                if ( (*(int (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)this + 9) + 56LL))(
                       *((_QWORD *)this + 9),
                       &v54,
                       v12) >= 0 )
                {
                  v19 = (__int64)v58;
                  v20 = v54;
                  v21 = *v58;
                  v22 = (*(__int64 (__fastcall **)(__int64, struct _LUID *))(*(_QWORD *)(*((_QWORD *)this + 9) + 144LL)
                                                                           + 24LL))(
                          *((_QWORD *)this + 9) + 144LL,
                          v67);
                  v51 = v52;
                  ((void (__fastcall *)(__int64, __int64, _QWORD, __int128 *))v21[47])(
                    v19,
                    v20,
                    *(unsigned int *)(v22 + 8),
                    &v64);
                }
              }
            }
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v54);
          }
          else if ( *((_DWORD *)this + 4) == 3 )
          {
            v52[0] = 1;
            do
            {
              if ( v2 >= *((_DWORD *)this + 14) )
                break;
              v23 = (struct _LUID)*((_QWORD *)this + 4);
              v54 = 0LL;
              v61 = v23;
              CBitmapRealization::GetSourceRect(*(_QWORD *)(*(_QWORD *)&v23 + 8LL * v2), &v65);
              v52[0] = 0;
              v24 = *(float *)&v65 + 6291456.25;
              v66[0] = (int)(LODWORD(v24) << 10) >> 11;
              v25 = *((float *)&v65 + 1) + 6291456.25;
              v66[1] = (int)(LODWORD(v25) << 10) >> 11;
              v26 = *((float *)&v65 + 2) + 6291456.25;
              v66[2] = (int)(LODWORD(v26) << 10) >> 11;
              v53 = *((float *)&v65 + 3) + 6291456.25;
              v66[3] = (int)(LODWORD(v53) << 10) >> 11;
              v27 = CBitmapRealization::GetAdapterLuid(*(CBitmapRealization **)(*(_QWORD *)&v23 + 8LL * v2), v67);
              if ( *(_DWORD *)v27.LowPart == v59 && *(_DWORD *)(*(_QWORD *)&v27 + 4LL) == v60 )
              {
                v29 = v55;
                v30 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, int *))(*v28 + 48LL))(v28, &v56);
                if ( *v30 == DisplayId::None || *v30 == v29 || v29 == DisplayId::All )
                {
                  v31 = v54;
                  v54 = 0LL;
                  if ( v31 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                  if ( (*(int (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(*(_QWORD *)&v23 + 8LL * v2)
                                                                        + 56LL))(
                         *(_QWORD *)(*(_QWORD *)&v23 + 8LL * v2),
                         &v54,
                         v12) >= 0 )
                  {
                    v32 = (__int64)v58;
                    v33 = v54;
                    v34 = *v58;
                    v35 = *(_QWORD *)(*(_QWORD *)&v61 + 8LL * v2) + 144LL;
                    v36 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v35 + 24LL))(v35, &v63);
                    v51 = v52;
                    ((void (__fastcall *)(__int64, __int64, _QWORD, _DWORD *))v34[47])(
                      v32,
                      v33,
                      *(unsigned int *)(v36 + 8),
                      v66);
                  }
                }
              }
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v54);
              ++v2;
            }
            while ( v52[0] );
          }
          if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DIRECTFLIP_SUPPORTEVENT) )
          {
            v37 = *((_QWORD *)this + 9) + 144LL;
            v53 = 0.0;
            v56 = 0;
            (*(void (__fastcall **)(__int64, float *, int *))(*(_QWORD *)v37 + 32LL))(v37, &v53, &v56);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              v38 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 9) + 48LL))(
                                *((_QWORD *)this + 9),
                                &v54);
              v39 = *((_QWORD *)this + 9);
              v40 = *v38 != DisplayId::None;
              v41 = *(_QWORD *)(*(_QWORD *)this + 40LL);
              v42 = *(_DWORD *)(v39 + 272) == 3;
              v43 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v39 + 144) + 24LL))(v39 + 144, &v63);
              v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 72LL))(v39);
              McTemplateU0xqqqqqqqq(
                (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
                v44,
                v41,
                v52[0],
                (_DWORD)v51,
                v44,
                *(_DWORD *)(v43 + 4),
                v42,
                v40,
                SLOBYTE(v53),
                v56);
            }
          }
          v45 = *((_QWORD *)this + 9);
          *((_DWORD *)this + 44) = *((_DWORD *)v6 + 1);
          *((_QWORD *)this + 21) = v62;
          *((_BYTE *)this + 181) = v52[0];
          v46 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(v45 + 144) + 24LL))(v45 + 144, &v63);
          v47 = v64;
          *((_DWORD *)this + 46) = *(_DWORD *)(v46 + 8);
          v48 = v57;
          *(_OWORD *)((char *)this + 188) = v47;
          if ( v48 )
            (*(void (__fastcall **)(struct CDisplaySet *))(*(_QWORD *)v48 + 16LL))(v48);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v58);
      }
    }
  }
  v49 = v52[0];
  if ( v6 )
    CDisplaySet::Release(v6);
  return v49;
}
