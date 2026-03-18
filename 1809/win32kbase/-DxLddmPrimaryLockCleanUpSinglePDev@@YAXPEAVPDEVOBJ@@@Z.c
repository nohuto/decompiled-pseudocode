/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C003EA08
 * Callers:
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C003EF4C (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     GreLockSprite @ 0x1C002D2F0 (GreLockSprite.c)
 *     GreLockDisplayDevice @ 0x1C003F4E0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C003F520 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1, int a2, __int64 a3)
{
  _QWORD **v4; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  int v11; // ecx

  GreLockVisRgn(*(_QWORD *)a1, a2, a3);
  GreLockSprite();
  GreLockDisplayDevice(*(_QWORD *)a1);
  v4 = (_QWORD **)(*(_QWORD *)a1 + 2624LL);
  v5 = *v4;
  while ( v5 != v4 )
  {
    v8 = (_QWORD *)*v5;
    v9 = (__int64)v5;
    v5 = v8;
    if ( v8[1] != v9 || (v10 = *(_QWORD **)(v9 + 8), *v10 != v9) )
      __fastfail(3u);
    *v10 = v8;
    v8[1] = v10;
    v11 = *(_DWORD *)(v9 + 20);
    if ( v11 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2640LL) -= v11;
      vSpUnTearDownSprites(*(_QWORD *)a1, v9 + 28, 1LL);
    }
    Win32FreePool(v9);
  }
  GreUnlockDisplayDevice(*(_QWORD *)a1);
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion();
  }
  GreUnlockVisRgn(*(_QWORD *)a1, v6, v7);
}
