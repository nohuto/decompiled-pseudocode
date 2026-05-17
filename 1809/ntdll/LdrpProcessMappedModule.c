/*
 * XREFs of LdrpProcessMappedModule @ 0x180026F8C
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180021D1C (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLogDllState @ 0x180026314 (LdrpLogDllState.c)
 *     LdrpValidateEntrySection @ 0x18002717C (LdrpValidateEntrySection.c)
 *     LdrInitSecurityCookie @ 0x1800271C4 (LdrInitSecurityCookie.c)
 *     LdrpGenRandom @ 0x180027464 (LdrpGenRandom.c)
 *     LdrpSignalModuleMapped @ 0x1800274C8 (LdrpSignalModuleMapped.c)
 *     RtlInsertInvertedFunctionTable @ 0x180027528 (RtlInsertInvertedFunctionTable.c)
 *     LdrpCfgProcessLoadConfig @ 0x180041A48 (LdrpCfgProcessLoadConfig.c)
 */

__int64 LdrpProcessMappedModule(__int64 a1, int a2, int a3, ...)
{
  unsigned __int64 v3; // rbp
  int Config; // edi
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // eax
  int inited; // eax
  int v14; // r8d
  unsigned __int64 *v15; // r8
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v3 = *(_QWORD *)(a1 + 48);
  Config = RtlImageNtHeaderEx(3, v3, 0LL, (__int64 *)va);
  if ( Config < 0 )
    return (unsigned int)Config;
  v8 = v18;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 )
  {
    if ( *(_DWORD *)(v18 + 40) )
      v9 = v3 + *(unsigned int *)(v18 + 40);
    else
      v9 = 0LL;
    *(_QWORD *)(a1 + 56) = v9;
  }
  if ( !(unsigned __int8)LdrpValidateEntrySection(a1) )
    return (unsigned int)-1073741701;
  *(_QWORD *)(a1 + 248) = *(_QWORD *)(v8 + 48);
  *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
  if ( (a2 & 0x800000) == 0 && (*(_BYTE *)(a1 + 104) & 4) != 0 && (*(_DWORD *)(a1 + 104) & 0x2000) == 0 && a3 )
  {
    v17 = 0LL;
    v12 = LdrpGenRandom();
    inited = LdrInitSecurityCookie(v3, *(_DWORD *)(a1 + 64), 0, v12 ^ (unsigned int)dword_180178388, (__int64)&v17);
    if ( v3 == 0x180000000LL
      || !*(_QWORD *)(a1 + 56)
      || (*(_WORD *)(v18 + 72) != 6 || *(_WORD *)(v18 + 74) < 3u) && *(_WORD *)(v18 + 72) < 7u
      || inited )
    {
      Config = LdrpCfgProcessLoadConfig(a1, v18, v17);
      if ( Config < 0 )
        return (unsigned int)Config;
      goto LABEL_17;
    }
    return (unsigned int)-1073741701;
  }
LABEL_17:
  v14 = *(_DWORD *)(a1 + 104);
  LOBYTE(v10) = (v14 & 0x200) == 0;
  if ( ((unsigned __int8)v10 & ((a2 & 0x800000) == 0)) != 0 )
  {
    RtlInsertInvertedFunctionTable(v3, *(unsigned int *)(a1 + 64));
    v14 = *(_DWORD *)(a1 + 104);
  }
  v15 = (unsigned __int64 *)(v14 | 0x2200u);
  *(_DWORD *)(a1 + 104) = (_DWORD)v15;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v10, v15, v11);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
  if ( (a2 & 0x800000) == 0 && *(_QWORD *)(a1 + 176) )
    LdrpSignalModuleMapped(a1);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 0x14A1u);
  return (unsigned int)Config;
}
