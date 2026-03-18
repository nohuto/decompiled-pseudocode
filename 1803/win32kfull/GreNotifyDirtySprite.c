/*
 * XREFs of GreNotifyDirtySprite @ 0x1C00E85BC
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C00E8330 (RecreateRedirectionBitmap.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C00C56F4 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00E8BEC (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 */

struct DwmState *__fastcall GreNotifyDirtySprite(HWND a1)
{
  struct DwmState *result; // rax
  UINT_PTR v2; // rdi
  __int64 *v4; // rbx
  struct SFMLOGICALSURFACE *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  result = g_pDwmState;
  v2 = 0LL;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v7, a1);
    v4 = (__int64 *)v7;
    if ( v7 )
    {
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, (struct _EX_PUSH_LOCK *)(v7 + 88));
      v5 = (struct SFMLOGICALSURFACE *)v4[21];
      v6 = *((_QWORD *)v5 + 23);
      if ( v6 )
        v2 = *(_QWORD *)(v6 + 8);
      bSpDwmNotifyDirty(*v4, v5, 1, v2);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
      DEC_SHARE_REF_CNT(v4);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    return (struct DwmState *)GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return result;
}
