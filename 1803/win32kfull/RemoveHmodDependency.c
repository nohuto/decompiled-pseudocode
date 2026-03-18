/*
 * XREFs of RemoveHmodDependency @ 0x1C00D8460
 * Callers:
 *     _RegisterUserApiHook @ 0x1C00D6CA4 (_RegisterUserApiHook.c)
 *     _UnregisterUserApiHook @ 0x1C00D6EE0 (_UnregisterUserApiHook.c)
 *     FreeHook @ 0x1C00D7BB0 (FreeHook.c)
 *     DestroyEventHook @ 0x1C00D8B90 (DestroyEventHook.c)
 *     _UnregisterDManipHook @ 0x1C01B04D0 (_UnregisterDManipHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00D88F8 (--0-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     __report_rangecheckfailure @ 0x1C01396A0 (__report_rangecheckfailure.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RemoveHmodDependency(int a1)
{
  __int64 v1; // rbx
  tagObjLock *v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v3);
  if ( (int)v1 < catomSysTableEntries && (*((_DWORD *)&acatomSysDepends + v1))-- == 1 )
  {
    if ( *((_DWORD *)&acatomSysUse + v1) )
    {
      ++gcSysExpunge;
      gdwSysExpungeMask |= 1 << v1;
    }
    else
    {
      if ( (unsigned __int64)(2 * v1) >= 0x40 )
        _report_rangecheckfailure();
      *((_WORD *)&aatomSysLoaded + v1) = 0;
    }
  }
  tagObjLock::UnLock(v3);
}
