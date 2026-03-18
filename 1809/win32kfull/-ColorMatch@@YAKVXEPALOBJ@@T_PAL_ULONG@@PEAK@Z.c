/*
 * XREFs of ?ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z @ 0x1C029E9AC
 * Callers:
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C029EB00 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ColorMatch(__int64 a1, int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int v4; // edi
  unsigned int v5; // ebp
  __int64 v6; // r11
  unsigned int v7; // r9d
  __int64 v8; // r14
  int v9; // esi
  unsigned int v10; // r15d
  unsigned int v11; // eax
  unsigned int v12; // ecx

  if ( (a2 & 0x2000000) != 0 )
  {
    result = (unsigned __int16)a2 & (unsigned int)-((unsigned int)(unsigned __int16)a2 < *(_DWORD *)(a1 + 28));
    *a3 = 0;
  }
  else if ( (a2 & 0x1000000) != 0 )
  {
    *a3 = 0xFFFFFFF;
    return 0LL;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 28);
    v5 = 0;
    v6 = 0LL;
    v7 = 0xFFFFFFF;
    if ( v4 )
    {
      v8 = *(_QWORD *)(a1 + 112);
      do
      {
        v9 = *(_DWORD *)(v8 + 4 * v6);
        v10 = v7;
        if ( (v9 & 0x10000000) != 0 && (v9 & 0x1000000) == 0 )
        {
          v11 = v6;
          v12 = (BYTE1(v9) - BYTE1(a2)) * (BYTE1(v9) - BYTE1(a2))
              + ((unsigned __int8)v9 - (unsigned __int8)a2) * ((unsigned __int8)v9 - (unsigned __int8)a2)
              + (BYTE2(v9) - BYTE2(a2)) * (BYTE2(v9) - BYTE2(a2));
          if ( v12 < v7 )
            v7 = (BYTE1(v9) - BYTE1(a2)) * (BYTE1(v9) - BYTE1(a2))
               + ((unsigned __int8)v9 - (unsigned __int8)a2) * ((unsigned __int8)v9 - (unsigned __int8)a2)
               + (BYTE2(v9) - BYTE2(a2)) * (BYTE2(v9) - BYTE2(a2));
          if ( v12 >= v10 )
            v11 = v5;
          v5 = v11;
          if ( !v7 )
            break;
        }
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < v4 );
    }
    result = v5;
    if ( (a2 & 0x4000000) != 0 )
      v7 = 0xFFFFFFF;
    *a3 = v7;
  }
  return result;
}
