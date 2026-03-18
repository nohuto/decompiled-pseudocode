/*
 * XREFs of rimFinalizePointerFlags @ 0x1C0157998
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C0155594 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     rimPenButtonsPolicyApply @ 0x1C0158078 (rimPenButtonsPolicyApply.c)
 *     RIMCmGetButtonContact @ 0x1C015BB5C (RIMCmGetButtonContact.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C015BB74 (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C015BBB0 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C015BBDC (RIMCmIsContactSuppressed.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C015BC28 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFinalizePointerFlags(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  int v5; // r10d
  bool v8; // si
  bool v9; // di
  __int64 v10; // r8
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // r8

  v3 = a3[605];
  v5 = a3[665];
  v8 = (v5 & 4) == 0 && (v3 & 4) != 0;
  v9 = (v5 & 4) != 0 && (v3 & 4) == 0;
  if ( !(unsigned int)RIMCmIsContactDeliveringPointerData(a3)
    && (unsigned int)RIMCmIsContactSuppressed(a3)
    && (unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(a3) )
  {
    a3[605] &= 0x3000000u;
    v11 = a3[605];
  }
  else
  {
    if ( (a3[2] & 0x10) == 0 )
    {
      a3[605] |= 0x4000u;
      a3[8] |= 1u;
    }
    if ( v8 )
      v12 = 0x10000;
    else
      v12 = v9 ? 0x40000 : 0x20000;
    v13 = (unsigned int)v12 | a3[605];
    a3[605] = v13;
    v11 = v13;
    if ( (a3[8] & 8) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 480);
      if ( v14 == a2 )
      {
        if ( *(_DWORD **)(v14 + 960) != a3 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v13, v13, v10);
          v11 = a3[605];
        }
        v11 |= 0x2000u;
        a3[605] = v11;
      }
    }
  }
  if ( (v11 & 0x1000000) == 0 )
    a3[605] = v11 & 0xFDFFFFFF;
  result = (unsigned int)a3[8];
  if ( (result & 4) == 0 )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
    {
      v18 = *(_DWORD *)(RIMCmGetButtonContact(a2) + 2420);
      if ( (v18 & 0x10) != 0 )
      {
        if ( (v18 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
        a3[605] |= 0x10u;
      }
      if ( (v18 & 0x20) != 0 )
      {
        if ( (v18 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
        a3[605] |= 0x20u;
      }
      if ( (v18 & 0x40) != 0 )
      {
        if ( (v18 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
        a3[605] |= 0x40u;
      }
    }
    result = (unsigned int)(*(_DWORD *)(a2 + 24) - 5);
    if ( (unsigned int)result <= 1 )
      result = rimPenButtonsPolicyApply(a2, a3);
  }
  a3[605] &= ~0x1000000u;
  return result;
}
