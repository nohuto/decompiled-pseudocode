/*
 * XREFs of ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180051EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180051588 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800524B0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___ @ 0x1800529B4 (CClassicWindowManager--ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___.c)
 *     CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x180053414 (CClassicWindowManager--ForEachWindow__lambda_9464cc021c09e3331999e98539241978___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180149CD8 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::HandleOwnerSwitch(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  CClassicWindowManager *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // r13
  unsigned int v6; // r15d
  HWND v7; // rcx
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  void (__fastcall *v14)(__int64, __int64); // rsi
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+58h] [rbp-20h]
  __int128 v18; // [rsp+60h] [rbp-18h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+50h] BYREF
  HWND v21; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+60h] BYREF

  v3 = (_QWORD *)(a1 + 112);
  v4 = (CClassicWindowManager *)(a1 - 72);
  v5 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  v16 = v5;
  v17 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v5, 1LL);
  v6 = 0;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v7 = *(HWND *)a2;
  v19 = 0LL;
  v21 = v7;
  v20 = 0LL;
  v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
         (int)v3 + 8,
         (unsigned int)&v21,
         (unsigned int)&v20,
         (unsigned int)&v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  if ( v8 < 0
    || (v12 = v22,
        v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3[1] + 8 * v22),
        v8 = (**v13)(v13, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v19),
        v8 < 0) )
  {
    if ( v8 == -2147319765 )
    {
      if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
      {
        if ( IsWindowVisible(*(HWND *)a2) )
        {
          v6 = 1;
        }
        else
        {
          v11 = *CClassicWindowManager::GetClassicWindowOwner(v4, &v20, *(HWND *)a2);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
          if ( v11 )
          {
            v20 = 0LL;
            *(_QWORD *)&v15 = &v20;
            *((_QWORD *)&v15 + 1) = v4;
            v18 = v15;
            v21 = 0LL;
            *(_QWORD *)&v15 = &v21;
            *((_QWORD *)&v15 + 1) = &v18;
            CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___(v4, &v15);
          }
        }
      }
      else if ( (*(_BYTE *)(a2 + 8) & 0x12) != 0 )
      {
        CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___(v4, v4);
      }
    }
  }
  else
  {
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v4, v19, *(unsigned int *)(a2 + 8));
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 152LL))(v19) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v3 + 16LL))(v3, v12);
      v6 = 2;
    }
  }
  v9 = v19;
  if ( v19 && !v6 )
  {
    v14 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 80LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2 + 16);
    v14(v9, a2 + 16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  if ( v17 >= 0 )
    LeaveCriticalSection(v5);
  return v6;
}
