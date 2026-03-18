/*
 * XREFs of ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800CB114
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __m128i *v3; // rax

  *((_QWORD *)this + 3241) = *(_QWORD *)(*((_QWORD *)this + 3232) + 312LL);
  *(_QWORD *)((char *)this + 25908) = *(_QWORD *)(*((_QWORD *)this + 3232) + 304LL);
  *(_QWORD *)((char *)this + 25916) = *(_QWORD *)(*((_QWORD *)this + 3232) + 16LL);
  *((_DWORD *)this + 6486) = *(_DWORD *)(*((_QWORD *)this + 3232) + 32LL);
  *((_DWORD *)this + 6481) = *(_DWORD *)(*((_QWORD *)this + 3232) + 108LL);
  *(_QWORD *)((char *)this + 25948) = *(_QWORD *)(*((_QWORD *)this + 3232) + 8LL);
  *((_QWORD *)this + 3242) = **((_QWORD **)this + 3232);
  *(_QWORD *)((char *)this + 25884) = *(_QWORD *)(*((_QWORD *)this + 3232) + 1336LL);
  *(_QWORD *)((char *)this + 25892) = *(_QWORD *)(*((_QWORD *)this + 3232) + 1464LL);
  *(_QWORD *)((char *)this + 25900) = *(_QWORD *)(*((_QWORD *)this + 3232) + 1336LL);
  *((_QWORD *)this + 3249) = *((_QWORD *)this + 3822);
  *((_DWORD *)this + 6500) = *((_DWORD *)this + 7642);
  v1 = *((unsigned int *)this + 6462);
  if ( (_DWORD)v1 != -1 )
  {
    *(_QWORD *)((char *)this + 25956) = *((_QWORD *)this + 201 * v1 + 14);
    *((_DWORD *)this + 6491) = *((_DWORD *)this + 402 * *((unsigned int *)this + 6462) + 36);
  }
  v2 = *((unsigned int *)this + 6463);
  if ( (_DWORD)v2 != -1 )
  {
    *((_QWORD *)this + 3246) = *((_QWORD *)this + 201 * v2 + 14);
    *(_QWORD *)((char *)this + 25980) = *((_QWORD *)this + 201 * *((unsigned int *)this + 6463) + 15);
  }
  v3 = (__m128i *)*((_QWORD *)this + 3232);
  *((_DWORD *)this + 6494) = _mm_cvtsi128_si32(v3[30]);
  *((_DWORD *)this + 6497) = HIDWORD(v3[30].m128i_i64[0]);
  *(_QWORD *)((char *)this + 26180) = *(_QWORD *)((char *)this + 26172);
  *(_QWORD *)((char *)this + 26172) = *((unsigned int *)this + 6494);
}
