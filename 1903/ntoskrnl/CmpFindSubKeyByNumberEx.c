/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x140650460
 * Callers:
 *     CmEnumerateKey @ 0x14064FF30 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14082CAC4 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x140633410 (CmpIsKeyDeleted.c)
 *     CmListGetNextElement @ 0x140633584 (CmListGetNextElement.c)
 *     CmpDoFindSubKeyByNumber @ 0x140650810 (CmpDoFindSubKeyByNumber.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14065242C (CmpDelayDerefKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x14069B5DC (CmpReferenceKeyControlBlock.c)
 *     CmRmIsKCBVisible @ 0x1406BE5B0 (CmRmIsKCBVisible.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407131F4 (CmpFindSubkeyInHashByChildCell.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  unsigned int v12; // r12d
  _DWORD *v13; // rdi
  ULONG_PTR *v14; // r14
  bool v15; // al
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rax
  ULONG_PTR v19; // rsi
  __int64 result; // rax
  int v21; // r9d
  int SubkeyInHashByChildCell; // eax
  int v23; // eax
  unsigned int v24; // eax
  bool v25; // zf
  bool v26; // cf
  __int64 (__fastcall *v27)(__int64, _QWORD, _DWORD *); // rax
  __int64 v28; // rax
  int SubKeyByNumber; // eax
  _DWORD *v30; // rdx
  ULONG_PTR v31; // rcx
  char IsKCBVisible; // al
  char IsKeyDeleted; // al
  _QWORD **v34; // rax
  char *NextElement; // rax
  int v36; // eax
  __int64 v37; // rax
  unsigned int v38; // [rsp+30h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-48h]
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-48h]
  ULONG_PTR v41; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-38h]
  _DWORD v43[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD **v44; // [rsp+58h] [rbp-28h]
  _QWORD *v45; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v46[2]; // [rsp+68h] [rbp-18h] BYREF
  _DWORD v47[4]; // [rsp+70h] [rbp-10h] BYREF
  int v48; // [rsp+B0h] [rbp+30h] BYREF
  int v49; // [rsp+B4h] [rbp+34h]

  v43[0] = -1;
  v43[1] = 0;
  BugCheckParameter2 = 0LL;
  v41 = 0LL;
  v12 = 0;
  v13 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v43);
  if ( !v13 )
    return 3221225626LL;
  v14 = a9;
  *a4 = -1;
  if ( v14 )
    *v14 = 0LL;
  if ( a5 )
    v15 = *(_QWORD *)(a5 + 208) == a5 + 208;
  else
    v15 = 1;
  v16 = v13[5];
  if ( !v15 )
  {
    v48 = 0;
    v46[0] = -1;
    v46[1] = 0;
    v47[0] = -1;
    v47[1] = 0;
    if ( v16 )
      LODWORD(v44) = v13[7];
    else
      LODWORD(v44) = -1;
    v23 = v13[6];
    if ( v23 )
      LODWORD(v45) = v13[8];
    else
      LODWORD(v45) = -1;
    v42 = v16 + v23;
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v43);
    v24 = 0;
    v13 = 0LL;
    v38 = 0;
    v25 = v42 == 0;
    if ( !v42 )
      goto LABEL_50;
    while ( 1 )
    {
      v26 = v24 < v16;
      v27 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8);
      v41 = 0LL;
      if ( v26 )
      {
        v28 = v27(a1, (unsigned int)v44, v46);
        if ( !v28 )
          return 3221225626LL;
        SubKeyByNumber = CmpDoFindSubKeyByNumber(a1, v28, v38);
        v30 = v46;
      }
      else
      {
        v37 = v27(a1, (unsigned int)v45, v47);
        if ( !v37 )
          return 3221225626LL;
        SubKeyByNumber = CmpDoFindSubKeyByNumber(a1, v37, v38 - v16);
        v30 = v47;
      }
      *a4 = SubKeyByNumber;
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v30);
      if ( *a4 == -1 )
        return 3221225626LL;
      result = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, (__int64)&v41);
      v12 = result;
      if ( (int)result < 0 )
        return result;
      v31 = v41;
      BugCheckParameter2 = v41;
      if ( !v41
        || (IsKCBVisible = CmRmIsKCBVisible(v41, a7), v31 = BugCheckParameter2, IsKCBVisible)
        && (IsKeyDeleted = CmpIsKeyDeleted(BugCheckParameter2, a7), v31 = BugCheckParameter2, !IsKeyDeleted) )
      {
        ++v48;
      }
      if ( v48 == a3 + 1 )
        break;
      if ( v31 )
        CmpDelayDerefKeyControlBlock(v31);
      v24 = v38 + 1;
      v38 = v24;
      if ( v24 >= v42 )
        goto LABEL_49;
    }
    v24 = v38;
LABEL_49:
    v25 = v24 == v42;
LABEL_50:
    if ( !v25 )
      goto LABEL_11;
    v19 = BugCheckParameter2;
    v34 = (_QWORD **)(a5 + 208);
    v44 = (_QWORD **)(a5 + 208);
    v45 = 0LL;
    *a4 = -1;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v34, &v45, 32);
      BugCheckParameter2a = (ULONG_PTR)NextElement;
      if ( !NextElement )
        goto LABEL_12;
      if ( CmEqualTrans(*((_QWORD *)NextElement + 7), a7) )
      {
        v36 = *(_DWORD *)(BugCheckParameter2a + 68);
        if ( v36 == 1 )
        {
          v19 = *(_QWORD *)(BugCheckParameter2a + 88);
        }
        else
        {
          if ( v36 != 10 )
            goto LABEL_56;
          v19 = *(_QWORD *)(BugCheckParameter2a + 96);
        }
        v41 = v19;
        if ( (unsigned __int8)CmRmIsKCBVisible(v19, a7) && !(unsigned __int8)CmpIsKeyDeleted(v19, a7) )
        {
          if ( v48 == a3 )
          {
            *a4 = *(_DWORD *)(v19 + 40);
            CmpReferenceKeyControlBlock(v19);
            goto LABEL_12;
          }
          ++v48;
        }
      }
LABEL_56:
      v34 = v44;
      v19 = 0LL;
      v41 = 0LL;
    }
  }
  v48 = -1;
  v49 = 0;
  if ( a3 < v16 )
  {
    v17 = (unsigned int)v13[7];
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 208) > 1u )
  {
    a3 -= v16;
    if ( a3 < v13[6] )
    {
      v17 = (unsigned int)v13[8];
LABEL_9:
      v18 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v17, &v48);
      if ( v18 )
      {
        *a4 = CmpDoFindSubKeyByNumber(a1, v18, a3);
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v48);
      }
      else
      {
        v12 = -1073741670;
      }
    }
  }
LABEL_11:
  v19 = BugCheckParameter2;
LABEL_12:
  if ( !v14 || (v21 = *a4, *a4 == -1) )
  {
    if ( v19 )
      CmpDelayDerefKeyControlBlock(v19);
  }
  else
  {
    if ( !v19 )
    {
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v43);
        v21 = *a4;
        v13 = 0LL;
      }
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, a1, v21, (__int64)&v41);
      v19 = v41;
      v12 = SubkeyInHashByChildCell;
      if ( SubkeyInHashByChildCell < 0 )
        *a4 = -1;
    }
    *v14 = v19;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v43);
  return v12;
}
