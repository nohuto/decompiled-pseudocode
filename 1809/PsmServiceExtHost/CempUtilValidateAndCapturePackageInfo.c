/*
 * XREFs of CempUtilValidateAndCapturePackageInfo @ 0x180001604
 * Callers:
 *     ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x18000128C (-HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180066F94 (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 * Callees:
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180001724 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall CempUtilValidateAndCapturePackageInfo(const WCHAR *a1, void *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  UINT32 packageFamilyNameLength[4]; // [rsp+30h] [rbp-198h] BYREF
  _OWORD v18[12]; // [rsp+40h] [rbp-188h] BYREF
  __int64 v19; // [rsp+100h] [rbp-C8h]
  int v20; // [rsp+108h] [rbp-C0h]
  WCHAR packageFamilyName[72]; // [rsp+110h] [rbp-B8h] BYREF

  packageFamilyNameLength[0] = 65;
  if ( PackageFamilyNameFromFullName(a1, packageFamilyNameLength, packageFamilyName) )
    return 3221225507LL;
  result = CempUtilValidateAndCapturePackageInfoWithFamilyName(packageFamilyName, a2, (__int64)v18);
  if ( (int)result >= 0 )
  {
    v7 = v18[1];
    *(_OWORD *)a5 = v18[0];
    v8 = v18[2];
    *(_OWORD *)(a5 + 16) = v7;
    v9 = v18[3];
    *(_OWORD *)(a5 + 32) = v8;
    v10 = v18[4];
    *(_OWORD *)(a5 + 48) = v9;
    v11 = v18[5];
    *(_OWORD *)(a5 + 64) = v10;
    v12 = v18[6];
    *(_OWORD *)(a5 + 80) = v11;
    *(_OWORD *)(a5 + 96) = v12;
    *(_OWORD *)(a5 + 112) = v18[7];
    v13 = v19;
    v14 = v18[9];
    *(_OWORD *)(a5 + 128) = v18[8];
    v15 = v18[10];
    *(_OWORD *)(a5 + 144) = v14;
    v16 = v18[11];
    *(_OWORD *)(a5 + 160) = v15;
    *(_OWORD *)(a5 + 176) = v16;
    *(_QWORD *)(a5 + 192) = v13;
    *(_DWORD *)(a5 + 200) = v20;
    return 0LL;
  }
  return result;
}
