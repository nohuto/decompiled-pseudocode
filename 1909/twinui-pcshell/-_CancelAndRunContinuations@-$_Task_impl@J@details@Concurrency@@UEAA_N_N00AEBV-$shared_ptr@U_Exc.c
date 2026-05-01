/*
 * XREFs of ?_CancelAndRunContinuations@?$_Task_impl@J@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x1801EB930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1801C9F14 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801E4304 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1801E4BCC (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     Concurrency::details::_ScheduleFuncWithAutoInline @ 0x1801ECAC4 (Concurrency--details--_ScheduleFuncWithAutoInline.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Concurrency::details::_Task_impl<long>::_CancelAndRunContinuations(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        _QWORD *a5)
{
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  int v18; // eax
  struct _Mtx_internal_imp_t *v19; // [rsp+20h] [rbp-78h]
  _QWORD v20[8]; // [rsp+30h] [rbp-68h] BYREF

  v19 = (struct _Mtx_internal_imp_t *)(a1 + 32);
  v8 = _Mtx_lock((_Mtx_t)(a1 + 32));
  if ( v8 )
    std::_Throw_C_error(v8);
  v9 = *(_DWORD *)(a1 + 8);
  if ( a3 )
  {
    if ( v9 != 4 )
    {
      std::shared_ptr<PeoplePaneViewInfo>::operator=((_QWORD *)(a1 + 16), a5);
LABEL_10:
      if ( a2 )
      {
        *(_DWORD *)(a1 + 8) = 4;
        v10 = 1;
      }
      else
      {
        v10 = 0;
        if ( *(_DWORD *)(a1 + 8) == 1 )
          v10 = 2;
        *(_DWORD *)(a1 + 8) = 2;
        Concurrency::details::_TaskEventLogger::_LogCancelTask((Concurrency::details::_TaskEventLogger *)(a1 + 352));
      }
      v11 = _Mtx_unlock(v19);
      if ( v11 )
        std::_Throw_C_error(v11);
      v12 = v10 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          if ( *(_QWORD *)(a1 + 432) )
            std::_Func_class<void,>::operator()(a1 + 376);
        }
      }
      else
      {
        v13 = _Mtx_lock((_Mtx_t)(a1 + 208));
        if ( v13 )
          std::_Throw_C_error(v13);
        if ( *(int *)(a1 + 312) < 2 )
          *(_DWORD *)(a1 + 312) = 2;
        v14 = _Cnd_broadcast((_Cnd_t)(a1 + 136));
        if ( v14 )
          std::_Throw_C_error(v14);
        v15 = _Mtx_unlock((_Mtx_t)(a1 + 208));
        if ( v15 )
          std::_Throw_C_error(v15);
        if ( *(_QWORD *)(a1 + 112) )
        {
          v20[0] = off_18045D9D0;
          v20[1] = a1;
          v20[7] = v20;
          Concurrency::details::_ScheduleFuncWithAutoInline(v20, 16LL);
          std::_Func_class<void,>::_Tidy((__int64)v20, v16);
        }
      }
      return 1;
    }
  }
  else if ( v9 != 3 && *(_DWORD *)(a1 + 8) != 4 && (*(_DWORD *)(a1 + 8) != 2 || a2) )
  {
    goto LABEL_10;
  }
  v18 = _Mtx_unlock(v19);
  if ( v18 )
    std::_Throw_C_error(v18);
  return 0;
}
