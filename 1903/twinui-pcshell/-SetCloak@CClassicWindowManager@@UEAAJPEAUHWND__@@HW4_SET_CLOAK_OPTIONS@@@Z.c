/*
 * XREFs of ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x180056EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800576B4 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::SetCloak(__int64 a1, HWND a2, int a3, char a4)
{
  unsigned int v8; // edi
  int ClassicWindow; // ebx
  struct IClassicWindow *v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[1] = (struct IClassicWindow *)-2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = 0;
  v11[0] = 0LL;
  if ( (a4 & 1) == 0
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11),
        ClassicWindow = CClassicWindowManager::_FindClassicWindow((CClassicWindowManager *)(a1 - 96), a2, v11, 0LL),
        ClassicWindow >= 0) )
  {
    LOBYTE(v8) = a3 != 0;
    ClassicWindow = (*(__int64 (__fastcall **)(PVOID, HWND, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                                   + 24LL))(
                      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
                      a2,
                      v8);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  return (unsigned int)ClassicWindow;
}
