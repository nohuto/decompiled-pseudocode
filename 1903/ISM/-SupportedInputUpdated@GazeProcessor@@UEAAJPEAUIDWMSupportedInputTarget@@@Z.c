/*
 * XREFs of ?SupportedInputUpdated@GazeProcessor@@UEAAJPEAUIDWMSupportedInputTarget@@@Z @ 0x180125DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@AEBQEAUIHeatSystemContextClient@@@?$_List_buy@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@1@PEAU21@0AEBQEAUIHeatSystemContextClient@@@Z @ 0x18007A9A4 (--$_Buynode@AEBQEAUIHeatSystemContextClient@@@-$_List_buy@PEAUIHeatSystemContextClient@@V-$alloc.c)
 */

__int64 __fastcall GazeProcessor::SupportedInputUpdated(GazeProcessor *this, struct IDWMSupportedInputTarget *a2)
{
  __int64 v3; // rax
  int v5; // eax
  void **v6; // rdi
  struct IDWMSupportedInputTarget **i; // rcx
  __int64 v8; // rcx
  unsigned int *v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int *v16; // rdx
  int v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v18 = 0;
  v3 = *(_QWORD *)a2;
  v19 = (__int64)a2;
  v5 = (*(__int64 (__fastcall **)(struct IDWMSupportedInputTarget *, int *))(v3 + 40))(a2, &v18);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      326LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (void **)*((_QWORD *)this + 26);
  for ( i = (struct IDWMSupportedInputTarget **)*v6; ; i = (struct IDWMSupportedInputTarget **)*i )
  {
    if ( i == (struct IDWMSupportedInputTarget **)v6 )
      goto LABEL_12;
    if ( i[2] == a2 )
      break;
  }
  if ( i == (struct IDWMSupportedInputTarget **)v6 )
  {
LABEL_12:
    if ( (v18 & 0x4000) != 0 )
    {
      v12 = v6[1];
      v13 = std::_List_buy<IHeatSystemContextClient *>::_Buynode<IHeatSystemContextClient * const &>(
              (__int64)i,
              *((_QWORD **)this + 26),
              v12,
              &v19);
      v14 = *((_QWORD *)this + 27);
      if ( v14 == 0xAAAAAAAAAAAAAA9LL )
        std::_Xlength_error("list<T> too long");
      *((_QWORD *)this + 27) = v14 + 1;
      v6[1] = v13;
      *v12 = v13;
      if ( *((_QWORD *)this + 27) == 1LL )
      {
        v15 = *((_QWORD *)this + 5);
        v16 = (unsigned int *)*((_QWORD *)this + 6);
        v19 = 4LL;
        v20 = 1LL;
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 72LL))(v15, *v16, &v19);
        if ( v10 < 0 )
        {
          v11 = 343LL;
          goto LABEL_18;
        }
      }
    }
  }
  else if ( (v18 & 0x4000) == 0 )
  {
    *(_QWORD *)i[1] = *i;
    *((_QWORD *)*i + 1) = i[1];
    --*((_QWORD *)this + 27);
    std::_Deallocate<16,0>(i, (const struct std::nothrow_t *)0x18);
    if ( !*((_QWORD *)this + 27) )
    {
      v8 = *((_QWORD *)this + 5);
      v9 = (unsigned int *)*((_QWORD *)this + 6);
      v20 = 0LL;
      v19 = 4LL;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 72LL))(v8, *v9, &v19);
      if ( v10 < 0 )
      {
        v11 = 357LL;
LABEL_18:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          v11,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
          (const char *)(unsigned int)v10);
      }
    }
  }
  return 0LL;
}
