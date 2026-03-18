/*
 * XREFs of Interrupter_PopulateInterrupterLookupTable @ 0x1C005EA88
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C005EB9C (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 */

__int64 __fastcall Interrupter_PopulateInterrupterLookupTable(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // eax
  POOL_TYPE v4; // ecx
  SIZE_T v5; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v7; // r9d
  unsigned int i; // r8d

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 564LL) == 1 && *(_DWORD *)(a1 + 24) == 2 || *(_DWORD *)(a1 + 24) == 1 )
  {
    return 0;
  }
  else
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v4 = *(&WPP_MAIN_CB.AlignmentRequirement + 1);
    *(_DWORD *)(a1 + 48) = ActiveProcessorCount;
    v5 = 2 * ActiveProcessorCount;
    PoolWithTag = ExAllocatePoolWithTag(v4, v5, 0x49434858u);
    v2 = 0;
    *(_QWORD *)(a1 + 56) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v5);
      LOWORD(v7) = 1;
      for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 56) + 2LL * i) = v7;
        v7 = (unsigned __int16)(v7 + ((unsigned __int16)(v7 + 1) == *(_DWORD *)(a1 + 64)) + 1);
        if ( v7 >= *(_DWORD *)(a1 + 24) )
          LOWORD(v7) = 1;
      }
    }
    else
    {
      v2 = -1073741670;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        9u,
        0x3Du,
        (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids);
    }
  }
  return v2;
}
