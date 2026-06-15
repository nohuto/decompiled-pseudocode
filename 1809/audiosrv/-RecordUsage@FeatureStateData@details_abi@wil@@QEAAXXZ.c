/*
 * XREFs of ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18002EAA4
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000ABA0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_ @ 0x180016340 (_lambda_2586d60923f8412dce879009b83555c3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18000A95C (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x18000B7AC (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180014388 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::FeatureStateData::RecordUsage(PSRWLOCK SRWLock)
{
  __int16 v2; // dx
  __int64 v3; // rdx
  __int64 v4; // r8
  const struct wil::details_abi::RawUsageIndex *v5; // r9
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  __int16 v8; // [rsp+28h] [rbp-E0h] BYREF
  char v9; // [rsp+2Ah] [rbp-DEh]
  int v10; // [rsp+2Ch] [rbp-DCh]
  _QWORD v11[3]; // [rsp+30h] [rbp-D8h]
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  char v13; // [rsp+4Ch] [rbp-BCh]
  __int16 v14; // [rsp+4Eh] [rbp-BAh]
  __int64 v15; // [rsp+50h] [rbp-B8h]
  __int64 Size; // [rsp+58h] [rbp-B0h]
  _BYTE v17[24]; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-90h]
  __int16 v19; // [rsp+80h] [rbp-88h]
  char v20; // [rsp+82h] [rbp-86h]
  int v21; // [rsp+88h] [rbp-80h] BYREF
  char v22; // [rsp+8Ch] [rbp-7Ch]
  __int16 v23; // [rsp+8Eh] [rbp-7Ah]
  char v24; // [rsp+90h] [rbp-78h]
  __int64 v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  __int128 v27; // [rsp+A8h] [rbp-60h]
  void *v28; // [rsp+B8h] [rbp-50h]
  __int16 v29; // [rsp+C0h] [rbp-48h]
  char v30; // [rsp+C2h] [rbp-46h]
  int v31; // [rsp+C8h] [rbp-40h] BYREF
  char v32; // [rsp+CCh] [rbp-3Ch]
  __int16 v33; // [rsp+CEh] [rbp-3Ah]
  char v34; // [rsp+D0h] [rbp-38h]
  __int128 v35; // [rsp+D8h] [rbp-30h]
  __int128 v36; // [rsp+E8h] [rbp-20h]
  void *v37; // [rsp+F8h] [rbp-10h]
  __int16 v38; // [rsp+100h] [rbp-8h]
  char v39; // [rsp+102h] [rbp-6h]
  __int64 v40; // [rsp+108h] [rbp+0h]

  v40 = -2LL;
  v12 = 0x40000;
  v13 = 1;
  v14 = 4;
  LOBYTE(v15) = 0;
  v8 = 4;
  v9 = 0;
  v10 = 0;
  LOWORD(v11[0]) = 0;
  *(_OWORD *)&v11[1] = 0LL;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v8);
  memset(v17, 0, sizeof(v17));
  lpMem = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = 0x40000;
  v22 = 1;
  v23 = v2;
  v24 = 2;
  v8 = v2;
  v9 = 2;
  v10 = 0;
  LOWORD(v11[0]) = 0;
  *(_OWORD *)&v11[1] = 0LL;
  v25 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v8);
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 0;
  v31 = 0x40000;
  v32 = 1;
  v33 = 0;
  v34 = 1;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0;
  v39 = 0;
  AcquireSRWLockExclusive(SRWLock);
  if ( LOBYTE(SRWLock[8].Ptr) )
    wil::details_abi::RawUsageIndex::Swap(
      (wil::details_abi::RawUsageIndex *)&v12,
      (struct wil::details_abi::RawUsageIndex *)&SRWLock[1]);
  if ( LOBYTE(SRWLock[16].Ptr) )
    wil::details_abi::RawUsageIndex::Swap(
      (wil::details_abi::RawUsageIndex *)&v21,
      (struct wil::details_abi::RawUsageIndex *)&SRWLock[9]);
  if ( LOBYTE(SRWLock[24].Ptr) )
    wil::details_abi::RawUsageIndex::Swap(
      (wil::details_abi::RawUsageIndex *)&v31,
      (struct wil::details_abi::RawUsageIndex *)&SRWLock[17]);
  ReleaseSRWLockExclusive(SRWLock);
  wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)&v12, v3, v4, v5);
  if ( v37 )
    operator delete(v37);
  if ( v28 )
    operator delete(v28);
  v6 = lpMem;
  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
  }
}
