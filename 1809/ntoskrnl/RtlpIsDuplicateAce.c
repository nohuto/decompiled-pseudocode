/*
 * XREFs of RtlpIsDuplicateAce @ 0x14062DC00
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x1406302F0 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlpCompareKnownAces @ 0x14062DD60 (RtlpCompareKnownAces.c)
 *     RtlpCompareKnownObjectAces @ 0x1408955D8 (RtlpCompareKnownObjectAces.c)
 */

char __fastcall RtlpIsDuplicateAce(__int64 a1, __int64 a2)
{
  char v4; // dl
  int v5; // eax
  unsigned __int8 *v6; // rbx
  char v7; // cl
  int v8; // r12d
  char v9; // r8
  int v10; // edi
  char v11; // dl
  int v12; // r14d
  int v13; // r13d
  unsigned __int8 v14; // cl
  int v15; // r15d
  unsigned __int8 v16; // al
  char v17; // al
  int v19; // r8d
  int v20; // ecx
  int v21; // r8d

  if ( *(_BYTE *)a2 > 8u )
    return 0;
  if ( *(_BYTE *)a2 == 4 )
    return 0;
  v4 = *(_BYTE *)(a2 + 1);
  if ( (v4 & 0x10) == 0 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = (unsigned __int8 *)(a1 + 8);
  v7 = v4 & 2;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = v4 & 1;
  v10 = 0;
  v11 = v4 & 8;
  if ( v5 - 1 > 0 )
  {
    v12 = *(_DWORD *)(a2 + 4);
    v13 = v12;
    if ( !v7 )
      v12 = 0;
    if ( !v9 )
      v13 = 0;
    if ( v11 )
      v8 = 0;
    do
    {
      v14 = *v6;
      v15 = v12;
      if ( *v6 > 8u || v14 == 4 || (v6[1] & 0x10) == 0 )
        goto LABEL_18;
      v16 = *(_BYTE *)a2 - 5;
      if ( v14 >= 5u )
      {
        if ( v16 > 3u )
          goto LABEL_18;
        v17 = RtlpCompareKnownObjectAces(v6, a2);
      }
      else
      {
        if ( v16 <= 3u )
          goto LABEL_18;
        v17 = RtlpCompareKnownAces(v6, a2);
      }
      if ( v17 )
      {
        v19 = ~*((_DWORD *)v6 + 1);
        v12 &= v19;
        if ( (v6[1] & 2) == 0 )
          v12 = v15;
        v20 = v13 & ~*((_DWORD *)v6 + 1);
        if ( (v6[1] & 1) == 0 )
          v20 = v13;
        v21 = v8 & v19;
        v13 = v20;
        if ( (v6[1] & 8) != 0 )
          v21 = v8;
        v8 = v21;
        if ( !(v12 | v20 | v21) )
          return 1;
      }
LABEL_18:
      ++v10;
      v6 += *((unsigned __int16 *)v6 + 1);
    }
    while ( v10 < *(unsigned __int16 *)(a1 + 4) - 1 );
  }
  return 0;
}
