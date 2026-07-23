/*
 * XREFs of MiAdjustCachedStacks @ 0x140004E60
 * Callers:
 *     MiWorkingSetManager @ 0x1400F1CC8 (MiWorkingSetManager.c)
 * Callees:
 *     MiDeleteCachedKernelStack @ 0x1400045F0 (MiDeleteCachedKernelStack.c)
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 */

__int64 MiAdjustCachedStacks()
{
  unsigned int i; // ebx
  __int64 Prcb; // rax
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // r15
  _SLIST_HEADER *v6; // rbp
  __int64 result; // rax
  int Alignment; // ecx
  unsigned int v9; // eax
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rcx
  int v13; // esi
  int v14; // edx
  int v15; // esi
  int v16; // r9d
  PSLIST_ENTRY v17; // rax

  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( *(_QWORD *)(Prcb + 23560) )
    {
      v12 = _InterlockedExchange64((volatile __int64 *)(Prcb + 23560), 0LL);
      if ( v12 )
        MiDeleteCachedKernelStack(v12);
    }
  }
  v2 = (unsigned __int16)KeNumberNodes;
  v3 = 0;
  do
  {
    v4 = 0LL;
    v5 = 11LL * v3;
    do
    {
      v6 = &qword_140465A58[v5];
      result = (unsigned int)(*((_DWORD *)&qword_140465A58[v5 + 1].HeaderX64 + 1)
                            - *((_DWORD *)&qword_140465A58[v5 + 1].HeaderX64 + 2));
      if ( (_DWORD)result )
      {
        Alignment = v6[1].Alignment;
        if ( Alignment < 16 || (unsigned int)result >= 0x10 )
        {
          v16 = 4;
          v9 = v6[1].Alignment;
          v10 = Alignment >> 31;
        }
        else
        {
          v9 = v6[1].Alignment;
          v10 = Alignment >> 31;
          if ( Alignment >= 64 )
          {
            result = (unsigned int)(Alignment / 16);
LABEL_11:
            *((_DWORD *)&v6[1].HeaderX64 + 2) = *((_DWORD *)&qword_140465A58[v5 + 1].HeaderX64 + 1);
            if ( !(_DWORD)result )
              result = 1LL;
            v11 = result + Alignment;
            if ( v11 > 256 )
              v11 = 256;
            LODWORD(v6[1].Alignment) = v11;
            goto LABEL_16;
          }
          v16 = 8;
        }
        result = (unsigned int)(__SPAIR64__(v10, v9) / v16);
        goto LABEL_11;
      }
      if ( !*((_DWORD *)&v6[1].HeaderX64 + 3) )
      {
        v13 = v6[1].Alignment;
        v14 = v13 / 20;
        if ( !(v13 / 20) )
          v14 = v13 != 0;
        v15 = v13 - v14;
        if ( v4 != 1 && v15 < 5 )
          v15 = 5;
        LODWORD(v6[1].Alignment) = v15;
        while ( 1 )
        {
          result = LOWORD(v6->Alignment);
          if ( (int)result <= v15 )
            break;
          v17 = RtlpInterlockedPopEntrySList(v6);
          if ( v17 )
            MiDeleteCachedKernelStack((__int64)v17);
        }
      }
LABEL_16:
      *((_DWORD *)&v6[1].HeaderX64 + 3) = 0;
      ++v4;
      v5 += 2LL;
    }
    while ( v4 <= 1 );
    ++v3;
  }
  while ( v3 < v2 );
  return result;
}
