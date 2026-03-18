/*
 * XREFs of scl_ScaleAdvanceWidth @ 0x1C02B51A4
 * Callers:
 *     fs_FindBitMapSize @ 0x1C02B0CCC (fs_FindBitMapSize.c)
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 *     mth_FixXYMul @ 0x1C02B3550 (mth_FixXYMul.c)
 */

__int64 __fastcall scl_ScaleAdvanceWidth(__int64 a1, int *a2, __int16 a3, int a4, __int16 a5, int *a6)
{
  __int64 result; // rax
  int v9; // eax
  int v10; // edx
  int fixed; // eax
  int v12; // edx
  int v13; // eax
  __int64 v14; // [rsp+30h] [rbp+8h]

  if ( !a4 )
  {
    LODWORD(v14) = a3 << 16;
    HIDWORD(v14) = a3 >> 15;
    v9 = CompDiv(a5, v14);
    *a2 = v9;
    v10 = *(_DWORD *)(a1 + 384);
    if ( v10 == 0x10000 || !*(_WORD *)(a1 + 446) )
    {
      if ( !v9 || !*(_WORD *)(a1 + 446) )
        return mth_FixXYMul(a2, a2 + 1, a6);
      v13 = v9 + 0x10000;
    }
    else
    {
      fixed = FixMul(v9, v10);
      *a2 = fixed;
      v12 = fixed;
      if ( fixed && *(_WORD *)(a1 + 446) )
      {
        v12 = fixed + 0x10000;
        *a2 = fixed + 0x10000;
      }
      v13 = CompDiv(*(_DWORD *)(a1 + 384), (__int64)v12 << 16);
    }
    *a2 = v13;
    return mth_FixXYMul(a2, a2 + 1, a6);
  }
  result = CompDiv(a5, *(int *)(a1 + 384) * (__int64)a3);
  *a2 = result;
  if ( (_DWORD)result )
  {
    if ( *(_WORD *)(a1 + 446) )
    {
      result = (unsigned int)(result + 0x10000);
      *a2 = result;
    }
  }
  return result;
}
