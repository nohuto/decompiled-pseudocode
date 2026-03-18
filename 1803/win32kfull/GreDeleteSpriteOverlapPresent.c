/*
 * XREFs of GreDeleteSpriteOverlapPresent @ 0x1C0035E6C
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C02422E8 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F30 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0035F64 (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00FE214 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C0254E64 (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

void __fastcall GreDeleteSpriteOverlapPresent(HDEV a1, HWND a2)
{
  unsigned int v2; // esi
  HDEV v3; // rbp
  int v6; // r14d
  SPRITERANGELOCK *v7; // rbx
  struct _PRESENT *v8; // rdx
  HDEV v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r12
  struct _PRESENT *Present; // rdx
  HDEV v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdi

  v2 = 0;
  v3 = a1 + 20;
  v6 = 0;
  if ( *((_DWORD *)a1 + 35) )
  {
    v10 = 0;
    do
    {
      v11 = *(_QWORD *)(*((_QWORD *)v3 + 8) + 8LL * v10);
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v11 + 200));
      Present = pSpGetPresent(*(HDEV *)(*((_QWORD *)v3 + 8) + 8LL * v10), a2);
      if ( Present )
      {
        vSpRemovePresent(v13, Present);
        Win32FreePool(v14);
        v6 = 1;
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v11 + 200));
      ++v10;
    }
    while ( v10 < *((_DWORD *)v3 + 15) );
    v7 = (SPRITERANGELOCK *)(v3 + 30);
  }
  else
  {
    v7 = (SPRITERANGELOCK *)(a1 + 50);
    SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 50));
    v8 = pSpGetPresent(a1, a2);
    if ( v8 )
    {
      vSpRemovePresent(v9, v8);
      Win32FreePool(v15);
      v6 = 1;
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v3 + 30));
  }
  if ( v6 )
  {
    if ( *((_DWORD *)v3 + 15) )
    {
      do
      {
        v16 = *(_QWORD *)(*((_QWORD *)v3 + 8) + 8LL * v2);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v16 + 200));
        vSpComputeNoPresentRegion((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v3 + 8) + 8LL * v2) + 80LL), 0);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v16 + 200));
        ++v2;
      }
      while ( v2 < *((_DWORD *)v3 + 15) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive(v7);
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)v3, 0);
      SPRITERANGELOCK::vUnlock(v7);
    }
  }
}
