/*
 * XREFs of ?SendHomeGesture@MPCManager@@QEAAXKK_KI@Z @ 0x18003CCD4
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z @ 0x1800EF468 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@AEA_N1@Z.c)
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F5FD0 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x1800F87A0 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KI@Z @ 0x18003E744 (-MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCManager::SendHomeGesture(
        MPCManager *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int64 *v5; // rdi
  __int64 *j; // rbx
  int v10; // eax
  __int64 **v11; // rax
  __int64 *v12; // rcx
  __int64 *i; // rax
  _DWORD *v14; // rcx
  ISMTracing *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (__int64 *)*((_QWORD *)this + 9);
  j = (__int64 *)*v5;
  while ( j != v5 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int64, unsigned int))(*(_QWORD *)j[5] + 72LL))(
            j[5],
            a3,
            a2,
            a4,
            a5);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x85,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v10);
    if ( !*((_BYTE *)j + 25) )
    {
      v11 = (__int64 **)j[2];
      if ( *((_BYTE *)v11 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v12 = *v11;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v12 + 25); v12 = (__int64 *)*v12 )
          j = v12;
      }
    }
  }
  v14 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v14 )
  {
    if ( *v14 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCManager_SendHomeGesture_(v15, a3, a2, a4, a5);
    }
  }
}
