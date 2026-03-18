/*
 * XREFs of Bulk_Transfer_PrepareForCompletion @ 0x1C0037EB4
 * Callers:
 *     Bulk_Transfer_Complete @ 0x1C0037C80 (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0037CE4 (Bulk_Transfer_CompleteCancelable.c)
 * Callees:
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C002914C (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     Bulk_TransferData_Free @ 0x1C0037A1C (Bulk_TransferData_Free.c)
 *     WPP_RECORDER_SF_DDDqdD @ 0x1C0038E88 (WPP_RECORDER_SF_DDDqdD.c)
 */

void __fastcall Bulk_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r10
  unsigned __int16 v6; // ax
  __int64 v7; // rcx
  int UsbdStatusFromTrbCompletionCode; // eax
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // r10
  int v12; // eax

  v3 = *(_QWORD *)(a2 + 48);
  v6 = *(_WORD *)(v3 + 2);
  if ( v6 < 0x39u || (v7 = 52LL, v6 > 0x3Au) )
    v7 = 36LL;
  *(_DWORD *)(v3 + v7) = *(_DWORD *)(a2 + 108);
  UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(a1, *(_DWORD *)(a2 + 68), a3);
  *(_DWORD *)(v11 + 4) = UsbdStatusFromTrbCompletionCode;
  if ( UsbdStatusFromTrbCompletionCode <= -1073738240 )
  {
    if ( UsbdStatusFromTrbCompletionCode == -1073738240 )
    {
      v12 = -1073741637;
      goto LABEL_21;
    }
    if ( UsbdStatusFromTrbCompletionCode == -2147483136
      || UsbdStatusFromTrbCompletionCode == -2147482880
      || UsbdStatusFromTrbCompletionCode == -2147482112
      || UsbdStatusFromTrbCompletionCode == -1073739264 )
    {
      v12 = -1073741811;
      goto LABEL_21;
    }
LABEL_17:
    v12 = -1073741823;
    goto LABEL_21;
  }
  switch ( UsbdStatusFromTrbCompletionCode )
  {
    case -1073737728:
      v12 = -1073741670;
      break;
    case -1073713152:
      v12 = -1073741810;
      break;
    case -1073676288:
      v12 = -1073741536;
      break;
    default:
      if ( (unsigned int)UsbdStatusFromTrbCompletionCode <= 1 )
      {
        v12 = 0;
        break;
      }
      goto LABEL_17;
  }
LABEL_21:
  *(_DWORD *)(a2 + 72) = v12;
  ++*(_DWORD *)(v10 + 240);
  *(_QWORD *)(v10 + 248) += *(unsigned int *)(a2 + 108);
  if ( *(int *)(a2 + 72) < 0 )
    ++*(_DWORD *)(v10 + 244);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDqdD(
      *(_QWORD *)(*(_QWORD *)(v10 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(v10 + 48) + 135LL),
      v9,
      v10);
  Bulk_TransferData_Free(a2);
}
