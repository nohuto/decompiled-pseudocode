/*
 * XREFs of ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x180022350
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000D240 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015098 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001BAD4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18001D9B8 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18001DBC4 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CAastPreStartContext *__fastcall CAastPreStartContext::`scalar deleting destructor'(
        CAastPreStartContext *this,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  CApplicationManager *v5; // rcx
  const unsigned __int16 *v6; // rdi
  const unsigned __int16 *v7; // rdx
  int v8; // eax
  int updated; // eax
  float v11; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  bool v14; // [rsp+80h] [rbp+8h] BYREF
  bool v15; // [rsp+88h] [rbp+10h] BYREF
  bool v16; // [rsp+90h] [rbp+18h] BYREF
  bool v17; // [rsp+98h] [rbp+20h] BYREF

  v12 = -2LL;
  *(_QWORD *)this = &CAastPreStartContext::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v6 = (const unsigned __int16 *)((char *)this + 24);
    v7 = (const unsigned __int16 *)((char *)this + 24);
    if ( *((_QWORD *)this + 6) >= 8uLL )
      v7 = *(const unsigned __int16 **)v6;
    v8 = CApplicationManager::RevertEndpointVolumeOverride(v5, v7, *((_DWORD *)this + 5), &v15, &v16, &v11, &v14, &v17);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7F,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        (const char *)(unsigned int)v8);
    if ( v15 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *((_DWORD *)this + 5), 3u);
    if ( v16 || v14 )
    {
      if ( *((_QWORD *)this + 6) >= 8uLL )
        v6 = *(const unsigned __int16 **)v6;
      updated = CApplicationManager::UpdateEndpointVolume((CApplicationManager *)v14, v6, v16, v11, v14, v17);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x89,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)updated);
    }
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  std::wstring::~wstring((__int64)this + 24);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
