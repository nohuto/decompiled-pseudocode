/*
 * XREFs of ?SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18004F800
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800188B4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowList::SetUseDarkModeColors(CWindowList *this, struct IDwmWindow *a2, char a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  struct CWindowData *v8; // rax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CWindowData *v12; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v7 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v8 = v12;
    if ( v12 )
    {
      *((_BYTE *)v12 + 609) &= ~2u;
      *((_BYTE *)v8 + 609) |= 2 * a3;
    }
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD0,
      (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)SyncedWindowData,
      v10[0]);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v10);
  return v7;
}
