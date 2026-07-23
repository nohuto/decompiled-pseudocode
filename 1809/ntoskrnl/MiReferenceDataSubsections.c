/*
 * XREFs of MiReferenceDataSubsections @ 0x140026658
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x140077B30 (MiLocateSubsectionNode.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 *     MiDecrementLargeSubsections @ 0x1402B5A04 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402B634C (MiIncrementLargeSubsections.c)
 */

__int64 __fastcall MiReferenceDataSubsections(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4, unsigned int *a5)
{
  unsigned int *v5; // r15
  __int64 v7; // rdx
  unsigned int v8; // ebx
  ULONG_PTR v11; // rdi
  char *v12; // r12
  __int16 v13; // si
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  unsigned int v18; // r8d
  __int64 SubsectionNode; // rax
  int v20; // [rsp+24h] [rbp-34h]

  v5 = a5;
  v7 = *a2;
  v8 = 0;
  v20 = 0;
  *a5 = 3;
  v11 = MiOffsetToProtos(a1, v7, &a5);
  if ( !v11 )
    return 3221225503LL;
  v12 = (char *)a5 + a3;
  if ( a4 )
  {
    v13 = 136;
    if ( !a5 && (a3 & 0x1FF) == 0 )
    {
      if ( *(_QWORD *)(a1 + 64) )
      {
        if ( (unsigned int)MiControlAreaUsingExtents(a1) )
        {
          v20 = 1;
          if ( a3 == *(_DWORD *)(v11 + 44) && !*(_QWORD *)(v11 + 8) )
            v13 = 1160;
        }
      }
    }
  }
  else
  {
    v13 = 264;
  }
  v14 = MiAddViewsForSection(v11);
  v15 = v14;
  if ( (v13 & 0x400) == 0 )
    goto LABEL_5;
  if ( v14 < 0 )
  {
    v15 = MiAddViewsForSection(v11);
LABEL_5:
    v16 = 0;
    goto LABEL_6;
  }
  v16 = 1;
LABEL_6:
  if ( v15 >= 0 && v20 )
  {
    if ( v16 )
    {
      LOBYTE(v8) = (*(_DWORD *)(v11 + 48) & 0xC0000000) == 0x40000000;
      *v5 = v8;
    }
    else
    {
      v18 = MiIncrementLargeSubsections(v11, v12);
      if ( v18 != -1 )
      {
        do
        {
          if ( !(a3 % MiLargePageSizes[v18]) )
            break;
          ++v18;
        }
        while ( v18 <= 1 );
        if ( v18 > 1 )
        {
          SubsectionNode = MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0LL);
          MiDecrementLargeSubsections(v11, SubsectionNode);
        }
        else
        {
          *v5 = v18;
        }
      }
    }
  }
  return (unsigned int)v15;
}
