/*
 * XREFs of UntrapAppContainerRenderingWrap @ 0x1C008FE80
 * Callers:
 *     <none>
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDereferenceObject @ 0x1C00C5650 (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C611C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C615C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall UntrapAppContainerRenderingWrap(HDC *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  HDC v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  HSURF *v13; // rdi
  __int64 v14; // rax
  DC *v15; // rbp
  __int64 v16; // rbx
  HSURF v17; // rsi
  DC *v18; // rcx
  char v19; // bl
  __int64 v20; // rax
  DCVISRGNSHARELOCK *v21; // rcx
  __int64 v22; // rax
  char v23; // [rsp+20h] [rbp-48h]
  char v24; // [rsp+20h] [rbp-48h]
  DC *v25[2]; // [rsp+30h] [rbp-38h] BYREF
  char v26; // [rsp+78h] [rbp+10h] BYREF

  result = 0LL;
  if ( *a2 )
  {
    v9 = *a1;
    v25[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v25, v9);
    LOBYTE(v10) = 5;
    v11 = HmgShareLock(*a3, v10);
    LOBYTE(v12) = 5;
    v13 = (HSURF *)v11;
    v14 = HmgShareLock(*a2, v12);
    v15 = v25[0];
    v16 = v14;
    v17 = *v13;
    v18 = v25[0];
    *((_QWORD *)v25[0] + 63) = v14;
    DC::vInheritSurfaceDpiScale(v18);
    DEC_SHARE_REF_CNT(v13);
    DEC_SHARE_REF_CNT(v16);
    GreDereferenceObject(v17);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
      *((_DWORD *)v15 + 9) |= *a4;
    if ( (*((_DWORD *)v15 + 9) & 0x200) != 0 )
    {
      v19 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v19 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v26);
      v23 = 5;
      v20 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v23);
      if ( v20 )
        SURFACE::bDeleteSurface(v20, 0LL, 1LL);
      *((_QWORD *)v15 + 64) = 0LL;
      DC::vClearRendering(v15);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v21);
      if ( v19 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v24 = 5;
      v22 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v24);
      if ( v22 )
        SURFACE::bDeleteSurface(v22, 0LL, 1LL);
      *((_QWORD *)v15 + 64) = 0LL;
      *a2 = 0LL;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v25);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    return GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return result;
}
