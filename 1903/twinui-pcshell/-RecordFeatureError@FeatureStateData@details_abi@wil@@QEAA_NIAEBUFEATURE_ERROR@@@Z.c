/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x180102734
 * Callers:
 *     ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x18010289C (-RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18010133C (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180102C10 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x180103988 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180104CD8 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        PSRWLOCK SRWLock,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  _BYTE *v4; // rdi
  _BYTE *v7; // rsi
  wil::details *v8; // rbx
  char *v9; // r14
  unsigned __int64 v10; // rdx
  bool v11; // al
  void *v12; // rdx
  bool v13; // di
  unsigned __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v17; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v18; // [rsp+48h] [rbp-B8h]
  char *v19; // [rsp+50h] [rbp-B0h]
  wil::details *v20; // [rsp+58h] [rbp-A8h]
  _BYTE v21[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v22[8]; // [rsp+160h] [rbp+60h] BYREF

  v4 = v21;
  v17 = v21;
  v7 = v21;
  v8 = 0LL;
  v18 = v21;
  v15 = 0LL;
  v9 = (char *)v22;
  v19 = (char *)v22;
  v20 = 0LL;
  if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v15, v21, 0x100uLL) )
  {
    if ( v15 >= 0x100 )
    {
      v10 = 512LL;
      if ( v15 >= 0x200 )
        v10 = v15;
      v11 = wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&v17, v10);
      v8 = v20;
      if ( !v11 )
        goto LABEL_8;
      v9 = v19;
      v7 = v18;
      v4 = v17;
    }
    if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v15, v4, v9 - v4) )
    {
LABEL_8:
      v13 = 0;
      goto LABEL_13;
    }
  }
  if ( &v4[v15] <= v9 )
    v7 = &v4[v15];
  AcquireSRWLockExclusive(SRWLock);
  v16 = a2;
  v13 = wil::details_abi::RawUsageIndex::RecordUsage(
          (wil::details_abi::RawUsageIndex *)&SRWLock[17],
          &v16,
          4uLL,
          v4,
          v7 - v4,
          1u);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
LABEL_13:
  if ( v8 )
    wil::details::FreeProcessHeap(v8, v12);
  return v13;
}
