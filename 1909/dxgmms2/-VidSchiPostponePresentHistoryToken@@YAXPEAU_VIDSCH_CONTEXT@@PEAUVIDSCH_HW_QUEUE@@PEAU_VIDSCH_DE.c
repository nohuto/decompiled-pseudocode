/*
 * XREFs of ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002B058
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0012E80 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     memmove @ 0x1C0018640 (memmove.c)
 *     memset @ 0x1C0018980 (memset.c)
 */

void __fastcall VidSchiPostponePresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_HW_QUEUE *a2,
        struct _VIDSCH_DEVICE *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4,
        union _ULARGE_INTEGER a5,
        struct _VIDSCH_GLOBAL *a6)
{
  __int64 v7; // r13
  bool v9; // zf
  int v10; // r10d
  char v13; // r11
  __int64 v14; // rdi
  char v15; // dl
  union _ULARGE_INTEGER *PoolWithTag; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  union _ULARGE_INTEGER v20; // rax
  __int64 v21; // rdx
  ULONGLONG v22; // rdi
  union _ULARGE_INTEGER **v23; // rax
  unsigned int v24; // [rsp+78h] [rbp+20h]

  v7 = *((unsigned int *)a4 + 31);
  v9 = !_BitScanForward((unsigned int *)&v10, *((_DWORD *)a4 + 138) & 0x3FF);
  v13 = -1;
  if ( !v9 )
    v13 = v10;
  v14 = 0LL;
  v15 = 0;
  if ( v13 != -1 )
    v15 = v13;
  v24 = v15;
  PoolWithTag = (union _ULARGE_INTEGER *)ExAllocatePoolWithTag(
                                           (POOL_TYPE)512,
                                           *((_DWORD *)a6 + 35)
                                         * ((*((_DWORD *)a6 + 16) << 6) + ((8 * *((_DWORD *)a6 + 16) + 191) & 0xFFFFFFF8))
                                         + 8 * (*((_DWORD *)a6 + 16) + 77),
                                           0x30626956u);
  v19 = WdLogNewEntry5_WdPresentTokenEvent(v18, v17);
  *(_QWORD *)(v19 + 24) = *((_QWORD *)a4 + 14);
  WdLogEvent5_WdPresentTokenEvent(v19);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x328uLL);
    memmove(&PoolWithTag[6], a4, *((unsigned int *)a4 + 135));
    v20 = PoolWithTag[11];
    if ( v20.QuadPart )
      _InterlockedIncrement((volatile signed __int32 *)(v20.QuadPart + 4));
    PoolWithTag[2] = a5;
    PoolWithTag[3].QuadPart = (ULONGLONG)a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 196);
    PoolWithTag[4].QuadPart = (ULONGLONG)a2;
    PoolWithTag[5].QuadPart = (ULONGLONG)a3;
    if ( a3 )
      ++*((_DWORD *)a3 + 319);
    ++*((_DWORD *)a6 + 181);
    v21 = *(int *)(*((_QWORD *)a6 + v7 + 322) + 216LL * v24 + 172);
    if ( (int)v21 > -1 )
      v14 = *((_QWORD *)a6 + 338) + 136 * v21;
    v22 = v14 + 120;
    v23 = *(union _ULARGE_INTEGER ***)(v22 + 8);
    if ( *v23 != (union _ULARGE_INTEGER *)v22 )
      __fastfail(3u);
    PoolWithTag->QuadPart = v22;
    PoolWithTag[1].QuadPart = (ULONGLONG)v23;
    *v23 = PoolWithTag;
    *(_QWORD *)(v22 + 8) = PoolWithTag;
  }
}
