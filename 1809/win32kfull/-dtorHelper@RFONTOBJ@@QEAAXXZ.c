/*
 * XREFs of ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C01617B4
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C00C5440 (GreGetGlyphOutlineInternal.c)
 *     RFONTOBJ_dtorHelperWrap @ 0x1C01618D0 (RFONTOBJ_dtorHelperWrap.c)
 * Callees:
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C0161B34 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::dtorHelper(RFONTOBJ *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax

  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
  v2 = *(_DWORD *)(*(_QWORD *)this + 712LL);
  RFONTOBJ::vUnlockEUDCFontsGlyphCache(this);
  if ( (v2 & 0x81) != 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= 0xFFFFFEFE;
  if ( *((int *)this + 2) > 0 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)this + 128LL);
    if ( *(_DWORD *)(v3 + 212) <= 5u )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
      if ( CurrentProcessWin32Process )
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(CurrentProcessWin32Process
                                    + 4LL * *(int *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 212LL)
                                    + 300),
          *((_DWORD *)this + 2));
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 848LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
}
