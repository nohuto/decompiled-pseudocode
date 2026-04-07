/*
 * XREFs of ??0CDesktopManager@@AEAA@XZ @ 0x18003C8D0
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x18003CA30 (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18003CA08 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 */

CDesktopManager *__fastcall CDesktopManager::CDesktopManager(CDesktopManager *this)
{
  CDesktopManager::s_pDesktopManagerInstance = this;
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CDesktopManager::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_QWORD *)this + 69) = 1LL;
  *((_DWORD *)this + 133) = -12542210;
  *((_DWORD *)this + 134) = 0;
  *(_QWORD *)((char *)this + 540) = 27LL;
  *((_DWORD *)this + 137) = 73;
  *((_BYTE *)this + 560) = 0;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_DWORD *)this + 150) = 0;
  *((_DWORD *)this + 172) = 0;
  *(_QWORD *)((char *)this + 692) = 1065353216LL;
  *((_DWORD *)this + 175) = 1062836634;
  *((_DWORD *)this + 176) = 1084227584;
  *((_DWORD *)this + 177) = 1090519040;
  *((_DWORD *)this + 178) = -1065353216;
  *((_DWORD *)this + 179) = 1058642330;
  *((_DWORD *)this + 180) = 1050253722;
  *((_DWORD *)this + 181) = 10;
  *((_DWORD *)this + 182) = 1056964608;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_DWORD *)this + 194) = 0;
  *((_DWORD *)this + 43) = 2048;
  *((_DWORD *)this + 44) = 2048;
  CDesktopManager::UpdateWindowShadows(this);
  return this;
}
