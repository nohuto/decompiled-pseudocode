/*
 * XREFs of MiAdjustCachedStacks @ 0x1400A7668
 * Callers:
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 * Callees:
 *     MiDeleteCachedKernelStack @ 0x1400A5DB0 (MiDeleteCachedKernelStack.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 */

__int64 MiAdjustCachedStacks()
{
  ULONG i; // ebx
  __int64 v1; // rcx
  unsigned __int16 v2; // r15
  unsigned __int16 v3; // si
  __int64 v4; // rbp
  __int64 v5; // r14
  _SLIST_HEADER *v6; // rdi
  __int64 result; // rax
  int Alignment; // ecx
  unsigned int v9; // eax
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rax
  int v13; // ebx
  int v14; // edx
  int v15; // ebx
  int v16; // r9d
  PSLIST_ENTRY v17; // rax

  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    if ( i >= KeQueryActiveProcessorCountEx(0xFFFFu) )
      v1 = 0LL;
    else
      v1 = KiProcessorBlock[i];
    if ( *(_QWORD *)(v1 + 23560) )
    {
      v12 = _InterlockedExchange64((volatile __int64 *)(v1 + 23560), 0LL);
      if ( v12 )
        MiDeleteCachedKernelStack(v12);
    }
  }
  v2 = KeNumberNodes;
  v3 = 0;
  do
  {
    v4 = 0LL;
    v5 = 25LL * v3;
    do
    {
      v6 = &qword_14043B118[v5];
      result = (unsigned int)(*((_DWORD *)&qword_14043B118[v5 + 8].HeaderX64 + 1)
                            - *((_DWORD *)&qword_14043B118[v5 + 8].HeaderX64 + 2));
      if ( (_DWORD)result )
      {
        Alignment = v6[8].Alignment;
        if ( Alignment < 16 || (unsigned int)result >= 0x10 )
        {
          v16 = 4;
          v9 = v6[8].Alignment;
          v10 = Alignment >> 31;
        }
        else
        {
          v9 = v6[8].Alignment;
          v10 = Alignment >> 31;
          if ( Alignment >= 64 )
          {
            result = (unsigned int)(Alignment / 16);
LABEL_13:
            *((_DWORD *)&v6[8].HeaderX64 + 2) = *((_DWORD *)&qword_14043B118[v5 + 8].HeaderX64 + 1);
            if ( !(_DWORD)result )
              result = 1LL;
            v11 = result + Alignment;
            if ( v11 > 256 )
              v11 = 256;
            LODWORD(v6[8].Alignment) = v11;
            goto LABEL_18;
          }
          v16 = 8;
        }
        result = (unsigned int)(__SPAIR64__(v10, v9) / v16);
        goto LABEL_13;
      }
      if ( !*((_DWORD *)&v6[8].HeaderX64 + 3) )
      {
        v13 = v6[8].Alignment;
        v14 = v13 / 20;
        if ( !(v13 / 20) )
          v14 = v13 != 0;
        v15 = v13 - v14;
        if ( v4 != 1 && v15 < 5 )
          v15 = 5;
        LODWORD(v6[8].Alignment) = v15;
        while ( 1 )
        {
          result = LOWORD(v6[7].Alignment);
          if ( (int)result <= v15 )
            break;
          v17 = RtlpInterlockedPopEntrySList(v6 + 7);
          if ( v17 )
            MiDeleteCachedKernelStack((__int64)v17);
        }
      }
LABEL_18:
      ++v4;
      *((_DWORD *)&v6[8].HeaderX64 + 3) = 0;
      v5 += 2LL;
    }
    while ( v4 <= 1 );
    ++v3;
  }
  while ( v3 < v2 );
  return result;
}
