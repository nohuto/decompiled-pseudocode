/*
 * XREFs of ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180073718
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __m128i *v3; // rax

  *((_QWORD *)this + 3246) = *(_QWORD *)(*((_QWORD *)this + 3237) + 312LL);
  *(_QWORD *)((char *)this + 25948) = *(_QWORD *)(*((_QWORD *)this + 3237) + 304LL);
  *(_QWORD *)((char *)this + 25956) = *(_QWORD *)(*((_QWORD *)this + 3237) + 16LL);
  *((_DWORD *)this + 6496) = *(_DWORD *)(*((_QWORD *)this + 3237) + 32LL);
  *((_DWORD *)this + 6491) = *(_DWORD *)(*((_QWORD *)this + 3237) + 108LL);
  *(_QWORD *)((char *)this + 25988) = *(_QWORD *)(*((_QWORD *)this + 3237) + 8LL);
  *((_QWORD *)this + 3247) = **((_QWORD **)this + 3237);
  *(_QWORD *)((char *)this + 25924) = *(_QWORD *)(*((_QWORD *)this + 3237) + 1336LL);
  *(_QWORD *)((char *)this + 25932) = *(_QWORD *)(*((_QWORD *)this + 3237) + 1464LL);
  *(_QWORD *)((char *)this + 25940) = *(_QWORD *)(*((_QWORD *)this + 3237) + 1336LL);
  *((_QWORD *)this + 3254) = *((_QWORD *)this + 3863);
  *((_DWORD *)this + 6510) = *((_DWORD *)this + 7724);
  v1 = *((unsigned int *)this + 6472);
  if ( (_DWORD)v1 != -1 )
  {
    *(_QWORD *)((char *)this + 25996) = *((_QWORD *)this + 201 * v1 + 19);
    *((_DWORD *)this + 6501) = *((_DWORD *)this + 402 * *((unsigned int *)this + 6472) + 46);
  }
  v2 = *((unsigned int *)this + 6473);
  if ( (_DWORD)v2 != -1 )
  {
    *((_QWORD *)this + 3251) = *((_QWORD *)this + 201 * v2 + 19);
    *(_QWORD *)((char *)this + 26020) = *((_QWORD *)this + 201 * *((unsigned int *)this + 6473) + 20);
  }
  v3 = (__m128i *)*((_QWORD *)this + 3237);
  *((_DWORD *)this + 6504) = _mm_cvtsi128_si32(v3[30]);
  *((_DWORD *)this + 6507) = HIDWORD(v3[30].m128i_i64[0]);
  *(_QWORD *)((char *)this + 26220) = *(_QWORD *)((char *)this + 26212);
  *(_QWORD *)((char *)this + 26212) = *((unsigned int *)this + 6504);
}
