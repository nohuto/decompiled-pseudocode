/*
 * XREFs of GreHLsurfSetUpdateId @ 0x1C026D478
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C0045950 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0046E0C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall GreHLsurfSetUpdateId(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  SFMLOGICALSURFACE *v7; // rbx
  __int64 v8; // rax
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
      v7 = 0LL;
      v5 = -1073741811;
      if ( a2 )
      {
        LOBYTE(v6) = 18;
        v8 = HmgShareLockCheck(a2, v6);
        v7 = (SFMLOGICALSURFACE *)v8;
        if ( v8 )
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v11, (struct _EX_PUSH_LOCK *)(v8 + 256));
          if ( *((_QWORD *)v7 + 23) && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v7) )
          {
            *((_QWORD *)v7 + 35) = a3;
            v5 = 0;
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
        }
      }
      if ( v7 )
        DEC_SHARE_REF_CNT(v7);
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
