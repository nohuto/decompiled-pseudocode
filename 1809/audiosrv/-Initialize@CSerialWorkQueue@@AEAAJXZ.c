/*
 * XREFs of ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x180049680
 * Callers:
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x180049504 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800E0AE0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSerialWorkQueue::Initialize(PTP_POOL *this)
{
  signed int v2; // ebx
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v6; // eax

  v2 = *this == 0LL ? 0x80070490 : 0;
  if ( !*this )
  {
    Threadpool = CreateThreadpool(0LL);
    *this = Threadpool;
    if ( Threadpool )
    {
      v2 = 0;
    }
    else
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( v2 >= 0 )
    {
      if ( SetThreadpoolThreadMinimum(*this, 1u) )
      {
        v2 = 0;
LABEL_7:
        SetThreadpoolThreadMaximum(*this, 1u);
        this[2] = *this;
        return (unsigned int)v2;
      }
      v6 = GetLastError();
      v2 = v6;
      if ( v6 > 0 )
        v2 = (unsigned __int16)v6 | 0x80070000;
      if ( v2 >= 0 )
        goto LABEL_7;
    }
  }
  return (unsigned int)v2;
}
