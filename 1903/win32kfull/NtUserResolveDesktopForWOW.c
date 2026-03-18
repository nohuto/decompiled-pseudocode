/*
 * XREFs of NtUserResolveDesktopForWOW @ 0x1C0233D20
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     xxxResolveDesktopForWOW @ 0x1C01EB1BC (xxxResolveDesktopForWOW.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserResolveDesktopForWOW(struct _UNICODE_STRING *a1)
{
  unsigned int *p_Length; // rax
  __int64 v3; // rcx
  WCHAR *Buffer; // rdi
  ULONG64 v5; // rdx
  _BYTE **v6; // rax
  unsigned __int16 epi16; // ax
  WCHAR *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+20h] [rbp-68h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-28h] BYREF
  int v20; // [rsp+98h] [rbp+10h]

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v19, 0, 24);
  v16 = 0;
  EnterCrit(0LL, 1LL);
  p_Length = (unsigned int *)&a1->Length;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    p_Length = (unsigned int *)MmUserProbeAddress;
  v3 = *p_Length;
  v20 = *p_Length;
  *(_DWORD *)&SourceString.Length = *p_Length;
  Buffer = (WCHAR *)*((_QWORD *)p_Length + 1);
  SourceString.Buffer = Buffer;
  if ( ((unsigned __int8)Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = (ULONG64)Buffer + HIWORD(v20);
  v6 = (_BYTE **)MmUserProbeAddress;
  if ( v5 < MmUserProbeAddress && (unsigned __int16)v3 <= HIWORD(v20) )
  {
    if ( (v3 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
      v6 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v5 > (unsigned __int64)Buffer )
      goto LABEL_12;
  }
  if ( (v3 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v6 = 0;
  Buffer = SourceString.Buffer;
LABEL_12:
  DestinationString = SourceString;
  epi16 = _mm_extract_epi16((__m128i)SourceString, 1);
  if ( epi16 )
  {
    v8 = (WCHAR *)Win32AllocPoolWithQuota(epi16, 2037674837LL);
    SourceString.Buffer = v8;
    if ( !v8 )
      ExRaiseStatus(-1073741801);
    v16 = 1;
    PushW32ThreadLock((__int64)v8, v19, (__int64)Win32FreePool, v9);
    memmove(SourceString.Buffer, Buffer, SourceString.Length);
  }
  else
  {
    SourceString.Buffer = 0LL;
  }
  v12 = xxxResolveDesktopForWOW(&SourceString);
  if ( v12 >= 0 )
  {
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    *a1 = DestinationString;
  }
  if ( v16 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v19, v10, v13, v14);
  UserSessionSwitchLeaveCrit(v11);
  return (unsigned int)v12;
}
