/*
 * XREFs of _RtlpMuiRegValidateLIPLanguage @ 0x1409094E8
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x14073F6A0 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x140907FB4 (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidateLIPLanguage(__int64 a1, int a2)
{
  __int64 v3; // r10
  int v4; // ebp
  _WORD *v5; // rbx
  int v6; // r12d
  int v7; // edi
  unsigned __int16 v8; // si
  unsigned __int8 v9; // dl
  __int16 v10; // r8
  __int64 v11; // rdx
  _WORD *v12; // r8
  __int16 v13; // ax
  __int16 v14; // ax
  __int64 v15; // r14
  __int16 v16; // r8
  __int16 v17; // r9
  __int16 v18; // dx
  __int16 v21; // [rsp+68h] [rbp+10h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * a2);
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = v5[4];
    v9 = (v8 >> (2 * v6)) & 3;
    if ( !v9 )
      goto LABEL_28;
    v10 = v5[v6 + 6];
    if ( v9 == 2 )
      break;
    v15 = *(_QWORD *)(v3 + 24);
    v21 = -1;
    if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v15, v9, v10, &v21) < 0
      || (v16 = v21, v21 < 0)
      || v21 >= (int)*(unsigned __int16 *)(v15 + 6)
      || v21 == a2 )
    {
      v5[4] = v8 & ~(3 << v7);
      goto LABEL_27;
    }
    v17 = *(_WORD *)(28LL * v21 + *(_QWORD *)(v15 + 16));
    v18 = v8 & ~(3 << v7);
    if ( (v17 & 4) != 0 )
    {
      v5[4] = v18;
LABEL_27:
      v3 = a1;
      goto LABEL_28;
    }
    v3 = a1;
    if ( (v17 & 0x1820) == 0x820 )
    {
      v5[4] = v18 | (2 << v7);
      v5[v6 + 6] = v16;
LABEL_25:
      ++v4;
      goto LABEL_28;
    }
    v5[4] = v18;
LABEL_28:
    ++v6;
    v7 += 2;
    if ( v7 >= 8 )
      goto LABEL_31;
  }
  if ( v10 < 0 || (v11 = *(_QWORD *)(v3 + 24), v10 >= (int)*(unsigned __int16 *)(v11 + 6)) || v10 == a2 )
  {
    v5[4] = v8 & ~(3 << v7);
    v5[v6 + 6] = 0;
    goto LABEL_28;
  }
  v12 = (_WORD *)(*(_QWORD *)(v11 + 16) + 28LL * v10);
  if ( (*v12 & 4) == 0 )
  {
    if ( (*v12 & 0x1820) != 0x820 )
    {
      if ( v12[2] )
      {
        v5[4] = v8 & ~(3 << v7) | (1 << v7);
        v13 = v12[2];
      }
      else
      {
        v14 = v8 & ~(3 << v7);
        if ( (__int16)v12[3] <= 0 )
        {
          v5[4] = v14;
          v13 = 0;
        }
        else
        {
          v5[4] = (3 << v7) | v14;
          v13 = v12[3];
        }
      }
      v5[v6 + 6] = v13;
      goto LABEL_28;
    }
    goto LABEL_25;
  }
  *v5 |= 0x1000u;
LABEL_31:
  if ( v4 >= 1 )
    return 0LL;
  *v5 |= 0x1000u;
  return 3221225473LL;
}
