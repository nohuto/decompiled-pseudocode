/*
 * XREFs of ?OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z @ 0x18003CDDC
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z @ 0x1800EF468 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCManager::OnButtonsChangedDuringHomeGesture(
        MPCManager *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 *v6; // rdi
  __int64 *j; // rbx
  int v11; // eax
  __int64 **v12; // rax
  __int64 *v13; // rcx
  __int64 *i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = (__int64 *)*((_QWORD *)this + 9);
  j = (__int64 *)*v6;
  while ( j != v6 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned __int64, unsigned int))(*(_QWORD *)j[5] + 80LL))(
            j[5],
            a2,
            a3,
            a4,
            a5,
            a6);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v11);
    if ( !*((_BYTE *)j + 25) )
    {
      v12 = (__int64 **)j[2];
      if ( *((_BYTE *)v12 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v13 = *v12;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v13 + 25); v13 = (__int64 *)*v13 )
          j = v13;
      }
    }
  }
}
