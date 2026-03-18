/*
 * XREFs of ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C00B1B30
 * Callers:
 *     vCleanupOwnedRedirectionDeviceBitmapsWrap @ 0x1C00B1C20 (vCleanupOwnedRedirectionDeviceBitmapsWrap.c)
 * Callees:
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00B18E4 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00B192C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

void __fastcall vCleanupOwnedRedirectionDeviceBitmaps(__int64 a1, unsigned int a2)
{
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 i; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 Objt; // rax
  char v16; // [rsp+40h] [rbp+8h] BYREF

  IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange);
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
    (NEEDDYNAMICMODECHANGESHARELOCK *)&v16,
    IsSemaphoreOwnedOrSharedByCurrentThread == 0);
  LOBYTE(v5) = 5;
  HmgPrefetchAllObjt(v5, SURFACE::tSize + 256);
  GreAcquireHmgrSemaphore(v7, v6, v8, v9);
  for ( i = 0LL; ; i = v12 )
  {
    LOBYTE(v10) = 5;
    Objt = HmgSafeNextObjt(i, v10);
    if ( !Objt )
      break;
    v12 = *(_QWORD *)Objt;
    if ( *(_QWORD *)(Objt + 48) == a1 && (*(_DWORD *)(Objt + 116) & 1) != 0 && !*(_DWORD *)(Objt + 8) )
    {
      GreMarkDeletableBitmap(*(_QWORD *)Objt);
      LOBYTE(v13) = 5;
      v14 = HmgShareLockCheck(v12, v13);
      if ( (unsigned int)SURFACE::bDeleteSurface(v14, a2, 0LL) )
        v14 = 0LL;
      if ( v14 )
        DEC_SHARE_REF_CNT(v14);
    }
  }
  GreReleaseHmgrSemaphore();
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v16);
}
