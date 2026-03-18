/*
 * XREFs of ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C00A6B20
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall __EnumDisplayQueryRoutine(unsigned __int16 *a1, int a2, void *a3, unsigned int a4, _QWORD *a5)
{
  unsigned int v5; // edi
  size_t v6; // rbx
  void *v8; // rax
  unsigned int v10; // r14d
  void *v11; // rax

  v5 = 0;
  v6 = a4;
  if ( a4 > 2 )
  {
    if ( a2 == 1 )
    {
      if ( !a5[26] )
      {
        v8 = PALLOCMEM2(a4, 0x73726447u, 0);
        a5[26] = v8;
        if ( v8 )
        {
          memmove(v8, a3, (unsigned int)v6);
          *((_DWORD *)a5 + 67) = v6;
          return v5;
        }
        return (unsigned int)-1073741670;
      }
    }
    else if ( a2 == 3 && !a5[26] )
    {
      v10 = a4 + 2;
      v11 = PALLOCMEM2(a4 + 2, 0x73726447u, 0);
      a5[26] = v11;
      if ( v11 )
      {
        memmove(v11, a3, v6);
        *(_WORD *)(v6 + a5[26]) = 0;
        *((_DWORD *)a5 + 67) = v10;
        return v5;
      }
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
