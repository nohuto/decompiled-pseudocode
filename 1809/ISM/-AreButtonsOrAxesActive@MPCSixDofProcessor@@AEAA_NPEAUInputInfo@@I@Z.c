/*
 * XREFs of ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z @ 0x1800EF35C
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z @ 0x1800EF468 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F0670 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 */

bool __fastcall MPCSixDofProcessor::AreButtonsOrAxesActive(
        MPCSixDofProcessor *this,
        struct InputInfo *a2,
        int a3,
        const char *a4)
{
  float v4; // xmm0_4
  __int64 v5; // r8
  MPCConstantManager *Instance; // rax
  double v8; // xmm0_8
  float v9; // xmm6_4
  MPCConstantManager *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  const char *v14; // r9
  double v15; // xmm0_8
  float v16; // xmm6_4
  MPCConstantManager *v17; // rax

  v5 = (unsigned int)~a3;
  if ( ((unsigned __int8)v5 & *((_BYTE *)a2 + 1168) & 0x3F) != 0 )
    return 1;
  if ( *((_BYTE *)a2 + 1211) )
  {
    Instance = MPCConstantManager::GetInstance((__int64)this, (__int64)a2, v5, a4);
    MPCConstantManager::GetConstant<float>(Instance);
    if ( *((float *)a2 + 300) > v4 )
      return 1;
  }
  if ( !*((_BYTE *)a2 + 1212) )
    return 0;
  *(_QWORD *)&v8 = COERCE_UNSIGNED_INT64(*((float *)a2 + 298)) & _xmm;
  v9 = v8;
  v10 = MPCConstantManager::GetInstance((__int64)this, (__int64)a2, v5, a4);
  MPCConstantManager::GetConstant<float>(v10);
  if ( v9 > *(float *)&v8 )
    return 1;
  *(_QWORD *)&v15 = COERCE_UNSIGNED_INT64(*((float *)a2 + 299)) & _xmm;
  v16 = v15;
  v17 = MPCConstantManager::GetInstance(v12, v11, v13, v14);
  MPCConstantManager::GetConstant<float>(v17);
  return v16 > *(float *)&v15;
}
