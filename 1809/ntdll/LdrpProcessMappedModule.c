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
  char *v3; // rbp
  NTSTATUS Config; // edi
  PIMAGE_NT_HEADERS v8; // rsi
  char *v9; // rax
  int v10; // eax
  int inited; // eax
  int v12; // r8d
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS v15; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, PIMAGE_NT_HEADERS);
  v3 = *(char **)(a1 + 48);
  Config = RtlImageNtHeaderEx(3u, v3, 0LL, (PIMAGE_NT_HEADERS *)va);
  if ( Config < 0 )
    return (unsigned int)Config;
  v8 = v15;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 )
  {
    if ( v15->OptionalHeader.AddressOfEntryPoint )
      v9 = &v3[v15->OptionalHeader.AddressOfEntryPoint];
    else
      v9 = 0LL;
    *(_QWORD *)(a1 + 56) = v9;
  }
  if ( !(unsigned __int8)LdrpValidateEntrySection(a1) )
    return (unsigned int)-1073741701;
  *(_QWORD *)(a1 + 248) = v8->OptionalHeader.ImageBase;
  *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
  if ( (a2 & 0x800000) == 0 && (*(_BYTE *)(a1 + 104) & 4) != 0 && (*(_DWORD *)(a1 + 104) & 0x2000) == 0 && a3 )
  {
    v14 = 0LL;
    v10 = LdrpGenRandom();
    inited = LdrInitSecurityCookie(
               (_DWORD)v3,
               *(_DWORD *)(a1 + 64),
               0,
               v10 ^ LdrSystemDllInitBlock.RngData,
               (__int64)&v14);
    if ( v3 == (char *)0x180000000LL
      || !*(_QWORD *)(a1 + 56)
      || (v15->OptionalHeader.MajorSubsystemVersion != 6 || v15->OptionalHeader.MinorSubsystemVersion < 3u)
      && v15->OptionalHeader.MajorSubsystemVersion < 7u
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
  LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 0x14A1u);
  return (unsigned int)Config;
}
