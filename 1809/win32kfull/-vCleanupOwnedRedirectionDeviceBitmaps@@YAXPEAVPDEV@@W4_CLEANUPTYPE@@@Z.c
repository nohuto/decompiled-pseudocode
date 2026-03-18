/*
 * XREFs of ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C0104144
 * Callers:
 *     vCleanupOwnedRedirectionDeviceBitmapsWrap @ 0x1C0104130 (vCleanupOwnedRedirectionDeviceBitmapsWrap.c)
 * Callees:
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0055198 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0086E20 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C015FC34 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
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
  HSURF i; // rcx
  HSURF v12; // rbx
  __int64 Objt; // rax
  __int64 v14; // rcx
  _BYTE v15[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]
  char v17; // [rsp+60h] [rbp+8h] BYREF

  IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange);
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
    (NEEDDYNAMICMODECHANGESHARELOCK *)&v17,
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
    v12 = *(HSURF *)Objt;
    if ( *(_QWORD *)(Objt + 48) == a1 && (*(_DWORD *)(Objt + 116) & 1) != 0 && !*(_DWORD *)(Objt + 8) )
    {
      GreMarkDeletableBitmap(*(_QWORD *)Objt);
      SURFREF::SURFREF((SURFREF *)v15, v12);
      SURFREF::bDeleteSurface(v15, a2, 0LL);
      if ( v16 )
        DEC_SHARE_REF_CNT(v16);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v15);
    }
  }
  GreReleaseHmgrSemaphore(v14, v10);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v17);
}
