/*
 * XREFs of ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800225F0
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800387E0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_ @ 0x1800495B0 (_lambda_d51448ba32f8ef42e59400edd4566183_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x1800383B4 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x1800392CC (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180047A98 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::FeatureStateData::RecordUsage(PSRWLOCK SRWLock)
{
  __int16 v2; // dx
  __int16 v3; // [rsp+28h] [rbp-E0h] BYREF
  char v4; // [rsp+2Ah] [rbp-DEh]
  int v5; // [rsp+2Ch] [rbp-DCh]
  _QWORD v6[3]; // [rsp+30h] [rbp-D8h]
  int v7; // [rsp+48h] [rbp-C0h] BYREF
  char v8; // [rsp+4Ch] [rbp-BCh]
  __int16 v9; // [rsp+4Eh] [rbp-BAh]
  __int64 v10; // [rsp+50h] [rbp-B8h]
  unsigned __int64 Size; // [rsp+58h] [rbp-B0h]
  _BYTE v12[24]; // [rsp+60h] [rbp-A8h] BYREF
  void *v13; // [rsp+78h] [rbp-90h]
  __int16 v14; // [rsp+80h] [rbp-88h]
  char v15; // [rsp+82h] [rbp-86h]
  int v16; // [rsp+88h] [rbp-80h] BYREF
  char v17; // [rsp+8Ch] [rbp-7Ch]
  __int16 v18; // [rsp+8Eh] [rbp-7Ah]
  char v19; // [rsp+90h] [rbp-78h]
  unsigned __int64 v20; // [rsp+98h] [rbp-70h]
  __int64 v21; // [rsp+A0h] [rbp-68h]
  __int128 v22; // [rsp+A8h] [rbp-60h]
  void *v23; // [rsp+B8h] [rbp-50h]
  __int16 v24; // [rsp+C0h] [rbp-48h]
  char v25; // [rsp+C2h] [rbp-46h]
  int v26; // [rsp+C8h] [rbp-40h] BYREF
  char v27; // [rsp+CCh] [rbp-3Ch]
  __int16 v28; // [rsp+CEh] [rbp-3Ah]
  char v29; // [rsp+D0h] [rbp-38h]
  __int128 v30; // [rsp+D8h] [rbp-30h]
  __int128 v31; // [rsp+E8h] [rbp-20h]
  void *v32; // [rsp+F8h] [rbp-10h]
  __int16 v33; // [rsp+100h] [rbp-8h]
  char v34; // [rsp+102h] [rbp-6h]
  __int64 v35; // [rsp+108h] [rbp+0h]

  v35 = -2LL;
  v7 = 0x40000;
  v8 = 1;
  v9 = 4;
  LOBYTE(v10) = 0;
  v3 = 4;
  v4 = 0;
  v5 = 0;
  LOWORD(v6[0]) = 0;
  *(_OWORD *)&v6[1] = 0LL;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v3);
  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 0x40000;
  v17 = 1;
  v18 = v2;
  v19 = 2;
  v3 = v2;
  v4 = 2;
  v5 = 0;
  LOWORD(v6[0]) = 0;
  *(_OWORD *)&v6[1] = 0LL;
  v20 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v3);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  v26 = 0x40000;
  v27 = 1;
  v28 = 0;
  v29 = 1;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v34 = 0;
  AcquireSRWLockExclusive(SRWLock);
  if ( LOBYTE(SRWLock[8].Ptr) )
    wil::details_abi::RawUsageIndex::Swap(
      (wil::details_abi::RawUsageIndex *)&v7,
      (struct wil::details_abi::RawUsageIndex *)&SRWLock[1]);
  if ( LOBYTE(SRWLock[16].Ptr) )
    wil::details_abi::RawUsageIndex::Swap(
      (wil::details_abi::RawUsageIndex *)&v16,
      (struct wil::details_abi::RawUsageIndex *)&SRWLock[9]);
  if ( LOBYTE(SRWLock[24].Ptr) )
    wil::details_abi::RawUsageIndex::Swap(
      (wil::details_abi::RawUsageIndex *)&v26,
      (struct wil::details_abi::RawUsageIndex *)&SRWLock[17]);
  ReleaseSRWLockExclusive(SRWLock);
  wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)&v7);
  if ( v32 )
    operator delete(v32);
  if ( v23 )
    operator delete(v23);
  if ( v13 )
    operator delete(v13);
}
