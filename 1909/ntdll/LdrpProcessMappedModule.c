/*
 * XREFs of LdrpProcessMappedModule @ 0x180020654
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180029EFC (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     LdrInitSecurityCookie @ 0x180020514 (LdrInitSecurityCookie.c)
 *     LdrpValidateEntrySection @ 0x180020844 (LdrpValidateEntrySection.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002088C (LdrpCfgProcessLoadConfig.c)
 *     LdrpGenRandom @ 0x180020C18 (LdrpGenRandom.c)
 *     LdrpSignalModuleMapped @ 0x180020D2C (LdrpSignalModuleMapped.c)
 *     RtlInsertInvertedFunctionTable @ 0x180020D8C (RtlInsertInvertedFunctionTable.c)
 *     LdrpLogDllState @ 0x1800255A8 (LdrpLogDllState.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 LdrpProcessMappedModule(__int64 a1, int a2, int a3, ...)
{
  unsigned __int64 v3; // rbp
  int Config; // edi
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  int inited; // eax
  int v12; // r8d
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  v3 = *(_QWORD *)(a1 + 48);
  Config = RtlImageNtHeaderEx(3, v3, 0LL, (__int64 *)va);
  if ( Config < 0 )
    return (unsigned int)Config;
  v8 = v15;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 )
  {
    if ( *(_DWORD *)(v15 + 40) )
      v9 = v3 + *(unsigned int *)(v15 + 40);
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
    v14 = 0LL;
    v10 = LdrpGenRandom();
    inited = LdrInitSecurityCookie(v3, *(_DWORD *)(a1 + 64), 0LL, v10 ^ (unsigned int)dword_18017A388, &v14);
    if ( v3 == 0x180000000LL
      || !*(_QWORD *)(a1 + 56)
      || (*(_WORD *)(v15 + 72) != 6 || *(_WORD *)(v15 + 74) < 3u) && *(_WORD *)(v15 + 72) < 7u
      || inited )
    {
      Config = LdrpCfgProcessLoadConfig(a1, v15, v14);
      if ( Config < 0 )
        return (unsigned int)Config;
      goto LABEL_17;
    }
    return (unsigned int)-1073741701;
  }
LABEL_17:
  v12 = *(_DWORD *)(a1 + 104);
  if ( (v12 & 0x200) == 0 && (a2 & 0x800000) == 0 )
  {
    RtlInsertInvertedFunctionTable(v3, *(unsigned int *)(a1 + 64));
    v12 = *(_DWORD *)(a1 + 104);
  }
  *(_DWORD *)(a1 + 104) = v12 | 0x2200;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
  if ( (a2 & 0x800000) == 0 && *(_QWORD *)(a1 + 176) )
    LdrpSignalModuleMapped(a1);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 5281LL);
  return (unsigned int)Config;
}
