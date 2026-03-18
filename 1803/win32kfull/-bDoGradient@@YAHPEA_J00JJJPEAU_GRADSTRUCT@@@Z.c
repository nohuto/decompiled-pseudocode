/*
 * XREFs of ?bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z @ 0x1C0124B6C
 * Callers:
 *     ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C01249C4 (-bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 * Callees:
 *     ?MDiv64@@YA_J_J00@Z @ 0x1C00B0CB0 (-MDiv64@@YA_J_J00@Z.c)
 */

__int64 __fastcall bDoGradient(__int64 *a1, __int64 *a2, __int64 *a3, int a4, int a5, int a6, struct _GRADSTRUCT *a7)
{
  __int64 v10; // r12
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // edx
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // r10
  __int64 v21; // r8
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r11
  __int64 result; // rax

  v10 = a4;
  v11 = *((int *)a7 + 5);
  v12 = *((_QWORD *)a7 + 3);
  v13 = (a5 - a4) * *((_DWORD *)a7 + 1);
  v14 = (a6 - a4) * *(_DWORD *)a7;
  v15 = (a5 - a4) * *((_DWORD *)a7 + 3) - (a6 - a4) * *((_DWORD *)a7 + 2);
  v16 = -(__int64)(v14 - v13);
  v17 = abs32(*((_DWORD *)a7 + 5));
  if ( v11 >= 0 )
    v16 = v14 - v13;
  v18 = -v15;
  if ( v11 >= 0 )
    v18 = v15;
  v19 = MDiv64(v18, *((_QWORD *)a7 + 4), v17);
  *a1 = v12 * v20 + v19;
  v23 = MDiv64(v16, v22, v21);
  v24 = *((int *)a7 + 4);
  *a2 = v12 * v16 + v23;
  result = 1LL;
  *a3 = (((v25 >> 1) + 1) * v26 - v24 - 1) / v17 + v24 + ((v25 >> 1) + 1) * v12 + (v10 << 48);
  return result;
}
