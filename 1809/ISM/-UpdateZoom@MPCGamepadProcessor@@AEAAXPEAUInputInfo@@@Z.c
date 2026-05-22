/*
 * XREFs of ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F9484
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F88C0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18004541C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1800F9784 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGamepadProcessor::UpdateZoom(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  float v3; // xmm0_4
  float v4; // xmm9_4
  float v5; // xmm8_4
  char *v6; // r15
  const char *v7; // r9
  _OWORD *v8; // rax
  char *v9; // rcx
  __int64 v10; // rdx
  struct IMPCInputProviderBase *v11; // rdi
  float v12; // xmm6_4
  unsigned int **Instance; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  const char *v17; // r9
  char v18; // si
  bool v19; // r14
  float v20; // xmm6_4
  unsigned int **v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  const char *v25; // r9
  float v26; // xmm0_4
  int v27; // eax
  unsigned int **v28; // rax
  MPCGestureHandlerManager *v29; // rcx
  const char *v30; // r9
  unsigned __int64 v31[4]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v32[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+60h] [rbp-A8h]
  char v34; // [rsp+2A0h] [rbp+198h] BYREF
  int v35; // [rsp+490h] [rbp+388h]
  float v36; // [rsp+49Ch] [rbp+394h]
  int v37; // [rsp+4A0h] [rbp+398h]
  int v38; // [rsp+4A4h] [rbp+39Ch]
  __int128 v39; // [rsp+4A8h] [rbp+3A0h]
  int v40; // [rsp+4B8h] [rbp+3B0h]

  v31[1] = -2LL;
  v3 = *((double *)this + 676);
  v4 = (float)*((double *)this + 677) - v3;
  v5 = (float)*((double *)this + 685) - (float)*((double *)this + 684);
  v6 = (char *)a2 + 600;
  memset_0(v32, 0, 0x640uLL);
  v33 = 1600;
  v37 = *((_DWORD *)v6 + 1);
  v38 = *((_DWORD *)v6 + 2);
  v39 = *(_OWORD *)(v6 + 12);
  v40 = *((_DWORD *)v6 + 8);
  v8 = v6;
  v9 = &v34;
  v10 = 2LL;
  do
  {
    *(_OWORD *)v9 = *v8;
    *((_OWORD *)v9 + 1) = v8[1];
    *((_OWORD *)v9 + 2) = v8[2];
    *((_OWORD *)v9 + 3) = v8[3];
    *((_OWORD *)v9 + 4) = v8[4];
    *((_OWORD *)v9 + 5) = v8[5];
    *((_OWORD *)v9 + 6) = v8[6];
    v9 += 128;
    *((_OWORD *)v9 - 1) = v8[7];
    v8 += 8;
    --v10;
  }
  while ( v10 );
  *(_OWORD *)v9 = *v8;
  *((_OWORD *)v9 + 1) = v8[1];
  *((_OWORD *)v9 + 2) = v8[2];
  *((_OWORD *)v9 + 3) = v8[3];
  v11 = (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
  Instance = (unsigned int **)MPCConstantManager::GetInstance((__int64)this + 32, 0LL, 128LL, v7);
  v18 = 1;
  v19 = v12 > MPCConstantManager::GetConstant<float>(Instance, v11, L"ThumbstickDeadzone").m128_f32[0] && *v6;
  v21 = (unsigned int **)MPCConstantManager::GetInstance(v15, v14, v16, v17);
  LODWORD(v26) = MPCConstantManager::GetConstant<float>(
                   v21,
                   (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
                   L"ThumbstickDeadzone").m128_u32[0];
  LOBYTE(v23) = *v6 && v6[2] || *((_DWORD *)this + 1460) == 2;
  LOBYTE(v22) = v19 && (v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm), v20 <= v26) && !*((_DWORD *)this + 1460);
  v27 = *((_DWORD *)this + 1460);
  if ( v27 != 2 )
  {
LABEL_20:
    v18 = 0;
    goto LABEL_21;
  }
  if ( v19 )
  {
    if ( !(_BYTE)v23 )
      goto LABEL_24;
    goto LABEL_20;
  }
LABEL_21:
  if ( (_BYTE)v23 && (_BYTE)v22 )
  {
    *((_DWORD *)this + 1460) = 2;
    v27 = 2;
  }
LABEL_24:
  if ( v18 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
  else if ( v27 == 2 )
  {
    v28 = (unsigned int **)MPCConstantManager::GetInstance(v23, v22, v24, v25);
    v36 = (float)((float)(MPCConstantManager::GetConstant<float>(
                            v28,
                            (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
                            L"ZoomingScale").m128_f32[0]
                        * v4)
                * *((float *)this + 1480))
        + 1.0;
    v35 = 6;
    v31[2] = (unsigned __int64)v31;
    v31[0] = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
    if ( v11 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 8LL))(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
    v29 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v29, (__int64)v32, v31, v30);
  }
}
