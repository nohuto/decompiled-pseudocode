/*
 * XREFs of ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x1800079B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z @ 0x180009904 (-MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SupportedInputUpdatedForTarget@DWMInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x18008C320 (-SupportedInputUpdatedForTarget@DWMInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::SupportedInputUpdatedForTarget(
        MPCInputRouter *this,
        struct IDWMSupportedInputTarget *a2)
{
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  unsigned int v8; // r14d
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  int v11; // eax
  __int64 **v12; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  ISMTracing *v17; // rcx
  _QWORD v18[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v20; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+48h] BYREF

  v18[1] = -2LL;
  DWMInputRouter::SupportedInputUpdatedForTarget(this, a2);
  if ( !MPCManager::s_instance )
    return;
  v20 = 0;
  v3 = (*(__int64 (__fastcall **)(struct IDWMSupportedInputTarget *, unsigned int *))(*(_QWORD *)a2 + 40LL))(a2, &v20);
  v4 = retaddr;
  if ( v3 < 0 )
    goto LABEL_28;
  if ( (v20 & 0x18040) != 0 )
  {
    v18[0] = 0LL;
    v5 = (**(__int64 (__fastcall ***)(struct IDWMSupportedInputTarget *, GUID *, _QWORD *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           v18);
    v6 = retaddr;
    if ( v5 < 0 )
    {
LABEL_29:
      wil::details::in1diag3::FailFast_Hr(
        v6,
        (void *)0x296,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v5);
      JUMPOUT(0x180007B8BLL);
    }
    v21 = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v18[0] + 32LL))(v18[0], &v21);
    if ( v7 >= 0 )
    {
      v8 = v21;
      if ( v21 )
      {
        v9 = (__int64 *)*((_QWORD *)MPCManager::s_instance + 9);
        v10 = (__int64 *)*v9;
        while ( v10 != v9 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10[5] + 56LL))(v10[5], v8);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x124,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
              (const char *)(unsigned int)v11,
              v18[0]);
          if ( !*((_BYTE *)v10 + 25) )
          {
            v12 = (__int64 **)v10[2];
            if ( *((_BYTE *)v12 + 25) )
            {
              for ( i = (__int64 *)v10[1]; !*((_BYTE *)i + 25) && v10 == (__int64 *)i[2]; i = (__int64 *)i[1] )
                v10 = i;
              v10 = i;
            }
            else
            {
              v10 = (__int64 *)v10[2];
              for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
                v10 = j;
            }
          }
        }
      }
      v15 = v18[0];
      if ( v18[0] )
      {
        v18[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      goto LABEL_23;
    }
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x29A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v7);
LABEL_28:
    wil::details::in1diag3::FailFast_Hr(
      v4,
      (void *)0x290,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_29;
  }
LABEL_23:
  v16 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v16 )
  {
    if ( *v16 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputRouter_SupportedInputUpdatedForTarget_(v17, v20, (struct IUnknown *)a2);
    }
  }
}
