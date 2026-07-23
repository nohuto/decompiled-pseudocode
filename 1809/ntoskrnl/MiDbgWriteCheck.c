/*
 * XREFs of MiDbgWriteCheck @ 0x1402BB574
 * Callers:
 *     MiDbgCopyMemory @ 0x1402BA940 (MiDbgCopyMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeFlushSingleCurrentTb @ 0x140156FD8 (KeFlushSingleCurrentTb.c)
 *     MiRealVaToFlushType @ 0x14016A948 (MiRealVaToFlushType.c)
 *     KeSetPagePrivilege @ 0x14028DE10 (KeSetPagePrivilege.c)
 *     MiDbgMarkPfnModified @ 0x1402BAD20 (MiDbgMarkPfnModified.c)
 */

unsigned __int64 __fastcall MiDbgWriteCheck(unsigned __int64 a1, __int64 *a2)
{
  __int64 *v4; // r15
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  int v8; // r9d
  __int64 v9; // rbp
  int PagePrivilege; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // r8d
  bool v14; // zf
  unsigned __int64 LeafVa; // rax
  unsigned int v16; // eax
  __int128 v18[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( !MiIsAddressValid(a1) )
    return 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return a1;
  v4 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v4);
  v6 = 0x8000000000000000uLL;
  v19 = v5;
  if ( (((unsigned int)MiFlags >> 12) & 1) != 0 && (MiFlags & 0x10000) == 0 )
    goto LABEL_17;
  v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL;
  if ( v8 )
  {
    if ( ((*(_QWORD *)(48 * v7 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
      return 0LL;
    v9 = 48 * v7 - 0x58000000000LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      return 0LL;
    if ( (MiFlags & 0x10000) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(48 * v7 - 0x58000000000LL, 1, (unsigned __int64 *)v18);
      if ( !PagePrivilege )
      {
        v5 = v19;
        goto LABEL_14;
      }
    }
    v5 = v19;
  }
  else
  {
    v6 = 0LL;
    v18[0] = a1;
    v9 = 0LL;
  }
  PagePrivilege = KeSetPagePrivilege(v7, v18, 12);
LABEL_14:
  if ( v6 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), ~v6);
    v5 = v19;
  }
  if ( PagePrivilege < 0 )
    return 0LL;
LABEL_17:
  if ( (v5 & 0x800) != 0 && (v5 & 0x42) != 0 )
  {
LABEL_31:
    if ( (MiFlags & 0x100) == 0 )
    {
      LeafVa = MiGetLeafVa(a1);
      v16 = MiRealVaToFlushType(LeafVa);
      KeFlushSingleCurrentTb(a1, v16);
    }
    return a1;
  }
  if ( (unsigned int)MiDbgMarkPfnModified(a1, v5) )
  {
    *a2 = v5;
    v11 = v5 | 0x862;
    v19 = v11;
    _InterlockedIncrement(&dword_14043BA14);
    if ( MiPteInShadowRange((unsigned __int64)v4) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v14 = (v11 & 1) == 0;
          goto LABEL_26;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v14 = (v11 & 1) == 0;
LABEL_26:
        if ( !v14 )
          v12 |= 0x8000000000000000uLL;
      }
    }
    *v4 = v12;
    if ( v13 )
      MiWritePteShadow((__int64)v4, v12);
    _InterlockedDecrement(&dword_14043BA14);
    goto LABEL_31;
  }
  return 0LL;
}
