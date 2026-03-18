/*
 * XREFs of MiStoreCheckCandidatePage @ 0x14014A78C
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiGetTopLevelPfn @ 0x1400E2680 (MiGetTopLevelPfn.c)
 *     MiIsStoreProcess @ 0x14011F348 (MiIsStoreProcess.c)
 */

__int64 __fastcall MiStoreCheckCandidatePage(
        __int64 BugCheckParameter2,
        unsigned int a2,
        unsigned __int64 *a3,
        _OWORD *a4,
        __int64 *a5)
{
  unsigned int v5; // esi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  __int64 TopLevelPfn; // rax
  int v15; // edi
  char PfnPriority; // al
  char v17; // cl
  int v18; // r9d
  _QWORD *v19; // r8
  __int128 v21; // [rsp+20h] [rbp-10h]
  __int64 v22; // [rsp+60h] [rbp+30h]

  v5 = 0;
  *(_QWORD *)&v21 = 0LL;
  v9 = a2 | ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(qword_140466188
                                                           + 8
                                                           * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
                                               + 1140LL) << 60);
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    *((_QWORD *)&v21 + 1) = 3LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    if ( (unsigned int)MiGetSystemRegionType(v10) == 5 )
    {
      *(_QWORD *)&v21 = v10 - 1088;
      *((_QWORD *)&v21 + 1) = (__int64)(0xF6FB7DBED0000000uLL - v11) >> 16;
      DWORD2(v21) &= 0xFFFFFFFC;
    }
    else
    {
      v12 = (__int64)((v10 << 25) - v11) >> 16;
      HIDWORD(v21) = HIDWORD(v12);
      if ( (unsigned int)MiGetSystemRegionType(v12) == 1
        || v12 <= 0x7FFFFFFEFFFFLL
        || v12 <= qword_140465EE0 && v12 >= qword_1404675B0
        || v12 >= v13 && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
        if ( TopLevelPfn == BugCheckParameter2 )
          return (unsigned int)-1073741253;
        *(_QWORD *)&v21 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
        {
          v15 = v12 & 0xFFFFFFFC | 1;
        }
        else
        {
          if ( (unsigned int)MiIsStoreProcess(v21) )
            return (unsigned int)-1073741401;
          v15 = v12 & 0xFFFFFFFC;
        }
      }
      else
      {
        v15 = v12 & 0xFFFFFFFC | 2;
      }
      DWORD2(v21) = v15;
    }
  }
  v22 = *a5;
  PfnPriority = MiGetPfnPriority(BugCheckParameter2);
  v17 = (*(_BYTE *)(BugCheckParameter2 + 34) & 0xC0) - 64;
  *a3 = v9;
  LODWORD(v22) = v18 | v22 & 0xFFF90C00 | (v17 != 0 ? 0x20000 : 0) | ((PfnPriority & 7) << 13) | 0xC00;
  *v19 = v22;
  *a4 = v21;
  return v5;
}
