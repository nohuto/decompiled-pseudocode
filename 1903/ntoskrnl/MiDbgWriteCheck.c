/*
 * XREFs of MiDbgWriteCheck @ 0x1402D15E8
 * Callers:
 *     MiDbgCopyMemory @ 0x1402D08E8 (MiDbgCopyMemory.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F520 (MmIsAddressValidEx.c)
 *     MiGetPagePrivilege @ 0x140024900 (MiGetPagePrivilege.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KeFlushSingleCurrentTb @ 0x1401670BC (KeFlushSingleCurrentTb.c)
 *     MiRealVaToFlushType @ 0x140173FA0 (MiRealVaToFlushType.c)
 *     KeSetPagePrivilege @ 0x1402A4778 (KeSetPagePrivilege.c)
 *     MiDbgMarkPfnModified @ 0x1402D0D60 (MiDbgMarkPfnModified.c)
 */

unsigned __int64 __fastcall MiDbgWriteCheck(unsigned __int64 a1, __int64 *a2)
{
  __int64 *v2; // r15
  int v4; // eax
  int v5; // r13d
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  int PagePrivilege; // eax
  __int64 v12; // rbx
  __int64 v13; // rdx
  int v14; // r8d
  bool v15; // zf
  unsigned __int64 LeafVa; // rax
  unsigned int v17; // eax
  __int128 v19; // [rsp+20h] [rbp-10h] BYREF
  __int64 v21; // [rsp+88h] [rbp+58h] BYREF

  *a2 = 0LL;
  v2 = a2;
  if ( !MmIsAddressValidEx(a1) )
    return 0LL;
  v4 = MI_IS_PHYSICAL_ADDRESS(a1);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 != 1
      || PsNtosImageBase
      && PsHalImageBase
      && (a1 < (unsigned __int64)PsNtosImageBase || a1 >= PsNtosImageEnd)
      && (a1 < (unsigned __int64)PsHalImageBase || a1 >= PsHalImageEnd) )
    {
      return a1;
    }
    v6 = (_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    v7 = v21;
    v8 = ((a1 >> 12) & 0x1FF)
       + (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFLL);
  }
  else
  {
    v6 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    v7 = v21;
    v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFLL;
  }
  v9 = 0x8000000000000000uLL;
  if ( (((unsigned int)MiFlags >> 12) & 1) != 0 && (MiFlags & 0x10000) == 0 )
    goto LABEL_28;
  v19 = 0uLL;
  if ( (((unsigned int)MiFlags >> 12) & 1) == 0 )
  {
    v9 = 0LL;
    *(_QWORD *)&v19 = a1;
    v10 = 0LL;
    goto LABEL_23;
  }
  if ( v8 > 0xFFFFFFFFFLL )
    return 0LL;
  if ( ((*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
    return 0LL;
  v10 = 48 * v8 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    return 0LL;
  if ( (MiFlags & 0x10000) == 0
    || (PagePrivilege = MiGetPagePrivilege(48 * v8 - 0x58000000000LL, 1, (unsigned __int64 *)&v19)) != 0 )
  {
    v7 = v21;
LABEL_23:
    PagePrivilege = KeSetPagePrivilege(v8, &v19, 12);
    goto LABEL_24;
  }
  v7 = v21;
LABEL_24:
  if ( v9 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), ~v9);
    v7 = v21;
  }
  if ( PagePrivilege < 0 )
    return 0LL;
  v2 = a2;
LABEL_28:
  if ( (v7 & 0x800) != 0 && (v7 & 0x42) != 0 )
  {
LABEL_43:
    if ( (MiFlags & 0x100) == 0 )
    {
      LeafVa = MiGetLeafVa(a1);
      v17 = MiRealVaToFlushType(LeafVa);
      KeFlushSingleCurrentTb(a1, v17);
    }
    return a1;
  }
  if ( v5 || (unsigned int)MiDbgMarkPfnModified(a1, v7) )
  {
    *v2 = v7;
    v12 = v7 | 0x862;
    v21 = v12;
    _InterlockedIncrement(&dword_1404663D4);
    if ( MiPteInShadowRange((unsigned __int64)v6) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v14 = 1;
        if ( !HIBYTE(word_140465BEC) )
        {
          v15 = (v12 & 1) == 0;
          goto LABEL_38;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v15 = (v12 & 1) == 0;
LABEL_38:
        if ( !v15 )
          v13 |= 0x8000000000000000uLL;
      }
    }
    *v6 = v13;
    if ( v14 )
      MiWritePteShadow((__int64)v6);
    _InterlockedDecrement(&dword_1404663D4);
    goto LABEL_43;
  }
  return 0LL;
}
