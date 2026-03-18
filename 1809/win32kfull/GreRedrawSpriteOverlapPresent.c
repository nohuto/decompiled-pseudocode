/*
 * XREFs of GreRedrawSpriteOverlapPresent @ 0x1C0045CF4
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0045DE4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C00A1B64 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 */

__int64 __fastcall GreRedrawSpriteOverlapPresent(__int64 a1)
{
  __int64 v2; // rsi
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  GreIncNonRBLockCount(ghsemSprite);
  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 148) )
  {
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v2);
      v4 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v5);
      SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v6, ghsemSprite, v4);
      vSpRedrawSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)(a1 + 152) + 8 * v2));
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v6);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(a1 + 148) );
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 88);
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v5) == 1 )
    {
      GreAcquireSemaphoreSharedInternal(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemSprite);
    }
    else
    {
      GreAcquireSemaphore(ghsemSprite);
    }
    vSpRedrawSpriteOverlapPresent(*(HDEV *)(a1 + 88));
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  return GreDecNonRBLockCount(ghsemSprite);
}
