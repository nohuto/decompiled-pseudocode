/*
 * XREFs of AddHmodDependency @ 0x1C00B27D0
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C00B32E4 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C00B54B4 (_SetWinEventHook.c)
 *     _RegisterDManipHook @ 0x1C0130970 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C013C448 (_RegisterUserApiHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00B2CD4 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
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
