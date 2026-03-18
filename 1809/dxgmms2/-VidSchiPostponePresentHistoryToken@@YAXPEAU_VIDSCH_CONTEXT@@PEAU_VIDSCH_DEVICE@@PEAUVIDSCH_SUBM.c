/*
 * XREFs of ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002A610
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C000F5F0 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     memmove @ 0x1C001A680 (memmove.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

void __fastcall VidSchiPostponePresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct _VIDSCH_DEVICE *a2,
        struct VIDSCH_SUBMIT_DATA2 *a3,
        union _ULARGE_INTEGER a4,
        struct _VIDSCH_GLOBAL *a5)
{
  __int64 v6; // r13
  union _ULARGE_INTEGER v8; // rbx
  char LowPart; // r10
  __int64 v12; // rsi
  char v13; // dl
  _QWORD *PoolWithTag; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned int v21; // [rsp+70h] [rbp+18h]

  v6 = *((unsigned int *)a3 + 31);
  v8 = a4;
  LowPart = -1;
  if ( _BitScanForward((unsigned int *)&a4, *((_DWORD *)a3 + 140) & 0x3FF) )
    LowPart = a4.LowPart;
  v12 = 0LL;
  v13 = 0;
  if ( LowPart != -1 )
    v13 = LowPart;
  v21 = v13;
  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  *((_DWORD *)a5 + 35) * ((*((_DWORD *)a5 + 16) << 6) + ((8 * *((_DWORD *)a5 + 16) + 191) & 0xFFFFFFF8))
                + 8 * (*((_DWORD *)a5 + 16) + 77),
                  0x30626956u);
  v17 = WdLogNewEntry5_WdPresentTokenEvent(v16, v15);
  *(_QWORD *)(v17 + 24) = *((_QWORD *)a3 + 14);
  WdLogEvent5_WdPresentTokenEvent(v17);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x328uLL);
    memmove(PoolWithTag + 5, a3, *((unsigned int *)a3 + 135));
    v18 = PoolWithTag[10];
    if ( v18 )
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 4));
    PoolWithTag[2] = v8.QuadPart;
    PoolWithTag[3] = a1;
    PoolWithTag[4] = a2;
    v19 = *(int *)(*((_QWORD *)a5 + v6 + 322) + 216LL * v21 + 164);
    if ( (int)v19 > -1 )
      v12 = *((_QWORD *)a5 + 338) + 136 * v19;
    v20 = *(_QWORD **)(v12 + 128);
    if ( *v20 != v12 + 120 )
      __fastfail(3u);
    *PoolWithTag = v12 + 120;
    PoolWithTag[1] = v20;
    *v20 = PoolWithTag;
    *(_QWORD *)(v12 + 128) = PoolWithTag;
  }
}
