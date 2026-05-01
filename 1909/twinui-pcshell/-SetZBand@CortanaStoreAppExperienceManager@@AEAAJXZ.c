/*
 * XREFs of ?SetZBand@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DE1D4
 * Callers:
 *     ?OnViewCreated@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DCDA8 (-OnViewCreated@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DD820 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x18016B894 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::SetZBand(CortanaStoreAppExperienceManager *this)
{
  int v2; // edx
  __int64 (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 276) != 0 ? 18 : 10;
  if ( *((_DWORD *)this + 70) != v2 )
  {
    *((_DWORD *)this + 70) = v2;
    if ( *((_QWORD *)this + 32) )
    {
      v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 248);
      if ( *v3 )
      {
        v10 = 0LL;
        v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
               v3,
               &v10);
        v5 = v4;
        if ( v4 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, *((unsigned int *)this + 70));
          if ( v7 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x490,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
              (const char *)(unsigned int)v7);
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 32) + 48LL))(
                 *((_QWORD *)this + 32),
                 *((unsigned int *)this + 70));
          v5 = v4;
          if ( v4 >= 0 )
          {
            v5 = 0;
            goto LABEL_12;
          }
          v6 = 1169LL;
        }
        else
        {
          v6 = 1167LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
LABEL_12:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
        return v5;
      }
    }
  }
  return 0LL;
}
