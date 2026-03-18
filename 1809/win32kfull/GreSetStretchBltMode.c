/*
 * XREFs of GreSetStretchBltMode @ 0x1C006DD70
 * Callers:
 *     BltIcon @ 0x1C006DB60 (BltIcon.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetStretchBltMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  char v5; // r8
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 976LL);
    v5 = 2;
    v3 = *(_DWORD *)(v4 + 232);
    *(_DWORD *)(v4 + 232) = a2;
    if ( a2 <= 4 )
      v5 = a2;
    *(_BYTE *)(*(_QWORD *)(v7[0] + 976LL) + 215LL) = v5;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v3;
}
