/*
 * XREFs of LdrpCfgProcessLoadConfig @ 0x180041A48
 * Callers:
 *     LdrpProcessMappedModule @ 0x180026F8C (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x18004CDD4 (LdrpLogCFGModuleInfoTelemetry.c)
 *     LdrpMakePermanentImageCommit @ 0x180078CB4 (LdrpMakePermanentImageCommit.c)
 *     LdrpIsModuleUnderSystem32 @ 0x18007FBC4 (LdrpIsModuleUnderSystem32.c)
 *     ZwProtectVirtualMemory @ 0x1800A0D00 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  int v6; // r9d
  int v7; // edi
  NTSTATUS v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // eax
  _QWORD *v14; // r14
  unsigned __int64 v15; // rcx
  NTSTATUS result; // eax
  __int64 (__fastcall *v17)(_QWORD); // rax
  __int64 (__fastcall **v18)(); // rdi
  unsigned __int64 v19; // rcx
  __int64 (__fastcall *v20)(); // rax
  int v21; // edi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  ULONG NewProtect; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+58h] BYREF

  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0;
  v6 = (LdrpPolicyBits & 4 | 0x7B) << 8;
  v7 = (v6 | 0x8000) & *(unsigned __int16 *)(a3 + 78);
  *(_DWORD *)(a1 + 280) = v7;
  if ( (v6 & v7) != 0 && (unsigned __int8)LdrpIsModuleUnderSystem32() )
  {
    if ( a1 == LdrpImageEntry )
      v21 = v7 | 0x200;
    else
      v21 = v7 | 0x100;
    *(_DWORD *)(a1 + 280) = v21;
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0 )
  {
    *(_DWORD *)(a1 + 104) |= 0x8000u;
    if ( (*(_DWORD *)(a3 + 144) & 0x2000) != 0 )
    {
      v8 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 48), 1, 0xDu, &v26, &v24);
      v9 = v24;
      if ( v8 < 0 )
        v9 = 0LL;
      if ( v9 )
      {
        v10 = (__int64)a2 + a2[10] + 24;
        v11 = 0;
        if ( a2[3] )
        {
          while ( (unsigned int)(*(_DWORD *)(v9 + 12) - *(_DWORD *)(v10 + 12)) >= *(_DWORD *)(v10 + 8) )
          {
            ++v11;
            v10 += 40LL;
            if ( v11 >= a2[3] )
              goto LABEL_14;
          }
          BaseAddress = (PVOID)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(v10 + 12));
          RegionSize = *(unsigned int *)(v10 + 8);
          LdrpMakePermanentImageCommit();
          ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &NewProtect);
        }
      }
    }
  }
LABEL_14:
  LOBYTE(v12) = LdrControlFlowGuardEnforced();
  if ( v12 && ((a2[47] & 0x4000) == 0 || (*(_DWORD *)(a3 + 144) & 0x100) == 0) )
    LdrpLogCFGModuleInfoTelemetry(a1, a2);
  LOBYTE(v13) = LdrControlFlowGuardEnforced();
  if ( !v13 || (a2[47] & 0x4000) == 0 || (*(_DWORD *)(a3 + 144) & 0x100) == 0 )
    return 0;
  v14 = *(_QWORD **)(a3 + 112);
  if ( v14
    && (v15 = *(_QWORD *)(a1 + 48), (unsigned __int64)v14 >= v15)
    && (unsigned __int64)v14 < *(unsigned int *)(a1 + 64) + v15 - 8
    && *v14 )
  {
    BaseAddress = *(PVOID *)(a3 + 112);
    RegionSize = 8LL;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
    if ( result < 0 )
      return result;
    if ( !(unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression()
      || (v17 = LdrpValidateUserCallTargetES, (*(_DWORD *)(a3 + 144) & 0x4000) == 0) )
    {
      v17 = LdrpValidateUserCallTarget;
    }
    *v14 = v17;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    if ( result < 0 )
      return result;
  }
  else
  {
    v14 = 0LL;
  }
  v18 = *(__int64 (__fastcall ***)())(a3 + 120);
  if ( !v18
    || (v19 = *(_QWORD *)(a1 + 48), (unsigned __int64)v18 < v19)
    || (unsigned __int64)v18 >= *(unsigned int *)(a1 + 64) + v19 - 8
    || !*v18 )
  {
    v18 = 0LL;
    goto LABEL_35;
  }
  BaseAddress = *(PVOID *)(a3 + 120);
  RegionSize = 8LL;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
  if ( result >= 0 )
  {
    if ( !(unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression()
      || (v20 = LdrpDispatchUserCallTargetES, (*(_DWORD *)(a3 + 144) & 0x4000) == 0) )
    {
      v20 = LdrpDispatchUserCallTarget;
    }
    *v18 = v20;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    if ( result >= 0 )
    {
LABEL_35:
      if ( !v14
        || (__int64 (__fastcall *)(_QWORD))*v14 != LdrpValidateUserCallTarget
        && (__int64 (__fastcall *)(_QWORD))*v14 != LdrpValidateUserCallTargetES
        || v18 && *v18 != LdrpDispatchUserCallTarget && *v18 != LdrpDispatchUserCallTargetES )
      {
        return -1073741762;
      }
      return 0;
    }
  }
  return result;
}
