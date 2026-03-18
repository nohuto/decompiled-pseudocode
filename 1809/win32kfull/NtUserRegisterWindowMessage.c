/*
 * XREFs of NtUserRegisterWindowMessage @ 0x1C00F3B00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C00C8D04 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterWindowMessage(ULONG64 a1)
{
  unsigned int *v1; // rdi
  __int64 v2; // rcx
  _WORD *v3; // rdi
  ULONG64 v4; // rdx
  _BYTE **v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // r8
  _WORD *v9; // rax
  NTSTATUS v10; // ecx
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-278h]
  __int64 v14; // [rsp+78h] [rbp-220h]
  _BYTE v15[512]; // [rsp+80h] [rbp-218h] BYREF

  v1 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v1 = (unsigned int *)MmUserProbeAddress;
  v2 = *v1;
  v13 = *v1;
  v3 = (_WORD *)*((_QWORD *)v1 + 1);
  HIWORD(v14) = HIWORD(v3);
  if ( ((unsigned __int8)v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (ULONG64)v3 + (unsigned __int16)v2 + 2;
  v5 = (_BYTE **)MmUserProbeAddress;
  if ( v4 >= MmUserProbeAddress || (unsigned __int16)v2 > HIWORD(v13) )
    goto LABEL_10;
  if ( (v2 & 1) != 0 )
    goto LABEL_11;
  if ( v4 <= (unsigned __int64)v3 )
  {
LABEL_10:
    if ( (v2 & 1) == 0 )
    {
LABEL_12:
      v6 = 0;
      **v5 = 0;
      goto LABEL_13;
    }
LABEL_11:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    v5 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_12;
  }
  v6 = 0;
LABEL_13:
  v7 = 2147483646LL;
  v8 = 256LL;
  v9 = v15;
  v10 = 0;
  v11 = 0LL;
  while ( v8 )
  {
    if ( !v7 || !*v3 )
      goto LABEL_20;
    *v9++ = *v3++;
    --v8;
    --v7;
    ++v11;
  }
  --v9;
  v10 = -2147483643;
LABEL_20:
  *v9 = 0;
  if ( v10 >= 0 )
    return (unsigned __int16)UserAddAtomEx(v15, 0LL, 2LL);
  else
    UserSetLastStatus(v10, 1);
  return v6;
}
