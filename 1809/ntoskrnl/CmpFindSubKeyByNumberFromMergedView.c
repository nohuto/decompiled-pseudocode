/*
 * XREFs of CmpFindSubKeyByNumberFromMergedView @ 0x1407F40CC
 * Callers:
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405D40B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1405D5264 (CmpDelayDerefKeyControlBlock.c)
 *     CmpCompareKeysByName @ 0x1407FA8E4 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberFromMergedView(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6,
        ULONG_PTR *a7,
        _DWORD *a8)
{
  unsigned int v8; // ebx
  unsigned int v9; // r13d
  char v10; // r15
  unsigned int v11; // r12d
  ULONG_PTR v12; // rsi
  ULONG_PTR v13; // r14
  unsigned int v14; // edi
  __int64 v15; // r13
  int SubKeyByNumber; // eax
  bool v17; // al
  __int64 v18; // r12
  int v19; // eax
  int v20; // r15d
  __int64 v21; // rcx
  int v23; // r15d
  unsigned int v24; // eax
  char v25; // al
  int v26; // eax
  bool v27; // sf
  bool v28; // cc
  char v29; // [rsp+48h] [rbp-51h]
  bool v30; // [rsp+4Ch] [rbp-4Dh]
  bool v31; // [rsp+50h] [rbp-49h]
  int v32; // [rsp+54h] [rbp-45h] BYREF
  int v33; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-3Dh]
  unsigned int v35; // [rsp+60h] [rbp-39h]
  __int64 v36; // [rsp+68h] [rbp-31h]
  __int64 v37; // [rsp+70h] [rbp-29h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-21h] BYREF
  ULONG_PTR v39; // [rsp+80h] [rbp-19h] BYREF
  _DWORD v40[2]; // [rsp+88h] [rbp-11h] BYREF
  _DWORD v41[18]; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v44; // [rsp+F8h] [rbp+5Fh]

  v44 = a3;
  v34 = 0;
  v37 = 0LL;
  v8 = 0;
  v35 = 0;
  v9 = -1;
  v36 = 0LL;
  v10 = 0;
  v41[0] = -1;
  v11 = -1;
  v40[0] = -1;
  v12 = 0LL;
  v41[1] = 0;
  v13 = 0LL;
  v40[1] = 0;
  v14 = -1073741670;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v33 = -1;
  v32 = -1;
  *a5 = 0LL;
  BugCheckParameter2 = 0LL;
  v39 = 0LL;
  *a6 = -1;
  if ( !a2 )
  {
    v11 = -1;
    v30 = 1;
    v32 = -1;
  }
  while ( 1 )
  {
    if ( v10 && v8 >= a3 )
    {
LABEL_66:
      v14 = -2147483622;
      goto LABEL_26;
    }
    if ( v12 )
    {
      CmpDelayDerefKeyControlBlock(v12);
      v12 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    if ( v13 )
    {
      CmpDelayDerefKeyControlBlock(v13);
      v13 = 0LL;
      v39 = 0LL;
    }
    if ( !v31 && v9 == -1 )
    {
      v15 = a1;
      SubKeyByNumber = CmpFindSubKeyByNumberEx(
                         *(_QWORD *)(a1 + 24),
                         *(unsigned int *)(a1 + 32),
                         v34,
                         &v33,
                         a1 & -(__int64)(a4 != 0),
                         a2 & -(__int64)(a4 != 0),
                         a4,
                         (ULONG_PTR *)((unsigned __int64)&BugCheckParameter2 & -(__int64)(a4 != 0)));
      v12 = BugCheckParameter2;
      v14 = SubKeyByNumber;
      if ( SubKeyByNumber < 0 )
        goto LABEL_27;
      v9 = v33;
      v31 = v33 == -1;
    }
    v17 = v30;
    if ( !v30 && v11 == -1 )
      break;
LABEL_17:
    if ( v31 )
    {
      if ( v17 )
        goto LABEL_66;
      v20 = 2;
    }
    else
    {
      v20 = v17;
    }
    if ( v11 != -1 )
    {
      v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a2 + 24) + 8LL))(
              *(_QWORD *)(a2 + 24),
              v11,
              v40);
      if ( !v37 )
      {
LABEL_25:
        v10 = v29;
LABEL_26:
        v15 = a1;
LABEL_27:
        v18 = a2;
        goto LABEL_28;
      }
    }
    if ( v9 == -1 )
    {
      v21 = v36;
    }
    else
    {
      v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
              *(_QWORD *)(a1 + 24),
              v9,
              v41);
      v21 = v36;
      if ( !v36 )
        goto LABEL_25;
    }
    if ( !v20 )
    {
      v26 = CmpCompareKeysByName(v21, v37);
      v27 = v26 < 0;
      v28 = v26 <= 0;
      v24 = v8 + 1;
      if ( !v27 )
      {
        if ( v28 )
        {
          if ( !v29 )
            v24 = v8;
          v8 = v24;
          v25 = 1;
          v10 = 1;
          if ( v8 == v44 )
          {
LABEL_68:
            *a5 = *(_QWORD *)(a1 + 24);
            *a6 = v9;
            if ( a7 )
            {
              *a7 = v12;
              v12 = 0LL;
            }
            goto LABEL_47;
          }
LABEL_58:
          v10 = 1;
          v9 = -1;
          ++v34;
          v33 = -1;
          v29 = 1;
          if ( v25 )
          {
LABEL_59:
            v11 = -1;
            v10 = 1;
            ++v35;
            v32 = -1;
            v29 = 1;
          }
          v21 = v36;
          goto LABEL_61;
        }
LABEL_42:
        v10 = 1;
        if ( !v29 )
          v24 = v8;
        v8 = v24;
        if ( v24 == v44 )
        {
          *a5 = *(_QWORD *)(a2 + 24);
          *a6 = v11;
          if ( a7 )
          {
            *a7 = v13;
            v13 = 0LL;
          }
LABEL_47:
          v14 = 0;
          goto LABEL_26;
        }
        goto LABEL_59;
      }
LABEL_49:
      if ( !v29 )
        v24 = v8;
      v8 = v24;
      v10 = 1;
      if ( v24 == v44 )
        goto LABEL_68;
      v25 = 0;
      goto LABEL_58;
    }
    v23 = v20 - 1;
    if ( !v23 )
    {
      v24 = v8 + 1;
      goto LABEL_49;
    }
    if ( v23 == 1 )
    {
      v24 = v8 + 1;
      goto LABEL_42;
    }
    v10 = v29;
LABEL_61:
    if ( v21 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v41);
      v36 = 0LL;
    }
    a3 = v44;
    if ( v37 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *, _QWORD))(*(_QWORD *)(a2 + 24) + 16LL))(*(_QWORD *)(a2 + 24), v40, v44);
      v37 = 0LL;
      a3 = v44;
    }
  }
  v18 = a2;
  v19 = CmpFindSubKeyByNumberEx(
          *(_QWORD *)(a2 + 24),
          *(unsigned int *)(a2 + 32),
          v35,
          &v32,
          a2 & -(__int64)(a4 != 0),
          a1 & -(__int64)(a4 != 0),
          a4,
          (ULONG_PTR *)((unsigned __int64)&v39 & -(__int64)(a4 != 0)));
  v13 = v39;
  v14 = v19;
  if ( v19 >= 0 )
  {
    v11 = v32;
    v17 = v32 == -1;
    v30 = v32 == -1;
    goto LABEL_17;
  }
  v15 = a1;
LABEL_28:
  if ( v12 )
    CmpDelayDerefKeyControlBlock(v12);
  if ( v13 )
    CmpDelayDerefKeyControlBlock(v13);
  if ( v37 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v18 + 24) + 16LL))(*(_QWORD *)(v18 + 24), v40);
  if ( v36 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v41);
  *a8 = v10 != 0 ? v8 + 1 : 0;
  return v14;
}
