/*
 * XREFs of AddHmodDependency @ 0x1C00D84E4
 * Callers:
 *     _RegisterUserApiHook @ 0x1C00D6CA4 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00D6F44 (_RegisterDManipHook.c)
 *     _SetWinEventHook @ 0x1C00D77D0 (_SetWinEventHook.c)
 *     zzzSetWindowsHookEx @ 0x1C00D7FBC (zzzSetWindowsHookEx.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00D88F8 (--0-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 */

void __fastcall AddHmodDependency(int a1)
{
  __int64 v1; // rbx
  tagObjLock *v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v2);
  if ( (int)v1 < catomSysTableEntries )
    ++*((_DWORD *)&acatomSysDepends + v1);
  tagObjLock::UnLock(v2);
}
