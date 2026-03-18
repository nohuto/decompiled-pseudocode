/*
 * XREFs of ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027B950
 * Callers:
 *     EngpMovePointer @ 0x1C0160ED8 (EngpMovePointer.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027BF68 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C003E5EC (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003E76C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0043FD4 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0097650 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0162510 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C027F4AC (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0282378 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall GdiMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, int a5)
{
  HDEV hdev; // rax
  HDEV v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 i; // rax
  struct SPRITE *v20; // r8
  int v21; // edi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  LONG v28; // r12d
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  HDEV v33; // [rsp+20h] [rbp-E0h] BYREF
  struct _POINTL v34; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v37[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v38[24]; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v39[24]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v40[3]; // [rsp+280h] [rbp+180h] BYREF
  struct _RECTL v41; // [rsp+298h] [rbp+198h] BYREF

  hdev = a1->hdev;
  v34 = 0LL;
  v33 = hdev;
  v9 = hdev + 22;
  v10 = *((_QWORD *)hdev + 150);
  if ( v10 )
  {
    if ( *((_QWORD *)v9 + 140) != v10 )
    {
      v35 = ghsemSprite;
      GreAcquireSemaphore(ghsemSprite);
      v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v13 - *((_DWORD *)v9 + 272)) >= *((_DWORD *)v9 + 273) )
      {
        SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v37, (struct PDEVOBJ *)&v33, v11, v12);
        v16 = *((_QWORD *)v9 + 140);
        v17 = *((_QWORD *)v9 + 139);
        v18 = v16;
        for ( i = *(_QWORD *)(v16 + 24); i != v17; i = *(_QWORD *)(i + 24) )
          v18 = i;
        if ( *(_DWORD *)(v18 + 80) == *(_DWORD *)(v17 + 80) && *(_DWORD *)(v18 + 84) == *(_DWORD *)(v17 + 84) )
        {
          while ( v16 != v17 )
          {
            if ( (*(_DWORD *)v16 & 0x20) != 0 )
            {
              bSpUpdatePosition((struct SPRITE *)v16, 0LL, 0, 0);
              break;
            }
            v16 = *(_QWORD *)(v16 + 24);
          }
        }
        else
        {
          bSpUpdatePosition(*((struct SPRITE **)v9 + 140), 0LL, 0, 0);
          v20 = (struct SPRITE *)*((_QWORD *)v9 + 139);
          *((_QWORD *)v9 + 140) = *(_QWORD *)(v16 + 24);
          vSpZorderSprite(a1->hdev, (struct SPRITE *)v16, v20);
          *((_QWORD *)v9 + 139) = v16;
        }
        *((_DWORD *)v9 + 272) = v13;
        SPRITEDDIACCESS::~SPRITEDDIACCESS(v37, v18, v14, v15);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v35);
    }
    v21 = a5;
    if ( !a5 )
      v21 = GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) != 0;
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v33) )
    {
      GreAcquireSemaphoreSharedStarveExclusiveInternal(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"ghsemSprite", ghsemSprite);
    }
    else
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    }
    if ( !v21 )
      GreIncNonRBLockCount(ghsemSprite);
    memset(v40, 0, sizeof(v40));
    if ( a2 == -1 )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v38, (struct PDEVOBJ *)&v33, v22, v23);
      v27 = *((_QWORD *)v9 + 140);
      v34.x = 0x7FFFFFFF;
      v34.y = 0x7FFFFFFF;
      while ( v27 )
      {
        if ( !v21 )
        {
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v9 + 30));
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v40, (struct _SPRITESTATE *)v9, (struct _RECTL *)(v27 + 80));
          SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v27 + 248));
          *((_QWORD *)v9 + 167) = v27;
        }
        if ( !v40[0] && !v21 || (bSpUpdatePosition((struct SPRITE *)v27, &v34, 0, 0), !v21) )
        {
          *((_QWORD *)v9 + 167) = 0LL;
          SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v27 + 248));
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v40);
          SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v9 + 30));
        }
        v27 = *(_QWORD *)(v27 + 24);
      }
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v38, v24, v25, v26);
    }
    else
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v39, (struct PDEVOBJ *)&v33, v22, v23);
      v28 = a3 - *((_DWORD *)v9 + 269);
      v29 = *((_QWORD *)v9 + 139);
      v34.x = a2 - *((_DWORD *)v9 + 268);
      v34.y = v28;
      if ( !v21 )
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v9 + 30));
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v40, (struct _SPRITESTATE *)v9, (struct _RECTL *)(v29 + 80));
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v29 + 248));
        *((_QWORD *)v9 + 167) = v29;
      }
      bSpUpdatePosition((struct SPRITE *)v29, &v34, 0, 0);
      if ( !v21 )
      {
        *((_QWORD *)v9 + 167) = 0LL;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v29 + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v40);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v9 + 30));
      }
      v41 = *(struct _RECTL *)(v29 + 80);
      if ( !v21 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v40, (struct _SPRITESTATE *)v9, &v41);
      if ( !v40[0] && !v21 || (vSpRedrawSprite((struct SPRITE *)v29), !v21) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v40);
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v39, v30, v31, v32);
    }
    if ( !v21 )
      GreDecNonRBLockCount(ghsemSprite);
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
    if ( (*((_DWORD *)v33 + 532) & 0x80u) != 0 )
    {
      NEEDDDILOCK::vLock(
        (NEEDDDILOCK *)&v36,
        (struct _SURFOBJ *)((*((_QWORD *)v33 + 319) + 24LL) & -(__int64)(*((_QWORD *)v33 + 319) != 0LL)));
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v33,
        (struct _SURFOBJ *)((*((_QWORD *)v33 + 319) + 24LL) & -(__int64)(*((_QWORD *)v33 + 319) != 0LL)),
        0LL,
        1u);
      if ( v36 )
        GreUnlockDisplayDevice(*(_QWORD *)(v36 + 48));
    }
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v40);
  }
}
