/*
 * XREFs of MiStoreCheckCandidatePage @ 0x14014D494
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiIsStoreProcess @ 0x1400837DC (MiIsStoreProcess.c)
 *     MiGetTopLevelPfn @ 0x140083810 (MiGetTopLevelPfn.c)
 */

__int64 __fastcall MiStoreCheckCandidatePage(
        __int64 BugCheckParameter2,
        unsigned int a2,
        unsigned __int64 *a3,
        _OWORD *a4,
        __int64 *a5)
{
  unsigned int v5; // esi
  int v9; // r14d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 TopLevelPfn; // rax
  __int64 v15; // r9
  __int64 v16; // r9
  char PfnPriority; // al
  char v18; // cl
  int v19; // r8d
  _QWORD *v20; // r9
  __int128 v22; // [rsp+20h] [rbp-10h]
  __int64 v23; // [rsp+60h] [rbp+30h]

  v5 = 0;
  v9 = 0;
  v10 = a2 | ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(qword_14043B808
                                                            + 8
                                                            * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
                                                + 1140LL) << 60);
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
  {
    *(_QWORD *)&v22 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    *((_QWORD *)&v22 + 1) = 3LL;
  }
  else
  {
    v11 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    if ( (((unsigned int)MiGetSystemRegionType(v11) - 5) & 0xFFFFFFF7) != 0 )
    {
      v12 = (__int64)(v11 << 25) >> 16;
      HIDWORD(v22) = HIDWORD(v12);
      if ( (unsigned int)MiGetSystemRegionType(v12) == 1
        || v12 <= 0x7FFFFFFEFFFFLL
        || v12 <= qword_14043B5F0 && v12 >= qword_14043CB80
        || v12 >= v13 && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
        if ( TopLevelPfn == BugCheckParameter2 )
          return (unsigned int)-1073741253;
        *(_QWORD *)&v22 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
        {
          DWORD2(v22) = v12 & 0xFFFFFFFC | 1;
        }
        else
        {
          if ( (unsigned int)MiIsStoreProcess(v15) )
            return (unsigned int)-1073741401;
          v9 = (*(_DWORD *)(v16 + 1740) >> 18) & 1;
          DWORD2(v22) = v12 & 0xFFFFFFFC;
        }
      }
      else
      {
        *(_QWORD *)&v22 = 0LL;
        DWORD2(v22) = v12 & 0xFFFFFFFC | 2;
      }
    }
    else
    {
      *(_QWORD *)&v22 = v11 - 1088;
      *((_QWORD *)&v22 + 1) = 0xFFFFF6FB7DBED000uLL;
    }
  }
  v23 = *a5;
  PfnPriority = MiGetPfnPriority(BugCheckParameter2);
  v18 = *(_BYTE *)(BugCheckParameter2 + 34) & 0xC0;
  *a3 = v10;
  *a4 = v22;
  LODWORD(v23) = v19 & 0xFFF90C00 | (v18 != 64 ? 0x20000 : 0) | (((32 * v9) | PfnPriority & 7) << 13) | 0xC00;
  *v20 = v23;
  return v5;
}
