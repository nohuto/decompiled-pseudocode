/*
 * XREFs of ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C024A74C
 * Callers:
 *     EngpMovePointer @ 0x1C023BFEC (EngpMovePointer.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C024AD60 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F30 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C007A2B4 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0138EB8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0197068 (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02510A4 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0255FD4 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0256250 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

void __fastcall GdiMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, int a5)
{
  HDEV v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 i; // rax
  struct SPRITE *v15; // r8
  int v16; // edi
  __int64 v17; // r14
  SPRITERANGELOCK *v18; // rsi
  SPRITERANGELOCK *v19; // r12
  SPRITERANGELOCK *v20; // rax
  struct _SPRITESTATE **v21; // rcx
  LONG v22; // r12d
  __int64 v23; // rsi
  HDEV v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  HDEV hdev; // [rsp+20h] [rbp-E0h] BYREF
  struct _POINTL v31; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  struct _SPRITESTATE *v33[24]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v34[192]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v35[192]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v36[3]; // [rsp+280h] [rbp+180h] BYREF
  struct _RECTL v37; // [rsp+298h] [rbp+198h] BYREF

  hdev = a1->hdev;
  v8 = hdev + 20;
  v9 = *((_QWORD *)hdev + 149);
  if ( v9 )
  {
    if ( *((_QWORD *)hdev + 150) != v9 )
    {
      v32 = ghsemSprite;
      GreAcquireSemaphore(ghsemSprite);
      v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v10 - *((_DWORD *)hdev + 292)) >= *((_DWORD *)hdev + 293) )
      {
        SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v33, (struct PDEVOBJ *)&hdev);
        v11 = *((_QWORD *)v8 + 140);
        v12 = *((_QWORD *)v8 + 139);
        v13 = v11;
        for ( i = *(_QWORD *)(v11 + 24); i != v12; i = *(_QWORD *)(i + 24) )
          v13 = i;
        if ( *(_DWORD *)(v13 + 80) == *(_DWORD *)(v12 + 80) && *(_DWORD *)(v13 + 84) == *(_DWORD *)(v12 + 84) )
        {
          while ( v11 != v12 )
          {
            if ( (*(_DWORD *)v11 & 0x20) != 0 )
            {
              bSpUpdatePosition((struct SPRITE *)v11, 0LL, 0, 0);
              break;
            }
            v11 = *(_QWORD *)(v11 + 24);
          }
        }
        else
        {
          bSpUpdatePosition(*((struct SPRITE **)v8 + 140), 0LL, 0, 0);
          v15 = (struct SPRITE *)*((_QWORD *)v8 + 139);
          *((_QWORD *)v8 + 140) = *(_QWORD *)(v11 + 24);
          vSpZorderSprite(a1->hdev, (struct SPRITE *)v11, v15);
          *((_QWORD *)v8 + 139) = v11;
        }
        *((_DWORD *)v8 + 272) = v10;
        SPRITEDDIACCESS::~SPRITEDDIACCESS(v33);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v32);
    }
    v16 = a5;
    if ( !a5 )
      v16 = GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) != 0;
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev) )
    {
      GreAcquireSemaphoreSharedStarveExclusiveInternal(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"ghsemSprite", ghsemSprite);
    }
    else
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    }
    if ( !v16 )
      GreIncNonRBLockCount(ghsemSprite);
    memset(v36, 0, sizeof(v36));
    if ( a2 == -1 )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v34, (struct PDEVOBJ *)&hdev);
      v17 = *((_QWORD *)v8 + 140);
      v31.x = 0x7FFFFFFF;
      v31.y = 0x7FFFFFFF;
      if ( v17 )
      {
        v18 = (SPRITERANGELOCK *)(v8 + 30);
        do
        {
          v19 = v18;
          v20 = v18;
          if ( !v16 )
          {
            v18 = (SPRITERANGELOCK *)(v8 + 30);
            SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 30));
            PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v36, (struct _SPRITESTATE *)v8, (struct _RECTL *)(v17 + 80));
            SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v17 + 248));
            v20 = (SPRITERANGELOCK *)(v8 + 30);
            *((_QWORD *)v8 + 167) = v17;
            v19 = (SPRITERANGELOCK *)(v8 + 30);
          }
          if ( (v36[0] || (v19 = v20, v16)) && (bSpUpdatePosition((struct SPRITE *)v17, &v31, 0, 0), v18 = v19, v16) )
          {
            v18 = (SPRITERANGELOCK *)(v8 + 30);
          }
          else
          {
            *((_QWORD *)v8 + 167) = 0LL;
            SINGLEREADERLOCK::vUnlock((struct _KMUTANT **)(v17 + 248));
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v36);
            SPRITERANGELOCK::vUnlock(v18);
          }
          v17 = *(_QWORD *)(v17 + 24);
        }
        while ( v17 );
      }
      v21 = (struct _SPRITESTATE **)v34;
    }
    else
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v35, (struct PDEVOBJ *)&hdev);
      v22 = a3 - *((_DWORD *)v8 + 269);
      v23 = *((_QWORD *)v8 + 139);
      v31.x = a2 - *((_DWORD *)v8 + 268);
      v31.y = v22;
      if ( !v16 )
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 30));
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v36, (struct _SPRITESTATE *)v8, (struct _RECTL *)(v23 + 80));
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v23 + 248));
        *((_QWORD *)v8 + 167) = v23;
      }
      bSpUpdatePosition((struct SPRITE *)v23, &v31, 0, 0);
      if ( !v16 )
      {
        *((_QWORD *)v8 + 167) = 0LL;
        SINGLEREADERLOCK::vUnlock((struct _KMUTANT **)(v23 + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v36);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 30));
      }
      v37 = *(struct _RECTL *)(v23 + 80);
      if ( !v16 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v36, (struct _SPRITESTATE *)v8, &v37);
      if ( !v36[0] && !v16 || (vSpRedrawSprite((struct SPRITE *)v23), !v16) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v36);
      v21 = (struct _SPRITESTATE **)v35;
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v21);
    if ( !v16 )
      GreDecNonRBLockCount(ghsemSprite);
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
    v24 = hdev;
    if ( (*((_DWORD *)hdev + 530) & 0x80u) != 0 )
    {
      v25 = *((_QWORD *)hdev + 318);
      v26 = 0LL;
      v27 = v25 + 24;
      v28 = -v25;
      v29 = v27 & -(__int64)(v28 != 0);
      if ( v29 )
      {
        if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27 & -(__int64)(v28 != 0)) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v29) + 112) & 0x200) == 0 )
        {
          v26 = SURFOBJ_TO_SURFACE_NOT_NULL(v29);
          GreLockDisplayDevice(*(_QWORD *)(v26 + 48));
        }
        v24 = hdev;
      }
      PDEVOBJ::vSync(
        (PDEVOBJ *)&hdev,
        (struct _SURFOBJ *)((*((_QWORD *)v24 + 318) + 24LL) & -(__int64)(*((_QWORD *)v24 + 318) != 0LL)),
        0LL,
        1u);
      if ( v26 )
        GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
    }
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v36);
  }
}
