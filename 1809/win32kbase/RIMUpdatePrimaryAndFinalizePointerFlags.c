/*
 * XREFs of RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C012886C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C0122F24 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x1C0117D70 (RIMGetPointerInputType.c)
 *     RIMUpdatePrimaryDevice @ 0x1C01192B0 (RIMUpdatePrimaryDevice.c)
 *     rimFinalizePointerFlags @ 0x1C012ABF8 (rimFinalizePointerFlags.c)
 *     rimIsPointerDevicePrimaryContactDown @ 0x1C012B068 (rimIsPointerDevicePrimaryContactDown.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C012E614 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C012E6A8 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C012E6FC (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C012EBC8 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C012EBF4 (RIMCmIsContactSuppressed.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C0164458 (ApiSetIsPointerInputTypeRedirected.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUpdatePrimaryAndFinalizePointerFlags(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v3; // r15
  _DWORD *v4; // r14
  int v5; // r12d
  __int64 active; // rax
  int v8; // esi
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rbx
  BOOL v20; // r15d
  int v21; // eax
  unsigned int v22; // eax
  int IsPointerInputTypeRedirected; // eax
  __int64 v24; // rdx
  int v25; // r12d
  int v26; // r8d
  int v27; // ecx
  int v28; // r14d
  __int64 v29; // rcx
  int v30; // ebx
  __int128 v31; // [rsp+20h] [rbp-50h] BYREF
  __int64 v32; // [rsp+30h] [rbp-40h]
  __int128 v33; // [rsp+38h] [rbp-38h] BYREF
  __int64 v34; // [rsp+48h] [rbp-28h]
  _BYTE v35[32]; // [rsp+50h] [rbp-20h] BYREF
  int IsContactDeliveringPointerData; // [rsp+B8h] [rbp+48h]

  v2 = 0;
  v3 = a1;
  IsContactDeliveringPointerData = 0;
  v4 = 0LL;
  v5 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v33, a2);
  v8 = 1;
  v9 = *(_QWORD *)(active + 16);
  v31 = *(_OWORD *)active;
  v32 = v9;
  while ( 1 )
  {
    v10 = RIMCmActiveContactsEnd(v35, a2);
    v14 = *(_OWORD *)v10;
    v15 = *(_QWORD *)(v10 + 16);
    v16 = *(_QWORD *)v10;
    v34 = v15;
    v33 = v14;
    if ( (_QWORD)v31 == v16 )
    {
      result = DWORD2(v33);
      if ( DWORD2(v31) == DWORD2(v33) && v32 == v34 )
        break;
    }
    v18 = *(unsigned int *)(v32 + 2620);
    v19 = (_DWORD *)(v32 - 16);
    LOBYTE(v11) = 2;
    if ( (v18 & 2) == 0 && (v19[605] & 2) != 0 )
      v2 = 1;
    v20 = (v18 & 4) == 0 && (v19[605] & 4) != 0;
    v21 = v19[8];
    if ( (v21 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v11, v13);
      v21 = v19[8];
    }
    if ( (v21 & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v11, v13);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v19) )
      ++v5;
    if ( (v19[585] & 1) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 952) && (v2 || v20) && !v4 && !(unsigned int)RIMCmIsContactSuppressed(v19) )
      {
        IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v19);
        v4 = v19;
      }
      v3 = a1;
      rimFinalizePointerFlags(a1, a2, v19);
    }
    else
    {
      v3 = a1;
    }
    RIMCmActiveContactsNext(a2, &v31);
    v2 = 0;
  }
  if ( v4 && (!v5 || v5 == 1 && IsContactDeliveringPointerData) )
  {
    if ( *(_QWORD *)(a2 + 952) )
      result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v4[8] |= 8u;
    *(_QWORD *)(a2 + 952) = v4;
  }
  if ( *(_QWORD *)(a2 + 952) )
  {
    v22 = RIMGetPointerInputType(a2);
    IsPointerInputTypeRedirected = ApiSetIsPointerInputTypeRedirected(v22);
    v24 = *(_QWORD *)(a2 + 952);
    v25 = IsPointerInputTypeRedirected;
    v26 = *(_DWORD *)(v24 + 2636);
    if ( (v26 & 2) != 0 || (v27 = 1, (*(_DWORD *)(v24 + 2420) & 2) == 0) )
      v27 = 0;
    if ( (v26 & 4) != 0 || (result = 1LL, (*(_DWORD *)(v24 + 2420) & 4) == 0) )
      result = 0LL;
    if ( v27 || (v28 = 0, (_DWORD)result) )
      v28 = 1;
    v29 = *(_QWORD *)(v3 + 480);
    if ( v29 )
    {
      v30 = RIMGetPointerInputType(v29);
      result = RIMGetPointerInputType(a2);
      if ( v30 == (_DWORD)result
        || (result = rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(v3 + 480)), (_DWORD)result)
        || (result = rimIsPointerDevicePrimaryContactDown(a2), !(_DWORD)result) )
      {
        if ( !*(_DWORD *)(v3 + 488) || v25 )
          v8 = 0;
      }
    }
    if ( v28 && v8 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 952) + 2420LL) |= 0x2000u;
      return RIMUpdatePrimaryDevice(v3, a2);
    }
  }
  return result;
}
