/*
 * XREFs of ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18002FDB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x18002E4B0 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 *     ?ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z @ 0x18002FC0C (-ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z.c)
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18002FD08 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     ?UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x18003031C (-UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@.c)
 *     ?GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z @ 0x18003056C (-GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z.c)
 */

__int64 __fastcall SystemButtonEventController::OnContinueProcessing(
        SystemButtonEventController *this,
        const struct SystemButtonEventInfo *a2)
{
  __int128 *i; // rax
  SystemButtonEventBuffer *v5; // rcx
  SystemButtonEventControllerManager *SystemButtonEventControllerManager; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  InputETW::SystemButtonEventController::ContinueProcessing(
    *(_QWORD *)a2,
    *((unsigned int *)a2 + 2),
    *((_BYTE *)a2 + 12),
    *((_BYTE *)a2 + 13));
  for ( i = (__int128 *)*((_QWORD *)this + 8); i != *((__int128 **)this + 9); ++i )
  {
    v8 = *i;
    if ( (_QWORD)v8 == *(_QWORD *)a2 )
    {
      if ( DWORD2(v8) == *((_DWORD *)a2 + 2) && BYTE12(v8) == *((_BYTE *)a2 + 12) )
      {
        v5 = (SystemButtonEventController *)((char *)this + 64);
        if ( i == *((__int128 **)this + 8) )
        {
          SystemButtonEventBuffer::GetOldestEvent(v5, (struct SystemButtonEventInfo *)&v8);
          if ( !*((_BYTE *)a2 + 13) )
            SystemButtonEventController::DeliverToNextTarget(this, a2);
        }
        else
        {
          v8 = 0uLL;
          while ( SystemButtonEventBuffer::GetOldestEvent(v5, (struct SystemButtonEventInfo *)&v8) )
          {
            SystemButtonEventController::DeliverToNextTarget(this, (const struct SystemButtonEventInfo *)&v8);
            v5 = (SystemButtonEventController *)((char *)this + 64);
          }
          SystemButtonEventControllerManager = ISMStatics::GetSystemButtonEventControllerManager();
          SystemButtonEventControllerManager::UnregisterController(SystemButtonEventControllerManager, this);
        }
        return 0LL;
      }
    }
    else if ( (unsigned __int64)v8 > *(_QWORD *)a2 )
    {
      return 0LL;
    }
  }
  return 0LL;
}
