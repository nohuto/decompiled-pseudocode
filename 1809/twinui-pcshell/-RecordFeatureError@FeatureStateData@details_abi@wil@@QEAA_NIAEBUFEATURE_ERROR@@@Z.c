/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x1800E0320
 * Callers:
 *     ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x1800E0490 (-RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800DF460 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800E0804 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x1800E0FC8 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800E262C (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        PSRWLOCK SRWLock,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  char *v4; // r14
  wil::details *v6; // rbx
  _BYTE *v7; // rdi
  _BYTE *v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  bool v11; // al
  void *v12; // rdx
  bool v13; // di
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v17; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v18; // [rsp+48h] [rbp-B8h]
  char *v19; // [rsp+50h] [rbp-B0h]
  wil::details *v20; // [rsp+58h] [rbp-A8h]
  _BYTE v21[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v22[8]; // [rsp+160h] [rbp+60h] BYREF

  v15 = a2;
  v4 = (char *)v22;
  v19 = (char *)v22;
  v6 = 0LL;
  v7 = v21;
  v16 = 0LL;
  v8 = v21;
  v17 = v21;
  v9 = (char *)v22 - v21;
  v18 = v21;
  v20 = 0LL;
  if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v16, v21, (char *)v22 - v21) )
  {
    if ( v16 >= v9 )
    {
      v10 = 2 * v9;
      if ( v16 >= 2 * v9 )
        v10 = v16;
      v11 = wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&v17, v10);
      v6 = v20;
      if ( !v11 )
        goto LABEL_8;
      v4 = v19;
      v8 = v18;
      v7 = v17;
    }
    if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v16, v7, v4 - v7) )
    {
LABEL_8:
      v13 = 0;
      goto LABEL_13;
    }
  }
  if ( &v7[v16] <= v4 )
    v8 = &v7[v16];
  AcquireSRWLockExclusive(SRWLock);
  v13 = wil::details_abi::RawUsageIndex::RecordUsage(
          (wil::details_abi::RawUsageIndex *)&SRWLock[17],
          &v15,
          4uLL,
          v7,
          v8 - v7,
          1u);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
LABEL_13:
  if ( v6 )
    wil::details::FreeProcessHeap(v6, v12);
  return v13;
}
