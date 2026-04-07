/*
 * XREFs of ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180013464
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013190 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180026F2C (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18000F9D0 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 */

char __fastcall CWindowData::IsSimpleClientArea(CWindowData *this)
{
  char v1; // di

  v1 = 0;
  if ( (*((_BYTE *)this + 605) & 0x10) == 0
    && (*((_BYTE *)this + 607) & 0x20) == 0
    && !*((_DWORD *)this + 128)
    && (!*((_QWORD *)this + 46)
     || *((HWND *)this + 5) == CWindowList::GetShellWindowForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 61))) )
  {
    return 1;
  }
  return v1;
}
