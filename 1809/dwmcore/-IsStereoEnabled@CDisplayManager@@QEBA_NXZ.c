/*
 * XREFs of ?IsStereoEnabled@CDisplayManager@@QEBA_NXZ @ 0x1800D894C
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x1800D9140 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?IsStereoEnabled@CDisplaySet@@QEBA_NXZ @ 0x1800D8998 (-IsStereoEnabled@CDisplaySet@@QEBA_NXZ.c)
 */

bool __fastcall CDisplayManager::IsStereoEnabled(CDisplayManager *this)
{
  bool IsStereoEnabled; // bl
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  IsStereoEnabled = 0;
  v3 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_180308258 )
    IsStereoEnabled = CDisplaySet::IsStereoEnabled(qword_180308258);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
  return IsStereoEnabled;
}
