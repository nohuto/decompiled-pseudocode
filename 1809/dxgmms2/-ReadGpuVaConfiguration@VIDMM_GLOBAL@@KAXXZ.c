/*
 * XREFs of ?ReadGpuVaConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0089A90
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0087B3C (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

void VIDMM_GLOBAL::ReadGpuVaConfiguration(void)
{
  int v0; // [rsp+30h] [rbp-D0h] BYREF
  int v1; // [rsp+34h] [rbp-CCh] BYREF
  int v2; // [rsp+38h] [rbp-C8h] BYREF
  int v3; // [rsp+3Ch] [rbp-C4h] BYREF
  int v4; // [rsp+40h] [rbp-C0h] BYREF
  int v5; // [rsp+44h] [rbp-BCh] BYREF
  int v6; // [rsp+48h] [rbp-B8h] BYREF
  int v7; // [rsp+4Ch] [rbp-B4h] BYREF
  int v8; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+54h] [rbp-ACh] BYREF
  int v10; // [rsp+58h] [rbp-A8h] BYREF
  int v11; // [rsp+5Ch] [rbp-A4h] BYREF
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  int v13; // [rsp+64h] [rbp-9Ch] BYREF
  int v14; // [rsp+68h] [rbp-98h] BYREF
  int v15; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h] BYREF
  int v17; // [rsp+78h] [rbp-88h]
  const wchar_t *v18; // [rsp+80h] [rbp-80h]
  int *v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+90h] [rbp-70h]
  int *v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+B0h] [rbp-50h]
  const wchar_t *v25; // [rsp+B8h] [rbp-48h]
  int *v26; // [rsp+C0h] [rbp-40h]
  int v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D8h] [rbp-28h]
  __int64 v30; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+E8h] [rbp-18h]
  const wchar_t *v32; // [rsp+F0h] [rbp-10h]
  int *v33; // [rsp+F8h] [rbp-8h]
  int v34; // [rsp+100h] [rbp+0h]
  int *v35; // [rsp+108h] [rbp+8h]
  int v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int v38; // [rsp+120h] [rbp+20h]
  const wchar_t *v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  int v41; // [rsp+138h] [rbp+38h]
  int *v42; // [rsp+140h] [rbp+40h]
  int v43; // [rsp+148h] [rbp+48h]
  __int64 v44; // [rsp+150h] [rbp+50h]
  int v45; // [rsp+158h] [rbp+58h]
  const wchar_t *v46; // [rsp+160h] [rbp+60h]
  int *v47; // [rsp+168h] [rbp+68h]
  int v48; // [rsp+170h] [rbp+70h]
  int *v49; // [rsp+178h] [rbp+78h]
  int v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  int v52; // [rsp+190h] [rbp+90h]
  const wchar_t *v53; // [rsp+198h] [rbp+98h]
  int *v54; // [rsp+1A0h] [rbp+A0h]
  int v55; // [rsp+1A8h] [rbp+A8h]
  int *v56; // [rsp+1B0h] [rbp+B0h]
  int v57; // [rsp+1B8h] [rbp+B8h]
  __int64 v58; // [rsp+1C0h] [rbp+C0h]
  int v59; // [rsp+1C8h] [rbp+C8h]
  const wchar_t *v60; // [rsp+1D0h] [rbp+D0h]
  int *v61; // [rsp+1D8h] [rbp+D8h]
  int v62; // [rsp+1E0h] [rbp+E0h]
  int *v63; // [rsp+1E8h] [rbp+E8h]
  int v64; // [rsp+1F0h] [rbp+F0h]
  __int64 v65; // [rsp+1F8h] [rbp+F8h]
  int v66; // [rsp+200h] [rbp+100h]
  const wchar_t *v67; // [rsp+208h] [rbp+108h]
  int *v68; // [rsp+210h] [rbp+110h]
  int v69; // [rsp+218h] [rbp+118h]
  int *v70; // [rsp+220h] [rbp+120h]
  int v71; // [rsp+228h] [rbp+128h]
  _BYTE v72[56]; // [rsp+230h] [rbp+130h] BYREF

  v8 = 0;
  v0 = 0;
  v9 = 0;
  v1 = 0;
  v11 = 30;
  v3 = 30;
  v13 = 0x10000;
  v5 = 0x10000;
  v18 = L"DisableUncommitGpuVaInPagingProcess";
  v19 = &v0;
  v21 = &v8;
  v25 = L"EnableZeroFlagInPde";
  v26 = &v1;
  v28 = &v9;
  v32 = L"DisableMakeIoMmuAddressValid";
  v33 = &v2;
  v35 = &v10;
  v39 = L"PagingProcessVaSpaceBitCount";
  v40 = &v3;
  v42 = &v11;
  v46 = L"GpuVaPagingHistorySize";
  v47 = &v4;
  v49 = &v12;
  v53 = L"GpuVaFirstValidAddress";
  v54 = &v5;
  v56 = &v13;
  v10 = 0;
  v2 = 0;
  v12 = 0;
  v4 = 0;
  v14 = 0;
  v6 = 0;
  v15 = 0;
  v7 = 0;
  v16 = 0LL;
  v17 = 288;
  v20 = 67108868;
  v22 = 4;
  v23 = 0LL;
  v24 = 288;
  v27 = 67108868;
  v29 = 4;
  v30 = 0LL;
  v31 = 288;
  v34 = 67108868;
  v36 = 4;
  v37 = 0LL;
  v38 = 288;
  v41 = 67108868;
  v43 = 4;
  v44 = 0LL;
  v45 = 288;
  v48 = 67108868;
  v50 = 4;
  v51 = 0LL;
  v52 = 288;
  v55 = 67108868;
  v57 = 4;
  v60 = L"EnableGpuVaGuardPages";
  v61 = &v6;
  v63 = &v14;
  v67 = L"AllocateGpuVaFromHighAddresses";
  v68 = &v7;
  v59 = 288;
  v62 = 67108868;
  v64 = 4;
  v66 = 288;
  v69 = 67108868;
  v71 = 4;
  v70 = &v15;
  v58 = 0LL;
  v65 = 0LL;
  memset(v72, 0, sizeof(v72));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v16, 0LL, 0LL);
  dword_1C004D328 = v3;
  dword_1C004D32C = v4;
  dword_1C004D330 = 32 * v4;
  VIDMM_GLOBAL::_Config = (v2 != 0 ? 0x20 : 0) | (v1 != 0 ? 0x100 : 0) | (v0 != 0 ? 0x80 : 0) | VIDMM_GLOBAL::_Config & 0xFFFFFE5F;
  dword_1C004D334 = v5 & 0xFFFFF000;
  dword_1C004D3F8 = v6;
  dword_1C004D3FC = v7;
}
