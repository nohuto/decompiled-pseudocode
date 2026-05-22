/*
 * XREFs of ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F921C
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
void __fastcall MPCGamepadProcessor::UpdateScroll(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  unsigned int v4; // esi
  unsigned int v5; // edx
  int v6; // r14d
  int v7; // esi
  bool v8; // cl
  char *v9; // rbx
  bool v10; // al
  struct IMPCInputProviderBase *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  const char *v15; // r9
  unsigned int **Instance; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  const char *v20; // r9
  unsigned int **v21; // rax
  char *v22; // rax
  __int64 v23; // rcx
  MPCGestureHandlerManager *v24; // rcx
  const char *v25; // r9
  unsigned __int64 v26[4]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v27[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+60h] [rbp-A8h]
  char v29; // [rsp+2A0h] [rbp+198h] BYREF
  int v30; // [rsp+490h] [rbp+388h]
  float v31; // [rsp+494h] [rbp+38Ch]
  float v32; // [rsp+498h] [rbp+390h]
  int v33; // [rsp+4A0h] [rbp+398h]
  int v34; // [rsp+4A4h] [rbp+39Ch]
  __int128 v35; // [rsp+4A8h] [rbp+3A0h]
  int v36; // [rsp+4B8h] [rbp+3B0h]

  v26[1] = -2LL;
  v4 = *((_DWORD *)this + 1350);
  v5 = v4 >> 9;
  v6 = ((v4 & 0x80) == 0) - 1;
  if ( (v4 & 0x40) != 0 )
    v6 = (v4 & 0x80) == 0;
  v7 = (v4 >> 8) & 1;
  if ( (v5 & 1) != 0 )
    --v7;
  v8 = v6 || v7;
  v9 = (char *)a2 + 600;
  v10 = *v9 && v9[2] || *((_DWORD *)this + 1460) == 1;
  if ( v8 && v10 )
  {
    *((_DWORD *)this + 1460) = 1;
    memset_0(v27, 0, 0x640uLL);
    v28 = 1600;
    v33 = *((_DWORD *)v9 + 1);
    v34 = *((_DWORD *)v9 + 2);
    v35 = *(_OWORD *)(v9 + 12);
    v36 = *((_DWORD *)v9 + 8);
    v11 = (struct IMPCInputProviderBase *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
    Instance = (unsigned int **)MPCConstantManager::GetInstance(v13, v12, v14, v15);
    v31 = MPCConstantManager::GetConstant<float>(Instance, v11, L"ScrollingScale").m128_f32[0] * (float)v7;
    v21 = (unsigned int **)MPCConstantManager::GetInstance(v18, v17, v19, v20);
    v32 = MPCConstantManager::GetConstant<float>(v21, v11, L"ScrollingScale").m128_f32[0] * (float)v6;
    v30 = 5;
    v22 = &v29;
    v23 = 2LL;
    do
    {
      *(_OWORD *)v22 = *(_OWORD *)v9;
      *((_OWORD *)v22 + 1) = *((_OWORD *)v9 + 1);
      *((_OWORD *)v22 + 2) = *((_OWORD *)v9 + 2);
      *((_OWORD *)v22 + 3) = *((_OWORD *)v9 + 3);
      *((_OWORD *)v22 + 4) = *((_OWORD *)v9 + 4);
      *((_OWORD *)v22 + 5) = *((_OWORD *)v9 + 5);
      *((_OWORD *)v22 + 6) = *((_OWORD *)v9 + 6);
      v22 += 128;
      *((_OWORD *)v22 - 1) = *((_OWORD *)v9 + 7);
      v9 += 128;
      --v23;
    }
    while ( v23 );
    *(_OWORD *)v22 = *(_OWORD *)v9;
    *((_OWORD *)v22 + 1) = *((_OWORD *)v9 + 1);
    *((_OWORD *)v22 + 2) = *((_OWORD *)v9 + 2);
    *((_OWORD *)v22 + 3) = *((_OWORD *)v9 + 3);
    v26[2] = (unsigned __int64)v26;
    v26[0] = (unsigned __int64)v11;
    if ( v11 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, __int64))(*(_QWORD *)v11 + 8LL))(v11, 128LL);
    v24 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v24, (__int64)v27, v26, v25);
  }
  else if ( *((_DWORD *)this + 1460) == 1 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
}
