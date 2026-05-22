/*
 * XREFs of ?RegisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x18008C3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18001E60C (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::RegisterSupportedInputUpdateObserver(
        DWMInputRouter *this,
        struct ISupportedInputUpdateObserver *a2)
{
  struct ISupportedInputUpdateObserver *v2; // rsi
  _QWORD *v4; // rcx
  char *v5; // rdx
  __int64 ***v6; // rdi
  __int64 **i; // rbx
  int v8; // eax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  struct ISupportedInputUpdateObserver *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = a2;
  v4 = (_QWORD *)((char *)this + 672);
  v5 = (char *)v4[1];
  if ( (char *)v4[2] == v5 )
  {
    std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(v4, v5, &v13);
    v2 = v13;
  }
  else
  {
    *(_QWORD *)v5 = v2;
    v4[1] += 8LL;
  }
  v6 = (__int64 ***)*((_QWORD *)this + 4);
  for ( i = *v6; i != (__int64 **)v6; i = (__int64 **)*i )
  {
    v12 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64 *))*i[7])(
           i[7],
           &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f,
           &v12) >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(struct ISupportedInputUpdateObserver *, __int64))(*(_QWORD *)v2 + 24LL))(v2, v12);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x835,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v8);
        JUMPOUT(0x18008C484LL);
      }
    }
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return 0LL;
}
