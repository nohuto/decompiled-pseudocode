/*
 * XREFs of ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18001EFAC
 * Callers:
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18001EE74 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1800A82E0 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     ?lock@?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEBA?AV?$shared_ptr@U_Task_impl_base@details@Concurrency@@@2@XZ @ 0x1801ECE18 (-lock@-$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEBA-AV-$shared_ptr@U_Task_impl_bas.c)
 *     ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x1802B10A0 (-NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Ref_count_base::_Incref_nz(std::_Ref_count_base *this)
{
  signed __int32 v1; // eax

  while ( 1 )
  {
    v1 = *((_DWORD *)this + 2);
    if ( !v1 )
      break;
    if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)this + 2, v1 + 1, v1) )
      return 1;
  }
  return 0;
}
