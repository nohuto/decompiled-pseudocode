/*
 * XREFs of VidSchConfirmToken @ 0x1C0016C10
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0017520 (VidSchiTryEnterIndependentFlip.c)
 */

void __fastcall VidSchConfirmToken(
        unsigned __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-50h]
  _QWORD v13[2]; // [rsp+28h] [rbp-48h] BYREF
  char v14; // [rsp+38h] [rbp-38h]
  _BYTE v15[48]; // [rsp+40h] [rbp-30h] BYREF

  if ( a2 != -1 )
  {
    v6 = *a4;
    v8 = a2;
    v9 = (unsigned int)a3;
    v12 = *a4;
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v15, a1 + 206, a3, 0);
    v14 = 0;
    v13[1] = v13;
    v13[0] = v13;
    v10 = *(int *)(a1[v8 + 322] + 216 * v9 + 164);
    if ( (int)v10 <= -1 )
      v11 = 0LL;
    else
      v11 = a1[338] + 136 * v10;
    if ( !v11
      || *(_DWORD *)(v11 + 112) != 1
      || !*(_BYTE *)(v11 + 97)
      || *(_OWORD *)v11 != __PAIR128__(a5, __PAIR64__(HIDWORD(v12), v6))
      || *(_QWORD *)(v11 + 88) != a6
      || (*(_BYTE *)(v11 + 98) = 1,
          VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)v13, (struct _VIDSCH_GLOBAL *)a1, v8, v9),
          !v14) )
    {
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v13);
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v15);
  }
}
