/*
 * XREFs of ?OnCursorCreated@SystemCursorService@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x180096360
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBUCursorDeviceInfo@@@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@QEAAPEAUCursorDeviceInfo@@QEAU2@AEBU2@@Z @ 0x180097E20 (--$_Emplace_reallocate@AEBUCursorDeviceInfo@@@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDe.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemCursorService::OnCursorCreated(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  bool v4; // zf
  __int64 v6; // rcx
  int v7; // eax
  _QWORD *v8; // rdx
  _QWORD *v9; // rdi
  _OWORD *i; // rax
  size_t v11; // rbx
  _OWORD *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = *(_DWORD *)a3 == 2;
  v17 = 0uLL;
  if ( v4 )
  {
    DWORD2(v17) = 0;
  }
  else
  {
    if ( *(_DWORD *)a3 != 16 )
      return 0LL;
    DWORD2(v17) = 1;
  }
  v6 = *a2;
  v7 = *(_DWORD *)(a3 + 16);
  v8 = (_QWORD *)a1[15];
  v9 = (_QWORD *)a1[14];
  *(_QWORD *)&v17 = v6;
  HIDWORD(v17) = v7;
  while ( v9 != v8 && *v9 != v6 )
    v9 += 2;
  if ( v9 != v8 )
  {
    for ( i = v9 + 2; i != (_OWORD *)v8; ++i )
    {
      if ( *(_QWORD *)i != v6 )
      {
        *(_OWORD *)v9 = *i;
        v9 += 2;
      }
    }
    if ( v9 != v8 )
    {
      v11 = a1[15] - (_QWORD)v8;
      memmove_0(v9, v8, v11);
      a1[15] = (char *)v9 + v11;
    }
  }
  v12 = (_OWORD *)a1[15];
  if ( (_OWORD *)a1[16] == v12 )
  {
    std::vector<CursorDeviceInfo>::_Emplace_reallocate<CursorDeviceInfo const &>(a1 + 14, v12, &v17);
  }
  else
  {
    *v12 = v17;
    a1[15] += 16LL;
  }
  v13 = *(_QWORD *)(a1[5] + 64LL);
  if ( v13
    && (v14 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)(v13 + 8) + 24LL))(
                v13 + 8,
                &v17,
                *(_QWORD *)(a3 + 8)),
        v15 = v14,
        v14 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)(unsigned int)v14);
  }
  else
  {
    v15 = 0;
  }
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v15);
    return (unsigned int)v15;
  }
  return 0LL;
}
