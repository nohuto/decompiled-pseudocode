/*
 * XREFs of ?HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x18004FEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800501D0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180104898 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CClassicWindowManager::HandleTaskListDeletedChange(CClassicWindowManager *this, HWND a2)
{
  char *v4; // rsi
  _QWORD *v5; // r14
  unsigned int PropW; // eax
  __int64 v7; // [rsp+70h] [rbp+30h] BYREF
  __int64 v8; // [rsp+78h] [rbp+38h] BYREF
  HWND v9; // [rsp+80h] [rbp+40h] BYREF
  __int64 v10; // [rsp+88h] [rbp+48h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  v4 = (char *)this - 112;
  v7 = 0LL;
  v9 = a2;
  v8 = 0LL;
  v5 = (_QWORD *)((char *)this + 80);
  LODWORD(this) = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
                    (int)this + 80,
                    (unsigned int)&v9,
                    (unsigned int)&v8,
                    (unsigned int)&v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (int)this >= 0
    && (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*v5 + 8 * v10))(
         *(_QWORD *)(*v5 + 8 * v10),
         &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
         &v7) >= 0 )
  {
    PropW = (unsigned int)GetPropW(a2, L"ITaskList_Deleted");
    CClassicWindowManager::_ChangeWindowType(v4, v7, PropW != 0 ? 512 : 1024);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
