/*
 * XREFs of ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x1C015C86C
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C015A680 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003D634 (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::IsRCZClick(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct tagPOINT **a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  CPTPEngine *v8; // r11
  unsigned int v10; // eax
  unsigned int v11; // r15d
  unsigned __int64 *v12; // r9
  __int64 v13; // rsi
  _DWORD *v14; // r10
  _DWORD *v15; // rcx
  int v16; // r8d
  struct CContactState *v17; // r10
  BOOL v18; // eax
  unsigned __int64 v19; // rdx
  bool v20; // cl

  v4 = 0;
  v5 = 0LL;
  v8 = this;
  if ( (*((_DWORD *)this + 106) & 2) == 0 )
    return 0LL;
  v10 = *((_DWORD *)a2 + 12);
  if ( v10 )
  {
    v11 = *((_DWORD *)this + 4);
    v12 = (unsigned __int64 *)((char *)a2 + 92);
    v13 = v10;
    do
    {
      v14 = (_DWORD *)((char *)v8 + 296 * (*((_DWORD *)v12 - 9) % v11) + 1192);
      if ( (*v14 & 0x8000000) != 0 && v14[5] >= *((_DWORD *)v8 + 807) )
      {
        v18 = PtInRect((_DWORD *)v8 + 806, *v12) && PtInRect(v15, *((_QWORD *)v17 + 2));
        if ( (v16 & 1) != 0 )
          v18 = v18 && (v16 & 0x40) == 0 && (v16 & 0x4000000) == 0;
        v19 = *((_QWORD *)v17 + 9);
        v20 = v19 > v5 || v19 == v5 && v18;
        if ( a3 )
          v20 = v17 == a3;
        if ( v20 )
        {
          v5 = *((_QWORD *)v17 + 9);
          *a4 = (struct tagPOINT *)v12;
          v4 = v18;
        }
      }
      v12 += 12;
      --v13;
    }
    while ( v13 );
  }
  return v4;
}
