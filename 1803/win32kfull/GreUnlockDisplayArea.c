/*
 * XREFs of GreUnlockDisplayArea @ 0x1C0256700
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreUnlockDisplayArea(__int64 a1, struct tagRECT *a2)
{
  __int64 v3; // r8
  BOOL v4; // esi
  __int64 v5; // r14
  struct tagRECT v6; // xmm6
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // edx
  void (__fastcall *v10)(_QWORD, struct _RECTL *); // rax
  void (__fastcall *v11)(_QWORD, __int64); // rax
  struct tagRECT v12; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v13; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v14; // [rsp+40h] [rbp-30h] BYREF

  v13 = *a2;
  ERECTL::vOrder((ERECTL *)&v13);
  if ( !IsRectEmptyInl(&v13) )
  {
    if ( *(_DWORD *)(a1 + 140) )
    {
      v4 = GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) != 0;
      v5 = 0LL;
      if ( *(_DWORD *)(a1 + 140) )
      {
        v6 = v13;
        do
        {
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v5);
          v12 = v6;
          v8 = *(_DWORD *)(v7 + 2576);
          v9 = *(_DWORD *)(v7 + 2580);
          v12.right = v6.right - v8;
          v12.top = v6.top - v9;
          v12.bottom = v6.bottom - v9;
          v12.left = v13.left - v8;
          if ( bIntersect((const struct _RECTL *)&v12, (const struct _RECTL *)(v7 + 120), &v14) )
          {
            v10 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v7 + 3496);
            if ( v10 )
              v10(*(_QWORD *)(v7 + 1792), &v14);
            if ( v4 )
              SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v7 + 200));
          }
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *(_DWORD *)(a1 + 140) );
      }
      if ( v4 )
        goto LABEL_17;
    }
    else
    {
      v11 = *(void (__fastcall **)(_QWORD, __int64))(a1 + 3496);
      if ( v11 )
        v11(*(_QWORD *)(a1 + 1792), v3);
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) )
      {
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(a1 + 200));
LABEL_17:
        EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
        GreReleaseSemaphoreInternal(ghsemSprite);
      }
    }
  }
}
