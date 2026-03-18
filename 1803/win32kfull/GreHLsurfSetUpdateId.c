/*
 * XREFs of GreHLsurfSetUpdateId @ 0x1C023CA80
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C00C57C0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00C7A78 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall GreHLsurfSetUpdateId(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rax
  SFMLOGICALSURFACE *v8; // rbx
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  v5 = -1071775733;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsCurrentProcessDwm() )
    {
      v5 = -1073741811;
      if ( a2 )
      {
        LOBYTE(v6) = 18;
        v7 = HmgShareLockCheck(a2, v6);
        v8 = (SFMLOGICALSURFACE *)v7;
        if ( v7 )
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v11, (struct _EX_PUSH_LOCK *)(v7 + 256));
          if ( *((_QWORD *)v8 + 23) && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v8) )
          {
            *((_QWORD *)v8 + 35) = a3;
            v5 = 0;
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
          DEC_SHARE_REF_CNT(v8);
        }
      }
    }
    else
    {
      v5 = -1073741790;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  }
  return v5;
}
