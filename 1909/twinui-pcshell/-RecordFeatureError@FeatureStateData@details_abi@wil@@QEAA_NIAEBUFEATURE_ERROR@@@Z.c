/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x180121744
 * Callers:
 *     ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x1801218AC (-RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800D3C1C (-MemoryFree@@YAXPEAX@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180121C20 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x180122998 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180123CE8 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        PSRWLOCK SRWLock,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  _BYTE *v4; // rdi
  _BYTE *v7; // rsi
  void *v8; // rbx
  char *v9; // r14
  unsigned __int64 v10; // rdx
  bool v11; // al
  bool v12; // di
  unsigned __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v16; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v17; // [rsp+48h] [rbp-B8h]
  char *v18; // [rsp+50h] [rbp-B0h]
  void *v19; // [rsp+58h] [rbp-A8h]
  _BYTE v20[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v21[8]; // [rsp+160h] [rbp+60h] BYREF

  v4 = v20;
  v16 = v20;
  v7 = v20;
  v8 = 0LL;
  v17 = v20;
  v14 = 0LL;
  v9 = (char *)v21;
  v18 = (char *)v21;
  v19 = 0LL;
  if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v14, v20, 0x100uLL) )
  {
    if ( v14 >= 0x100 )
    {
      v10 = 512LL;
      if ( v14 >= 0x200 )
        v10 = v14;
      v11 = wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&v16, v10);
      v8 = v19;
      if ( !v11 )
        goto LABEL_8;
      v9 = v18;
      v7 = v17;
      v4 = v16;
    }
    if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v14, v4, v9 - v4) )
    {
LABEL_8:
      v12 = 0;
      goto LABEL_13;
    }
  }
  if ( &v4[v14] <= v9 )
    v7 = &v4[v14];
  AcquireSRWLockExclusive(SRWLock);
  v15 = a2;
  v12 = wil::details_abi::RawUsageIndex::RecordUsage(
          (wil::details_abi::RawUsageIndex *)&SRWLock[17],
          &v15,
          4uLL,
          v4,
          v7 - v4,
          1u);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
LABEL_13:
  if ( v8 )
    MemoryFree(v8);
  return v12;
}
