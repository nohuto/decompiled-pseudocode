/*
 * XREFs of ?vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0115CE0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00B2A20 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS24D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r13
  unsigned int v2; // r12d
  XLATEOBJ *v3; // r15
  unsigned __int8 *v4; // rbp
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // r12d
  unsigned int v8; // esi
  int v9; // r12d
  __int64 v10; // r14
  unsigned __int8 *v11; // rbx
  unsigned int i; // edi
  ULONG v13; // eax
  unsigned int v14; // r13d
  ULONG v15; // ebp
  ULONG v16; // esi
  ULONG v17; // edi
  ULONG v18; // eax
  int v19; // edi
  unsigned __int16 *v20; // rbx
  ULONG v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+98h] [rbp+10h]
  unsigned int v27; // [rsp+A0h] [rbp+18h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 7);
  v3 = *(XLATEOBJ **)a1;
  v4 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v23 = v4;
  v26 = *((_DWORD *)a1 + 8);
  v5 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v24 = v5;
  v6 = v5 & 3;
  v27 = v6;
  if ( v6 > v2 )
  {
    v6 = v2;
    v27 = v2;
  }
  v7 = v2 - v6;
  v8 = v7 >> 2;
  v22 = v7 >> 2;
  v9 = v7 & 3;
  while ( 1 )
  {
    v10 = v5;
    v11 = v4;
    for ( i = v6; i; --i )
    {
      v13 = XLATEOBJ_iXlate(v3, *v11 | (*(unsigned __int16 *)(v11 + 1) << 8));
      *(_BYTE *)v10 = v13;
      v11 += 3;
      *(_BYTE *)(v10 + 1) = BYTE1(v13);
      *(_BYTE *)(v10 + 2) = BYTE2(v13);
      v10 += 3LL;
    }
    if ( v8 )
    {
      v14 = v8;
      do
      {
        v15 = XLATEOBJ_iXlate(v3, *v11 | (*(unsigned __int16 *)(v11 + 1) << 8));
        v16 = XLATEOBJ_iXlate(v3, v11[3] | (*((unsigned __int16 *)v11 + 2) << 8));
        v17 = XLATEOBJ_iXlate(v3, v11[6] | (*(unsigned __int16 *)(v11 + 7) << 8));
        v18 = XLATEOBJ_iXlate(v3, v11[9] | (*((unsigned __int16 *)v11 + 5) << 8));
        v11 += 12;
        *(_DWORD *)v10 = v15 | (v16 << 24);
        *(_DWORD *)(v10 + 4) = (v16 >> 8) | (v17 << 16);
        *(_DWORD *)(v10 + 8) = HIWORD(v17) | (v18 << 8);
        v10 += 12LL;
        --v14;
      }
      while ( v14 );
      v1 = a1;
      v8 = v22;
      v4 = v23;
    }
    v19 = v9;
    if ( v9 )
    {
      v20 = (unsigned __int16 *)(v11 + 1);
      do
      {
        v21 = XLATEOBJ_iXlate(v3, *((unsigned __int8 *)v20 - 1) | (*v20 << 8));
        *(_BYTE *)v10 = v21;
        v10 += 3LL;
        v20 = (unsigned __int16 *)((char *)v20 + 3);
        *(_BYTE *)(v10 - 2) = BYTE1(v21);
        *(_BYTE *)(v10 - 1) = BYTE2(v21);
        --v19;
      }
      while ( v19 );
    }
    if ( !--v26 )
      break;
    v4 += *((int *)v1 + 10);
    v5 = *((int *)v1 + 11) + v24;
    v23 = v4;
    v6 = v27;
    v24 = v5;
  }
}
