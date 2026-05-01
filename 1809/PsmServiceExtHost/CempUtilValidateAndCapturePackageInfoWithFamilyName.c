/*
 * XREFs of CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180001724
 * Callers:
 *     CempUtilValidateAndCapturePackageInfo @ 0x180001604 (CempUtilValidateAndCapturePackageInfo.c)
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180066D48 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 * Callees:
 *     CempUtilPackageInfoInitialize @ 0x180001834 (CempUtilPackageInfoInitialize.c)
 *     CempUtilValidateSid @ 0x180015540 (CempUtilValidateSid.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall CempUtilValidateAndCapturePackageInfoWithFamilyName(
        unsigned __int16 *a1,
        PSID SourceSid,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v7; // ebx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _OWORD v19[12]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-38h]
  int v21; // [rsp+F8h] [rbp-30h]

  v7 = 0;
  if ( (int)CempUtilValidateSid(SourceSid) < 0 )
  {
    return (unsigned int)-1073741584;
  }
  else
  {
    CempUtilPackageInfoInitialize(a1, SourceSid, (unsigned __int16 *)v19);
    v8 = v19[1];
    *(_OWORD *)a5 = v19[0];
    v9 = v19[2];
    *(_OWORD *)(a5 + 16) = v8;
    v10 = v19[3];
    *(_OWORD *)(a5 + 32) = v9;
    v11 = v19[4];
    *(_OWORD *)(a5 + 48) = v10;
    v12 = v19[5];
    *(_OWORD *)(a5 + 64) = v11;
    v13 = v19[6];
    *(_OWORD *)(a5 + 80) = v12;
    *(_OWORD *)(a5 + 96) = v13;
    *(_OWORD *)(a5 + 112) = v19[7];
    v14 = v20;
    v15 = v19[9];
    *(_OWORD *)(a5 + 128) = v19[8];
    v16 = v19[10];
    *(_OWORD *)(a5 + 144) = v15;
    v17 = v19[11];
    *(_OWORD *)(a5 + 160) = v16;
    *(_OWORD *)(a5 + 176) = v17;
    *(_QWORD *)(a5 + 192) = v14;
    *(_DWORD *)(a5 + 200) = v21;
  }
  return v7;
}
