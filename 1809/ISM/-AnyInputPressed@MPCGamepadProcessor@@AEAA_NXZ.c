/*
 * XREFs of ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1800F9AA0
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F82B0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x1800F9A70 (-IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 *     ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x1800F9A80 (-IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 */

char __fastcall MPCGamepadProcessor::AnyInputPressed(MPCGamepadProcessor *this, __int64 a2, __int64 a3, const char *a4)
{
  char v4; // di
  struct IMPCInputProviderBase *v6; // rsi
  double v7; // xmm6_8
  unsigned int **Instance; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  double v13; // xmm6_8
  unsigned int **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  const char *v18; // r9
  double v19; // xmm6_8
  unsigned int **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  const char *v24; // r9
  double v25; // xmm6_8
  unsigned int **v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  const char *v30; // r9
  unsigned int **v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  const char *v35; // r9
  unsigned int **v36; // rax

  v4 = 0;
  if ( *((_DWORD *)this + 1350) )
    return 1;
  v6 = (MPCGamepadProcessor *)((char *)this + 32);
  *(_QWORD *)&v7 = *((_QWORD *)this + 681) & _xmm;
  Instance = (unsigned int **)MPCConstantManager::GetInstance((__int64)this, a2, a3, a4);
  if ( v7 > MPCConstantManager::GetConstant<float>(Instance, v6, L"ThumbstickDeadzone").m128_f32[0] )
    return 1;
  *(_QWORD *)&v13 = *((_QWORD *)this + 680) & _xmm;
  v14 = (unsigned int **)MPCConstantManager::GetInstance(v10, v9, v11, v12);
  if ( v13 > MPCConstantManager::GetConstant<float>(v14, v6, L"ThumbstickDeadzone").m128_f32[0] )
    return 1;
  *(_QWORD *)&v19 = *((_QWORD *)this + 678) & _xmm;
  v20 = (unsigned int **)MPCConstantManager::GetInstance(v16, v15, v17, v18);
  if ( v19 > MPCConstantManager::GetConstant<float>(v20, v6, L"ThumbstickDeadzone").m128_f32[0] )
    return 1;
  *(_QWORD *)&v25 = *((_QWORD *)this + 679) & _xmm;
  v26 = (unsigned int **)MPCConstantManager::GetInstance(v22, v21, v23, v24);
  if ( v25 > MPCConstantManager::GetConstant<float>(v26, v6, L"ThumbstickDeadzone").m128_f32[0] )
    return 1;
  v31 = (unsigned int **)MPCConstantManager::GetInstance(v28, v27, v29, v30);
  if ( *((double *)this + 676) > MPCConstantManager::GetConstant<float>(v31, v6, L"TriggerDeadzone").m128_f32[0] )
    return 1;
  v36 = (unsigned int **)MPCConstantManager::GetInstance(v33, v32, v34, v35);
  if ( *((double *)this + 677) > MPCConstantManager::GetConstant<float>(v36, v6, L"TriggerDeadzone").m128_f32[0] )
    return 1;
  return v4;
}
