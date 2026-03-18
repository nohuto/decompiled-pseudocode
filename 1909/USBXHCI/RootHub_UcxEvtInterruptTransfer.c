/*
 * XREFs of RootHub_UcxEvtInterruptTransfer @ 0x1C0025520
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     Controller_SetControllerGone @ 0x1C00102A4 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C0022270 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 */

__int64 __fastcall RootHub_UcxEvtInterruptTransfer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r13
  unsigned int v6; // ebx
  __int64 v7; // rcx
  void *v8; // rbp
  size_t v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // r12d
  unsigned int v13; // esi
  __int64 v14; // rdx
  char v15; // r8
  int Ulong; // eax
  int v17; // eax
  unsigned __int16 v19; // r9
  __int64 v20; // [rsp+28h] [rbp-90h]
  __int64 v21; // [rsp+30h] [rbp-88h]
  __int64 v22; // [rsp+40h] [rbp-78h]
  _QWORD v24[5]; // [rsp+58h] [rbp-60h] BYREF

  memset(v24, 0, sizeof(v24));
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056248);
  v22 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 88LL);
  memset(v24, 0, sizeof(v24));
  LOWORD(v24[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v24);
  v5 = v24[1];
  v6 = 0;
  v7 = *(_QWORD *)(v4 + 8);
  v8 = *(void **)(v24[1] + 40LL);
  v9 = *(unsigned int *)(v24[1] + 36LL);
  if ( *(_BYTE *)(v7 + 537) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      3342);
    v7 = *(_QWORD *)(v4 + 8);
  }
  if ( !Controller_IsControllerAccessible(v7) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        2u,
        0xBu,
        0xB9u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
    goto LABEL_7;
  }
  if ( *(_BYTE *)(v4 + 57) )
  {
    v10 = *(_QWORD *)(v4 + 8);
    if ( !*(_DWORD *)(v10 + 464) && *(_DWORD *)(v10 + 512) != 1 )
      (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3040))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        *(_QWORD *)(v10 + 504));
    *(_BYTE *)(v4 + 57) = 0;
  }
  if ( !(_DWORD)v9 )
    goto LABEL_36;
  memset(v8, 0, v9);
  v11 = 255;
  if ( (unsigned int)v9 <= 0x20 )
    v11 = 8 * v9 - 1;
  v12 = *(_DWORD *)(v4 + 16);
  v13 = 1;
  if ( v11 <= v12 )
    v12 = v11;
  if ( !v12 )
  {
LABEL_36:
    *(_DWORD *)(v5 + 4) = 0;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v6);
  }
  while ( 1 )
  {
    v14 = v13 - 1;
    v15 = *(_BYTE *)(88 * v14 + *(_QWORD *)(v4 + 48) + 13);
    if ( v15 != 2 )
      break;
    Ulong = XilRegister_ReadUlong(v22, (unsigned int *)(*(_QWORD *)(v4 + 40) + 16 * v14));
    if ( Ulong == -1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_41;
      v19 = 186;
      goto LABEL_40;
    }
    if ( (Ulong & 0x1E0) == 0x1E0 )
      Ulong &= ~0x400000u;
    if ( (Ulong & 0x760000) != 0 )
    {
      *((_BYTE *)v8 + ((unsigned __int64)v13 >> 3)) |= 1 << (v13 & 7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = Ulong;
        LODWORD(v20) = v13;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          4u,
          0xBu,
          0xBBu,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v20,
          v21);
      }
    }
LABEL_35:
    if ( ++v13 > v12 )
      goto LABEL_36;
  }
  if ( v15 != 3 )
    goto LABEL_35;
  v17 = XilRegister_ReadUlong(v22, (unsigned int *)(*(_QWORD *)(v4 + 40) + 16 * v14));
  if ( v17 != -1 )
  {
    if ( (v17 & 0xFA0000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v17;
        LODWORD(v20) = v13;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
          4u,
          0xBu,
          0xBDu,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v20,
          v21);
      }
      if ( RootHub_HideInvalidDebugPortStatusAndChange(v4, v13) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v20) = v13;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            4u,
            0xBu,
            0xBEu,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v20);
        }
      }
      else
      {
        *((_BYTE *)v8 + ((unsigned __int64)v13 >> 3)) |= 1 << (v13 & 7);
      }
    }
    goto LABEL_35;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = 188;
LABEL_40:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      2u,
      0xBu,
      v19,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
  }
LABEL_41:
  Controller_SetControllerGone(*(_QWORD **)(v4 + 8), 1);
LABEL_7:
  *(_DWORD *)(v5 + 4) = -1073713152;
  v6 = -1073741810;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v6);
}
