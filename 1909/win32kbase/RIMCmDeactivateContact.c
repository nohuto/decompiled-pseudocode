/*
 * XREFs of RIMCmDeactivateContact @ 0x1C01597E0
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C013C730 (RIMEndAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01530A8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01540B8 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01562F8 (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C0156A14 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     memset @ 0x1C00BF640 (memset.c)
 *     RIMCmIsContactSuppressed @ 0x1C01599E4 (RIMCmIsContactSuppressed.c)
 *     rimReleaseCursor @ 0x1C0159C24 (rimReleaseCursor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMCmDeactivateContact(_DWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rsi
  int v6; // ebp
  _QWORD *v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  int v10; // eax
  int IsContactSuppressed; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *result; // rax

  v3 = a1 + 230;
  v6 = -__CFSHR__(*(_DWORD *)(a2 + 32), 3);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = (_QWORD *)(a2 + 16);
  v8 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(v8 + 8) != a2 + 16 )
    goto LABEL_21;
  v9 = *(_QWORD **)(a2 + 24);
  if ( (_QWORD *)*v9 != v7 )
    goto LABEL_21;
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v10 = a1[238];
  if ( !v10 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2, a3);
    v10 = a1[238];
  }
  a1[238] = v10 - 1;
  IsContactSuppressed = RIMCmIsContactSuppressed(a2);
  v14 = (unsigned int)a1[239];
  if ( !IsContactSuppressed )
  {
    if ( !(_DWORD)v14 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v12, v13);
      LODWORD(v14) = a1[239];
    }
    v14 = (unsigned int)(v14 - 1);
    a1[239] = v14;
  }
  if ( a1[238] < (unsigned int)v14 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v12, v13);
  if ( !v6 && (a1[180] > 1u || (a1[78] & 0x20) != 0) )
    rimReleaseCursor(a1, *(unsigned int *)(a2 + 4));
  result = memset((void *)a2, 0, 0xB18uLL);
  if ( !v6 )
  {
    result = *(_QWORD **)v3;
    if ( *(_DWORD **)(*(_QWORD *)v3 + 8LL) == v3 )
    {
      *v7 = result;
      *(_QWORD *)(a2 + 24) = v3;
      result[1] = v7;
      *(_QWORD *)v3 = v7;
      return result;
    }
LABEL_21:
    __fastfail(3u);
  }
  return result;
}
