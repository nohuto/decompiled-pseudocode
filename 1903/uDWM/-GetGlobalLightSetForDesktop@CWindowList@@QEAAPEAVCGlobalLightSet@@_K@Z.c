/*
 * XREFs of ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x180090BA4
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180043D74 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?OnInteropDeviceRecreated@CWindowList@@QEAAXXZ @ 0x180091634 (-OnInteropDeviceRecreated@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x1800186A4 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x18003D57C (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004F6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCGlobalLightSet@@@WRL@Microsoft@@QEAA@XZ @ 0x18008EBC0 (--1-$ComPtr@VCGlobalLightSet@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@VCGlobalLightSet@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVCGlobalLightSet@@XZ @ 0x18008EE80 (--B-$ComPtrRef@V-$ComPtr@VCGlobalLightSet@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVCG.c)
 */

struct CGlobalLightSet *__fastcall CWindowList::GetGlobalLightSetForDesktop(CWindowList *this, unsigned __int64 a2)
{
  _QWORD *Element; // rbx
  struct CGlobalLightSet *result; // rax
  CBaseObject **v5; // rax
  int v6; // eax
  CBaseObject *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v9; // [rsp+30h] [rbp+8h] BYREF
  CBaseObject **v10; // [rsp+40h] [rbp+18h] BYREF

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  result = (struct CGlobalLightSet *)Element[7];
  if ( !result )
  {
    v9 = 0LL;
    v10 = &v9;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<CGlobalLightSet>>::operator CGlobalLightSet * *(&v10);
    v6 = CGlobalLightSet::Create(a2, v5);
    if ( v6 >= 0 )
    {
      v7 = v9;
      Element[7] = v9;
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1A3F,
        (__int64)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<CGlobalLightSet>::~ComPtr<CGlobalLightSet>(&v9);
    return (struct CGlobalLightSet *)Element[7];
  }
  return result;
}
