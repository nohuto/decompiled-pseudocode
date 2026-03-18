/*
 * XREFs of mth_ReduceMatrix @ 0x1C02B3AAC
 * Callers:
 *     scl_InitializeScaling @ 0x1C02B4748 (scl_InitializeScaling.c)
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 */

__int64 __fastcall mth_ReduceMatrix(_DWORD *a1)
{
  __int64 v1; // rax
  int v3; // esi
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 result; // rax

  v1 = (int)a1[2];
  v3 = a1[8];
  if ( (_DWORD)v1 )
  {
    v4 = (int)a1[2];
    v5 = CompDiv(v3, v1 * (int)a1[6]);
    v6 = (int)a1[7];
    *a1 -= v5;
    a1[1] -= CompDiv(v3, v4 * v6);
  }
  v7 = (int)a1[5];
  if ( (_DWORD)v7 )
  {
    v8 = (int)a1[5];
    v9 = CompDiv(v3, v7 * (int)a1[6]);
    v10 = (int)a1[7];
    a1[3] -= v9;
    a1[4] -= CompDiv(v3, v8 * v10);
  }
  a1[7] = 0;
  a1[6] = 0;
  result = (unsigned int)((v3 + 2) >> 14);
  a1[8] = result;
  return result;
}
