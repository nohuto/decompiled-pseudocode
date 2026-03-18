/*
 * XREFs of vQsplineToPolyBezier @ 0x1C021E184
 * Callers:
 *     bGeneratePath @ 0x1C021D344 (bGeneratePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vQsplineToPolyBezier(int a1, __int64 *a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  __int64 v8; // rdi
  int v9; // ebx
  int v10; // eax
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // [rsp+18h] [rbp+10h]

  v4 = a1 - 1;
  v6 = *a2;
  v7 = HIDWORD(*a2);
  if ( v4 )
  {
    LODWORD(v7) = HIDWORD(*a2);
    v8 = v4;
    v9 = *a2;
    do
    {
      *(_DWORD *)a4 = (v9 + 2 * (*a3 + 1)) / 3;
      *(_DWORD *)(a4 + 4) = ((int)v7 + 2 * (a3[1] + 1)) / 3;
      v9 = (*a3 + a3[2] + 1) / 2;
      LODWORD(v13) = v9;
      LODWORD(v7) = (a3[3] + 1 + a3[1]) / 2;
      HIDWORD(v13) = v7;
      *(_DWORD *)(a4 + 8) = (v9 + 2 * (*a3 + 1)) / 3;
      v10 = a3[1];
      a3 += 2;
      *(_DWORD *)(a4 + 12) = ((int)v7 + 2 * (v10 + 1)) / 3;
      *(_QWORD *)(a4 + 16) = v13;
      a4 += 24LL;
      --v8;
    }
    while ( v8 );
    LODWORD(v6) = v9;
  }
  *(_DWORD *)a4 = ((int)v6 + 2 * *a3 + 2) / 3;
  *(_DWORD *)(a4 + 4) = ((int)v7 + 2 * (a3[1] + 1)) / 3;
  v11 = *((_QWORD *)a3 + 1);
  *(_DWORD *)(a4 + 8) = ((int)v11 + 2 * (*a3 + 1)) / 3;
  result = (unsigned int)((unsigned __int64)(1431655766LL * (HIDWORD(v11) + 2 * (a3[1] + 1))) >> 32) >> 31;
  *(_DWORD *)(a4 + 12) = (HIDWORD(v11) + 2 * (a3[1] + 1)) / 3;
  *(_QWORD *)(a4 + 16) = v11;
  return result;
}
