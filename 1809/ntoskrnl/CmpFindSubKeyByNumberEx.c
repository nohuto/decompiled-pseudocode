/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x1405D40B0
 * Callers:
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1407F40CC (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmpDoFindSubKeyByNumber @ 0x1405D4470 (CmpDoFindSubKeyByNumber.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1405D5264 (CmpDelayDerefKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x140693BFC (CmpReferenceKeyControlBlock.c)
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 *     CmpIsKeyDeleted @ 0x1406992E0 (CmpIsKeyDeleted.c)
 *     CmRmIsKCBVisible @ 0x14069AAF0 (CmRmIsKCBVisible.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1406F947C (CmpFindSubkeyInHashByChildCell.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        ULONG_PTR *a8)
{
  unsigned int v11; // r12d
  _DWORD *v12; // rdi
  ULONG_PTR *v13; // r15
  bool v14; // al
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rax
  ULONG_PTR v18; // rsi
  __int64 result; // rax
  int v20; // r9d
  int SubkeyInHashByChildCell; // eax
  int v22; // eax
  unsigned int v23; // eax
  bool v24; // zf
  bool v25; // cf
  __int64 (__fastcall *v26)(__int64, _QWORD, _DWORD *); // rax
  __int64 v27; // rax
  int SubKeyByNumber; // eax
  _DWORD *v29; // rdx
  ULONG_PTR v30; // rcx
  char IsKCBVisible; // al
  char IsKeyDeleted; // al
  __int64 v33; // rax
  __int64 NextElement; // rax
  int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // [rsp+30h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-48h]
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-48h]
  ULONG_PTR v40; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-38h]
  _DWORD v42[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v43; // [rsp+58h] [rbp-28h]
  __int64 v44; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v45[2]; // [rsp+68h] [rbp-18h] BYREF
  _DWORD v46[4]; // [rsp+70h] [rbp-10h] BYREF
  int v47; // [rsp+B0h] [rbp+30h] BYREF
  int v48; // [rsp+B4h] [rbp+34h]

  v42[0] = -1;
  v42[1] = 0;
  BugCheckParameter2 = 0LL;
  v40 = 0LL;
  v11 = 0;
  v12 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v42);
  if ( !v12 )
    return 3221225626LL;
  v13 = a8;
  *a4 = -1;
  if ( v13 )
    *v13 = 0LL;
  if ( a5 )
    v14 = *(_QWORD *)(a5 + 200) == a5 + 200;
  else
    v14 = 1;
  v15 = v12[5];
  if ( !v14 )
  {
    v47 = 0;
    v45[0] = -1;
    v45[1] = 0;
    v46[0] = -1;
    v46[1] = 0;
    if ( v15 )
      LODWORD(v43) = v12[7];
    else
      LODWORD(v43) = -1;
    v22 = v12[6];
    if ( v22 )
      LODWORD(v44) = v12[8];
    else
      LODWORD(v44) = -1;
    v41 = v15 + v22;
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v42);
    v23 = 0;
    v12 = 0LL;
    v37 = 0;
    v24 = v41 == 0;
    if ( !v41 )
      goto LABEL_50;
    while ( 1 )
    {
      v25 = v23 < v15;
      v26 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8);
      v40 = 0LL;
      if ( v25 )
      {
        v27 = v26(a1, (unsigned int)v43, v45);
        if ( !v27 )
          return 3221225626LL;
        SubKeyByNumber = CmpDoFindSubKeyByNumber(a1, v27, v37);
        v29 = v45;
      }
      else
      {
        v36 = v26(a1, (unsigned int)v44, v46);
        if ( !v36 )
          return 3221225626LL;
        SubKeyByNumber = CmpDoFindSubKeyByNumber(a1, v36, v37 - v15);
        v29 = v46;
      }
      *a4 = SubKeyByNumber;
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v29);
      if ( *a4 == -1 )
        return 3221225626LL;
      result = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, (__int64)&v40);
      v11 = result;
      if ( (int)result < 0 )
        return result;
      v30 = v40;
      BugCheckParameter2 = v40;
      if ( !v40
        || (IsKCBVisible = CmRmIsKCBVisible(v40, a7), v30 = BugCheckParameter2, IsKCBVisible)
        && (IsKeyDeleted = CmpIsKeyDeleted(BugCheckParameter2, a7), v30 = BugCheckParameter2, !IsKeyDeleted) )
      {
        ++v47;
      }
      if ( v47 == a3 + 1 )
        break;
      if ( v30 )
        CmpDelayDerefKeyControlBlock(v30);
      v23 = v37 + 1;
      v37 = v23;
      if ( v23 >= v41 )
        goto LABEL_49;
    }
    v23 = v37;
LABEL_49:
    v24 = v23 == v41;
LABEL_50:
    if ( !v24 )
      goto LABEL_11;
    v18 = BugCheckParameter2;
    v33 = a5 + 200;
    v43 = a5 + 200;
    v44 = 0LL;
    *a4 = -1;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v33, &v44, 32LL);
      BugCheckParameter2a = NextElement;
      if ( !NextElement )
        goto LABEL_12;
      if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a7) )
      {
        v35 = *(_DWORD *)(BugCheckParameter2a + 68);
        if ( v35 == 1 )
        {
          v18 = *(_QWORD *)(BugCheckParameter2a + 88);
        }
        else
        {
          if ( v35 != 10 )
            goto LABEL_56;
          v18 = *(_QWORD *)(BugCheckParameter2a + 96);
        }
        v40 = v18;
        if ( (unsigned __int8)CmRmIsKCBVisible(v18, a7) && !(unsigned __int8)CmpIsKeyDeleted(v18, a7) )
        {
          if ( v47 == a3 )
          {
            *a4 = *(_DWORD *)(v18 + 32);
            CmpReferenceKeyControlBlock(v18);
            goto LABEL_12;
          }
          ++v47;
        }
      }
LABEL_56:
      v33 = v43;
      v18 = 0LL;
      v40 = 0LL;
    }
  }
  v47 = -1;
  v48 = 0;
  *a4 = -1;
  if ( a3 < v15 )
  {
    v16 = (unsigned int)v12[7];
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 208) > 1u )
  {
    a3 -= v15;
    if ( a3 < v12[6] )
    {
      v16 = (unsigned int)v12[8];
LABEL_9:
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v16, &v47);
      if ( v17 )
      {
        *a4 = CmpDoFindSubKeyByNumber(a1, v17, a3);
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v47);
      }
      else
      {
        v11 = -1073741670;
      }
    }
  }
LABEL_11:
  v18 = BugCheckParameter2;
LABEL_12:
  if ( !v13 || (v20 = *a4, *a4 == -1) )
  {
    if ( v18 )
      CmpDelayDerefKeyControlBlock(v18);
  }
  else
  {
    if ( !v18 )
    {
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v42);
        v20 = *a4;
        v12 = 0LL;
      }
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, a1, v20, (__int64)&v40);
      v18 = v40;
      v11 = SubkeyInHashByChildCell;
      if ( SubkeyInHashByChildCell < 0 )
        *a4 = -1;
    }
    *v13 = v18;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v42);
  return v11;
}
