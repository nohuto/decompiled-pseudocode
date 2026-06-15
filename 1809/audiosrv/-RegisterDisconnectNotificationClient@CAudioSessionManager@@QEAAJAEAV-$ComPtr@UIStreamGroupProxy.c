/*
 * XREFs of ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800C8E58
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800EA36C (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180013A08 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18003DF00 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180040450 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x1800C6E4C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef.c)
 *     _lambda_3640aac1012d9f944c7183fa6cd164a8_::operator() @ 0x1800C75AC (_lambda_3640aac1012d9f944c7183fa6cd164a8_--operator().c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1800C96E8 (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::RegisterDisconnectNotificationClient(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  const char *v5; // r9
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  __int64 *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  _QWORD *v12; // rcx
  __int64 result; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v19; // [rsp+68h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+70h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v20 = v4;
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___(
    (char **)&v18,
    *(char **)(a1 + 168),
    *(char **)(a1 + 176));
  std::vector<Microsoft::WRL::WeakRef>::erase(a1 + 168, &v18, v18, *(_QWORD *)(a1 + 176), -2LL);
  v6 = *(_QWORD **)(a1 + 168);
  v18 = a2;
  v7 = *(_QWORD **)(a1 + 176);
  while ( v6 != v7 )
  {
    if ( lambda_3640aac1012d9f944c7183fa6cd164a8_::operator()(&v18, v6) )
      break;
    ++v6;
  }
  try
  {
    if ( v6 == *(_QWORD **)(a1 + 176) )
    {
      v18 = 0LL;
      v19 = (__int64 *)&v18;
      v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v19);
      v10 = Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2, v9);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          2382LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v10);
        v12 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        }
        if ( v4 )
          LeaveCriticalSection(v4);
        return v11;
      }
      v14 = *(_QWORD **)(a1 + 176);
      if ( *(_QWORD **)(a1 + 184) == v14 )
      {
        std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
          (unsigned __int64 *)(a1 + 168),
          v14,
          &v18);
      }
      else
      {
        v15 = v18;
        *v14 = v18;
        if ( v15 )
          (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
        *(_QWORD *)(a1 + 176) += 8LL;
      }
      v16 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
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
