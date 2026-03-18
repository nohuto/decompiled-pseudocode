/*
 * XREFs of vCleanupUMWindowlessSprite @ 0x1C0078020
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0079DCC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0079E08 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreDeleteSprite @ 0x1C00C4078 (GreDeleteSprite.c)
 */

void __fastcall vCleanupUMWindowlessSprite(__int64 a1, __int64 a2)
{
  int v2; // edi
  HDEV HDEV; // rsi
  struct PDEVOBJ *v4; // rdx
  char *v5; // rax
  char *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  char v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v2 = a1;
  if ( g_pDwmState && PsGetCurrentProcess(a1, a2) != gpepCSRSS )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
    v13 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    HDEV = (HDEV)UserGetHDEV();
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v11, v4, 0, 1);
    v12 = ghsemDwmState;
    GreAcquireSemaphore(ghsemDwmState);
    if ( g_pDwmState )
    {
      v5 = (char *)g_pDwmState + 80;
      v6 = (char *)*((_QWORD *)g_pDwmState + 10);
      while ( v6 != v5 )
      {
        v7 = (__int64)v6;
        v8 = (unsigned __int64)(v6 - 24);
        v6 = *(char **)v6;
        v9 = -v7;
        if ( (*(_DWORD *)((v8 & -(__int64)(v9 != 0)) + 0x48) & 0x400000) != 0
          && *(_DWORD *)((v8 & -(__int64)(v9 != 0)) + 0x70) == v2 )
        {
          GreDeleteSprite(HDEV, 0LL, *(void **)(v8 & -(__int64)(v9 != 0)), 1);
        }
        v5 = (char *)g_pDwmState + 80;
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v12);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v11);
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
  }
}
