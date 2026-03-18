/*
 * XREFs of ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXPEAVDripsBlockerInfoList@@@Z @ 0x1C020F5CC
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C020F548 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2K@Z @ 0x1C020DE8C (-AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2K@Z.c)
 *     ?StartStopEntryAccounting@DripsBlockerTrackingHelper@@AEAAXI_N@Z @ 0x1C021237C (-StartStopEntryAccounting@DripsBlockerTrackingHelper@@AEAAXI_N@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::FinalizeTracking(
        DripsBlockerTrackingHelper *this,
        struct DripsBlockerInfoList *a2)
{
  __int64 v4; // rsi
  char *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // [rsp+28h] [rbp-30h]
  struct _STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  STRING v10; // [rsp+40h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 18432) )
  {
    v4 = 0LL;
    v5 = (char *)this + 24;
    do
    {
      if ( v5[9] )
      {
        if ( *(_DWORD *)v5 )
          DripsBlockerTrackingHelper::StartStopEntryAccounting(this, v4, 0);
        RtlInitAnsiString(&DestinationString, (PCSZ)this + 72 * v4 + 33);
        v6 = *((_QWORD *)v5 - 2);
        if ( v6 )
        {
          v7 = *((_QWORD *)v5 - 1);
          v8 = *((_DWORD *)v5 + 1);
          v10 = DestinationString;
          DripsBlockerInfoList::AddDripsBlocker((unsigned int *)a2, 3, &v10, v7, (unsigned int)v6, v8);
        }
      }
      v4 = (unsigned int)(v4 + 1);
      v5 += 72;
    }
    while ( (unsigned int)v4 < 0x100 );
    *((_BYTE *)this + 18432) = 1;
  }
}
