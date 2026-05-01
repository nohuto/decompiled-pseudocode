/*
 * XREFs of ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x18004FBC0
 * Callers:
 *     <none>
 * Callees:
 *     CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___ @ 0x18004F2F0 (CClassicWindowManager--ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18004F5A8 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800501D0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     CClassicWindowManager::ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___ @ 0x1800506D4 (CClassicWindowManager--ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180104A80 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::HandleOwnerSwitch(__int64 a1, __int64 a2)
{
  CClassicWindowManager *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // r12
  unsigned int v6; // r14d
  HWND v7; // rcx
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+58h] [rbp-20h]
  __int128 v17; // [rsp+60h] [rbp-18h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+50h] BYREF
  HWND v20; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v21; // [rsp+D8h] [rbp+60h] BYREF

  v4 = (CClassicWindowManager *)(a1 - 72);
  v5 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  v15 = v5;
  v16 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v5, 1LL);
  v6 = 0;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  v7 = *(HWND *)a2;
  v18 = 0LL;
  v20 = v7;
  v19 = 0LL;
  v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
         (int)a1 + 120,
         (unsigned int)&v20,
         (unsigned int)&v19,
         (unsigned int)&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  if ( v8 < 0
    || (v12 = v21,
        v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 120) + 8 * v21),
        v8 = (**v13)(v13, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v18),
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
          v11 = *CClassicWindowManager::GetClassicWindowOwner(v4, &v19, *(HWND *)a2);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
          if ( v11 )
          {
            v19 = 0LL;
            *(_QWORD *)&v14 = &v19;
            *((_QWORD *)&v14 + 1) = v4;
            v17 = v14;
            v20 = 0LL;
            *(_QWORD *)&v14 = &v20;
            *((_QWORD *)&v14 + 1) = &v17;
            CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___((__int64)v4, (__int64)&v14);
          }
        }
      }
      else if ( (*(_BYTE *)(a2 + 8) & 0x12) != 0 )
      {
        CClassicWindowManager::ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___(v4, v4);
      }
    }
  }
  else
  {
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v4, v18, *(unsigned int *)(a2 + 8));
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v18 + 152LL))(v18) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 112) + 16LL))(a1 + 112, v12);
      v6 = 2;
    }
  }
  v9 = v18;
  if ( v18 && !v6 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2 + 16);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 80LL))(v9, a2 + 16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  if ( v16 >= 0 )
    LeaveCriticalSection(v5);
  return v6;
}
