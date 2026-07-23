/*
 * XREFs of MiReferenceInPageFile @ 0x14001CAC8
 * Callers:
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x14066395C (MiPfExecuteReadList.c)
 * Callees:
 *     MiComputeImagePteIndex @ 0x14001B70C (MiComputeImagePteIndex.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCanPageMove @ 0x140118464 (MiCanPageMove.c)
 */

__int64 __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  int v10; // r9d

  v2 = *(_QWORD *)(a1 + 208);
  if ( !v2 )
    return 0LL;
  v5 = MiReferenceControlAreaFile(*(_QWORD *)(a1 + 208));
  if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 112));
    v6 = *(_QWORD *)(a1 + 256);
    v7 = *(_QWORD *)(v2 + 96);
    if ( !v6 )
      v6 = a1 + 272;
    v8 = 48LL * *(_QWORD *)(v6 + 48) - 0x58000000000LL;
    *(_DWORD *)(a1 + 188) = MiComputeImagePteIndex(v8, a2);
    if ( *(_QWORD *)(v7 + 32) )
    {
      *(_DWORD *)(a1 + 192) |= 0x10000u;
      if ( (MiFlags & 0x40000) != 0
        && (!(unsigned int)MiCanPageMove(v8)
         || (*(_DWORD *)(v2 + 92) & 0x180000) != 0 && (((unsigned __int8)MI_READ_PTE_LOCK_FREE(v8 + 16) >> 5) & 2) != 0) )
      {
        *(_DWORD *)(a1 + 192) = v10 & 0xFFFEFFFF;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  return v5;
}
