/*
 * XREFs of NtUserResolveDesktopForWOW @ 0x1C0233700
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     xxxResolveDesktopForWOW @ 0x1C01EB03C (xxxResolveDesktopForWOW.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-68h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-28h] BYREF
  int v18; // [rsp+98h] [rbp+10h]

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v17, 0, 24);
  v14 = 0;
  EnterCrit(0LL, 1LL);
  p_Length = (unsigned int *)&a1->Length;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    p_Length = (unsigned int *)MmUserProbeAddress;
  v3 = *p_Length;
  v18 = *p_Length;
  *(_DWORD *)&SourceString.Length = *p_Length;
  Buffer = (WCHAR *)*((_QWORD *)p_Length + 1);
  SourceString.Buffer = Buffer;
  if ( ((unsigned __int8)Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = (ULONG64)Buffer + HIWORD(v18);
  v6 = (_BYTE **)MmUserProbeAddress;
  if ( v5 < MmUserProbeAddress && (unsigned __int16)v3 <= HIWORD(v18) )
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
    v14 = 1;
    PushW32ThreadLock((__int64)v8, v17, (__int64)Win32FreePool);
    memmove(SourceString.Buffer, Buffer, SourceString.Length);
  }
  else
  {
    SourceString.Buffer = 0LL;
  }
  v11 = xxxResolveDesktopForWOW(&SourceString);
  if ( v11 >= 0 )
  {
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    *a1 = DestinationString;
  }
  if ( v14 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v17, v9, v12);
  UserSessionSwitchLeaveCrit(v10);
  return (unsigned int)v11;
}
