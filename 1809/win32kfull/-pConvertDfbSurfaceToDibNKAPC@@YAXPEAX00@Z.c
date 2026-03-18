/*
 * XREFs of ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C01431B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0143340 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall pConvertDfbSurfaceToDibNKAPC(HSURF a1, void *a2, void *a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  _BYTE v8[32]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+88h] [rbp+28h] BYREF

  UserEnterUserCritSec(a1, a2, a3);
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v10);
  SURFREF::SURFREF((SURFREF *)v8, a1);
  v4 = v9;
  if ( v9 )
  {
    v5 = *(_DWORD *)(v9 + 116);
    if ( (v5 & 0x20) != 0 )
    {
      ++glpConvertDfbSurfaceToDibNKAPC;
      *(_DWORD *)(v9 + 116) = v5 & 0xFFFFFFDF;
      v4 = v9;
      if ( *(_WORD *)(v9 + 100) == 3 )
      {
        v11 = ghsemGreLock;
        GreAcquireSemaphore(ghsemGreLock);
        GreAcquireSemaphore(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
        v10 = ghsemSprite;
        GreAcquireSemaphore(ghsemSprite);
        v6 = v9;
        DEC_SHARE_REF_CNT(v9);
        v9 = 0LL;
        pProcessDfbSurfaces2(v6, 1LL, 1LL);
        SEMOBJ::vUnlock((SEMOBJ *)&v10);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        SEMOBJ::vUnlock((SEMOBJ *)&v11);
        v4 = v9;
      }
    }
    if ( v4 )
      DEC_SHARE_REF_CNT(v4);
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v8);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
  UserLeaveUserCritSec();
}
