/*
 * XREFs of rimFinalizePointerFlags @ 0x1C010248C
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01003F8 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     rimPenButtonsPolicyApply @ 0x1C010293C (rimPenButtonsPolicyApply.c)
 *     RIMCmGetButtonContact @ 0x1C0106CD0 (RIMCmGetButtonContact.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C0106CE8 (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0106D50 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C0106D9C (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFinalizePointerFlags(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r10d
  int v5; // r9d
  bool v8; // si
  bool v9; // di
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // esi

  v3 = a3[655];
  v5 = a3[601];
  v8 = (v5 & 4) != 0 && (v3 & 4) == 0;
  v9 = (v5 & 4) == 0 && (v3 & 4) != 0;
  if ( !(unsigned int)RIMCmIsContactDeliveringPointerData(a3)
    && (unsigned int)RIMCmIsContactSuppressed(a3)
    && (unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(a3) )
  {
    a3[601] &= 0x3000000u;
    v10 = a3[601];
  }
  else
  {
    if ( (a3[2] & 0x10) == 0 )
    {
      a3[601] |= 0x4000u;
      a3[8] |= 1u;
    }
    if ( v8 )
      v11 = 0x10000;
    else
      v11 = v9 ? 0x40000 : 0x20000;
    v12 = (unsigned int)v11 | a3[601];
    a3[601] = v12;
    v10 = v12;
    if ( (a3[8] & 8) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 464);
      if ( v13 == a2 )
      {
        if ( *(_DWORD **)(v13 + 920) != a3 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v12, v12);
          v10 = a3[601];
        }
        v10 |= 0x2000u;
        a3[601] = v10;
      }
    }
  }
  if ( (v10 & 0x1000000) == 0 )
    a3[601] = v10 & 0xFDFFFFFF;
  result = (unsigned int)a3[8];
  if ( (result & 4) == 0 )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
    {
      v17 = *(_DWORD *)(RIMCmGetButtonContact(a2) + 2404);
      if ( (v17 & 0x10) != 0 )
      {
        if ( (v17 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
        a3[601] |= 0x10u;
      }
      if ( (v17 & 0x20) != 0 )
      {
        if ( (v17 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
        a3[601] |= 0x20u;
      }
      if ( (v17 & 0x40) != 0 )
      {
        if ( (v17 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
        a3[601] |= 0x40u;
      }
    }
    result = (unsigned int)(*(_DWORD *)(a2 + 24) - 5);
    if ( (unsigned int)result <= 1 )
      result = rimPenButtonsPolicyApply(a2, a3);
  }
  a3[601] &= ~0x1000000u;
  return result;
}
