/*
 * XREFs of ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C0133904
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C01171E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C01337A0 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(union _SLIST_HEADER *this)
{
  struct _SLIST_ENTRY *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _SLIST_ENTRY *v7; // rbx
  union _SLIST_HEADER *v8; // rsi
  struct _SLIST_ENTRY *v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // rax

  v2 = (struct _SLIST_ENTRY *)operator new[](0x2290uLL, 0x4B677844u, PagedPool);
  v7 = v2;
  if ( v2 )
  {
    ExpInterlockedPushEntrySList(this + 2, v2);
    v8 = this + 3;
    v9 = v7 + 1;
    v10 = 8LL;
    do
    {
      ExpInterlockedPushEntrySList(v8, v9);
      v9 += 69;
      --v10;
    }
    while ( v10 );
    return 1;
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v12 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v12);
    return 0;
  }
}
