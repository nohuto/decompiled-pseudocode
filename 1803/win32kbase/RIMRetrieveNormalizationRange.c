/*
 * XREFs of RIMRetrieveNormalizationRange @ 0x1C0108568
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C00EFEF4 (RIMPopulatePointerDevice.c)
 * Callees:
 *     RIMRetrieveRealAngularPhysicalValues @ 0x1C010869C (RIMRetrieveRealAngularPhysicalValues.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRetrieveNormalizationRange(__int64 a1, __int16 *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  unsigned __int16 v6; // r14
  _WORD *v7; // rcx
  __int16 v8; // r8
  __int64 v9; // rdx
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int128 v15; // xmm1
  __int128 v17; // [rsp+20h] [rbp-50h] BYREF
  __int128 v18; // [rsp+30h] [rbp-40h]
  __int128 v19; // [rsp+40h] [rbp-30h]
  __int128 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+98h] [rbp+28h] BYREF
  int v23; // [rsp+A0h] [rbp+30h] BYREF

  v3 = 0;
  v6 = a1;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v7 = &unk_1C019FEC2;
  v8 = *a2;
  v9 = 0LL;
  v22 = *((_DWORD *)a2 + 12);
  v23 = *((_DWORD *)a2 + 13);
  while ( *(v7 - 1) != v8 || *v7 != a2[28] )
  {
    v9 = (unsigned int)(v9 + 1);
    v7 += 6;
    if ( (unsigned int)v9 >= 5 )
      return v3;
  }
  v3 = 1;
  *a3 = *(_QWORD *)((char *)&unk_1C019FEC4 + 12 * v9);
  if ( v6 >= 0x1D3Du && (v6 <= 0x1D3Eu || v6 == 7489 || v6 == 19775) && *((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 12) > 0 )
  {
    v10 = *((_OWORD *)a2 + 1);
    v17 = *(_OWORD *)a2;
    v19 = *((_OWORD *)a2 + 2);
    v11 = *((_QWORD *)a2 + 8);
    v18 = v10;
    v12 = *((_OWORD *)a2 + 3);
    v21 = v11;
    v20 = v12;
    RIMRetrieveRealAngularPhysicalValues(&v17, &v22);
    v13 = *((_OWORD *)a2 + 1);
    v17 = *(_OWORD *)a2;
    v19 = *((_OWORD *)a2 + 2);
    v14 = *((_QWORD *)a2 + 8);
    v18 = v13;
    v15 = *((_OWORD *)a2 + 3);
    v21 = v14;
    v20 = v15;
    RIMRetrieveRealAngularPhysicalValues(&v17, &v23);
  }
  return v3;
}
