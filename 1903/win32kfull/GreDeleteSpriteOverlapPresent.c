/*
 * XREFs of GreDeleteSpriteOverlapPresent @ 0x1C0097580
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0273804 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C003E860 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0097630 (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0097650 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C0281420 (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

void __fastcall GreDeleteSpriteOverlapPresent(HDEV a1, HWND a2)
{
  unsigned int v2; // esi
  int v5; // r14d
  SPRITERANGELOCK *v6; // rbx
  struct _PRESENT *v7; // rdx
  HDEV v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // r12
  struct _PRESENT *Present; // rdx
  HDEV v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdi

  v2 = 0;
  v5 = 0;
  if ( *((_DWORD *)a1 + 37) )
  {
    v9 = 0;
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)a1 + 19) + 8LL * v9);
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v10 + 208));
      Present = pSpGetPresent(*(HDEV *)(*((_QWORD *)a1 + 19) + 8LL * v9), a2);
      if ( Present )
      {
        vSpRemovePresent(v12, Present);
        Win32FreePool(v13);
        v5 = 1;
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v10 + 208));
      ++v9;
    }
    while ( v9 < *((_DWORD *)a1 + 37) );
    v6 = (SPRITERANGELOCK *)(a1 + 52);
  }
  else
  {
    v6 = (SPRITERANGELOCK *)(a1 + 52);
    SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 52));
    v7 = pSpGetPresent(a1, a2);
    if ( v7 )
    {
      vSpRemovePresent(v8, v7);
      Win32FreePool(v14);
      v5 = 1;
    }
    EtwTraceGreLockReleaseSemaphore(L"hsem", *(_QWORD *)v6);
    GreReleaseSemaphoreInternal(*(_QWORD *)v6);
  }
  if ( v5 )
  {
    if ( *((_DWORD *)a1 + 37) )
    {
      do
      {
        v15 = *(_QWORD *)(*((_QWORD *)a1 + 19) + 8LL * v2);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v15 + 208));
        vSpComputeNoPresentRegion((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)a1 + 19) + 8LL * v2) + 88LL), 0);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v15 + 208));
        ++v2;
      }
      while ( v2 < *((_DWORD *)a1 + 37) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive(v6);
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)(a1 + 22), 0);
      SPRITERANGELOCK::vUnlock(v6);
    }
  }
}
