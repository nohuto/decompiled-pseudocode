/*
 * XREFs of ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180209480
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18005EBC8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007CC80 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A0628 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A60E4 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x1800A6420 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetHDRIntermediateShaderResourceViewNoRef@CHDRConversionRenderTarget@@IEBAXPEAI0PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180208DE0 (-GetHDRIntermediateShaderResourceViewNoRef@CHDRConversionRenderTarget@@IEBAXPEAI0PEAPEAUID3D11Sh.c)
 *     ?HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUPixelFormatInfo@@22@Z @ 0x180208E94 (-HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourc.c)
 *     ?HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18020902C (-HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIA.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::Present(
        CHDRConversionRenderTarget *this,
        char a2,
        bool a3,
        const struct RenderTargetPresentParameters *a4)
{
  __int64 v4; // rax
  char v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(char *); // rax
  char v10; // al
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  LONG v16; // r14d
  LONG v17; // r13d
  LONG v18; // r15d
  _DWORD **v19; // r12
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  _DWORD *v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  FastRegion::Internal::CRgnData *v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  FastRegion::Internal::CRgnData *v33; // rcx
  LONG v34; // r9d
  FastRegion::Internal::CRgnData *v35; // rdx
  const struct FastRegion::Internal::CRgnData **v36; // rdx
  LONG v37; // r9d
  FastRegion::Internal::CRgnData *v38; // rdx
  __int64 v39; // rdx
  int v40; // eax
  FastRegion::Internal::CRgnData *v41; // rcx
  int v42; // eax
  FastRegion::Internal::CRgnData *v43; // rcx
  void **v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // r8
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // r9
  unsigned int v57; // r8d
  unsigned int v58; // edx
  int v59; // ecx
  struct tagRECT v60; // xmm0
  enum DXGI_MODE_ROTATION v61; // eax
  int v62; // eax
  __int64 v63; // rcx
  __int64 *v64; // rcx
  unsigned int v65; // r15d
  unsigned int v66; // r12d
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 result; // rax
  unsigned int v70; // [rsp+20h] [rbp-E0h]
  __int64 v71; // [rsp+50h] [rbp-B0h] BYREF
  char v72; // [rsp+58h] [rbp-A8h]
  bool v73; // [rsp+59h] [rbp-A7h]
  int v74; // [rsp+5Ch] [rbp-A4h] BYREF
  int v75; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v76; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v77; // [rsp+68h] [rbp-98h] BYREF
  LONG v78; // [rsp+6Ch] [rbp-94h] BYREF
  int v79[2]; // [rsp+70h] [rbp-90h] BYREF
  struct ID3D11ShaderResourceView *v80; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v81[8]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v82; // [rsp+88h] [rbp-78h]
  LONG *v83; // [rsp+90h] [rbp-70h]
  __int64 v84; // [rsp+98h] [rbp-68h]
  int v85; // [rsp+A0h] [rbp-60h]
  __int64 v86; // [rsp+B0h] [rbp-50h] BYREF
  int v87; // [rsp+B8h] [rbp-48h]
  int v88; // [rsp+BCh] [rbp-44h]
  char v89; // [rsp+C0h] [rbp-40h]
  struct RenderTargetPresentParameters *v90; // [rsp+C8h] [rbp-38h]
  struct tagRECT v91; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v92[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v93; // [rsp+F0h] [rbp-10h] BYREF
  int v94; // [rsp+F8h] [rbp-8h]
  int v95; // [rsp+FCh] [rbp-4h]
  struct tagRECT v96; // [rsp+100h] [rbp+0h] BYREF
  __int64 v97[2]; // [rsp+110h] [rbp+10h] BYREF
  FastRegion::Internal::CRgnData *v98; // [rsp+120h] [rbp+20h] BYREF
  int v99; // [rsp+128h] [rbp+28h] BYREF
  FastRegion::Internal::CRgnData *v100; // [rsp+170h] [rbp+70h] BYREF
  int v101; // [rsp+178h] [rbp+78h] BYREF
  void *v102[10]; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v103[10]; // [rsp+210h] [rbp+110h] BYREF

  v4 = *((_QWORD *)this + 1);
  v90 = a4;
  v75 = 0;
  v6 = a2;
  v74 = 0;
  v7 = *(_QWORD *)(v4 + 712);
  v87 = *((_DWORD *)this - 23);
  v8 = *((_QWORD *)this - 26);
  v86 = v7;
  v73 = a3;
  v72 = a2;
  v9 = *(__int64 (__fastcall **)(char *))(v8 + 144);
  v76 = 0;
  v77 = 0;
  v88 = 0;
  v10 = v9((char *)this - 208);
  v12 = *((_DWORD *)this + 120);
  v89 = v10;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( !*((_BYTE *)this + 776) )
        goto LABEL_44;
      FastRegion::CRegion::CRegion(
        (FastRegion::CRegion *)v102,
        (const struct tagRECT *)((char *)this + 136 * *((unsigned int *)this + 121) + 548));
      v71 = 0LL;
      v48 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
              (CHDRConversionRenderTarget *)((char *)this - 208),
              (const struct FastRegion::Internal::CRgnData **)v102);
      v15 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0xC8u);
      }
      else
      {
        v50 = *((_QWORD *)this + *((unsigned int *)this + 121) + 95) + 144LL;
        (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v50 + 32LL))(v50, &v75, &v74);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v71);
        v51 = *((_QWORD *)this + *((unsigned int *)this + 121) + 95) + 144LL;
        v52 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v51 + 144LL))(v51, &v86, &v71);
        v15 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0xCEu);
        }
        else
        {
          v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 32LL))(v71);
          v55 = *((_QWORD *)this + *((unsigned int *)this + 121) + 95) + 144LL;
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v55 + 24LL))(v55, v97);
          v56 = 136LL * *((unsigned int *)this + 121);
          v57 = *(_DWORD *)((char *)this + v56 + 532);
          v58 = *(_DWORD *)((char *)this + v56 + 536);
          v59 = *(_DWORD *)((char *)this + v56 + 540);
          HIDWORD(v92[1]) = *(_DWORD *)((char *)this + v56 + 544);
          v92[0] = __PAIR64__(v58, v57);
          LODWORD(v92[1]) = v59;
          v60 = *(struct tagRECT *)v92;
          v93 = *(_QWORD *)((char *)this + v56 + 516);
          v94 = *(_DWORD *)((char *)this + v56 + 524);
          v95 = *(_DWORD *)((char *)this + v56 + 528);
          v61 = *(_DWORD *)((char *)this + v56 + 564);
          v92[0] = __PAIR64__(v58, v57);
          LODWORD(v92[1]) = v59;
          v91 = v60;
          v62 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                  (__int64)this - 208,
                  v54,
                  v75,
                  v74,
                  v61,
                  (unsigned int *)&v93,
                  (__int64)v97,
                  (__int64)v92,
                  (__int64)&v91);
          v15 = v62;
          if ( v62 >= 0 )
          {
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v71);
            FastRegion::CRegion::FreeMemory(v102);
            goto LABEL_44;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0xDCu);
        }
      }
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v71);
      v44 = v102;
LABEL_62:
      FastRegion::CRegion::FreeMemory(v44);
      goto LABEL_73;
    }
    v14 = (unsigned int)(v13 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 != 1 )
      {
        v15 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003292412, 0x17Fu);
        goto LABEL_73;
      }
      v16 = *((_DWORD *)this + 171);
      v17 = *((_DWORD *)this + 172);
      v18 = *((_DWORD *)this + 173);
      v91 = *(struct tagRECT *)((char *)this + 548);
      v78 = *((_DWORD *)this + 174);
      v96.bottom = v78;
      v96.left = v16;
      v96.top = v17;
      v96.right = v18;
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v103, &v91);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v102, &v96);
      v99 = 0;
      v19 = (_DWORD **)((char *)this + 392);
      v98 = (FastRegion::Internal::CRgnData *)&v99;
      FastRegion::CRegion::Intersect(
        (const struct FastRegion::Internal::CRgnData **)this + 49,
        (const struct FastRegion::Internal::CRgnData **)v103);
      CHDRConversionRenderTarget::GetHDRIntermediateShaderResourceViewNoRef(
        (CHDRConversionRenderTarget *)((char *)this - 208),
        &v76,
        &v77,
        &v80);
      (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(*((_QWORD *)this + 96) + 144LL) + 32LL))(
        *((_QWORD *)this + 96) + 144LL,
        &v75,
        &v74);
      v71 = 0LL;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v71);
      v20 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 96) + 144LL)
                                                                     + 144LL))(
              *((_QWORD *)this + 96) + 144LL,
              &v86,
              &v71);
      v15 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x11Au);
        goto LABEL_48;
      }
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 32LL))(v71);
      v23 = *v19;
      *(_QWORD *)v79 = v22;
      if ( *v23 )
      {
        v101 = 0;
        v100 = (FastRegion::Internal::CRgnData *)&v101;
        v24 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
                (CHDRConversionRenderTarget *)((char *)this - 208),
                (const struct FastRegion::Internal::CRgnData **)this + 49);
        v15 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x124u);
LABEL_22:
          FastRegion::CRegion::FreeMemory((void **)&v100);
LABEL_48:
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v71);
          FastRegion::CRegion::FreeMemory((void **)&v98);
          FastRegion::CRegion::FreeMemory(v102);
          v44 = v103;
          goto LABEL_62;
        }
        FastRegion::CRegion::Copy((void **)&v100, (void **)this + 49);
        FastRegion::CRegion::Subtract(&v100, (const struct FastRegion::Internal::CRgnData **)v102);
        (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 48) + 24LL))(*((_QWORD *)this + 48), v97);
        FastRegion::Internal::CRgnData::BeginIterator(v100, (struct FastRegion::CRegion::Iterator *)v81);
        while ( (unsigned __int64)v83 < v82 )
        {
          v91.top = *v83;
          v91.bottom = v83[2];
          v26 = 2 * v85;
          v91.left = *(_DWORD *)(v84 + 4 * v26);
          v91.right = *(_DWORD *)(v84 + 4 * v26 + 4);
          v93 = *(_QWORD *)((char *)this + 532);
          v94 = *((_DWORD *)this + 135);
          v95 = *((_DWORD *)this + 136);
          v92[0] = *(_QWORD *)((char *)this + 516);
          v92[1] = *(_QWORD *)((char *)this + 524);
          v27 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                  (__int64)this - 208,
                  (__int64)v80,
                  v76,
                  v77,
                  (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 141),
                  (unsigned int *)v92,
                  (__int64)v97,
                  (__int64)&v93,
                  (__int64)&v91);
          v15 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v28, 0LL, 0, v27, 0x13Au);
            goto LABEL_22;
          }
          FastRegion::Internal::CRgnData::StepIterator(v28, (struct FastRegion::CRegion::Iterator *)v81);
        }
        FastRegion::CRegion::FreeMemory((void **)&v100);
      }
      if ( !*((_BYTE *)this + 776) )
        goto LABEL_31;
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v100, &v96);
      v29 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
              (CHDRConversionRenderTarget *)((char *)this - 208),
              &v100);
      v15 = v29;
      if ( v29 >= 0 )
      {
        FastRegion::CRegion::Subtract(&v100, (const struct FastRegion::Internal::CRgnData **)v103);
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 96) + 144LL) + 24LL))(
          *((_QWORD *)this + 96) + 144LL,
          v97);
        FastRegion::Internal::CRgnData::BeginIterator(v100, (struct FastRegion::CRegion::Iterator *)v81);
        while ( (unsigned __int64)v83 < v82 )
        {
          v91.top = *v83;
          v91.bottom = v83[2];
          v31 = 2 * v85;
          v91.left = *(_DWORD *)(v84 + 4 * v31);
          v91.right = *(_DWORD *)(v84 + 4 * v31 + 4);
          v92[0] = *(_QWORD *)((char *)this + 668);
          v92[1] = *(_QWORD *)((char *)this + 676);
          v93 = *(_QWORD *)((char *)this + 652);
          v94 = *((_DWORD *)this + 165);
          v95 = *((_DWORD *)this + 166);
          v32 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                  (__int64)this - 208,
                  *(__int64 *)v79,
                  v75,
                  v74,
                  (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 175),
                  (unsigned int *)&v93,
                  (__int64)v97,
                  (__int64)v92,
                  (__int64)&v91);
          v15 = v32;
          if ( v32 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v33, 0LL, 0, v32, 0x157u);
            goto LABEL_22;
          }
          FastRegion::Internal::CRgnData::StepIterator(v33, (struct FastRegion::CRegion::Iterator *)v81);
        }
        FastRegion::CRegion::FreeMemory((void **)&v100);
        if ( *((_BYTE *)this + 776) )
        {
          if ( v16 >= v18 || (v34 = v78, v17 >= v78) )
          {
            *(_DWORD *)v98 = 0;
          }
          else
          {
            v35 = v98;
            *(_DWORD *)v98 = 2;
            *((_DWORD *)v35 + 1) = v16;
            *((_DWORD *)v35 + 2) = v18;
            *((_DWORD *)v35 + 3) = v17;
            *((_DWORD *)v35 + 4) = 16;
            *((_DWORD *)v35 + 7) = v16;
            *((_DWORD *)v35 + 8) = v18;
            *((_DWORD *)v35 + 5) = v34;
            *((_DWORD *)v35 + 6) = 16;
          }
          v36 = (const struct FastRegion::Internal::CRgnData **)v103;
          goto LABEL_37;
        }
LABEL_31:
        if ( !**v19 )
          goto LABEL_38;
        if ( v16 >= v18 || (v37 = v78, v17 >= v78) )
        {
          *(_DWORD *)v98 = 0;
        }
        else
        {
          v38 = v98;
          *(_DWORD *)v98 = 2;
          *((_DWORD *)v38 + 1) = v16;
          *((_DWORD *)v38 + 2) = v18;
          *((_DWORD *)v38 + 3) = v17;
          *((_DWORD *)v38 + 4) = 16;
          *((_DWORD *)v38 + 7) = v16;
          *((_DWORD *)v38 + 8) = v18;
          *((_DWORD *)v38 + 5) = v37;
          *((_DWORD *)v38 + 6) = 16;
        }
        v36 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 392);
LABEL_37:
        FastRegion::CRegion::Intersect(&v98, v36);
LABEL_38:
        FastRegion::Internal::CRgnData::BeginIterator(v98, (struct FastRegion::CRegion::Iterator *)v81);
        while ( (unsigned __int64)v83 < v82 )
        {
          v91.top = *v83;
          v91.bottom = v83[2];
          v39 = 2 * v85;
          v91.left = *(_DWORD *)(v84 + 4 * v39);
          v91.right = *(_DWORD *)(v84 + 4 * v39 + 4);
          v40 = CHDRConversionRenderTarget::HDRConvertWithFakeOverlay(
                  (__int64)this - 208,
                  (__int64)v80,
                  v76,
                  v77,
                  *(__int64 *)v79,
                  v75,
                  v74,
                  (__int64)&v91);
          v15 = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v41, 0LL, 0, v40, 0x179u);
            goto LABEL_48;
          }
          FastRegion::Internal::CRgnData::StepIterator(v41, (struct FastRegion::CRegion::Iterator *)v81);
        }
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v71);
        FastRegion::CRegion::FreeMemory((void **)&v98);
        FastRegion::CRegion::FreeMemory(v102);
        FastRegion::CRegion::FreeMemory(v103);
        v6 = v72;
        goto LABEL_44;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x144u);
      goto LABEL_22;
    }
    v45 = *((_QWORD *)this + 4);
    v46 = 0LL;
    v78 = 0;
    v47 = 0LL;
    *(_QWORD *)v79 = 0LL;
    if ( v45 )
    {
      (*(void (__fastcall **)(__int64, LONG *, int *, _QWORD))(*(_QWORD *)v45 + 128LL))(v45, &v78, v79, 0LL);
      v46 = (unsigned int)v78;
      v47 = *(_QWORD *)v79;
    }
    v42 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *, _QWORD, _QWORD, __int64, __int64, char *))(*(_QWORD *)this + 384LL))(
            this,
            *((_QWORD *)this + 17 * *((unsigned int *)this + 121) + 62),
            *((unsigned int *)this + 34 * *((unsigned int *)this + 121) + 147),
            v46,
            v47,
            (char *)this + 136 * *((unsigned int *)this + 121) + 532);
    v15 = v42;
    if ( v42 >= 0 )
      goto LABEL_44;
    v70 = 244;
LABEL_72:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v43, 0LL, 0, v42, v70);
    goto LABEL_73;
  }
  if ( !**((_DWORD **)this + 49) )
    goto LABEL_44;
  v42 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
          (CHDRConversionRenderTarget *)((char *)this - 208),
          (const struct FastRegion::Internal::CRgnData **)this + 49);
  v15 = v42;
  if ( v42 < 0 )
  {
    v70 = 155;
    goto LABEL_72;
  }
  CHDRConversionRenderTarget::GetHDRIntermediateShaderResourceViewNoRef(
    (CHDRConversionRenderTarget *)((char *)this - 208),
    &v76,
    &v77,
    &v80);
  v64 = (__int64 *)*((_QWORD *)this + 48);
  v65 = v76;
  v66 = v77;
  v96.left = 0;
  v67 = *v64;
  v96.top = 0;
  v96.right = v76;
  v96.bottom = v77;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v67 + 24))(v64, v97);
  FastRegion::Internal::CRgnData::BeginIterator(
    *((FastRegion::Internal::CRgnData **)this + 49),
    (struct FastRegion::CRegion::Iterator *)v81);
  while ( (unsigned __int64)v83 < v82 )
  {
    v91.top = *v83;
    v91.bottom = v83[2];
    v68 = 2 * v85;
    v91.left = *(_DWORD *)(v84 + 4 * v68);
    v91.right = *(_DWORD *)(v84 + 4 * v68 + 4);
    v42 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
            (__int64)this - 208,
            (__int64)v80,
            v65,
            v66,
            DXGI_MODE_ROTATION_IDENTITY,
            (unsigned int *)&v96,
            (__int64)v97,
            (__int64)&v96,
            (__int64)&v91);
    v15 = v42;
    if ( v42 < 0 )
    {
      v70 = 182;
      goto LABEL_72;
    }
    FastRegion::Internal::CRgnData::StepIterator(v43, (struct FastRegion::CRegion::Iterator *)v81);
  }
LABEL_44:
  LOBYTE(v11) = *((_BYTE *)this + 776) | v6;
  v42 = CHwFullScreenRenderTarget::Present(this, v11, v73, v90);
  v15 = v42;
  if ( v42 < 0 )
  {
    v70 = 391;
    goto LABEL_72;
  }
  if ( g_LockAndReadTarget )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 48) + 216LL))(
      *((_QWORD *)this + 48),
      0LL,
      0LL);
LABEL_73:
  **((_DWORD **)this + 49) = 0;
  result = v15;
  *((_BYTE *)this + 776) = 0;
  return result;
}
