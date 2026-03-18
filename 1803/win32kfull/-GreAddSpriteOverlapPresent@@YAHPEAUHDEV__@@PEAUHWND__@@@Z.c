/*
 * XREFs of ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C024B5CC
 * Callers:
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C02422E8 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F30 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0035F64 (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00FE214 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C02502F4 (-pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C0254E64 (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

__int64 __fastcall GreAddSpriteOverlapPresent(_DWORD *a1, HWND a2)
{
  unsigned int v2; // esi
  HDEV v3; // rbp
  BOOL v6; // edi
  unsigned int v7; // r12d
  HWND v8; // rdx
  HDEV v9; // rcx
  struct _PRESENT *Present; // r14
  unsigned int i; // r12d
  struct _PRESENT *v12; // rax
  HDEV v13; // rcx
  __int64 v14; // rdx
  SPRITERANGELOCK *v15; // rbx
  HWND v16; // rdx
  HDEV v17; // rcx
  unsigned int v18; // r12d
  __int64 v19; // rdi
  SPRITERANGELOCK *v21; // [rsp+60h] [rbp+8h]
  SPRITERANGELOCK *v22; // [rsp+60h] [rbp+8h]

  v2 = 0;
  v3 = (HDEV)(a1 + 20);
  v6 = 0;
  if ( !a1[35] )
  {
    v15 = (SPRITERANGELOCK *)(a1 + 50);
    SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 50));
    Present = pSpGetPresent(a1, a2);
    if ( !Present )
    {
      Present = pSpCreatePresent(v17, v16);
      v6 = Present != 0LL;
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v3 + 30));
    goto LABEL_16;
  }
  v7 = 0;
  while ( 1 )
  {
    v21 = (SPRITERANGELOCK *)(*(_QWORD *)(*((_QWORD *)v3 + 8) + 8LL * v7) + 200LL);
    SPRITERANGELOCK::vLockExclusive(v21);
    Present = pSpGetPresent(*(_QWORD **)(*((_QWORD *)v3 + 8) + 8LL * v7), a2);
    if ( !Present )
      break;
LABEL_6:
    SPRITERANGELOCK::vUnlock(v21);
    if ( ++v7 >= *((_DWORD *)v3 + 15) )
      goto LABEL_12;
  }
  Present = pSpCreatePresent(v9, v8);
  if ( Present )
  {
    v6 = 1;
    goto LABEL_6;
  }
  SPRITERANGELOCK::vUnlock(v21);
  v6 = 0;
  for ( i = 0; i < *((_DWORD *)v3 + 15); ++i )
  {
    v22 = (SPRITERANGELOCK *)(*(_QWORD *)(*((_QWORD *)v3 + 8) + 8LL * i) + 200LL);
    SPRITERANGELOCK::vLockExclusive(v22);
    v12 = pSpGetPresent(*(_QWORD **)(*((_QWORD *)v3 + 8) + 8LL * i), a2);
    Present = v12;
    if ( v12 )
    {
      vSpRemovePresent(v13, v12);
      Win32FreePool(v14);
    }
    SPRITERANGELOCK::vUnlock(v22);
  }
LABEL_12:
  v15 = (SPRITERANGELOCK *)(v3 + 30);
LABEL_16:
  if ( v6 )
  {
    if ( *((_DWORD *)v3 + 15) )
    {
      v18 = 0;
      do
      {
        v19 = *(_QWORD *)(*((_QWORD *)v3 + 8) + 8LL * v18);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v19 + 200));
        vSpComputeNoPresentRegion((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v3 + 8) + 8LL * v18) + 80LL), 0);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v19 + 200));
        ++v18;
      }
      while ( v18 < *((_DWORD *)v3 + 15) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive(v15);
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)v3, 0);
      SPRITERANGELOCK::vUnlock(v15);
    }
  }
  LOBYTE(v2) = Present != 0LL;
  return v2;
}
