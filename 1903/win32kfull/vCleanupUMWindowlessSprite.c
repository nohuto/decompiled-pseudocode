/*
 * XREFs of vCleanupUMWindowlessSprite @ 0x1C0044530
 * Callers:
 *     <none>
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002A608 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C002A650 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreDeleteSprite @ 0x1C0045134 (GreDeleteSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vCleanupUMWindowlessSprite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  HDEV HDEV; // rsi
  struct PDEVOBJ *v6; // rdx
  char *v7; // rax
  char *v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  char v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1;
  if ( g_pDwmState && PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
    v15 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    HDEV = (HDEV)UserGetHDEV();
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v13, v6, 0LL, 1LL);
    v14 = ghsemDwmState;
    GreAcquireSemaphore(ghsemDwmState);
    if ( g_pDwmState )
    {
      v7 = (char *)g_pDwmState + 80;
      v8 = (char *)*((_QWORD *)g_pDwmState + 10);
      while ( v8 != v7 )
      {
        v9 = (__int64)v8;
        v10 = (unsigned __int64)(v8 - 24);
        v8 = *(char **)v8;
        v11 = -v9;
        if ( (*(_DWORD *)((v10 & -(__int64)(v11 != 0)) + 0x48) & 0x400000) != 0
          && *(_DWORD *)((v10 & -(__int64)(v11 != 0)) + 0x70) == v4 )
        {
          GreDeleteSprite(HDEV, 0LL, *(void **)(v10 & -(__int64)(v11 != 0)), 1);
        }
        v7 = (char *)g_pDwmState + 80;
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v14);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v13);
    SEMOBJ::vUnlock((SEMOBJ *)&v15);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
  }
}
