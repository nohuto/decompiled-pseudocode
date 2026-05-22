/*
 * XREFs of _lambda_8d7d1d3f4a837c513c02674b3d8f019a_::operator() @ 0x1800F38B8
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1800F3274 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?ChangeConstantForInputType@MPCConstantManager@@QEAAJW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180048160 (-ChangeConstantForInputType@MPCConstantManager@@QEAAJW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 */

LSTATUS __fastcall lambda_8d7d1d3f4a837c513c02674b3d8f019a_::operator()(PVOID *a1, const WCHAR *a2, void *a3)
{
  LSTATUS result; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  __int64 v9; // rcx
  struct MPCConstantManager *Instance; // rax
  __int64 v11; // [rsp+50h] [rbp+8h]

  result = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\ISM\\6dof",
             a2,
             0x10u,
             0LL,
             *a1,
             (LPDWORD)a1[1]);
  if ( !result )
  {
    BYTE4(v11) = 2;
    v9 = *(unsigned int *)*a1;
    *(float *)&v11 = (float)(int)v9 / 1000.0;
    Instance = MPCConstantManager::GetInstance(v9, v6, v7, v8);
    return MPCConstantManager::ChangeConstantForInputType((__int64)Instance, 0x2000LL, a3, v11);
  }
  return result;
}
