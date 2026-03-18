/*
 * XREFs of ?vSpPIDLockSpriteArea@@YA?AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C015A9A8
 * Callers:
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C015A944 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C015AB0C (-pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C015AB70 (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall vSpPIDLockSpriteArea(__int64 a1, struct _RECTL *a2, void *a3)
{
  SPRITERANGELOCK *v3; // r14
  unsigned int v7; // edi
  struct SPRITE *i; // rcx
  struct SPRITE *v9; // rax
  struct SPRITE *v10; // rbx
  __int64 v11; // rax
  SURFACE *v13; // rax
  struct SPRITE *v14; // rax

  v3 = (SPRITERANGELOCK *)(a1 + 120);
  v7 = 0;
  GreAcquireSemaphoreSharedInternal(*(_QWORD *)(a1 + 120));
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)v3);
  for ( i = *(struct SPRITE **)(a1 + 8); ; i = (struct SPRITE *)*((_QWORD *)v10 + 3) )
  {
    v9 = pSpFindInZForPidLock(i, a2);
    v10 = v9;
    if ( !v9 )
      break;
    v11 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v9 + 16));
    v7 = SURFACE::Map(v11, a3, 0LL);
    if ( v7 == 2 )
    {
      while ( 1 )
      {
        v14 = pSpReverseFindInZForPidLock(*((struct SPRITE **)v10 + 4), a2);
        v10 = v14;
        if ( !v14 )
          break;
        v13 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v14 + 16));
        SURFACE::bUnMap(v13, a3, 0LL);
      }
      SPRITERANGELOCK::vUnlock(v3);
      return v7;
    }
  }
  return v7;
}
