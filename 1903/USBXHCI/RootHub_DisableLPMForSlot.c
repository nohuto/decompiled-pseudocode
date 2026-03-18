/*
 * XREFs of RootHub_DisableLPMForSlot @ 0x1C0021508
 * Callers:
 *     UsbDevice_UcxEvtDisable @ 0x1C003C550 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_DisableLPMForSlot(_QWORD *a1, int a2, int a3)
{
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int *v9; // r14
  __int64 v10; // r12
  int Ulong; // ebx
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // ebx
  unsigned int v15; // ebx
  __int64 v17; // [rsp+28h] [rbp-20h]

  v5 = *(_QWORD *)(a1[1] + 88LL);
  v6 = (unsigned int)(a2 - 1);
  v7 = a1[5];
  v8 = 88 * v6;
  v9 = (unsigned int *)(16 * v6 + v7 + 4);
  v10 = 16 * v6 + v7;
  DynamicLock_Acquire(*(_QWORD *)(a1[6] + 88 * v6 + 24));
  if ( *(_BYTE *)(a1[6] + v8 + 20) )
  {
    Ulong = XilRegister_ReadUlong(v5, v9);
    if ( BYTE1(Ulong) == a3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          4u,
          0xBu,
          0xFFu,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          Ulong);
      v12 = Ulong & 0xFFFE0007;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          4u,
          0xBu,
          0x100u,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v17);
      }
      XilRegister_WriteUlong(v5, v9, v12);
      v13 = XilRegister_ReadUlong(v5, (unsigned int *)(v10 + 12));
      v14 = v13;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v13;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          4u,
          0xBu,
          0x101u,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v17);
      }
      v15 = v14 & 0xFFFFC000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v15;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72LL),
          4u,
          0xBu,
          0x102u,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v17);
      }
      XilRegister_WriteUlong(v5, (_DWORD *)(v10 + 12), v15);
      XilRegister_ReadUlong(v5, v9);
      *(_BYTE *)(a1[6] + v8 + 20) = 0;
    }
  }
  return DynamicLock_Release(*(_QWORD *)(a1[6] + v8 + 24));
}
