/*
 * XREFs of ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027B290
 * Callers:
 *     EngpMovePointer @ 0x1C0161EA8 (EngpMovePointer.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027B8A8 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0038380 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0081BE4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C00826AC (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C008282C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0087E34 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0087FD8 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C01634E0 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C027EDEC (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0281CB8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall GdiMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, int a5)
{
  HDEV hdev; // rax
  HDEV v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 i; // rax
  struct SPRITE *v18; // r8
  int v19; // edi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rsi
  LONG v24; // r12d
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  HDEV v28; // [rsp+20h] [rbp-E0h] BYREF
  struct _POINTL v29; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v32[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v33[24]; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v34[24]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v35[3]; // [rsp+280h] [rbp+180h] BYREF
  struct _RECTL v36; // [rsp+298h] [rbp+198h] BYREF

  hdev = a1->hdev;
  v29 = 0LL;
  v28 = hdev;
  v9 = hdev + 22;
  v10 = *((_QWORD *)hdev + 150);
  if ( v10 )
  {
    if ( *((_QWORD *)v9 + 140) != v10 )
    {
      v30 = ghsemSprite;
      GreAcquireSemaphore(ghsemSprite);
      v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v12 - *((_DWORD *)v9 + 272)) >= *((_DWORD *)v9 + 273) )
      {
        SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v32, (struct PDEVOBJ *)&v28, v11);
        v14 = *((_QWORD *)v9 + 140);
        v15 = *((_QWORD *)v9 + 139);
        v16 = v14;
        for ( i = *(_QWORD *)(v14 + 24); i != v15; i = *(_QWORD *)(i + 24) )
          v16 = i;
        if ( *(_DWORD *)(v16 + 80) == *(_DWORD *)(v15 + 80) && *(_DWORD *)(v16 + 84) == *(_DWORD *)(v15 + 84) )
        {
          while ( v14 != v15 )
          {
            if ( (*(_DWORD *)v14 & 0x20) != 0 )
            {
              bSpUpdatePosition((struct SPRITE *)v14, 0LL, 0, 0);
              break;
            }
            v14 = *(_QWORD *)(v14 + 24);
          }
        }
        else
        {
          bSpUpdatePosition(*((struct SPRITE **)v9 + 140), 0LL, 0, 0);
          v18 = (struct SPRITE *)*((_QWORD *)v9 + 139);
          *((_QWORD *)v9 + 140) = *(_QWORD *)(v14 + 24);
          vSpZorderSprite(a1->hdev, (struct SPRITE *)v14, v18);
          *((_QWORD *)v9 + 139) = v14;
        }
        *((_DWORD *)v9 + 272) = v12;
        SPRITEDDIACCESS::~SPRITEDDIACCESS(v32, v16, v13);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v30);
    }
    v19 = a5;
    if ( !a5 )
      v19 = GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) != 0;
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v28) )
    {
      GreAcquireSemaphoreSharedStarveExclusiveInternal(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"ghsemSprite", ghsemSprite);
    }
    else
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    }
    if ( !v19 )
      GreIncNonRBLockCount(ghsemSprite);
    memset(v35, 0, sizeof(v35));
    if ( a2 == -1 )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v33, (struct PDEVOBJ *)&v28, v20);
      v23 = *((_QWORD *)v9 + 140);
      v29.x = 0x7FFFFFFF;
      v29.y = 0x7FFFFFFF;
      while ( v23 )
      {
        if ( !v19 )
        {
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v9 + 30));
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v35, (struct _SPRITESTATE *)v9, (struct _RECTL *)(v23 + 80));
          SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v23 + 248));
          *((_QWORD *)v9 + 167) = v23;
        }
        if ( !v35[0] && !v19 || (bSpUpdatePosition((struct SPRITE *)v23, &v29, 0, 0), !v19) )
        {
          *((_QWORD *)v9 + 167) = 0LL;
          SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v23 + 248));
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v35);
          SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v9 + 30));
        }
        v23 = *(_QWORD *)(v23 + 24);
      }
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v33, v21, v22);
    }
    else
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v34, (struct PDEVOBJ *)&v28, v20);
      v24 = a3 - *((_DWORD *)v9 + 269);
      v25 = *((_QWORD *)v9 + 139);
      v29.x = a2 - *((_DWORD *)v9 + 268);
      v29.y = v24;
      if ( !v19 )
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v9 + 30));
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v35, (struct _SPRITESTATE *)v9, (struct _RECTL *)(v25 + 80));
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v25 + 248));
        *((_QWORD *)v9 + 167) = v25;
      }
      bSpUpdatePosition((struct SPRITE *)v25, &v29, 0, 0);
      if ( !v19 )
      {
        *((_QWORD *)v9 + 167) = 0LL;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v25 + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v35);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v9 + 30));
      }
      v36 = *(struct _RECTL *)(v25 + 80);
      if ( !v19 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v35, (struct _SPRITESTATE *)v9, &v36);
      if ( !v35[0] && !v19 || (vSpRedrawSprite((struct SPRITE *)v25), !v19) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v35);
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v34, v26, v27);
    }
    if ( !v19 )
      GreDecNonRBLockCount(ghsemSprite);
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
    if ( (*((_DWORD *)v28 + 532) & 0x80u) != 0 )
    {
      NEEDDDILOCK::vLock(
        (NEEDDDILOCK *)&v31,
        (struct _SURFOBJ *)((*((_QWORD *)v28 + 319) + 24LL) & -(__int64)(*((_QWORD *)v28 + 319) != 0LL)));
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v28,
        (struct _SURFOBJ *)((*((_QWORD *)v28 + 319) + 24LL) & -(__int64)(*((_QWORD *)v28 + 319) != 0LL)),
        0LL,
        1u);
      if ( v31 )
        GreUnlockDisplayDevice(*(_QWORD *)(v31 + 48));
    }
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v35);
  }
}
