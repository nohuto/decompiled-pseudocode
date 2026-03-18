/*
 * XREFs of ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z @ 0x1C010FB5C
 * Callers:
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C010FD7C (-DrvDriverFailure@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall tagKERNELDISPLAYINFO::operator=(__int64 *a1)
{
  _DWORD **v1; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  _DWORD *v5; // r9
  __int64 v6; // r10
  _DWORD *v7; // rax
  int v8; // ecx

  v1 = (_DWORD **)gpDispInfo;
  *(_OWORD *)a1 = *(_OWORD *)gpDispInfo;
  a1[2] = (__int64)v1[2];
  a1[3] = (__int64)v1[3];
  a1[4] = (__int64)v1[4];
  a1[5] = (__int64)v1[5];
  a1[6] = (__int64)v1[6];
  a1[7] = (__int64)v1[7];
  a1[8] = (__int64)v1[8];
  a1[9] = (__int64)v1[9];
  a1[10] = (__int64)v1[10];
  *((_DWORD *)a1 + 22) = *((_DWORD *)v1 + 22);
  *((_DWORD *)a1 + 23) = *((_DWORD *)v1 + 23);
  v3 = *a1;
  v4 = 0LL;
  v5 = v1[12];
  if ( v5 )
    v6 = *((_QWORD *)v5 + 6);
  else
    v6 = 0LL;
  *(_QWORD *)(v3 + 8) = v6;
  a1[12] = (__int64)v5;
  v7 = v1[13];
  if ( v7 )
    v4 = *((_QWORD *)v7 + 6);
  *(_QWORD *)(*a1 + 16) = v4;
  a1[13] = (__int64)v7;
  *(_DWORD *)(*a1 + 24) = (*v1)[6];
  *(_DWORD *)(*a1 + 28) = (*v1)[7];
  *(_DWORD *)(*a1 + 32) = (*v1)[8];
  *(_DWORD *)(*a1 + 36) = (*v1)[9];
  v8 = *((_DWORD *)a1 + 33);
  a1[15] = (__int64)v1[15];
  *((_WORD *)a1 + 64) = *((_WORD *)v1 + 64);
  *((_DWORD *)a1 + 33) ^= (*((_DWORD *)v1 + 33) ^ v8) & 1;
  *((_DWORD *)a1 + 33) ^= ((unsigned __int8)*((_DWORD *)a1 + 33) ^ (unsigned __int8)*((_DWORD *)v1 + 33)) & 2;
  *((_DWORD *)a1 + 34) = *((_DWORD *)v1 + 34);
  *((_OWORD *)a1 + 9) = *((_OWORD *)v1 + 9);
  *((_WORD *)a1 + 80) = *((_WORD *)v1 + 80);
  *((_WORD *)a1 + 81) = *((_WORD *)v1 + 81);
  *(_DWORD *)*a1 = **v1;
  return a1;
}
