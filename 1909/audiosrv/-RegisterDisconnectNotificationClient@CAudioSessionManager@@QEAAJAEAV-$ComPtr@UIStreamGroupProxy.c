/*
 * XREFs of ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800D74C8
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800F5CCC (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180032CA0 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180033940 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3640aac1012d9f944c7183fa6cd164a8___ @ 0x1800D523C (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef__.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x1800D5308 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800D5B3C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1800D7DB0 (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::RegisterDisconnectNotificationClient(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const char *v5; // r9
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // esi
  char *v9; // rcx
  __int64 result; // rax
  _QWORD *v11; // rdx
  char *v12; // rcx
  char *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v15; // [rsp+50h] [rbp+8h] BYREF
  char **v16; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+60h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v17 = v4;
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___(
    &v15,
    *(char **)(a1 + 168),
    *(char **)(a1 + 176));
  std::vector<Microsoft::WRL::WeakRef>::erase(a1 + 168, &v15, v15, *(_QWORD *)(a1 + 176), -2LL);
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3640aac1012d9f944c7183fa6cd164a8___(
    &v15,
    *(_QWORD **)(a1 + 168),
    *(_QWORD **)(a1 + 176),
    a2);
  try
  {
    if ( v15 == *(char **)(a1 + 176) )
    {
      v15 = 0LL;
      v16 = &v15;
      v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v16);
      v7 = Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2, v6);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x94E,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v7);
        v9 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
        }
        if ( v4 )
          LeaveCriticalSection(v4);
        return v8;
      }
      v11 = *(_QWORD **)(a1 + 176);
      if ( *(_QWORD **)(a1 + 184) == v11 )
      {
        std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
          (unsigned __int64 *)(a1 + 168),
          v11,
          &v15);
      }
      else
      {
        v12 = v15;
        *v11 = v15;
        if ( v12 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
        *(_QWORD *)(a1 + 176) += 8LL;
      }
      v13 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x954,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v5);
  }
  return result;
}
