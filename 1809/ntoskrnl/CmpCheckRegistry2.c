/*
 * XREFs of CmpCheckRegistry2 @ 0x1405D9EF0
 * Callers:
 *     CmCheckRegistry @ 0x1405A948C (CmCheckRegistry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     CmpCheckKey @ 0x1405DB210 (CmpCheckKey.c)
 *     CmpCheckLexicographicalOrder @ 0x1405DCCF0 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406BDD20 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140801028 (CmpRemoveSubKeyCellNoCellRef.c)
 */

__int64 __fastcall CmpCheckRegistry2(
        ULONG_PTR BugCheckParameter2,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        PRTL_BITMAP a6,
        __int64 a7,
        int *a8)
{
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64); // rax
  __int64 v12; // rax
  __int64 v14; // r14
  int *v15; // rcx
  unsigned int *v16; // r12
  int v17; // r15d
  __int64 v18; // rbp
  unsigned int *v19; // rsi
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 (__fastcall *v28)(ULONG_PTR, __int64, _DWORD *); // rax
  __int16 *v29; // rax
  __int16 *v30; // r14
  __int16 v31; // ax
  int v32; // ebp
  _WORD *v33; // rax
  unsigned int v34; // ecx
  int v35; // ebx
  __int64 v36; // rax
  void (__fastcall *v37)(ULONG_PTR, __int64 *); // rax
  int v38; // eax
  int v39; // r13d
  __int64 v40; // rsi
  int v41; // eax
  int v42; // [rsp+20h] [rbp-88h]
  __int64 v43; // [rsp+40h] [rbp-68h]
  _DWORD v44[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  _DWORD v46[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v47; // [rsp+60h] [rbp-48h]
  int v48; // [rsp+B0h] [rbp+8h]
  char v49; // [rsp+C8h] [rbp+20h]

  v49 = 0;
  v45 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24);
  LODWORD(v45) = -1;
  v12 = v10(10240LL, 0LL, 1935887683LL);
  v43 = v12;
  if ( !v12 )
  {
    SetFailureLocation(a7, 0, 13, -1073741670, 0);
    return 3221225626LL;
  }
  v14 = a7;
  if ( a7 )
    *(_QWORD *)(a7 + 232) = v12;
  v15 = a8;
  v16 = (unsigned int *)(v12 - 20);
  v17 = 0;
  *(_DWORD *)v12 = a3;
  *(_QWORD *)(v12 + 4) = -1LL;
  v18 = 0LL;
  *(_DWORD *)(v12 + 12) = 0;
  v19 = (unsigned int *)v12;
  *a8 = 0;
  *(_BYTE *)(v12 + 16) = 0;
  v48 = 0;
  v47 = 0LL;
  while ( 1 )
  {
    if ( *((_BYTE *)v19 + 16) )
      goto LABEL_17;
    v20 = *v15;
    *((_BYTE *)v19 + 16) = 1;
    if ( v20 != -1 )
      *v15 = v20 + 1;
    v21 = CmpCheckKey(BugCheckParameter2, a2, a5, a6, v14);
    v22 = v21;
    if ( v21 != -2147483606 )
      break;
    v49 = 1;
LABEL_12:
    if ( (a2 & 0x100000) != 0 && v18 > 0 )
    {
      v23 = v16[2];
      if ( (_DWORD)v23 != -1 )
      {
        v24 = CmpCheckLexicographicalOrder(BugCheckParameter2, v23, *v19);
        v22 = v24;
        if ( v24 < 0 )
        {
          if ( v24 == -1073741492 )
          {
            v38 = 48;
            v39 = a2 & 0x20000;
            goto LABEL_49;
          }
          SetFailureLocation(v14, 0, 13, v24, 37);
LABEL_68:
          v40 = v43;
          goto LABEL_69;
        }
      }
      v16[2] = *v19;
    }
LABEL_17:
    v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *v19,
            &v45);
    if ( !v25 )
    {
      v42 = 64;
      goto LABEL_67;
    }
    v26 = v19[3];
    if ( v26 >= *(_DWORD *)(v25 + 20) )
    {
      v16 -= 5;
      v36 = -1LL;
      v19 -= 5;
      goto LABEL_38;
    }
    v27 = *(unsigned int *)(v25 + 28);
    v28 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
    v46[1] = 0;
    v46[0] = -1;
    v29 = (__int16 *)v28(BugCheckParameter2, v27, v46);
    v30 = v29;
    if ( !v29 )
    {
      v41 = 80;
      goto LABEL_60;
    }
    v44[0] = -1;
    v44[1] = 0;
    v31 = *v29;
    if ( v31 == 26994 )
    {
      v32 = 0;
      if ( v30[1] )
      {
        while ( 1 )
        {
          v33 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                           BugCheckParameter2,
                           *(unsigned int *)&v30[2 * v32 + 2],
                           v44);
          if ( !v33 )
          {
            v35 = -1;
            goto LABEL_34;
          }
          v34 = (unsigned __int16)v33[1];
          if ( v26 < v34 )
            break;
          v26 -= v34;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v44);
          if ( ++v32 >= (unsigned int)(unsigned __int16)v30[1] )
          {
            v31 = *v30;
            goto LABEL_26;
          }
        }
        if ( ((*v33 - 26220) & 0xFDFF) != 0 )
          v35 = *(_DWORD *)&v33[2 * v26 + 2];
        else
          v35 = *(_DWORD *)&v33[4 * v26 + 2];
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v44);
        goto LABEL_34;
      }
    }
    else
    {
LABEL_26:
      if ( ((v31 - 26220) & 0xFDFF) == 0 )
      {
        v35 = *(_DWORD *)&v30[4 * v26 + 2];
        goto LABEL_34;
      }
    }
    v35 = *(_DWORD *)&v30[2 * v26 + 2];
LABEL_34:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v46);
    if ( v35 == -1 )
    {
      v41 = 88;
LABEL_60:
      v22 = -1073741670;
      goto LABEL_61;
    }
    ++v19[3];
    v16 += 5;
    v18 = v47;
    v19 += 5;
    if ( v47 == 511 )
    {
      v22 = -1073741492;
      v41 = 96;
LABEL_61:
      SetFailureLocation(a7, 0, 13, v22, v41);
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v45);
      goto LABEL_68;
    }
    v14 = a7;
    v19[1] = *v16;
    v36 = 1LL;
    *v19 = v35;
    v19[2] = -1;
    v19[3] = 0;
    *((_BYTE *)v19 + 16) = 0;
LABEL_38:
    v48 += v36;
    v18 += v36;
    v37 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16);
    v47 = v18;
    v37(BugCheckParameter2, &v45);
    if ( v18 < 0 )
    {
      if ( (a2 & 0x20000) != 0 || (unsigned __int8)CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter2) )
      {
        v22 = v49 != 0 ? 0x8000002A : 0;
        goto LABEL_68;
      }
      v42 = 112;
LABEL_67:
      v22 = -1073741492;
      SetFailureLocation(v14, 0, 13, -1073741492, v42);
      goto LABEL_68;
    }
    v15 = a8;
  }
  if ( v21 >= 0 )
    goto LABEL_12;
  if ( v21 != -1073741492 )
    goto LABEL_68;
  v39 = a2 & 0x20000;
  if ( !v39 )
  {
    if ( CmpSelfHeal )
      v17 = 1;
    else
      LOBYTE(v17) = (CmpBootType & 6) != 0;
  }
  v38 = 16;
LABEL_49:
  SetFailureLocation(v14, v17, 13, v22, v38);
  if ( v39 || !CmpSelfHeal && (CmpBootType & 6) == 0 || !v48 )
  {
    v42 = 24;
    goto LABEL_67;
  }
  v40 = v43;
  if ( (unsigned __int8)CmpRemoveSubKeyCellNoCellRef(BugCheckParameter2, *(unsigned int *)(v43 + 20LL * v48 + 4)) )
  {
    v22 = -1073741267;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v22 = -1073741492;
    SetFailureLocation(v14, 0, 13, -1073741492, 32);
  }
LABEL_69:
  (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v40, 10240LL);
  return v22;
}
