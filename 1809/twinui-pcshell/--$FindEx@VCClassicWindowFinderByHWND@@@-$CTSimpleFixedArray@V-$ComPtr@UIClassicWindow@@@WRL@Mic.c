/*
 * XREFs of ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800501D0
 * Callers:
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x18004FBC0 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x18004FCEC (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z @ 0x18004FDB0 (-GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z.c)
 *     ?HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x18004FEC0 (-HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h]

  *a4 = 0LL;
  v9 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v10 = *a3;
    v16 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *(_QWORD *)(*a1 + 8 * v9);
    a5 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v15 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
           v11,
           &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
           &v15) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 192LL))(v15, *a2) )
    {
      v12 = 0;
    }
    else
    {
      v12 = -1;
    }
    v13 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( !v12 )
      break;
    if ( (unsigned __int64)++v9 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v9;
  return 0LL;
}
