/*
 * XREFs of ?Initialize@CWorkFifo@@AEAAJXZ @ 0x1801144E4
 * Callers:
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180113774 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18011566C (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180048200 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800AD64C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?InitializeTheadpool@CWorkFifo@@AEAAJXZ @ 0x180114644 (-InitializeTheadpool@CWorkFifo@@AEAAJXZ.c)
 *     ?ReleaseThreadpool@CWorkFifo@@AEAAXXZ @ 0x180115144 (-ReleaseThreadpool@CWorkFifo@@AEAAXXZ.c)
 */

__int64 __fastcall CWorkFifo::Initialize(wil::details **this)
{
  signed int LastErrorFailHr; // ebx
  __int64 v3; // rdx
  wil::details *v4; // rcx
  wil::details *Event; // rbp
  __int64 v6; // r8
  const char *v7; // r9
  wil::details *v8; // rsi
  DWORD LastError; // ebx
  void *v10; // rdx

  LastErrorFailHr = 0;
  if ( !*this )
  {
    LastErrorFailHr = CWorkFifo::InitializeTheadpool(this);
    if ( LastErrorFailHr < 0 )
      goto LABEL_9;
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      v8 = this[28];
      if ( v8 )
      {
        LastError = GetLastError();
        wil::details::CloseHandle(v8, v10);
        SetLastError(LastError);
      }
      this[28] = Event;
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v4, v3, v6, v7);
    }
    if ( LastErrorFailHr < 0 )
LABEL_9:
      CWorkFifo::ReleaseThreadpool((CWorkFifo *)this);
  }
  return (unsigned int)LastErrorFailHr;
}
