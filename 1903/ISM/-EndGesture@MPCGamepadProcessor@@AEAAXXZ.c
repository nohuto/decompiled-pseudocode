/*
 * XREFs of ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x180137628
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180137B90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801395D0 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18013989C (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180057368 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180086124 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800863AC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 */

void __fastcall MPCGamepadProcessor::EndGesture(MPCGamepadProcessor *this)
{
  _OWORD *v2; // rax
  __int64 v3; // rcx
  char *v4; // rdx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 **v16; // rax
  __int64 **v17; // rbx
  __int64 *v18; // rax
  const char *v19; // r9
  __int64 v20; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v21[24]; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+48h] [rbp-B8h]
  char v23; // [rsp+C8h] [rbp-38h] BYREF
  int v24; // [rsp+CCh] [rbp-34h]
  int v25; // [rsp+D0h] [rbp-30h]
  __int128 v26; // [rsp+D4h] [rbp-2Ch]
  int v27; // [rsp+E8h] [rbp-18h]
  char v28; // [rsp+1F9h] [rbp+F9h]
  int v29; // [rsp+2C0h] [rbp+1C0h]
  int v30; // [rsp+2D0h] [rbp+1D0h]
  int v31; // [rsp+2D4h] [rbp+1D4h]
  __int128 v32; // [rsp+2D8h] [rbp+1D8h]
  int v33; // [rsp+2E8h] [rbp+1E8h]
  bool v34; // [rsp+2ECh] [rbp+1ECh]

  memset_0(v21, 0, 0x7F0uLL);
  v22 = 2032;
  v2 = (_OWORD *)((char *)this + 6824);
  v3 = 2LL;
  v4 = &v23;
  do
  {
    v5 = v2[1];
    *(_OWORD *)v4 = *v2;
    v6 = v2[2];
    *((_OWORD *)v4 + 1) = v5;
    v7 = v2[3];
    *((_OWORD *)v4 + 2) = v6;
    v8 = v2[4];
    *((_OWORD *)v4 + 3) = v7;
    v9 = v2[5];
    *((_OWORD *)v4 + 4) = v8;
    v10 = v2[6];
    *((_OWORD *)v4 + 5) = v9;
    v11 = v2[7];
    v2 += 8;
    *((_OWORD *)v4 + 6) = v10;
    v4 += 128;
    *((_OWORD *)v4 - 1) = v11;
    --v3;
  }
  while ( v3 );
  v12 = v2[1];
  *(_OWORD *)v4 = *v2;
  v13 = v2[2];
  *((_OWORD *)v4 + 1) = v12;
  v14 = v2[3];
  v15 = *((_QWORD *)v2 + 8);
  *((_OWORD *)v4 + 2) = v13;
  *((_OWORD *)v4 + 3) = v14;
  *((_QWORD *)v4 + 8) = v15;
  v34 = v28 != 0;
  v30 = v24;
  v29 = 2;
  v31 = v25;
  v32 = v26;
  v33 = v27;
  MPCGestureHandlerManager::GetInstance();
  v17 = v16;
  v18 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
          &v20,
          ((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
  MPCGestureHandlerManager::DownLevelTo2D(v17, (__int64)v21, v18, v19);
  *((_DWORD *)this + 1788) = 0;
}
