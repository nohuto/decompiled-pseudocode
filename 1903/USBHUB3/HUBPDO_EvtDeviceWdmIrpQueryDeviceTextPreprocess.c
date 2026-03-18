/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0016040
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0015940 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     RtlStringCbPrintfW @ 0x1C0011E68 (RtlStringCbPrintfW.c)
 *     HUBMISC_WaitForSignal @ 0x1C002EB20 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041300 (memmove.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess(__int64 a1, IRP *a2)
{
  NTSTATUS v3; // ebp
  __int64 v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v6; // rsi
  unsigned int Length; // eax
  wchar_t *PoolWithTag; // rbx
  unsigned __int16 v9; // r9
  __int16 Size; // r14
  _BYTE *v11; // rax
  _WORD *v12; // rcx
  unsigned int v13; // edx
  unsigned __int64 v14; // rax
  void *v15; // rcx
  struct _KEVENT *v16; // r12
  unsigned __int8 *v17; // rax
  unsigned __int16 v18; // bx
  _WORD *v19; // rax
  _WORD *v20; // rbp

  v3 = -1073741637;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0064040);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(v4 + 24);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length == 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x64334855u);
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_6:
        v3 = -1073741670;
        goto LABEL_36;
      }
      v9 = 53;
LABEL_5:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
        2u,
        5u,
        v9,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids);
      goto LABEL_6;
    }
    v3 = RtlStringCbPrintfW(
           PoolWithTag,
           0x2AuLL,
           L"Port_#%04d.Hub_#%04d",
           *(unsigned __int16 *)(*(_QWORD *)(v6 + 8) + 200LL),
           *(_DWORD *)(*(_QWORD *)v6 + 96LL));
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
          2u,
          5u,
          0x36u,
          (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
          v3);
      ExFreePoolWithTag(PoolWithTag, 0x64334855u);
      goto LABEL_36;
    }
    a2->IoStatus.Information = (unsigned __int64)PoolWithTag;
LABEL_35:
    v3 = 0;
    goto LABEL_36;
  }
  if ( !Length && *(_BYTE *)(v6 + 2003) && (*(_DWORD *)(v6 + 1644) & 1) == 0 )
  {
    a2->IoStatus.Information = 0LL;
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    if ( Size )
    {
      v11 = *(_BYTE **)(v6 + 2024);
      if ( v11 )
      {
        if ( *v11 > 2u )
        {
          v12 = v11 + 2;
          v13 = 0;
          v14 = ((unsigned __int64)(unsigned __int8)*v11 - 2) >> 1;
          if ( (_DWORD)v14 )
          {
            do
            {
              if ( !*v12 )
                break;
              if ( *v12 == Size )
                goto LABEL_23;
              ++v13;
              ++v12;
            }
            while ( v13 < (unsigned int)v14 );
          }
        }
      }
    }
    Size = 1033;
LABEL_23:
    if ( Size == *(_WORD *)(v6 + 2040) )
    {
      v16 = (struct _KEVENT *)(v6 + 472);
    }
    else
    {
      v15 = *(void **)(v6 + 2032);
      *(_WORD *)(v6 + 2040) = Size;
      if ( v15 )
        ExFreePoolWithTag(v15, 0x64334855u);
      v16 = (struct _KEVENT *)(v6 + 472);
      *(_QWORD *)(v6 + 2032) = 0LL;
      KeClearEvent((PRKEVENT)(v6 + 472));
      HUBSM_AddEvent(v6 + 504, 4087);
      HUBMISC_WaitForSignal((PVOID)(v6 + 472));
    }
    v17 = *(unsigned __int8 **)(v6 + 2032);
    if ( v17
      || Size != 1033
      && (*(_WORD *)(v6 + 2040) = 1033,
          KeClearEvent(v16),
          HUBSM_AddEvent(v6 + 504, 4087),
          HUBMISC_WaitForSignal(v16),
          (v17 = *(unsigned __int8 **)(v6 + 2032)) != 0LL) )
    {
      v18 = (((unsigned __int64)*v17 - 2) >> 1) + 1;
      v19 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 2LL * v18, 0x64334855u);
      v20 = v19;
      if ( !v19 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v9 = 55;
        goto LABEL_5;
      }
      memmove(v19, (const void *)(*(_QWORD *)(v6 + 2032) + 2LL), 2LL * v18 - 2);
      v20[v18 - 1] = 0;
      a2->IoStatus.Information = (unsigned __int64)v20;
      goto LABEL_35;
    }
  }
LABEL_36:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v3;
}
