/*
 * XREFs of RIMCmDeactivateContact @ 0x1C0106B18
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0100100 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0101028 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C0102F30 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RIMCmIsContactSuppressed @ 0x1C0106D50 (RIMCmIsContactSuppressed.c)
 *     rimReleaseCursor @ 0x1C0106F68 (rimReleaseCursor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMCmDeactivateContact(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // rsi
  int v5; // ebp
  _QWORD *v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rcx
  int v9; // eax
  int IsContactSuppressed; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *result; // rax

  v2 = a1 + 220;
  v5 = -__CFSHR__(*(_DWORD *)(a2 + 32), 3);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v6 = (_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(v7 + 8) != a2 + 16 || (v8 = *(_QWORD **)(a2 + 24), (_QWORD *)*v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  v9 = a1[228];
  if ( !v9 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2);
    v9 = a1[228];
  }
  a1[228] = v9 - 1;
  IsContactSuppressed = RIMCmIsContactSuppressed(a2);
  v12 = (unsigned int)a1[229];
  if ( !IsContactSuppressed )
  {
    if ( !(_DWORD)v12 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
      LODWORD(v12) = a1[229];
    }
    v12 = (unsigned int)(v12 - 1);
    a1[229] = v12;
  }
  if ( a1[228] < (unsigned int)v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
  if ( !v5 && (a1[170] > 1u || (a1[69] & 0x80u) != 0) )
    rimReleaseCursor(a1, *(unsigned int *)(a2 + 4));
  result = memset((void *)a2, 0, 0xAC8uLL);
  if ( !v5 )
  {
    result = *(_QWORD **)v2;
    if ( *(_DWORD **)(*(_QWORD *)v2 + 8LL) != v2 )
      __fastfail(3u);
    *v6 = result;
    *(_QWORD *)(a2 + 24) = v2;
    result[1] = v6;
    *(_QWORD *)v2 = v6;
  }
  return result;
}
