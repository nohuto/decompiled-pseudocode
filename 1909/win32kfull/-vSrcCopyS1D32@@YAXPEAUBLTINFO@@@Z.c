/*
 * XREFs of ?vSrcCopyS1D32@@YAXPEAUBLTINFO@@@Z @ 0x1C00D8A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D32(struct BLTINFO *a1)
{
  unsigned int v1; // r11d
  unsigned int v3; // r15d
  int v4; // ebp
  _BYTE *v5; // r9
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE *v10; // r10
  _DWORD *v11; // rsi
  unsigned __int64 v12; // r14
  char v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp+8h]

  LOBYTE(v1) = 0;
  v3 = *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = (_BYTE *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 3));
  v15 = **(_QWORD **)(*(_QWORD *)a1 + 16LL);
  v6 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  while ( v4 )
  {
    --v4;
    v10 = v5;
    v11 = v6;
    v7 = v3;
    v13 = *((_BYTE *)a1 + 48) & 7;
    if ( v13 )
      LOBYTE(v1) = *v5 << v13;
    else
      v10 = v5 - 1;
    if ( v3 )
    {
      do
      {
        if ( !v13 )
        {
          ++v10;
          if ( v7 >= 8 )
          {
            v12 = (unsigned __int64)v7 >> 3;
            do
            {
              v1 = (unsigned __int8)*v10;
              v7 -= 8;
              v8 = (unsigned __int64)(unsigned __int8)*v10 >> 7;
              v9 = *v10++ & 1;
              *v11 = *((_DWORD *)&v15 + v8);
              v11[1] = *((_DWORD *)&v15 + ((v1 >> 6) & 1));
              v11[2] = *((_DWORD *)&v15 + ((v1 >> 5) & 1));
              v11[3] = *((_DWORD *)&v15 + ((v1 >> 4) & 1));
              v11[4] = *((_DWORD *)&v15 + ((v1 >> 3) & 1));
              v11[5] = *((_DWORD *)&v15 + ((v1 >> 2) & 1));
              v11[6] = *((_DWORD *)&v15 + ((v1 >> 1) & 1));
              v11[7] = *((_DWORD *)&v15 + v9);
              v11 += 8;
              --v12;
            }
            while ( v12 );
            --v10;
            continue;
          }
          LOBYTE(v1) = *v10;
        }
        v14 = (unsigned __int64)(unsigned __int8)v1 >> 7;
        LOBYTE(v1) = 2 * v1;
        v13 = (v13 + 1) & 7;
        *v11++ = *((_DWORD *)&v15 + v14);
        --v7;
      }
      while ( v7 );
    }
    v5 += *((int *)a1 + 10);
    v6 = (_DWORD *)((char *)v6 + *((int *)a1 + 11));
  }
}
