/*
 * XREFs of ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C01A49E8
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C006CB74 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C01A12C8 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000973C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C000AC58 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C000CF38 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0010390 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::EnableMMCSS(
        DirectComposition::CBatchSharedMemoryPool ***this,
        int a2)
{
  char *v4; // rbx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  void *v13; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int16 v14[72]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int16 v15[8]; // [rsp+C0h] [rbp-38h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-28h]
  int v17; // [rsp+D8h] [rbp-20h]
  wchar_t v18; // [rsp+DCh] [rbp-1Ch]

  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)this);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(this[21], 0x9CuLL, &v13) )
    return 3221225473LL;
  v4 = (char *)v13;
  *(_DWORD *)v13 = 156;
  memset(v14, 0, sizeof(v14));
  if ( a2 )
  {
    v17 = *(_DWORD *)L"er";
    v16 = *(_QWORD *)L"anager";
    *(_OWORD *)v15 = *(_OWORD *)L"Window Manager";
    v18 = aWindowManager[14];
    StringCchCopyNW((char *)v14, 64LL, (char *)v15, 0xFuLL);
    *(_DWORD *)&v14[66] = 0;
  }
  *((_DWORD *)v4 + 1) = 348;
  v5 = *(_OWORD *)&v14[8];
  *(_OWORD *)(v4 + 12) = *(_OWORD *)v14;
  v6 = *(_OWORD *)&v14[16];
  *(_OWORD *)(v4 + 28) = v5;
  v7 = *(_OWORD *)&v14[24];
  *(_OWORD *)(v4 + 44) = v6;
  v8 = *(_OWORD *)&v14[32];
  *(_OWORD *)(v4 + 60) = v7;
  v9 = *(_OWORD *)&v14[40];
  *(_OWORD *)(v4 + 76) = v8;
  v10 = *(_OWORD *)&v14[48];
  *(_OWORD *)(v4 + 92) = v9;
  v11 = *(_OWORD *)&v14[64];
  *(_OWORD *)(v4 + 108) = v10;
  *(_OWORD *)(v4 + 124) = *(_OWORD *)&v14[56];
  *(_OWORD *)(v4 + 140) = v11;
  return DirectComposition::CApplicationChannel::Commit((DirectComposition::CApplicationChannel *)this, 0LL, 1, 0LL);
}
