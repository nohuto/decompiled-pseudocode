/*
 * XREFs of ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00AE090
 * Callers:
 *     VidSchiSubmitRenderCommand @ 0x1C00CA094 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     ?ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z @ 0x1C005CF38 (-ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z.c)
 *     ?VerifyAllocationForSubmissionPhysical@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00B1454 (-VerifyAllocationForSubmissionPhysical@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PrepareDmaBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_DMA_BUFFER *a3,
        unsigned int a4,
        unsigned int *a5,
        union _LARGE_INTEGER *a6)
{
  __int64 *v6; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  VIDMM_GLOBAL *v11; // rcx
  unsigned int v12; // esi
  struct VIDMM_ALLOC **v13; // rdi
  __int64 v14; // rbx
  __int64 result; // rax
  VIDMM_GLOBAL *v16; // rcx
  __int64 v17; // rdx
  int v18; // eax

  v6 = (__int64 *)*((_QWORD *)a3 + 8);
  if ( v6 )
  {
    v8 = *v6;
    v9 = *(_QWORD *)(*(_QWORD *)v8 + 136LL);
    if ( (*(_DWORD *)(v9 + 80) & 0x1000) != 0 )
      v10 = 0;
    else
      v10 = *(_DWORD *)(v9 + 16) + 1;
    v11 = (VIDMM_GLOBAL *)(*(_QWORD *)(*(_QWORD *)v8 + 144LL) + *(_QWORD *)(v9 + 24));
  }
  else
  {
    v11 = (VIDMM_GLOBAL *)*((_QWORD *)a3 + 11);
    v10 = 0;
  }
  v12 = 0;
  a6->QuadPart = (LONGLONG)v11;
  *a5 = v10;
  v13 = (struct VIDMM_ALLOC **)*((_QWORD *)a3 + 13);
  if ( a4 )
  {
    v14 = *((_QWORD *)a3 + 14) + 8LL;
    do
    {
      if ( *v13 )
      {
        result = VIDMM_GLOBAL::VerifyAllocationForSubmissionPhysical(v11, *v13);
        if ( (int)result < 0 )
          return result;
        VIDMM_GLOBAL::ReferenceAllocationForSubmission(v16, *v13, (*(_BYTE *)v14 & 1) == 0);
        v17 = *(_QWORD *)(**(_QWORD **)*v13 + 136LL);
        if ( (*(_DWORD *)(v17 + 80) & 0x1000) != 0 )
          v18 = 0;
        else
          v18 = *(_DWORD *)(v17 + 16) + 1;
        *(_DWORD *)v14 ^= (*(_DWORD *)v14 ^ (2 * v18)) & 0x3E;
        v11 = (VIDMM_GLOBAL *)(*(_QWORD *)(**(_QWORD **)*v13 + 144LL)
                             + *(_QWORD *)(*(_QWORD *)(**(_QWORD **)*v13 + 136LL) + 24LL));
        *(_QWORD *)(v14 + 8) = v11;
      }
      ++v12;
      ++v13;
      v14 += 24LL;
    }
    while ( v12 < a4 );
  }
  return 0LL;
}
