/*
 * XREFs of ??0EBOX@@QEAA@AEAVEXFORMOBJ@@AEAU_RECTL@@@Z @ 0x1C0280B90
 * Callers:
 *     GreAngleArc @ 0x1C026F194 (GreAngleArc.c)
 * Callees:
 *     <none>
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct EXFORMOBJ *a2, struct _RECTL *a3)
{
  __int128 v3; // xmm0
  __int64 *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // edx

  v3 = (__int128)*a3;
  *(_DWORD *)this = 0;
  v4 = (__int64 *)((char *)this + 8);
  *((_DWORD *)this + 1) = 0;
  *((_OWORD *)this + 4) = v3;
  *((_DWORD *)this + 2) = a3->right;
  *((_DWORD *)this + 3) = a3->top;
  *((_DWORD *)this + 4) = a3->left;
  *((_DWORD *)this + 5) = a3->top;
  *((_DWORD *)this + 6) = a3->left;
  *((_DWORD *)this + 7) = a3->bottom;
  EXFORMOBJ::bXformRound(a2, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
  v6 = *v4;
  *((_QWORD *)this + 6) = *v4;
  *((_DWORD *)this + 12) = v6 - *((_DWORD *)this + 4);
  *((_DWORD *)this + 13) -= *((_DWORD *)this + 5);
  v7 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 7) = v7;
  *((_DWORD *)this + 14) = v7 - *((_DWORD *)this + 6);
  *((_DWORD *)this + 15) -= *((_DWORD *)this + 7);
  v8 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = v8;
  *((_DWORD *)this + 8) = *((_DWORD *)this + 12) + v8;
  *((_DWORD *)this + 9) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 12) = (*((_DWORD *)this + 12) + 1) >> 1;
  *((_DWORD *)this + 13) = (*((_DWORD *)this + 13) + 1) >> 1;
  *((_DWORD *)this + 14) = (*((_DWORD *)this + 14) + 1) >> 1;
  *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
  v9 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 5) = v9;
  v10 = v9 + *((_DWORD *)this + 12);
  *((_DWORD *)this + 10) = v10;
  *((_DWORD *)this + 11) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 10) = v10 + *((_DWORD *)this + 14);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 15);
  return this;
}
