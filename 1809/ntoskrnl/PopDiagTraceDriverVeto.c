/*
 * XREFs of PopDiagTraceDriverVeto @ 0x14057EA94
 * Callers:
 *     PopSystemIrpCompletion @ 0x14056D720 (PopSystemIrpCompletion.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     PopDiagGetDriverName @ 0x140155E94 (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDriverVeto(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  unsigned __int16 Length; // cx
  __int16 v6; // ax
  unsigned __int16 v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // rax
  ULONG v10; // r9d
  __int64 v11; // rcx
  __int16 v13; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+3Ch] [rbp-CCh] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  wchar_t *Buffer; // [rsp+68h] [rbp-A0h]
  int v18; // [rsp+70h] [rbp-98h]
  int v19; // [rsp+74h] [rbp-94h]
  WCHAR SourceString[64]; // [rsp+98h] [rbp-70h] BYREF
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF

  v2 = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DRIVERVETO);
    if ( (_BYTE)v2 )
    {
      if ( PopDiagGetDriverName(a1, SourceString) < 0 )
      {
        RtlInitUnicodeString(&DestinationString, &word_140574E20);
        Length = DestinationString.Length;
        v6 = 0;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        Length = DestinationString.Length;
        v6 = DestinationString.Length >> 1;
      }
      v7 = *(_WORD *)(a2 - 104);
      UserData.Ptr = (ULONGLONG)&v13;
      v13 = v6;
      v14 = v7 >> 1;
      *(_QWORD *)&UserData.Size = 2LL;
      v8 = 1;
      if ( v6 )
      {
        v8 = 2;
        Buffer = DestinationString.Buffer;
        v18 = Length;
        v19 = 0;
      }
      v9 = 2LL * v8;
      v10 = v8 + 1;
      *(&UserData.Ptr + v9) = (ULONGLONG)&v14;
      *((_QWORD *)&UserData.Size + v9) = 2LL;
      if ( v7 >> 1 )
      {
        v11 = 2LL * v10++;
        *(&UserData.Ptr + v11) = *(_QWORD *)(a2 - 96);
        *(&UserData.Size + 2 * v11) = v7;
        *(&UserData.Reserved + 2 * v11) = 0;
      }
      LOBYTE(v2) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DRIVERVETO, 0LL, v10, &UserData);
    }
  }
  return (char)v2;
}
