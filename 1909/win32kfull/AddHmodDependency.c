/*
 * XREFs of AddHmodDependency @ 0x1C0053630
 * Callers:
 *     _RegisterUserApiHook @ 0x1C000F248 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C000F850 (_RegisterDManipHook.c)
 *     zzzSetWindowsHookEx @ 0x1C0054144 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C0056264 (_SetWinEventHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0053B34 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 */

void __fastcall AddHmodDependency(int a1)
{
  __int64 v1; // rbx
  tagDomLock *v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v2);
  if ( (int)v1 < catomSysTableEntries )
    ++*((_DWORD *)&acatomSysDepends + v1);
  tagDomLock::UnLockExclusive(v2);
}
