/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x1800C0C2C
 * Callers:
 *     ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x1800C0D8C (-RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18004825C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800C0EC4 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x1800C1324 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        PSRWLOCK SRWLock,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  _BYTE *v4; // rdi
  _BYTE *v7; // rsi
  void *v8; // rbx
  _QWORD *v9; // r14
  bool v10; // di
  unsigned __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  void *v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v15; // [rsp+48h] [rbp-B8h]
  _QWORD *v16; // [rsp+50h] [rbp-B0h]
  void *v17; // [rsp+58h] [rbp-A8h]
  _BYTE v18[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[8]; // [rsp+160h] [rbp+60h] BYREF

  v4 = v18;
  v14 = v18;
  v7 = v18;
  v8 = 0LL;
  v15 = v18;
  v12 = 0LL;
  v9 = v19;
  v16 = v19;
  v17 = 0LL;
  if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v12, v18, 0x100uLL) )
  {
    if ( !wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&v14, v12)
      || (v4 = v14, v9 = v16, !wil::details_abi::SerializedFailure::Serialize(a3, &v12, v14, (char *)v16 - (_BYTE *)v14)) )
    {
      v8 = v17;
      v10 = 0;
      goto LABEL_9;
    }
    v8 = v17;
    v7 = v15;
  }
  if ( &v4[v12] <= (_BYTE *)v9 )
    v7 = &v4[v12];
  AcquireSRWLockExclusive(SRWLock);
  v13 = a2;
  v10 = wil::details_abi::RawUsageIndex::RecordUsage(
          (wil::details_abi::RawUsageIndex *)&SRWLock[17],
          &v13,
          4uLL,
          v4,
          v7 - v4,
          1u);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
LABEL_9:
  if ( v8 )
    operator delete(v8);
  return v10;
}
