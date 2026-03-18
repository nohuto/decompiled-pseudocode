/*
 * XREFs of ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C013C0CC
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C0076F24 (GreGetGlyphOutlineInternal.c)
 *     RFONTOBJ_dtorHelperWrap @ 0x1C013C1C0 (RFONTOBJ_dtorHelperWrap.c)
 * Callees:
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C013CB34 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::dtorHelper(RFONTOBJ *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax

  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 832LL));
  v2 = *(_DWORD *)(*(_QWORD *)this + 696LL);
  RFONTOBJ::vUnlockEUDCFontsGlyphCache(this);
  if ( (v2 & 0x81) != 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  *(_DWORD *)(*(_QWORD *)this + 696LL) &= 0xFFFFFEFE;
  if ( *((int *)this + 2) > 0 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)this + 112LL);
    if ( *(int *)(v3 + 212) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
      if ( CurrentProcessWin32Process )
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(CurrentProcessWin32Process
                                    + 4LL * *(int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 212LL)
                                    + 296),
          *((_DWORD *)this + 2));
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 832LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 832LL));
}
