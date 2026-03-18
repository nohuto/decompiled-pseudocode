/*
 * XREFs of RemoveHmodDependency @ 0x1C00B2D28
 * Callers:
 *     FreeHook @ 0x1C00B4250 (FreeHook.c)
 *     DestroyEventHook @ 0x1C00B5660 (DestroyEventHook.c)
 *     _RegisterUserApiHook @ 0x1C013C448 (_RegisterUserApiHook.c)
 *     _UnregisterUserApiHook @ 0x1C01612B0 (_UnregisterUserApiHook.c)
 *     _UnregisterDManipHook @ 0x1C01E80C0 (_UnregisterDManipHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00B2CD4 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     __report_rangecheckfailure @ 0x1C0162AF0 (__report_rangecheckfailure.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RemoveHmodDependency(int a1)
{
  __int64 v1; // rbx
  tagDomLock *v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v3);
  if ( (int)v1 < catomSysTableEntries && (*((_DWORD *)&acatomSysDepends + v1))-- == 1 )
  {
    if ( *((_DWORD *)&acatomSysUse + v1) )
    {
      ++gcSysExpunge;
      WPP_MAIN_CB.Dpc.TargetInfoAsUlong |= 1 << v1;
    }
    else
    {
      if ( (unsigned __int64)(2 * v1) >= 0x40 )
        _report_rangecheckfailure();
      *((_WORD *)&aatomSysLoaded + v1) = 0;
    }
  }
  tagDomLock::UnLockExclusive(v3);
}
