/*
 * XREFs of ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180167B90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800518E4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180062740 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18006CD24 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006E3F8 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18006E580 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAC88 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAD5C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BF920 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetHDRIntermediateShaderResourceViewNoRef@CHDRConversionRenderTarget@@IEBAXPEAI0PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801674C0 (-GetHDRIntermediateShaderResourceViewNoRef@CHDRConversionRenderTarget@@IEBAXPEAI0PEAPEAUID3D11Sh.c)
 *     ?HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUPixelFormatInfo@@22@Z @ 0x180167574 (-HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourc.c)
 *     ?HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180167714 (-HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIA.c)
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
  LONG v16; // r15d
  LONG v17; // r12d
  _DWORD **v18; // r13
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, __int64 *, __int64 *); // rbx
  signed int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  signed int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  signed int v27; // eax
  FastRegion::Internal::CRgnData *v28; // rcx
  signed int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  signed int v32; // eax
  FastRegion::Internal::CRgnData *v33; // rcx
  LONG v34; // eax
  LONG v35; // r9d
  FastRegion::Internal::CRgnData *v36; // rdx
  const struct FastRegion::Internal::CRgnData **v37; // rdx
  LONG v38; // eax
  LONG v39; // r9d
  FastRegion::Internal::CRgnData *v40; // rdx
  __int64 v41; // rdx
  signed int v42; // eax
  FastRegion::Internal::CRgnData *v43; // rcx
  void **v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r9
  struct ID3D11ShaderResourceView *v47; // r8
  signed int v48; // eax
  __int64 v49; // rcx
  signed int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 (__fastcall *v54)(__int64, __int64 *, __int64 *); // rbx
  signed int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // r9
  unsigned int v60; // r8d
  unsigned int v61; // edx
  int v62; // ecx
  struct tagRECT v63; // xmm0
  enum DXGI_MODE_ROTATION v64; // eax
  signed int v65; // eax
  __int64 v66; // rcx
  signed int v67; // eax
  __int64 v68; // rcx
  __int64 *v69; // rcx
  unsigned int v70; // r12d
  unsigned int v71; // r15d
  __int64 v72; // rax
  __int64 v73; // rdx
  signed int v74; // eax
  FastRegion::Internal::CRgnData *v75; // rcx
  signed int v76; // eax
  __int64 v77; // rcx
  __int64 result; // rax
  __int64 v79; // [rsp+50h] [rbp-B0h] BYREF
  char v80; // [rsp+58h] [rbp-A8h]
  bool v81; // [rsp+59h] [rbp-A7h]
  int v82; // [rsp+5Ch] [rbp-A4h] BYREF
  int v83; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v84; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v85; // [rsp+68h] [rbp-98h] BYREF
  LONG v86; // [rsp+6Ch] [rbp-94h] BYREF
  struct ID3D11ShaderResourceView *v87; // [rsp+70h] [rbp-90h] BYREF
  LONG v88; // [rsp+78h] [rbp-88h]
  _BYTE v89[8]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v90; // [rsp+88h] [rbp-78h]
  LONG *v91; // [rsp+90h] [rbp-70h]
  __int64 v92; // [rsp+98h] [rbp-68h]
  int v93; // [rsp+A0h] [rbp-60h]
  __int64 v94; // [rsp+B0h] [rbp-50h] BYREF
  int v95; // [rsp+B8h] [rbp-48h]
  int v96; // [rsp+BCh] [rbp-44h]
  char v97; // [rsp+C0h] [rbp-40h]
  struct RenderTargetPresentParameters *v98; // [rsp+C8h] [rbp-38h]
  struct tagRECT v99; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v100[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v101; // [rsp+F0h] [rbp-10h] BYREF
  int v102; // [rsp+F8h] [rbp-8h]
  int v103; // [rsp+FCh] [rbp-4h]
  struct tagRECT v104; // [rsp+100h] [rbp+0h] BYREF
  __int64 v105[2]; // [rsp+110h] [rbp+10h] BYREF
  FastRegion::Internal::CRgnData *v106; // [rsp+120h] [rbp+20h] BYREF
  int v107; // [rsp+128h] [rbp+28h] BYREF
  FastRegion::Internal::CRgnData *v108; // [rsp+170h] [rbp+70h] BYREF
  int v109; // [rsp+178h] [rbp+78h] BYREF
  void *v110[10]; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v111[10]; // [rsp+210h] [rbp+110h] BYREF

  v4 = *((_QWORD *)this + 1);
  v98 = a4;
  v83 = 0;
  v6 = a2;
  v82 = 0;
  v7 = *(_QWORD *)(v4 + 712);
  v95 = *((_DWORD *)this - 24);
  v8 = *((_QWORD *)this - 18);
  v94 = v7;
  v81 = a3;
  v80 = a2;
  v9 = *(__int64 (__fastcall **)(char *))(v8 + 144);
  v84 = 0;
  v85 = 0;
  v96 = 0;
  v10 = v9((char *)this - 144);
  v12 = *((_DWORD *)this + 120);
  v97 = v10;
  if ( !v12 )
  {
    if ( **((_DWORD **)this + 49) )
    {
      v67 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
              (CHDRConversionRenderTarget *)((char *)this - 144),
              (const struct FastRegion::Internal::CRgnData **)this + 49);
      v15 = v67;
      if ( v67 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x99u, 0LL);
        goto LABEL_72;
      }
      CHDRConversionRenderTarget::GetHDRIntermediateShaderResourceViewNoRef(
        (CHDRConversionRenderTarget *)((char *)this - 144),
        &v84,
        &v85,
        &v87);
      v69 = (__int64 *)*((_QWORD *)this + 48);
      v70 = v85;
      *(_QWORD *)&v104.left = 0LL;
      v71 = v84;
      v72 = *v69;
      v104.right = v84;
      v104.bottom = v85;
      (*(void (__fastcall **)(__int64 *, __int64 *))(v72 + 24))(v69, v105);
      FastRegion::Internal::CRgnData::BeginIterator(
        *((FastRegion::Internal::CRgnData **)this + 49),
        (struct FastRegion::CRegion::Iterator *)v89);
      while ( (unsigned __int64)v91 < v90 )
      {
        v99.top = *v91;
        v99.bottom = v91[2];
        v73 = 2 * v93;
        v99.left = *(_DWORD *)(v92 + 4 * v73);
        v99.right = *(_DWORD *)(v92 + 4 * v73 + 4);
        v74 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                (__int64)this - 144,
                (__int64)v87,
                v71,
                v70,
                DXGI_MODE_ROTATION_IDENTITY,
                (unsigned int *)&v104,
                (__int64)v105,
                (__int64)&v104,
                (__int64)&v99);
        v15 = v74;
        if ( v74 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v75, 0LL, 0, v74, 0xB4u, 0LL);
          goto LABEL_72;
        }
        FastRegion::Internal::CRgnData::StepIterator(v75, (struct FastRegion::CRegion::Iterator *)v89);
      }
    }
    goto LABEL_68;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = (unsigned int)(v13 - 1);
    if ( !(_DWORD)v14 )
    {
      v45 = *((_QWORD *)this + 4);
      v46 = 0LL;
      v86 = 0;
      v47 = 0LL;
      v87 = 0LL;
      if ( v45 )
      {
        (*(void (__fastcall **)(__int64, LONG *, struct ID3D11ShaderResourceView **, _QWORD))(*(_QWORD *)v45 + 136LL))(
          v45,
          &v86,
          &v87,
          0LL);
        v46 = (unsigned int)v86;
        v47 = v87;
      }
      v48 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *, _QWORD, _QWORD, __int64, struct ID3D11ShaderResourceView *, char *))(*(_QWORD *)this + 384LL))(
              this,
              *((_QWORD *)this + 17 * *((unsigned int *)this + 121) + 62),
              *((unsigned int *)this + 34 * *((unsigned int *)this + 121) + 147),
              v46,
              v47,
              (char *)this + 136 * *((unsigned int *)this + 121) + 532);
      v15 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0xF2u, 0LL);
        goto LABEL_72;
      }
      goto LABEL_68;
    }
    if ( (_DWORD)v14 != 1 )
    {
      v15 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x88982F04, 0x17Du, 0LL);
      goto LABEL_72;
    }
    v16 = *((_DWORD *)this + 171);
    v17 = *((_DWORD *)this + 173);
    v99 = *(struct tagRECT *)((char *)this + 548);
    v88 = *((_DWORD *)this + 172);
    v104.top = v88;
    v86 = *((_DWORD *)this + 174);
    v104.bottom = v86;
    v104.left = v16;
    v104.right = v17;
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v111, &v99);
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v110, &v104);
    v107 = 0;
    v18 = (_DWORD **)((char *)this + 392);
    v106 = (FastRegion::Internal::CRgnData *)&v107;
    FastRegion::CRegion::Intersect(
      (const struct FastRegion::Internal::CRgnData **)this + 49,
      (const struct FastRegion::Internal::CRgnData **)v111);
    CHDRConversionRenderTarget::GetHDRIntermediateShaderResourceViewNoRef(
      (CHDRConversionRenderTarget *)((char *)this - 144),
      &v84,
      &v85,
      &v87);
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(*((_QWORD *)this + 96) + 144LL) + 32LL))(
      *((_QWORD *)this + 96) + 144LL,
      &v83,
      &v82);
    v19 = *((_QWORD *)this + 96);
    v79 = 0LL;
    v20 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)(v19 + 144) + 144LL);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v79);
    v21 = v20(v19 + 144, &v94, &v79);
    v15 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x118u, 0LL);
      goto LABEL_45;
    }
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v79 + 32LL))(v79);
    if ( **v18 )
    {
      v109 = 0;
      v108 = (FastRegion::Internal::CRgnData *)&v109;
      v24 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
              (CHDRConversionRenderTarget *)((char *)this - 144),
              (const struct FastRegion::Internal::CRgnData **)this + 49);
      v15 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x122u, 0LL);
LABEL_22:
        FastRegion::CRegion::FreeMemory((void **)&v108);
LABEL_45:
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v79);
        FastRegion::CRegion::FreeMemory((void **)&v106);
        FastRegion::CRegion::FreeMemory(v110);
        v44 = v111;
LABEL_59:
        FastRegion::CRegion::FreeMemory(v44);
        goto LABEL_72;
      }
      FastRegion::CRegion::Copy((int **)&v108, (int **)this + 49);
      FastRegion::CRegion::Subtract(&v108, (const struct FastRegion::Internal::CRgnData **)v110);
      (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 48) + 24LL))(*((_QWORD *)this + 48), v105);
      FastRegion::Internal::CRgnData::BeginIterator(v108, (struct FastRegion::CRegion::Iterator *)v89);
      while ( (unsigned __int64)v91 < v90 )
      {
        v99.top = *v91;
        v99.bottom = v91[2];
        v26 = 2 * v93;
        v99.left = *(_DWORD *)(v92 + 4 * v26);
        v99.right = *(_DWORD *)(v92 + 4 * v26 + 4);
        v101 = *(_QWORD *)((char *)this + 532);
        v102 = *((_DWORD *)this + 135);
        v103 = *((_DWORD *)this + 136);
        v100[0] = *(_QWORD *)((char *)this + 516);
        v100[1] = *(_QWORD *)((char *)this + 524);
        v27 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                (__int64)this - 144,
                (__int64)v87,
                v84,
                v85,
                (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 141),
                (unsigned int *)v100,
                (__int64)v105,
                (__int64)&v101,
                (__int64)&v99);
        v15 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v28, 0LL, 0, v27, 0x138u, 0LL);
          goto LABEL_22;
        }
        FastRegion::Internal::CRgnData::StepIterator(v28, (struct FastRegion::CRegion::Iterator *)v89);
      }
      FastRegion::CRegion::FreeMemory((void **)&v108);
    }
    if ( !*((_BYTE *)this + 776) )
      goto LABEL_31;
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v108, &v104);
    v29 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
            (CHDRConversionRenderTarget *)((char *)this - 144),
            &v108);
    v15 = v29;
    if ( v29 >= 0 )
    {
      FastRegion::CRegion::Subtract(&v108, (const struct FastRegion::Internal::CRgnData **)v111);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 96) + 144LL) + 24LL))(
        *((_QWORD *)this + 96) + 144LL,
        v105);
      FastRegion::Internal::CRgnData::BeginIterator(v108, (struct FastRegion::CRegion::Iterator *)v89);
      while ( (unsigned __int64)v91 < v90 )
      {
        v99.top = *v91;
        v99.bottom = v91[2];
        v31 = 2 * v93;
        v99.left = *(_DWORD *)(v92 + 4 * v31);
        v99.right = *(_DWORD *)(v92 + 4 * v31 + 4);
        v100[0] = *(_QWORD *)((char *)this + 668);
        v100[1] = *(_QWORD *)((char *)this + 676);
        v101 = *(_QWORD *)((char *)this + 652);
        v102 = *((_DWORD *)this + 165);
        v103 = *((_DWORD *)this + 166);
        v32 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                (__int64)this - 144,
                v23,
                v83,
                v82,
                (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 175),
                (unsigned int *)&v101,
                (__int64)v105,
                (__int64)v100,
                (__int64)&v99);
        v15 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v33, 0LL, 0, v32, 0x155u, 0LL);
          goto LABEL_22;
        }
        FastRegion::Internal::CRgnData::StepIterator(v33, (struct FastRegion::CRegion::Iterator *)v89);
      }
      FastRegion::CRegion::FreeMemory((void **)&v108);
      if ( *((_BYTE *)this + 776) )
      {
        if ( v16 >= v17 || (v34 = v88, v35 = v86, v88 >= v86) )
        {
          *(_DWORD *)v106 = 0;
        }
        else
        {
          v36 = v106;
          *(_DWORD *)v106 = 2;
          *((_DWORD *)v36 + 1) = v16;
          *((_DWORD *)v36 + 2) = v17;
          *((_DWORD *)v36 + 3) = v34;
          *((_DWORD *)v36 + 4) = 16;
          *((_DWORD *)v36 + 7) = v16;
          *((_DWORD *)v36 + 8) = v17;
          *((_DWORD *)v36 + 5) = v35;
          *((_DWORD *)v36 + 6) = 16;
        }
        v37 = (const struct FastRegion::Internal::CRgnData **)v111;
        goto LABEL_37;
      }
LABEL_31:
      if ( !**v18 )
        goto LABEL_38;
      if ( v16 >= v17 || (v38 = v88, v39 = v86, v88 >= v86) )
      {
        *(_DWORD *)v106 = 0;
      }
      else
      {
        v40 = v106;
        *(_DWORD *)v106 = 2;
        *((_DWORD *)v40 + 1) = v16;
        *((_DWORD *)v40 + 2) = v17;
        *((_DWORD *)v40 + 3) = v38;
        *((_DWORD *)v40 + 4) = 16;
        *((_DWORD *)v40 + 7) = v16;
        *((_DWORD *)v40 + 8) = v17;
        *((_DWORD *)v40 + 5) = v39;
        *((_DWORD *)v40 + 6) = 16;
      }
      v37 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 392);
LABEL_37:
      FastRegion::CRegion::Intersect(&v106, v37);
LABEL_38:
      FastRegion::Internal::CRgnData::BeginIterator(v106, (struct FastRegion::CRegion::Iterator *)v89);
      while ( (unsigned __int64)v91 < v90 )
      {
        v99.top = *v91;
        v99.bottom = v91[2];
        v41 = 2 * v93;
        v99.left = *(_DWORD *)(v92 + 4 * v41);
        v99.right = *(_DWORD *)(v92 + 4 * v41 + 4);
        v42 = CHDRConversionRenderTarget::HDRConvertWithFakeOverlay(
                (__int64)this - 144,
                (__int64)v87,
                v84,
                v85,
                v23,
                v83,
                v82,
                (__int64)&v99);
        v15 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v43, 0LL, 0, v42, 0x177u, 0LL);
          goto LABEL_45;
        }
        FastRegion::Internal::CRgnData::StepIterator(v43, (struct FastRegion::CRegion::Iterator *)v89);
      }
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v79);
      FastRegion::CRegion::FreeMemory((void **)&v106);
      FastRegion::CRegion::FreeMemory(v110);
      FastRegion::CRegion::FreeMemory(v111);
      v6 = v80;
      goto LABEL_68;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x142u, 0LL);
    goto LABEL_22;
  }
  if ( *((_BYTE *)this + 776) )
  {
    FastRegion::CRegion::CRegion(
      (FastRegion::CRegion *)v110,
      (const struct tagRECT *)((char *)this + 136 * *((unsigned int *)this + 121) + 548));
    v79 = 0LL;
    v50 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
            (CHDRConversionRenderTarget *)((char *)this - 144),
            (const struct FastRegion::Internal::CRgnData **)v110);
    v15 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0xC6u, 0LL);
    }
    else
    {
      v52 = *((_QWORD *)this + *((unsigned int *)this + 121) + 95) + 144LL;
      (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v52 + 32LL))(v52, &v83, &v82);
      v53 = *((_QWORD *)this + *((unsigned int *)this + 121) + 95);
      v54 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)(v53 + 144) + 144LL);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v79);
      v55 = v54(v53 + 144, &v94, &v79);
      v15 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0xCCu, 0LL);
      }
      else
      {
        v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v79 + 32LL))(v79);
        v58 = *((_QWORD *)this + *((unsigned int *)this + 121) + 95) + 144LL;
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v58 + 24LL))(v58, v105);
        v59 = 136LL * *((unsigned int *)this + 121);
        v60 = *(_DWORD *)((char *)this + v59 + 532);
        v61 = *(_DWORD *)((char *)this + v59 + 536);
        v62 = *(_DWORD *)((char *)this + v59 + 540);
        HIDWORD(v100[1]) = *(_DWORD *)((char *)this + v59 + 544);
        v100[0] = __PAIR64__(v61, v60);
        LODWORD(v100[1]) = v62;
        v63 = *(struct tagRECT *)v100;
        v101 = *(_QWORD *)((char *)this + v59 + 516);
        v102 = *(_DWORD *)((char *)this + v59 + 524);
        v103 = *(_DWORD *)((char *)this + v59 + 528);
        v64 = *(_DWORD *)((char *)this + v59 + 564);
        v100[0] = __PAIR64__(v61, v60);
        LODWORD(v100[1]) = v62;
        v99 = v63;
        v65 = CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
                (__int64)this - 144,
                v57,
                v83,
                v82,
                v64,
                (unsigned int *)&v101,
                (__int64)v105,
                (__int64)v100,
                (__int64)&v99);
        v15 = v65;
        if ( v65 >= 0 )
        {
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v79);
          FastRegion::CRegion::FreeMemory(v110);
          goto LABEL_68;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0xDAu, 0LL);
      }
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v79);
    v44 = v110;
    goto LABEL_59;
  }
LABEL_68:
  LOBYTE(v11) = *((_BYTE *)this + 776) | v6;
  v76 = CHwFullScreenRenderTarget::Present(this, v11, v81, v98);
  v15 = v76;
  if ( v76 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x185u, 0LL);
  }
  else if ( g_LockAndReadTarget )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 48) + 216LL))(
      *((_QWORD *)this + 48),
      0LL,
      0LL);
  }
LABEL_72:
  **((_DWORD **)this + 49) = 0;
  result = v15;
  *((_BYTE *)this + 776) = 0;
  return result;
}
