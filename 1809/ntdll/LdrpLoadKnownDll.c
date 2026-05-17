/*
 * XREFs of LdrpLoadKnownDll @ 0x1800223F4
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x180028D4C (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18000A950 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpMapDllWithSectionHandle @ 0x180021D1C (LdrpMapDllWithSectionHandle.c)
 *     LdrpLogDllState @ 0x180026314 (LdrpLogDllState.c)
 *     LdrpFindKnownDll @ 0x1800298B4 (LdrpFindKnownDll.c)
 *     LdrpHashUnicodeString @ 0x1800714C4 (LdrpHashUnicodeString.c)
 *     LdrpLoadContextReplaceModule @ 0x180071770 (LdrpLoadContextReplaceModule.c)
 *     LdrpCheckKnownDllFullPath @ 0x180075338 (LdrpCheckKnownDllFullPath.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(_BYTE *a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rsi
  int KnownDll; // edi
  char v5; // al
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v11; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  v2 = (__int64)a1;
  v3 = *((_QWORD *)a1 + 7);
  KnownDll = -1073741515;
  if ( (v1 & 0x200) != 0 )
  {
    v5 = LdrpCheckKnownDllFullPath(a1, v10);
    a1 = v10;
  }
  else
  {
    v5 = (v1 & 0x28) == 32;
  }
  if ( v5 )
  {
    KnownDll = LdrpFindKnownDll(a1, v3 + 88, v3 + 72, &Handle);
    if ( KnownDll >= 0 )
    {
      *(_DWORD *)(v2 + 32) |= 0x100000u;
      LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 5285LL);
      v11 = 0LL;
      *(_DWORD *)(v3 + 264) = LdrpHashUnicodeString(v3 + 88);
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v6, v7, v8);
      KnownDll = LdrpFindLoadedDllByNameLockHeld(
                   (unsigned __int16 *)(v3 + 88),
                   (unsigned __int16 *)(v3 + 72),
                   *(_DWORD *)(v2 + 32),
                   &v11,
                   *(_DWORD *)(v3 + 264));
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( v11 )
      {
        LdrpLoadContextReplaceModule(v2, v11);
      }
      else
      {
        LdrpLogDllState(0LL, v3 + 72, 5290LL);
        KnownDll = LdrpMapDllWithSectionHandle(v2);
      }
      NtClose(Handle);
    }
  }
  return (unsigned int)KnownDll;
}
