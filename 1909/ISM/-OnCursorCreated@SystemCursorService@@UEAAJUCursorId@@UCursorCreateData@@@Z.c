/*
 * XREFs of ?OnCursorCreated@SystemCursorService@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1800CD420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUCursorDeviceInfo@@@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@QEAAPEAUCursorDeviceInfo@@QEAU2@AEBU2@@Z @ 0x1800CB3C8 (--$_Emplace_reallocate@AEBUCursorDeviceInfo@@@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDe.c)
 *     ?erase@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorDeviceInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorDeviceInfo@@@std@@@std@@@2@0@Z @ 0x1800CE098 (-erase@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDeviceInfo@@@std@@@std@@QEAA-AV-$_Vector_.c)
 */

__int64 __fastcall SystemCursorService::OnCursorCreated(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // r9
  _OWORD *i; // rax
  char *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ebx
  _BYTE v15[8]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_DWORD *)a3 == 2 )
  {
    DWORD2(v16) = 0;
  }
  else
  {
    if ( *(_DWORD *)a3 != 16 )
      return 0LL;
    DWORD2(v16) = 1;
  }
  v5 = *(_DWORD *)(a3 + 4);
  v6 = *a2;
  v7 = *(_QWORD **)(a1 + 104);
  v8 = *(_QWORD **)(a1 + 112);
  *(_QWORD *)&v16 = v6;
  HIDWORD(v16) = v5;
  while ( v7 != v8 && *v7 != v6 )
    v7 += 2;
  if ( v7 != v8 )
  {
    for ( i = v7 + 2; i != (_OWORD *)v8; ++i )
    {
      if ( *(_QWORD *)i != v6 )
      {
        *(_OWORD *)v7 = *i;
        v7 += 2;
      }
    }
  }
  std::vector<CursorDeviceInfo>::erase(a1 + 104, v15);
  v10 = *(char **)(a1 + 112);
  if ( *(char **)(a1 + 120) == v10 )
  {
    std::vector<CursorDeviceInfo>::_Emplace_reallocate<CursorDeviceInfo const &>((void **)(a1 + 104), v10, &v16);
  }
  else
  {
    *(_OWORD *)v10 = v16;
    *(_QWORD *)(a1 + 112) += 16LL;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL);
  if ( v11
    && (v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)(v11 + 8) + 24LL))(
                v11 + 8,
                &v16,
                *(_QWORD *)(a3 + 8),
                *(_QWORD *)(a3 + 16)),
        v13 = v12,
        v12 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x147,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)(unsigned int)v12);
  }
  else
  {
    v13 = 0;
  }
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
  return 0LL;
}
