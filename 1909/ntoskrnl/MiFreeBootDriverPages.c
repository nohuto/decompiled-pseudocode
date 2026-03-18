/*
 * XREFs of MiFreeBootDriverPages @ 0x1409EFA54
 * Callers:
 *     MiFreeInitializationCode @ 0x14071290C (MiFreeInitializationCode.c)
 *     MiHandleBootImage @ 0x1409EF61C (MiHandleBootImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

unsigned __int64 __fastcall MiFreeBootDriverPages(void *a1, unsigned __int64 a2, __int64 a3, int a4, int *a5)
{
  int *v5; // rbx
  PVOID v8; // r14
  int v9; // r15d
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG_PTR v14; // r12
  __int64 v15; // rdx
  int v16; // r8d
  ULONG_PTR v17; // r11
  bool v19; // zf
  _QWORD v22[24]; // [rsp+30h] [rbp-108h] BYREF

  v5 = a5;
  v8 = a1;
  v9 = a4;
  memset(v22, 0, 0xB8uLL);
  if ( !a5 )
  {
    v22[3] = 0LL;
    v5 = (int *)v22;
    LODWORD(v22[1]) = 20;
  }
  v10 = a3;
  MiInsertTbFlushEntry((__int64)v5, (__int64)(a2 << 25) >> 16, a3, 0);
  if ( a3 )
  {
    while ( 1 )
    {
      v14 = 48
          * (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 12) & 0xFFFFFFFFFLL)
                       - 0x58000000000LL
                       + 40) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v16 = 1;
          if ( !HIBYTE(word_1404658EC) )
          {
            v19 = (v15 & 1) == 0;
            goto LABEL_21;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
          v19 = (v15 & 1) == 0;
LABEL_21:
          if ( !v19 )
            v15 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v15;
      if ( v16 )
        MiWritePteShadow(a2);
      *(_BYTE *)(v17 + 35) &= ~8u;
      MiLockAndDecrementShareCount(v17, 1);
      MiLockAndDecrementShareCount(v14, 0);
      a2 += 8LL;
      if ( !--a3 )
      {
        v8 = a1;
        v9 = a4;
        break;
      }
    }
  }
  if ( v5 == (int *)v22 )
    MiFlushTbList(v5, v11, v12, v13);
  if ( v8 == PsNtosImageBase || v8 == PsHalImageBase )
  {
    qword_140466730 -= v10;
  }
  else if ( v9 )
  {
    _InterlockedExchangeAdd(&dword_140466750, -(int)v10);
  }
  MiReturnResidentAvailable(v10);
  return MiReturnCommit((__int64)&MiSystemPartition, v10);
}
