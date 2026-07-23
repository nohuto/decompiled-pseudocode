/*
 * XREFs of MiObtainProtoBaseFromNode @ 0x1400960E4
 * Callers:
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     MiGetPrototypePteRanges @ 0x1401252E4 (MiGetPrototypePteRanges.c)
 *     MiGetPrototypePteBoundaries @ 0x1402C7854 (MiGetPrototypePteBoundaries.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1402C79A0 (MiReplaceSystemProtoPtesNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiObtainProtoBaseFromNode(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rax
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // eax

  v3 = a1[3] & 7LL;
  if ( v3 <= 4 )
  {
    if ( !(_DWORD)v3 )
    {
      v5 = *(a1 - 13);
      v6 = *((unsigned int *)a1 - 17);
      goto LABEL_5;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      v5 = *(a1 - 6);
      v6 = *((unsigned int *)a1 - 3);
LABEL_5:
      *a2 = v6;
      return v5;
    }
    v8 = v4 - 1;
    if ( !v8 )
    {
      v9 = *(a1 - 7) + 128LL;
      v6 = 0LL;
      v5 = *(_QWORD *)(*(a1 - 7) + 136LL);
      do
      {
        v10 = *(unsigned int *)(v9 + 44);
        v9 = *(_QWORD *)(v9 + 16);
        v6 += v10;
      }
      while ( v9 );
      goto LABEL_5;
    }
    v11 = v8 - 1;
    if ( !v11 )
    {
      v5 = a1[6];
      v6 = a1[4];
      goto LABEL_5;
    }
    if ( v11 == 1 )
    {
      v5 = a1[4];
      v6 = a1[5];
      goto LABEL_5;
    }
  }
  return 0LL;
}
