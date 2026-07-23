/*
 * XREFs of RtlNtStatusToDosError @ 0x180053C10
 * Callers:
 *     sub_180001CE0 @ 0x180001CE0 (sub_180001CE0.c)
 *     EtwReplyNotification @ 0x180002310 (EtwReplyNotification.c)
 *     sub_180002740 @ 0x180002740 (sub_180002740.c)
 *     sub_1800059B8 @ 0x1800059B8 (sub_1800059B8.c)
 *     sub_18000A434 @ 0x18000A434 (sub_18000A434.c)
 *     sub_18000A68C @ 0x18000A68C (sub_18000A68C.c)
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     RtlSizeHeap @ 0x1800400A0 (RtlSizeHeap.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     sub_180052D34 @ 0x180052D34 (sub_180052D34.c)
 *     EtwSendNotification @ 0x180053950 (EtwSendNotification.c)
 *     EtwTraceMessageVa @ 0x180053AA0 (EtwTraceMessageVa.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x180053B70 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwEventActivityIdControl @ 0x180066190 (EtwEventActivityIdControl.c)
 *     RtlGetUserInfoHeap @ 0x18006E330 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18006E6A0 (RtlSetUserValueHeap.c)
 *     RtlValidateHeap @ 0x180070350 (RtlValidateHeap.c)
 *     EtwWriteUMSecurityEvent @ 0x180075990 (EtwWriteUMSecurityEvent.c)
 *     sub_180080290 @ 0x180080290 (sub_180080290.c)
 *     EtwEventWriteNoRegistration @ 0x1800835F0 (EtwEventWriteNoRegistration.c)
 *     EtwLogTraceEvent @ 0x180086C00 (EtwLogTraceEvent.c)
 *     sub_180086C60 @ 0x180086C60 (sub_180086C60.c)
 *     sub_180087200 @ 0x180087200 (sub_180087200.c)
 *     EtwSetMark @ 0x1800892C0 (EtwSetMark.c)
 *     RtlCompactHeap @ 0x180089480 (RtlCompactHeap.c)
 *     EtwRegisterSecurityProvider @ 0x18008BA20 (EtwRegisterSecurityProvider.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF550 (RtlSetUserFlagsHeap.c)
 *     sub_1801045B8 @ 0x1801045B8 (sub_1801045B8.c)
 *     sub_18010496C @ 0x18010496C (sub_18010496C.c)
 *     sub_180104DB4 @ 0x180104DB4 (sub_180104DB4.c)
 *     sub_180104FB8 @ 0x180104FB8 (sub_180104FB8.c)
 *     sub_1801052B0 @ 0x1801052B0 (sub_1801052B0.c)
 *     sub_180105454 @ 0x180105454 (sub_180105454.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 *     sub_180105AFC @ 0x180105AFC (sub_180105AFC.c)
 *     sub_180105CC8 @ 0x180105CC8 (sub_180105CC8.c)
 *     sub_180105E5C @ 0x180105E5C (sub_180105E5C.c)
 *     sub_180105FE0 @ 0x180105FE0 (sub_180105FE0.c)
 *     EtwEventWriteString @ 0x18010CB10 (EtwEventWriteString.c)
 *     sub_18010CD40 @ 0x18010CD40 (sub_18010CD40.c)
 *     EtwTraceEventInstance @ 0x18010CE90 (EtwTraceEventInstance.c)
 *     sub_18010D034 @ 0x18010D034 (sub_18010D034.c)
 *     sub_18010D60C @ 0x18010D60C (sub_18010D60C.c)
 *     sub_18010D898 @ 0x18010D898 (sub_18010D898.c)
 *     sub_18010E004 @ 0x18010E004 (sub_18010E004.c)
 * Callees:
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  unsigned __int32 v1; // edx
  struct _TEB *v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r10d
  bool v9; // zf
  int v10; // eax

  v1 = Status;
  v2 = NtCurrentTeb();
  if ( v2 )
    v2->LastStatusValue = Status;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  if ( (Status & 0x20000000) != 0 )
  {
    return Status;
  }
  else if ( (Status & 0xFF0000) != 0x70000 || ((HIBYTE(Status) - 128) & 0xFFFFFFBF) != 0 )
  {
    if ( (Status & 0xF0000000) == 0xD0000000 )
      v1 = Status & 0xCFFFFFFF;
    v3 = 0;
    v4 = 304;
    do
    {
      v5 = (v4 + v3) >> 1;
      v6 = dword_180126000[2 * v5];
      v7 = v1 - v6;
      if ( v1 < v6 )
      {
        v4 = v5 - 1;
      }
      else
      {
        if ( v7 < (unsigned __int8)byte_180126004[8 * v5] )
        {
          v9 = byte_180126005[8 * v5] == 1;
          v10 = (unsigned __int16)word_180126006[4 * v5];
          if ( v9 )
            return (unsigned __int16)word_180124210[v7 + v10];
          else
            return (unsigned __int16)word_180124210[2 * v7 + v10] | ((unsigned __int16)word_180124210[2 * v7 + 1 + v10] << 16);
        }
        v3 = v5 + 1;
      }
    }
    while ( v3 <= v4 );
    if ( (v1 & 0xFFFF0000) == 0xC0010000 )
      return (unsigned __int16)v1;
    DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v1);
    DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
    DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
    return 317;
  }
  else
  {
    return (unsigned __int16)v1;
  }
}
