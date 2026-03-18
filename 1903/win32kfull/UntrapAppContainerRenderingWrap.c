/*
 * XREFs of UntrapAppContainerRenderingWrap @ 0x1C0102750
 * Callers:
 *     <none>
 * Callees:
 *     GreDereferenceObject @ 0x1C00455D4 (GreDereferenceObject.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006369C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00636E0 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0064660 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C010FD5C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall UntrapAppContainerRenderingWrap(HDC *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  HDC v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  HSURF *v13; // rdi
  struct SURFACE *v14; // rax
  HSURF v15; // rsi
  struct SURFACE *v16; // rbx
  char v17; // bl
  __int64 v18; // rax
  DCVISRGNSHARELOCK *v19; // rcx
  __int64 v20; // rax
  char v21; // [rsp+20h] [rbp-20h]
  char v22; // [rsp+20h] [rbp-20h]
  DC *v23[2]; // [rsp+30h] [rbp-10h] BYREF
  char v24; // [rsp+78h] [rbp+38h] BYREF

  result = 0LL;
  if ( *a2 )
  {
    v9 = *a1;
    v23[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v23, v9);
    LOBYTE(v10) = 5;
    v11 = HmgShareLock(*a3, v10);
    LOBYTE(v12) = 5;
    v13 = (HSURF *)v11;
    v14 = (struct SURFACE *)HmgShareLock(*a2, v12);
    v15 = *v13;
    v16 = v14;
    DC::pSurface(v23[0], v14);
    DEC_SHARE_REF_CNT(v13);
    DEC_SHARE_REF_CNT(v16);
    GreDereferenceObject(v15, 1u);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
      *((_DWORD *)v23[0] + 9) |= *a4;
    if ( (*((_DWORD *)v23[0] + 9) & 0x200) != 0 )
    {
      v17 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v17 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v24);
      v21 = 5;
      v18 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v21);
      if ( v18 )
        SURFACE::bDeleteSurface(v18, 0LL, 1LL);
      *((_QWORD *)v23[0] + 63) = 0LL;
      DC::vClearRendering(v23[0]);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v19);
      if ( v17 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v22 = 5;
      v20 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v22);
      if ( v20 )
        SURFACE::bDeleteSurface(v20, 0LL, 1LL);
      *((_QWORD *)v23[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    if ( v23[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v23);
    v23[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    return GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return result;
}
