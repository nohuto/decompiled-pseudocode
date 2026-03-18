/*
 * XREFs of bInitICM @ 0x1C02654C8
 * Callers:
 *     InitializeGre @ 0x1C0266238 (InitializeGre.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 *     HmgShareLockEx @ 0x1C001CDA0 (HmgShareLockEx.c)
 *     GreGetStockObject @ 0x1C0022DB0 (GreGetStockObject.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0050160 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C0050BB0 (HmgMarkUndeletable.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00780DC (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 bInitICM()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax
  int v2; // ecx
  _BYTE *v3; // rcx
  __int64 v4; // rax
  struct tagLOGCOLORSPACEW *v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  struct HOBJ__ *ColorSpace; // rax
  unsigned __int64 v18; // rdi
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+80h] [rbp-88h]
  int v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  _BYTE v25[588]; // [rsp+B8h] [rbp-50h] BYREF
  int v26; // [rsp+304h] [rbp+1FCh]

  QueryTable.Flags = 292;
  v20 = 0;
  QueryTable.Name = L"GdiIcmControl";
  QueryTable.QueryRoutine = 0LL;
  v0 = 1;
  QueryTable.EntryContext = &v20;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v22 = 0LL;
  v23 = 0;
  v24 = 0LL;
  v1 = RtlQueryRegistryValues(3u, L"ICM", &QueryTable, 0LL, 0LL);
  v2 = v20;
  if ( v1 < 0 )
    v2 = 0;
  v20 = v2;
  if ( (v2 & 0x10000) == 0 )
  {
    dword_1C020D06C = 1934772034;
    wcscpy_s(&Dst, 0x104uLL, L"sRGB Color Space Profile.icm");
  }
  giIcmGammaRange = 128;
  QueryTable.Name = L"GdiIcmGammaRange";
  QueryTable.EntryContext = &giIcmGammaRange;
  if ( RtlQueryRegistryValues(3u, L"ICM", &QueryTable, 0LL, 0LL) < 0 )
    giIcmGammaRange = 128;
  if ( giIcmGammaRange > 0x100 )
    giIcmGammaRange = 256;
  v3 = v25;
  v4 = 4LL;
  v5 = &gcsStockColorSpace;
  do
  {
    v6 = *(_OWORD *)&v5->lcsIntent;
    *(_OWORD *)v3 = *(_OWORD *)&v5->lcsSignature;
    v7 = *(_OWORD *)&v5->lcsEndpoints.ciexyzGreen.ciexyzX;
    *((_OWORD *)v3 + 1) = v6;
    v8 = *(_OWORD *)&v5->lcsEndpoints.ciexyzBlue.ciexyzY;
    *((_OWORD *)v3 + 2) = v7;
    v9 = *(_OWORD *)&v5->lcsGammaBlue;
    *((_OWORD *)v3 + 3) = v8;
    v10 = *(_OWORD *)&v5->lcsFilename[6];
    *((_OWORD *)v3 + 4) = v9;
    v11 = *(_OWORD *)&v5->lcsFilename[14];
    *((_OWORD *)v3 + 5) = v10;
    v12 = *(_OWORD *)&v5->lcsFilename[22];
    v5 = (struct tagLOGCOLORSPACEW *)((char *)v5 + 128);
    *((_OWORD *)v3 + 6) = v11;
    v3 += 128;
    *((_OWORD *)v3 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = *(_QWORD *)&v5->lcsGammaBlue;
  v14 = *(_OWORD *)&v5->lcsIntent;
  *(_OWORD *)v3 = *(_OWORD *)&v5->lcsSignature;
  v15 = *(_OWORD *)&v5->lcsEndpoints.ciexyzGreen.ciexyzX;
  *((_OWORD *)v3 + 1) = v14;
  v16 = *(_OWORD *)&v5->lcsEndpoints.ciexyzBlue.ciexyzY;
  *((_OWORD *)v3 + 2) = v15;
  *((_OWORD *)v3 + 3) = v16;
  *((_QWORD *)v3 + 8) = v13;
  *((_DWORD *)v3 + 18) = *(_DWORD *)&v5->lcsFilename[2];
  v26 = 0;
  ColorSpace = GreCreateColorSpace((struct _LOGCOLORSPACEEXW *)v25);
  v18 = (unsigned __int64)ColorSpace;
  if ( !ColorSpace )
    return 0;
  HmgSetOwner((unsigned int)ColorSpace, 0, 9);
  HmgMarkUndeletable(v18, 9);
  bSetStockObject(v18, 20, 0);
  ghStockColorSpace = (HCOLORSPACE)GreGetStockObject(20);
  gpStockColorSpace = (struct COLORSPACE *)HmgShareLockEx((unsigned int)ghStockColorSpace, 9, 0);
  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = (PKDPC)ghStockColorSpace;
  qword_1C020CE90 = (__int64)gpStockColorSpace;
  if ( !gpStockColorSpace )
    return 0;
  return v0;
}
