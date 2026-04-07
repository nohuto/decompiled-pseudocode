/*
 * XREFs of ?UpdateTabletMode@CDesktopManager@@QEAAJH@Z @ 0x18004CA64
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18003A6E0 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180005254 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CDesktopManager::UpdateTabletMode(CDesktopManager *this, int a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rax
  CWindowData *v5; // rdi
  CWindowData *i; // rbx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 61);
  RestartKey = 0LL;
  *((_BYTE *)this + 564) = a2 != 0;
  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  while ( 1 )
  {
    v3 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v2 + 8), &RestartKey);
    if ( !v3 )
      break;
    v5 = (CWindowData *)(v3 + 10);
    for ( i = (CWindowData *)v3[10]; i != v5; i = *(CWindowData **)i )
    {
      if ( (*((_BYTE *)i + 608) & 0x20) != 0 )
        CWindowData::OnColorizationUpdated(i);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return 0LL;
}
