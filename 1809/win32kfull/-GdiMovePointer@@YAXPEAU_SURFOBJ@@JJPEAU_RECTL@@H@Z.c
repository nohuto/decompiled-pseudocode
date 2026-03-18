/*
 * XREFs of ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C02622D8
 * Callers:
 *     EngpMovePointer @ 0x1C025315C (EngpMovePointer.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02628EC (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00106E8 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001D634 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00958D4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0096990 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0096B08 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C015A944 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0266288 (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02691C0 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
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
  __int64 v17; // rdx
  __int64 v18; // rsi
  LONG v19; // r12d
  __int64 v20; // rsi
  __int64 v21; // rdx
  HDEV hdev; // [rsp+20h] [rbp-E0h] BYREF
  struct _POINTL v23; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v26[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v27[24]; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v28[24]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v29[3]; // [rsp+280h] [rbp+180h] BYREF
  struct _RECTL v30; // [rsp+298h] [rbp+198h] BYREF

  hdev = a1->hdev;
  v8 = hdev + 22;
  v9 = *((_QWORD *)hdev + 150);
  if ( v9 )
  {
    if ( *((_QWORD *)hdev + 151) != v9 )
    {
      v24 = ghsemSprite;
      GreAcquireSemaphore(ghsemSprite);
      v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v10 - *((_DWORD *)hdev + 294)) >= *((_DWORD *)hdev + 295) )
      {
        SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v26, (struct PDEVOBJ *)&hdev);
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
        SPRITEDDIACCESS::~SPRITEDDIACCESS(v26, v13);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v24);
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
    memset(v29, 0, sizeof(v29));
    if ( a2 == -1 )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v27, (struct PDEVOBJ *)&hdev);
      v18 = *((_QWORD *)v8 + 140);
      v23.x = 0x7FFFFFFF;
      v23.y = 0x7FFFFFFF;
      while ( v18 )
      {
        if ( !v16 )
        {
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 30));
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v29, (struct _SPRITESTATE *)v8, (struct _RECTL *)(v18 + 80));
          SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v18 + 248));
          *((_QWORD *)v8 + 167) = v18;
        }
        if ( !v29[0] && !v16 || (bSpUpdatePosition((struct SPRITE *)v18, &v23, 0, 0), !v16) )
        {
          *((_QWORD *)v8 + 167) = 0LL;
          SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v18 + 248));
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v29);
          SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 30));
        }
        v18 = *(_QWORD *)(v18 + 24);
      }
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v27, v17);
    }
    else
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v28, (struct PDEVOBJ *)&hdev);
      v19 = a3 - *((_DWORD *)v8 + 269);
      v20 = *((_QWORD *)v8 + 139);
      v23.x = a2 - *((_DWORD *)v8 + 268);
      v23.y = v19;
      if ( !v16 )
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 30));
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v29, (struct _SPRITESTATE *)v8, (struct _RECTL *)(v20 + 80));
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v20 + 248));
        *((_QWORD *)v8 + 167) = v20;
      }
      bSpUpdatePosition((struct SPRITE *)v20, &v23, 0, 0);
      if ( !v16 )
      {
        *((_QWORD *)v8 + 167) = 0LL;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v20 + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v29);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 30));
      }
      v30 = *(struct _RECTL *)(v20 + 80);
      if ( !v16 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v29, (struct _SPRITESTATE *)v8, &v30);
      if ( !v29[0] && !v16 || (vSpRedrawSprite((struct SPRITE *)v20), !v16) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v29);
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v28, v21);
    }
    if ( !v16 )
      GreDecNonRBLockCount(ghsemSprite);
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
    if ( (*((_DWORD *)hdev + 532) & 0x80u) != 0 )
    {
      NEEDDDILOCK::vLock(
        (NEEDDDILOCK *)&v25,
        (struct _SURFOBJ *)((*((_QWORD *)hdev + 319) + 24LL) & -(__int64)(*((_QWORD *)hdev + 319) != 0LL)));
      PDEVOBJ::vSync(
        (PDEVOBJ *)&hdev,
        (struct _SURFOBJ *)((*((_QWORD *)hdev + 319) + 24LL) & -(__int64)(*((_QWORD *)hdev + 319) != 0LL)),
        0LL,
        1u);
      if ( v25 )
        GreUnlockDisplayDevice(*(_QWORD *)(v25 + 48));
    }
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v29);
  }
}
