/*
 * XREFs of ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C0013884
 * Callers:
 *     ACPIIoctlEnumChildren @ 0x1C001365C (ACPIIoctlEnumChildren.c)
 * Callees:
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIIoctlEnumChildrenPopulateOutputBuffer(_DWORD *a1, unsigned int a2, int *a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned int v10; // ecx
  __int64 v11; // rax
  _DWORD *v12; // r15
  _BYTE *v13; // rbp
  _BYTE *v14; // r12
  int v15; // edi
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned int v18; // esi

  v4 = *(_QWORD *)(a4 + 16);
  v5 = 0;
  *a3 = 0;
  if ( v4 > 0xFFFFFFFF )
  {
    return (unsigned int)-1072431089;
  }
  else
  {
    memset(a1, 0, a2);
    *a1 = 1198089537;
    v10 = *(_DWORD *)(a4 + 24) + 8 * (v4 + 1);
    if ( a2 < v10 )
    {
      v5 = -2147483643;
      a1[1] = v10;
      *a3 = 20;
    }
    else
    {
      v11 = *(_QWORD *)(a4 + 8);
      v12 = a1 + 2;
      v13 = *(_BYTE **)(a4 + 32);
      v14 = *(_BYTE **)(v11 + 32);
      a1[1] = v4;
      v15 = 8;
      if ( (_DWORD)v4 )
      {
        v16 = (unsigned int)v4;
        do
        {
          v17 = -1LL;
          do
            ++v17;
          while ( v13[v17] );
          v18 = v17 + 1;
          memmove(v12 + 2, v13, (unsigned int)(v17 + 1));
          v12[1] = v18;
          if ( *v14 == 49 )
            *v12 = 1;
          v13 += v18;
          v15 += v18 + 8;
          v12 = (_DWORD *)((char *)v12 + v18 + 8);
          ++v14;
          --v16;
        }
        while ( v16 );
      }
      *a3 = v15;
    }
  }
  return v5;
}
