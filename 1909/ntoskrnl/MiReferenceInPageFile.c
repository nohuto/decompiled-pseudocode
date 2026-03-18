/*
 * XREFs of MiReferenceInPageFile @ 0x140009B08
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x140647D64 (MiPfExecuteReadList.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiComputeImagePteIndex @ 0x14009602C (MiComputeImagePteIndex.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCanPageMove @ 0x1400C359C (MiCanPageMove.c)
 */

__int64 __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  int CanPageMove; // eax
  int v11; // r9d

  v2 = *(_QWORD *)(a1 + 208);
  if ( !v2 )
    return 0LL;
  v5 = MiReferenceControlAreaFile(*(_QWORD *)(a1 + 208));
  if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 112));
    v7 = *(_QWORD *)(a1 + 256);
    v8 = *(_QWORD *)(v2 + 96);
    if ( !v7 )
      v7 = a1 + 272;
    v9 = 48LL * *(_QWORD *)(v7 + 48) - 0x58000000000LL;
    *(_DWORD *)(a1 + 188) = MiComputeImagePteIndex(v9, a2);
    if ( *(_QWORD *)(v8 + 32) )
    {
      *(_DWORD *)(a1 + 192) |= 0x10000u;
      if ( (MiFlags & 0x40000) != 0 )
      {
        CanPageMove = MiCanPageMove(v9);
        if ( !CanPageMove
          || (*(_DWORD *)(v2 + 92) & 0xC0000) != 0 && (((unsigned __int8)MI_READ_PTE_LOCK_FREE(v9 + 16) >> 5) & 2) != 0 )
        {
          *(_DWORD *)(a1 + 192) = v11 & 0xFFFEFFFF;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  return v5;
}
