/*
 * XREFs of ?OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@III_KI@Z @ 0x18003CF70
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z @ 0x1800EF468 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x1800F87A0 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCManager::OnInteractiveIntentGesture(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8)
{
  __int64 *v8; // rdi
  __int64 *i; // rbx
  int v12; // eax
  __int64 **v13; // rax
  __int64 *v14; // rcx
  __int64 *j; // rax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v17; // [rsp+88h] [rbp+10h]

  v17 = a2;
  v8 = *(__int64 **)(a1 + 72);
  for ( i = (__int64 *)*v8; i != v8; a2 = v17 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, int, __int64, int))(*(_QWORD *)i[5] + 24LL))(
            i[5],
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v12);
    if ( !*((_BYTE *)i + 25) )
    {
      v13 = (__int64 **)i[2];
      if ( *((_BYTE *)v13 + 25) )
      {
        for ( j = (__int64 *)i[1]; !*((_BYTE *)j + 25) && i == (__int64 *)j[2]; j = (__int64 *)j[1] )
          i = j;
        i = j;
      }
      else
      {
        v14 = *v13;
        for ( i = (__int64 *)i[2]; !*((_BYTE *)v14 + 25); v14 = (__int64 *)*v14 )
          i = v14;
      }
    }
  }
}
