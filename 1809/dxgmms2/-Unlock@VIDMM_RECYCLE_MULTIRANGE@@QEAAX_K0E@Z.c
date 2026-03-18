/*
 * XREFs of ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C005B384
 * Callers:
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C005B300 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 * Callees:
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005A33C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C005B490 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005C270 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Unlock(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v8; // rax
  unsigned __int8 v9; // dl
  struct _MDL *v10; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbp
  void *v14; // rcx
  void *v15; // rcx

  v8 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2);
  v8[3] = this;
  v8[4] = a2;
  v8[5] = a3;
  WdLogEvent5_WdEvent(v8);
  v10 = (struct _MDL *)*((_QWORD *)this + 23);
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  if ( v10 )
  {
    MmUnlockPages(v10);
    IoFreeMdl(*((PMDL *)this + 23));
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
  }
  v12 = *((_QWORD *)this + 6) + a2;
  v13 = v12 + a3;
  while ( 1 )
  {
    if ( *((_QWORD *)NextRange + 4) >= v12 || *((_QWORD *)NextRange + 5) > v12 )
      VIDMM_RECYCLE_RANGE::Unlock(NextRange);
    if ( *((_QWORD *)NextRange + 5) >= v13 )
      break;
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  --*((_DWORD *)this + 23);
  if ( a4 )
  {
    v15 = (void *)*((_QWORD *)this + 13);
    *((_BYTE *)this + 129) = 0;
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0);
      *((_QWORD *)this + 13) = 0LL;
    }
  }
  else
  {
    v14 = (void *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 128) = 0;
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)this + 12) = 0LL;
    }
  }
  if ( !*((_DWORD *)this + 23) )
    *((_DWORD *)this + 54) = 3;
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this, v9);
}
