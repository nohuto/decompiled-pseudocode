/*
 * XREFs of MiGetPageTablePages @ 0x1400A3A30
 * Callers:
 *     MiCreateSystemPageTable @ 0x1400A3390 (MiCreateSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186948 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14074E0B0 (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiSufficientAvailablePages @ 0x14007D060 (MiSufficientAvailablePages.c)
 *     MiSetPfnTbFlushStamp @ 0x1400A3F94 (MiSetPfnTbFlushStamp.c)
 *     MiObtainSystemCharges @ 0x1400A459C (MiObtainSystemCharges.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     MiReturnSystemCharges @ 0x140125544 (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  int v3; // esi
  __int64 v4; // r15
  _QWORD *v8; // r14
  int v10; // r12d
  unsigned int v11; // esi
  unsigned __int32 v12; // ebx
  __int64 Page; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rbx
  unsigned __int64 v16; // [rsp+50h] [rbp+8h]

  v3 = *(_DWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 32);
  *a3 = 0LL;
  v8 = 0LL;
  if ( (v3 & 8) != 0 || !*(_QWORD *)(v4 + 8552) )
  {
    v10 = 0;
  }
  else
  {
    if ( !(unsigned int)MiObtainSystemCharges(v4, a2, *(unsigned int *)(a1 + 56)) )
      return 3221225773LL;
    *(_QWORD *)(a1 + 40) += a2;
    v10 = 1;
    v3 = *(_DWORD *)(a1 + 64);
  }
  v16 = 0LL;
  v11 = (v3 & 0x400 | 0x20C280u) >> 6;
  if ( a2 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(a1 + 284) | _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 272), 1u) & *(_DWORD *)(a1 + 280);
      Page = MiGetPage(v4, v12, v11);
      if ( Page == -1 )
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x10) == 0 )
          break;
        if ( !(unsigned int)MiSufficientAvailablePages(v4, 0x60uLL) )
          break;
        Page = MiGetPage(v4, v12, v11 | 4);
        if ( Page == -1 )
          break;
      }
      v14 = (_QWORD *)(48 * Page - 0x58000000000LL);
      MiSetPfnTbFlushStamp(v14, 0LL, 0LL);
      *v14 = v8;
      ++v16;
      v8 = v14;
      if ( v16 >= a2 )
        goto LABEL_13;
    }
    if ( v10 )
    {
      MiReturnCommit(v4, a2);
      MiReturnSystemCharges(v4, a2, *(unsigned int *)(a1 + 56));
      *(_QWORD *)(a1 + 40) -= a2;
    }
    if ( v8 )
    {
      do
      {
        v15 = (_QWORD *)*v8;
        MiReleaseFreshPage(v8);
        v8 = v15;
      }
      while ( v15 );
    }
    return 3221225495LL;
  }
  else
  {
LABEL_13:
    *a3 = v8;
    return 0LL;
  }
}
