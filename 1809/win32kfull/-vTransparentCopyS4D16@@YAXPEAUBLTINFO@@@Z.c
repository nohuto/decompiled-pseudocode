/*
 * XREFs of ?vTransparentCopyS4D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0277120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS4D16(struct BLTINFO *a1)
{
  int v1; // esi
  int v2; // r11d
  __int64 v3; // r12
  __int64 v4; // r9
  _WORD *v5; // r10
  int v6; // r15d
  _BYTE *v7; // r14
  _WORD *v8; // rbx
  int i; // ebp
  __int64 v10; // rdi
  _BYTE *v11; // rdx

  v1 = *((_DWORD *)a1 + 7);
  v2 = *((_DWORD *)a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v4 = *((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1);
  v5 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  while ( v2 )
  {
    v6 = *((_DWORD *)a1 + 12);
    --v2;
    v7 = (_BYTE *)v4;
    v8 = v5;
    for ( i = v1; i; ++v8 )
    {
      --i;
      v10 = *v7 & 0xF;
      v11 = v7;
      if ( (v6 & 1) == 0 )
        v10 = (unsigned __int8)*v7 >> 4;
      ++v7;
      if ( (v6 & 1) == 0 )
        v7 = v11;
      LOBYTE(v6) = v6 + 1;
      if ( (_DWORD)v10 != *((_DWORD *)a1 + 37) )
        *v8 = *(_WORD *)(v3 + 4 * v10);
    }
    v4 += *((int *)a1 + 10);
    v5 = (_WORD *)((char *)v5 + *((int *)a1 + 11));
  }
}
