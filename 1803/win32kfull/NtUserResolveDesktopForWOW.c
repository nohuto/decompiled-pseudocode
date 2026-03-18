/*
 * XREFs of NtUserResolveDesktopForWOW @ 0x1C01F44B0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     xxxResolveDesktopForWOW @ 0x1C01B32EC (xxxResolveDesktopForWOW.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // r9
  int v15; // [rsp+20h] [rbp-68h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+60h] [rbp-28h] BYREF
  int v19; // [rsp+98h] [rbp+10h]

  v15 = 0;
  EnterCrit(0LL, 1LL);
  p_Length = (unsigned int *)&a1->Length;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    p_Length = (unsigned int *)MmUserProbeAddress;
  v3 = *p_Length;
  v19 = *p_Length;
  *(_DWORD *)&SourceString.Length = *p_Length;
  Buffer = (WCHAR *)*((_QWORD *)p_Length + 1);
  SourceString.Buffer = Buffer;
  if ( ((unsigned __int8)Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = (ULONG64)Buffer + HIWORD(v19);
  v6 = (_BYTE **)MmUserProbeAddress;
  if ( v5 < MmUserProbeAddress && (unsigned __int16)v3 <= HIWORD(v19) )
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
    v15 = 1;
    PushW32ThreadLock((__int64)v8, v18, (__int64)Win32FreePool);
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
  if ( v15 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v18);
  UserSessionSwitchLeaveCrit(v10, v9, v12, v13);
  return (unsigned int)v11;
}
