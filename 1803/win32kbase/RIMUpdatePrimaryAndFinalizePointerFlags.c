/*
 * XREFs of RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01003F8
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     RIMGetPointerInputType @ 0x1C00ECA34 (RIMGetPointerInputType.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00EDF20 (RIMUpdatePrimaryDevice.c)
 *     rimFinalizePointerFlags @ 0x1C010248C (rimFinalizePointerFlags.c)
 *     rimIsPointerDevicePrimaryContactDown @ 0x1C01027C4 (rimIsPointerDevicePrimaryContactDown.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01067A0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0106D50 (RIMCmIsContactSuppressed.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C0140EB0 (ApiSetIsPointerInputTypeRedirected.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall RIMUpdatePrimaryAndFinalizePointerFlags(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r14
  __int64 v3; // r13
  int v4; // r12d
  __int64 active; // rax
  int v7; // esi
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // xmm2
  __int64 v13; // xmm1_8
  __int64 v14; // rax
  int IsPointerDevicePrimaryContactDown; // eax
  __int64 v16; // rcx
  _DWORD *v17; // rbx
  BOOL v18; // r13d
  BOOL v19; // r15d
  int v20; // eax
  unsigned int v21; // eax
  int IsPointerInputTypeRedirected; // eax
  __int64 v23; // rdx
  int v24; // r15d
  int v25; // r8d
  BOOL v26; // ecx
  BOOL v27; // r14d
  __int64 v28; // rcx
  int v29; // ebx
  __int128 v31; // [rsp+20h] [rbp-50h] BYREF
  __int64 v32; // [rsp+30h] [rbp-40h]
  __int128 v33; // [rsp+38h] [rbp-38h] BYREF
  __int64 v34; // [rsp+48h] [rbp-28h]
  _BYTE v35[32]; // [rsp+50h] [rbp-20h] BYREF
  int IsContactDeliveringPointerData; // [rsp+B8h] [rbp+48h]

  v2 = 0LL;
  v3 = a1;
  IsContactDeliveringPointerData = 0;
  v4 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v33, a2);
  v7 = 1;
  v8 = *(_QWORD *)(active + 16);
  v31 = *(_OWORD *)active;
  v32 = v8;
  while ( 1 )
  {
    v9 = RIMCmActiveContactsEnd((__int64)v35, a2);
    v12 = *(_OWORD *)v9;
    v13 = *(_QWORD *)(v9 + 16);
    v14 = *(_QWORD *)v9;
    v34 = v13;
    v33 = v12;
    LOBYTE(IsPointerDevicePrimaryContactDown) = (_QWORD)v31 != v14 || DWORD2(v31) != DWORD2(v33) || v32 != v34;
    if ( !(_BYTE)IsPointerDevicePrimaryContactDown )
      break;
    v16 = *(unsigned int *)(v32 + 2604);
    v17 = (_DWORD *)(v32 - 16);
    v18 = (v16 & 2) == 0 && (v17[601] & 2) != 0;
    v19 = (v16 & 4) == 0 && (v17[601] & 4) != 0;
    v20 = v17[8];
    if ( (v20 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v10);
      v20 = v17[8];
    }
    if ( (v20 & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v10);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v17) )
      ++v4;
    if ( (v17[580] & 1) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 920) && (v18 || v19) && !v2 && !(unsigned int)RIMCmIsContactSuppressed(v17) )
      {
        IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v17);
        v2 = v17;
      }
      v3 = a1;
      rimFinalizePointerFlags(a1, a2, v17);
    }
    else
    {
      v3 = a1;
    }
    RIMCmActiveContactsNext(a2, &v31);
  }
  if ( v2 && (!v4 || v4 == 1 && IsContactDeliveringPointerData) )
  {
    if ( *(_QWORD *)(a2 + 920) )
      LOBYTE(IsPointerDevicePrimaryContactDown) = MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    v2[8] |= 8u;
    *(_QWORD *)(a2 + 920) = v2;
  }
  if ( *(_QWORD *)(a2 + 920) )
  {
    v21 = RIMGetPointerInputType(a2);
    IsPointerInputTypeRedirected = ApiSetIsPointerInputTypeRedirected(v21);
    v23 = *(_QWORD *)(a2 + 920);
    v24 = IsPointerInputTypeRedirected;
    v25 = *(_DWORD *)(v23 + 2620);
    v26 = (v25 & 2) == 0 && (*(_DWORD *)(v23 + 2404) & 2) != 0;
    IsPointerDevicePrimaryContactDown = (v25 & 4) == 0 && (*(_DWORD *)(v23 + 2404) & 4) != 0;
    v27 = v26 || IsPointerDevicePrimaryContactDown;
    v28 = *(_QWORD *)(v3 + 464);
    if ( v28 )
    {
      v29 = RIMGetPointerInputType(v28);
      IsPointerDevicePrimaryContactDown = RIMGetPointerInputType(a2);
      if ( (v29 == IsPointerDevicePrimaryContactDown
         || (IsPointerDevicePrimaryContactDown = rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(v3 + 464))) != 0
         || (IsPointerDevicePrimaryContactDown = rimIsPointerDevicePrimaryContactDown(a2)) == 0)
        && (!*(_DWORD *)(v3 + 472) || v24) )
      {
        v7 = 0;
      }
    }
    if ( v27 && v7 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 920) + 2404LL) |= 0x2000u;
      LOBYTE(IsPointerDevicePrimaryContactDown) = RIMUpdatePrimaryDevice(v3, a2);
    }
  }
  return IsPointerDevicePrimaryContactDown;
}
