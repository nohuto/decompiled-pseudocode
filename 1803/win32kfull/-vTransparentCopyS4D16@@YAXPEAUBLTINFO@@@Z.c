/*
 * XREFs of ?vTransparentCopyS4D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0263590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS4D16(struct BLTINFO *a1)
{
  int v1; // ebp
  int v2; // r10d
  __int64 v3; // r15
  __int64 v4; // r8
  _WORD *v5; // r9
  int v6; // esi
  unsigned __int8 *v7; // r11
  _WORD *v8; // rbx
  int i; // edi
  unsigned int v10; // eax
  unsigned __int8 *v11; // r14
  __int64 v12; // rax

  v1 = *((_DWORD *)a1 + 7);
  v2 = *((_DWORD *)a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v4 = *((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1);
  v5 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  while ( v2 )
  {
    v6 = *((_DWORD *)a1 + 12);
    --v2;
    v7 = (unsigned __int8 *)v4;
    v8 = v5;
    for ( i = v1; i; ++v8 )
    {
      v10 = *v7;
      --i;
      v11 = v7;
      if ( (v6 & 1) != 0 )
        v12 = v10 & 0xF;
      else
        v12 = v10 >> 4;
      ++v7;
      if ( (v6 & 1) == 0 )
        v7 = v11;
      LOBYTE(v6) = v6 + 1;
      if ( (_DWORD)v12 != *((_DWORD *)a1 + 37) )
        *v8 = *(_WORD *)(v3 + 4 * v12);
    }
    v4 += *((int *)a1 + 10);
    v5 = (_WORD *)((char *)v5 + *((int *)a1 + 11));
  }
}
