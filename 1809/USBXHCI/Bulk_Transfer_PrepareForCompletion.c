/*
 * XREFs of Bulk_Transfer_PrepareForCompletion @ 0x1C0032F2C
 * Callers:
 *     Bulk_Transfer_Complete @ 0x1C0032D08 (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0032D6C (Bulk_Transfer_CompleteCancelable.c)
 * Callees:
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C0024A0C (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     Bulk_TransferData_Free @ 0x1C0032AA4 (Bulk_TransferData_Free.c)
 *     WPP_RECORDER_SF_DDDqdD @ 0x1C0033E98 (WPP_RECORDER_SF_DDDqdD.c)
 */

void __fastcall Bulk_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r10
  unsigned __int16 v6; // ax
  __int64 v7; // rcx
  int UsbdStatusFromTrbCompletionCode; // eax
  __int64 v9; // r9
  __int64 v10; // r10
  int v11; // eax
  int v12; // r8d

  v3 = *(_QWORD *)(a2 + 48);
  v6 = *(_WORD *)(v3 + 2);
  if ( v6 <= 0x38u || (v7 = 52LL, v6 > 0x3Au) )
    v7 = 36LL;
  *(_DWORD *)(v3 + v7) = *(_DWORD *)(a2 + 108);
  UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(a1, *(_DWORD *)(a2 + 68), a3);
  *(_DWORD *)(v10 + 4) = UsbdStatusFromTrbCompletionCode;
  if ( UsbdStatusFromTrbCompletionCode <= -1073738240 )
  {
    if ( UsbdStatusFromTrbCompletionCode == -1073738240 )
    {
      v11 = -1073741637;
      goto LABEL_21;
    }
    if ( UsbdStatusFromTrbCompletionCode == -2147483136
      || UsbdStatusFromTrbCompletionCode == -2147482880
      || UsbdStatusFromTrbCompletionCode == -2147482112
      || UsbdStatusFromTrbCompletionCode == -1073739264 )
    {
      v11 = -1073741811;
      goto LABEL_21;
    }
LABEL_17:
    v11 = -1073741823;
    goto LABEL_21;
  }
  switch ( UsbdStatusFromTrbCompletionCode )
  {
    case -1073737728:
      v11 = -1073741670;
      break;
    case -1073713152:
      v11 = -1073741810;
      break;
    case -1073676288:
      v11 = -1073741536;
      break;
    default:
      if ( (unsigned int)UsbdStatusFromTrbCompletionCode <= 1 )
      {
        v11 = 0;
        break;
      }
      goto LABEL_17;
  }
LABEL_21:
  *(_DWORD *)(a2 + 72) = v11;
  ++*(_DWORD *)(v9 + 240);
  *(_QWORD *)(v9 + 248) += *(unsigned int *)(a2 + 108);
  v12 = *(_DWORD *)(a2 + 72);
  if ( v12 < 0 )
  {
    ++*(_DWORD *)(v9 + 244);
    v12 = *(_DWORD *)(a2 + 72);
  }
  WPP_RECORDER_SF_DDDqdD(
    *(_QWORD *)(*(_QWORD *)(v9 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(v9 + 48) + 135LL),
    v12,
    v9);
  Bulk_TransferData_Free(a2);
}
