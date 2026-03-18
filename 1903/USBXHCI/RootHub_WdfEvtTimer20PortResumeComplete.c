/*
 * XREFs of RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0027454
 * Callers:
 *     RootHub_WdfEvtTimer20PortResumeCompleteDpc @ 0x1C0027700 (RootHub_WdfEvtTimer20PortResumeCompleteDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

char __fastcall RootHub_WdfEvtTimer20PortResumeComplete(_QWORD *a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned int *v9; // rax
  int Ulong; // eax
  int v11; // ebx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r13
  int v16; // eax
  int v17; // ebx
  int v18; // ebx
  __int64 v20; // [rsp+28h] [rbp-30h]
  unsigned int *v21; // [rsp+60h] [rbp+8h]

  v4 = a1[1];
  if ( *(_BYTE *)(v4 + 537) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      4519);
    v4 = a1[1];
  }
  v5 = *(_QWORD *)(v4 + 88);
  LOBYTE(v6) = Controller_IsControllerAccessible(v4);
  if ( (_BYTE)v6 )
  {
    v7 = 88LL * (unsigned int)(a2 - 1);
    DynamicLock_Acquire(*(_QWORD *)(a1[6] + v7 + 24));
    v8 = 16LL * (unsigned int)(a2 - 1);
    v9 = (unsigned int *)(v8 + a1[5]);
    v21 = v9;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xD6u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        a2);
      v9 = v21;
    }
    Ulong = XilRegister_ReadUlong(v5, v9);
    v11 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = Ulong;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xD7u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v20);
    }
    v12 = v11 & 0xE00C200 | 0x410000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xD8u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v20);
    }
    XilRegister_WriteUlong(v5, v21, v12);
    DynamicLock_Release(*(_QWORD *)(a1[6] + v7 + 24));
    v13 = XilRegister_ReadUlong(v5, v21);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v13;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xD9u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v20);
    }
    v6 = *(_QWORD *)(a1[1] + 336LL);
    if ( (v6 & 0x8000000) != 0 )
    {
      v14 = a1[6];
      if ( *(_BYTE *)(v14 + v7 + 23) )
      {
        v15 = a1[5] + v8;
        DynamicLock_Acquire(*(_QWORD *)(v14 + v7 + 24));
        v16 = XilRegister_ReadUlong(v5, (unsigned int *)(v15 + 4));
        v17 = v16;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v20) = v16;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 72LL),
            4u,
            0xBu,
            0xDAu,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v20);
        }
        v18 = v17 | 0x10000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v20) = v18;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 72LL),
            4u,
            0xBu,
            0xDBu,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v20);
        }
        XilRegister_WriteUlong(v5, (_DWORD *)(v15 + 4), v18);
        LOBYTE(v6) = DynamicLock_Release(*(_QWORD *)(a1[6] + v7 + 24));
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_SF_(
                   *(_QWORD *)(a1[1] + 72LL),
                   4u,
                   0xBu,
                   0xD5u,
                   (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
  }
  return v6;
}
