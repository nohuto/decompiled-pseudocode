/*
 * XREFs of ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E408
 * Callers:
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E2EC (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C450 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_SEGMENT::TrackAndValidatePagesOnLock(
        VIDMM_SEGMENT *this,
        struct _VIDMM_MDL *a2,
        __int64 a3,
        struct _VIDMM_GLOBAL_ALLOC *a4)
{
  _DWORD *v4; // rdi
  __int64 v5; // rbx
  VIDMM_SEGMENT *v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v10; // rax

  v4 = (_DWORD *)*((_QWORD *)a2 + 1);
  v5 = 0LL;
  v6 = this;
  v7 = (((v4[8] + v4[11]) & 0xFFF) + (unsigned __int64)(unsigned int)v4[10] + 4095) >> 12;
  if ( !v7 )
    return 1;
  while ( 1 )
  {
    v8 = *((_QWORD *)v6 + 31);
    if ( v8 )
    {
      *(_QWORD *)(v8 + 16LL * *((unsigned int *)v6 + 61)) = *(_QWORD *)&v4[2 * v5 + 12];
      this = (VIDMM_SEGMENT *)(2LL * *((unsigned int *)v6 + 61));
      *(_QWORD *)(*((_QWORD *)v6 + 31) + 16LL * (unsigned int)(*((_DWORD *)v6 + 61))++ + 8) = a4;
      *((_DWORD *)v6 + 61) &= -(*((_DWORD *)v6 + 61) < *((_DWORD *)v6 + 60));
    }
    if ( *(_QWORD *)&v4[2 * v5 + 12] << 12 > *((_QWORD *)v6 + 15) )
      break;
    if ( ++v5 >= v7 )
      return 1;
  }
  v10 = WdLogNewEntry5_WdAssertion(this, v8);
  *(_QWORD *)(v10 + 24) = v5;
  *(_QWORD *)(v10 + 32) = *(_QWORD *)&v4[2 * v5 + 12];
  WdLogEvent5_WdAssertion(v10);
  return 0;
}
