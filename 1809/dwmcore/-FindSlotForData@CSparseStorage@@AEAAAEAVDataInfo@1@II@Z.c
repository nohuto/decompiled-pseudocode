/*
 * XREFs of ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x1800A22A4
 * Callers:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800A2224 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

struct CSparseStorage::DataInfo *__fastcall CSparseStorage::FindSlotForData(char **this, int a2, unsigned int a3)
{
  char *v3; // rbx
  __int64 v5; // rsi
  int v7; // ebp
  __int64 v8; // rcx
  char *v9; // rdi
  unsigned __int64 v10; // r9
  int v11; // r8d
  int v12; // ecx
  struct CSparseStorage::DataInfo *result; // rax
  unsigned int v14; // edi
  signed __int64 v15; // rdi
  __int64 v16; // r15
  SIZE_T v17; // rbp
  char *v18; // rax

  v3 = *this;
  v5 = a3;
  v7 = *((_DWORD *)*this + 1) & __ROR4__(1, a2);
  if ( *this == (char *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    v14 = a3 + 40;
    v3 = (char *)WPF::ProcessHeapImpl::AllocClear(a3 + 40);
    if ( !v3 )
      RaiseFailFastException(0LL, 0LL, 0);
    *(_DWORD *)v3 = v14;
    *this = v3;
  }
  v8 = *(unsigned int *)v3;
  v9 = v3 + 12;
  v10 = (unsigned __int64)&v3[v8];
  if ( v3 + 16 <= &v3[v8] )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)v9;
      v12 = HIBYTE(*(_DWORD *)v9) & 0x7F;
      if ( v12 == a2 )
        return (struct CSparseStorage::DataInfo *)v9;
      if ( !v12 )
        break;
      if ( !v7 && (v11 & 0xFFFFFF) == (_DWORD)v5 && (__ROR4__(1, v12) & *((_DWORD *)v3 + 1)) == 0 )
        return (struct CSparseStorage::DataInfo *)v9;
      v9 += (*(_QWORD *)&v11 & 0xFFFFFFLL) + 4;
      if ( v9 + 4 > &v3[*(unsigned int *)v3] )
      {
        LODWORD(v8) = *(_DWORD *)v3;
        goto LABEL_18;
      }
    }
    if ( (unsigned __int64)&v9[v5 + 4] <= v10 )
    {
      *(_DWORD *)v9 = v11 ^ (v5 ^ v11) & 0xFFFFFF;
      return (struct CSparseStorage::DataInfo *)v9;
    }
    LODWORD(v8) = *(_DWORD *)v3;
  }
LABEL_18:
  v15 = v9 - v3;
  v16 = (unsigned int)v8;
  v17 = v15 + v5 + 28;
  v18 = (char *)HeapReAlloc(WPF::g_processHeap, 0, v3, v17);
  if ( v18 )
  {
    *this = v18;
  }
  else
  {
    RaiseFailFastException(0LL, 0LL, 0);
    v18 = *this;
  }
  memset_0(&v18[v16], 0, v17 - v16);
  *(_DWORD *)*this = v17;
  result = (struct CSparseStorage::DataInfo *)&(*this)[v15];
  *(_DWORD *)result &= 0xFF000000;
  *(_DWORD *)result |= v5 & 0xFFFFFF;
  return result;
}
