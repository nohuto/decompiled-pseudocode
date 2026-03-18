/*
 * XREFs of bVerifyMsftHighByteTable @ 0x1C021A7CC
 * Callers:
 *     bComputeIDs @ 0x1C0218070 (bComputeIDs.c)
 * Callees:
 *     UShortAdd @ 0x1C01032D4 (UShortAdd.c)
 */

__int64 __fastcall bVerifyMsftHighByteTable(__int64 a1, _DWORD *a2, __int64 a3, __int16 a4, unsigned int a5, int a6)
{
  unsigned int v6; // r10d
  _WORD *v7; // r14
  __int64 v8; // rsi
  unsigned __int16 v9; // bx
  unsigned int v10; // edi
  int v11; // r11d
  int v12; // r15d
  unsigned int v13; // ecx
  _WORD *v14; // rdx
  __int64 v15; // r8
  unsigned __int16 v16; // ax
  USHORT v17; // r9
  unsigned __int16 v18; // r14
  _WORD *v19; // rcx
  int v20; // r12d
  unsigned __int16 v21; // bp
  char *v22; // r13
  USHORT v23; // si
  USHORT v24; // bx
  _WORD *v25; // r15
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // ecx
  _WORD *v32; // [rsp+20h] [rbp-48h]
  __int64 v33; // [rsp+70h] [rbp+8h]
  USHORT pusResult; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = (_WORD *)(a1 + 6);
  v8 = a1 + 518;
  v32 = (_WORD *)(a1 + 6);
  v33 = a1 + 518;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned __int16)(a4 - 2) <= 3u )
  {
    v12 = a6;
    v13 = a5 - a6;
    *a2 = 5;
    *(_QWORD *)a3 = 0LL;
    *(_DWORD *)(a3 + 12) = 0;
    if ( v13 >= 0x20E )
    {
      v14 = v7;
      v15 = 256LL;
      do
      {
        v16 = __ROR2__(*v14, 8);
        if ( v16 <= v9 )
          v16 = v9;
        ++v14;
        v9 = v16;
        --v15;
      }
      while ( v15 );
      if ( v13 - 526 >= v16 )
      {
        v17 = 0;
        while ( 1 )
        {
          v18 = __ROR2__(v7[v17], 8);
          v19 = (_WORD *)(v8 + v18);
          v20 = v18 + v12 + 524;
          v21 = __ROR2__(v19[3], 8);
          v22 = (char *)v19 + v21;
          v23 = __ROR2__(*v19, 8);
          v24 = __ROR2__(v19[1], 8);
          v25 = v22 + 6;
          if ( v18 )
          {
            if ( UShortAdd(v23, v24, &pusResult) < 0 )
              return 0LL;
            v26 = v20 + v21 + 2 * v24;
          }
          else
          {
            if ( v23 > v17 )
              return 0LL;
            v26 = v20 + v21 + 2 + 2 * (v17 - v23);
          }
          if ( v26 > a5 )
            break;
          if ( v18 )
          {
            if ( (unsigned __int16)v6 < v24 )
            {
              v28 = v24;
              do
              {
                v29 = v11 + 1;
                if ( !__ROR2__(*v25++, 8) )
                  v29 = v11;
                v11 = v29;
                --v28;
              }
              while ( v28 );
            }
          }
          else
          {
            v27 = v10 + 1;
            if ( !__ROR2__(*(_WORD *)&v22[2 * (v17 - v23) + 6], 8) )
              v27 = v10;
            v10 = v27;
          }
          if ( ++v17 >= 0x100u )
          {
            if ( v10 > (unsigned __int16)__ROR2__(*(_WORD *)(v33 + 2), 8) )
              return 0LL;
            LOBYTE(v6) = v11 + v10 - 1 <= 0xFFFE;
            return v6;
          }
          v8 = v33;
          v12 = a6;
          v7 = v32;
        }
      }
    }
  }
  return 0LL;
}
