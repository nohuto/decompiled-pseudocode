/*
 * XREFs of MiGetLargePageDemoteAsNeeded @ 0x140028AD4
 * Callers:
 *     MiGetLargePageChain @ 0x140028A18 (MiGetLargePageChain.c)
 *     MiFindLargeNodePage @ 0x1402A91F4 (MiFindLargeNodePage.c)
 *     MiGetFastLargePage @ 0x14085E68C (MiGetFastLargePage.c)
 * Callees:
 *     MiGetFreeZeroLargePage @ 0x14002BCF4 (MiGetFreeZeroLargePage.c)
 *     MiDemoteLargeFreeZeroPage @ 0x140169A4C (MiDemoteLargeFreeZeroPage.c)
 */

__int64 __fastcall MiGetLargePageDemoteAsNeeded(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // esi
  int v11; // ebp
  __int64 *v12; // r14
  __int64 result; // rax
  unsigned int v14; // ecx
  unsigned __int64 v15; // [rsp+70h] [rbp+18h]

  v15 = a3;
  if ( *(_QWORD *)(1984LL * a2 + *(_QWORD *)(a1 + 16) + 1808) || !(_DWORD)InitializationPhase )
  {
    v8 = a5;
    v9 = 0;
    v10 = 0;
    v11 = !(a5 & 1) + 1;
    if ( (a5 & 1) == 0 )
      v8 = a5 | 1;
    while ( 1 )
    {
      v12 = &MiLargePageSizes[v9];
      do
      {
        if ( a3 >= *v12 )
        {
          if ( *v12 < a4 )
            break;
          result = MiGetFreeZeroLargePage(a1, v9, v8, a2, 0, 4);
          v14 = v9;
          if ( v10 )
            v14 = v10;
          v10 = v14;
          if ( result )
            return result;
          a3 = v15;
        }
        ++v9;
        ++v12;
      }
      while ( v9 < 3 );
      if ( v10 && (unsigned int)MiDemoteLargeFreeZeroPage(a1, a2, v10, v8) )
      {
        v9 = v10;
      }
      else
      {
        if ( !--v11 )
          return 0LL;
        v8 &= ~1u;
        v9 = 0;
      }
      a3 = v15;
    }
  }
  return 0LL;
}
