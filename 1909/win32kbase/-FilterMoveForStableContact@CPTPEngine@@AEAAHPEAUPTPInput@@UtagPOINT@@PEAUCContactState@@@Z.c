/*
 * XREFs of ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C01941CC
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0192714 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C01938F8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 * Callees:
 *     ?CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C01923E4 (-CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall CPTPEngine::FilterMoveForStableContact(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct tagPOINT a3,
        struct CContactState *a4)
{
  __int64 v7; // rbp
  int v8; // ecx
  char v9; // dl
  char v10; // r8
  bool v11; // di
  int v12; // ecx
  bool v13; // al
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rsi
  BOOL v16; // eax
  int v17; // edx
  bool v18; // al

  if ( (*((_DWORD *)this + 55) & 0x80u) == 0 )
    return 0LL;
  v7 = *(_QWORD *)a2;
  if ( a3 )
  {
    v8 = *(_DWORD *)a4;
    v9 = 1;
LABEL_6:
    if ( (v8 & 0x1000000) == 0 )
      goto LABEL_9;
    goto LABEL_7;
  }
  v8 = *(_DWORD *)a4;
  v9 = 0;
  if ( (*(_DWORD *)a4 & 0x1000000) == 0 )
  {
    v8 |= 0x1000000u;
    *(_DWORD *)a4 = v8;
    *((_QWORD *)a4 + 14) = *(_QWORD *)a2;
    goto LABEL_6;
  }
LABEL_7:
  if ( v9 )
  {
    v10 = 1;
    goto LABEL_10;
  }
LABEL_9:
  v10 = 0;
LABEL_10:
  v11 = 0;
  if ( v9 )
    *(_DWORD *)a4 = v8 & 0xFEFFFFFF;
  v12 = *((_DWORD *)this + 814);
  v13 = (v12 & 1) != 0 && *((_QWORD *)a4 + 8) <= *((_QWORD *)this + 384);
  if ( ((v12 & 0x20000000) != 0 || v13) && v10 )
    v11 = v7 - *((_QWORD *)a4 + 14) >= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 67) / 0x3E8;
  v14 = v7 - *((_QWORD *)a4 + 13);
  v15 = *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 66) / 0x3E8;
  v16 = CPTPEngine::CrossedTPMoveFilteringThreshold(this, a4, *(struct tagPOINT *)((char *)a4 + 24));
  v17 = *(_DWORD *)a4;
  v18 = (*(_DWORD *)a4 & 0x2000000) != 0 && v14 < v15 && !v16;
  if ( v11 )
  {
    *((_QWORD *)a4 + 6) = *((_QWORD *)a4 + 3);
    *((_QWORD *)a4 + 7) = *(_QWORD *)((char *)a2 + 28);
    *(_DWORD *)a4 = v17 | 0x2000000;
    *((_QWORD *)a4 + 13) = v7;
  }
  else if ( !v18 )
  {
    *(_DWORD *)a4 = v17 & 0xFDFFFFFF;
    return 0LL;
  }
  return 1LL;
}
