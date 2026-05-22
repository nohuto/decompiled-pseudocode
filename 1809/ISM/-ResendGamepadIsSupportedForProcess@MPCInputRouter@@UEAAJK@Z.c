/*
 * XREFs of ?ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z @ 0x180007BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::ResendGamepadIsSupportedForProcess(MPCInputRouter *this, int a2)
{
  __int64 **v3; // r8
  __int64 *i; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h]

  v3 = (__int64 **)*((_QWORD *)this - 83);
  for ( i = *v3; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v3 )
    {
      v5 = 0LL;
      goto LABEL_6;
    }
    if ( *((_DWORD *)i + 4) == a2 )
      break;
  }
  v5 = i[7];
LABEL_6:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = 0LL;
  v10 = 0LL;
  if ( v5 )
  {
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
           v5,
           &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f,
           &v10);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x823,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v7);
      JUMPOUT(0x180007CD5LL);
    }
    v6 = v10;
  }
  if ( v6 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v11 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 95) + 120LL))((char *)this - 760, v6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0LL;
}
