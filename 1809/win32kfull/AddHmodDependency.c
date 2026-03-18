/*
 * XREFs of AddHmodDependency @ 0x1C00B5D58
 * Callers:
 *     _SetWinEventHook @ 0x1C00B41C4 (_SetWinEventHook.c)
 *     zzzSetWindowsHookEx @ 0x1C00B5454 (zzzSetWindowsHookEx.c)
 *     _RegisterDManipHook @ 0x1C0125A60 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C0130888 (_RegisterUserApiHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00B61D8 (--0-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
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
