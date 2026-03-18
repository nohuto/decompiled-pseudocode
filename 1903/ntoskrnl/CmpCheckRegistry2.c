/*
 * XREFs of CmpCheckRegistry2 @ 0x140650910
 * Callers:
 *     CmCheckRegistry @ 0x14065CD7C (CmCheckRegistry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x14027F760 (SetFailureLocation.c)
 *     CmpCheckKey @ 0x140651270 (CmpCheckKey.c)
 *     CmpCheckLexicographicalOrder @ 0x140651E10 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406DD1E8 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1408391BC (CmpRemoveSubKeyCellNoCellRef.c)
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
  unsigned int v10; // ebp
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64); // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int *v14; // r15
  int v15; // r14d
  __int64 v16; // r12
  unsigned int *v17; // rbx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 (__fastcall *v27)(ULONG_PTR, __int64, _DWORD *); // rax
  __int16 *v28; // rax
  __int16 *v29; // r14
  __int16 v30; // ax
  _WORD *v31; // rax
  unsigned int v32; // ecx
  int v33; // esi
  __int64 v34; // r14
  int v36; // eax
  int v37; // r15d
  int v38; // eax
  int v39; // [rsp+20h] [rbp-78h]
  __int64 v40; // [rsp+40h] [rbp-58h]
  _DWORD v41[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v42; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v43[2]; // [rsp+58h] [rbp-40h] BYREF
  int v44; // [rsp+A0h] [rbp+8h]
  char v46; // [rsp+B8h] [rbp+20h]

  v46 = 0;
  v10 = 0;
  v42 = 0LL;
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24);
  LODWORD(v42) = -1;
  v12 = v11(10240LL, 0LL, 1935887683LL);
  v13 = a7;
  v40 = v12;
  if ( !v12 )
  {
    v20 = -1073741670;
    SetFailureLocation(a7, 0, 13, -1073741670, 0);
    return v20;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 232) = v12;
  v14 = (unsigned int *)(v12 - 20);
  *(_DWORD *)v12 = a3;
  v15 = 0;
  *(_QWORD *)(v12 + 4) = -1LL;
  v16 = 0LL;
  *(_DWORD *)(v12 + 12) = 0;
  v17 = (unsigned int *)v12;
  *a8 = 0;
  *(_BYTE *)(v12 + 16) = 0;
  v44 = 0;
  while ( 1 )
  {
    if ( !*((_BYTE *)v17 + 16) )
    {
      v18 = *a8;
      *((_BYTE *)v17 + 16) = 1;
      if ( v18 != -1 )
        *a8 = v18 + 1;
      v19 = CmpCheckKey(BugCheckParameter2, a5, a6, v13);
      v20 = v19;
      if ( v19 == -2147483606 )
      {
        v46 = 1;
      }
      else if ( v19 < 0 )
      {
        if ( v19 != -1073741492 )
          goto LABEL_72;
        v37 = a2 & 0x20000;
        if ( (a2 & 0x20000) == 0 )
        {
          if ( BYTE2(NlsMbCodePageTag) )
            v10 = v37 + 1;
          else
            v10 = (CmpBootType & 6) != 0;
        }
        v36 = 16;
        goto LABEL_55;
      }
      if ( v16 > 0 )
        break;
    }
LABEL_14:
    v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *v17,
            &v42);
    if ( !v23 )
    {
      v39 = 64;
      goto LABEL_70;
    }
    v24 = v17[3];
    if ( v24 >= *(_DWORD *)(v23 + 20) )
    {
      v14 -= 5;
      v25 = -1LL;
      v17 -= 5;
      goto LABEL_17;
    }
    v26 = *(unsigned int *)(v23 + 28);
    v27 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
    v43[1] = 0;
    v43[0] = -1;
    v28 = (__int16 *)v27(BugCheckParameter2, v26, v43);
    v29 = v28;
    if ( !v28 )
    {
      v38 = 80;
LABEL_66:
      v20 = -1073741670;
LABEL_67:
      SetFailureLocation(a7, 0, 13, v20, v38);
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v42);
      goto LABEL_72;
    }
    v41[0] = -1;
    v41[1] = 0;
    v30 = *v28;
    if ( v30 != 26994 )
    {
LABEL_32:
      if ( ((v30 - 26220) & 0xFDFF) == 0 )
      {
        v33 = *(_DWORD *)&v29[4 * v24 + 2];
        goto LABEL_29;
      }
LABEL_45:
      v33 = *(_DWORD *)&v29[2 * v24 + 2];
      goto LABEL_29;
    }
    if ( !v29[1] )
      goto LABEL_45;
    while ( 1 )
    {
      v31 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       *(unsigned int *)&v29[2 * v10 + 2],
                       v41);
      if ( !v31 )
      {
        v33 = -1;
        goto LABEL_29;
      }
      v32 = (unsigned __int16)v31[1];
      if ( v24 < v32 )
        break;
      v24 -= v32;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v41);
      if ( ++v10 >= (unsigned __int16)v29[1] )
      {
        v30 = *v29;
        goto LABEL_32;
      }
    }
    if ( ((*v31 - 26220) & 0xFDFF) != 0 )
      v33 = *(_DWORD *)&v31[2 * v24 + 2];
    else
      v33 = *(_DWORD *)&v31[4 * v24 + 2];
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v41);
LABEL_29:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v43);
    if ( v33 == -1 )
    {
      v38 = 88;
      goto LABEL_66;
    }
    ++v17[3];
    v14 += 5;
    v17 += 5;
    if ( v16 == 511 )
    {
      v20 = -1073741492;
      v38 = 96;
      goto LABEL_67;
    }
    v10 = 0;
    v15 = v44;
    v17[1] = *v14;
    *v17 = v33;
    v25 = 1LL;
    v17[2] = -1;
    v17[3] = 0;
    *((_BYTE *)v17 + 16) = 0;
LABEL_17:
    v15 += v25;
    v16 += v25;
    v44 = v15;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v42);
    if ( v16 < 0 )
    {
      if ( (a2 & 0x20000) != 0 || (unsigned __int8)CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter2) )
      {
        v34 = v40;
        if ( v46 )
          v20 = -2147483606;
        else
          v20 = 0;
        goto LABEL_38;
      }
      v39 = 112;
LABEL_70:
      v20 = -1073741492;
      SetFailureLocation(a7, 0, 13, -1073741492, v39);
      goto LABEL_72;
    }
    v13 = a7;
  }
  v21 = v14[2];
  if ( (_DWORD)v21 == -1 || (v22 = CmpCheckLexicographicalOrder(BugCheckParameter2, v21, *v17), v20 = v22, v22 >= 0) )
  {
    v14[2] = *v17;
    goto LABEL_14;
  }
  if ( v22 != -1073741492 )
  {
    SetFailureLocation(a7, 0, 13, v22, 37);
LABEL_72:
    v34 = v40;
    goto LABEL_38;
  }
  v36 = 48;
  v37 = a2 & 0x20000;
LABEL_55:
  SetFailureLocation(a7, v10, 13, v20, v36);
  if ( v37 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 || !v15 )
  {
    v20 = -1073741492;
    SetFailureLocation(a7, 0, 13, -1073741492, 24);
    goto LABEL_72;
  }
  v34 = v40;
  if ( (unsigned __int8)CmpRemoveSubKeyCellNoCellRef(BugCheckParameter2) )
  {
    v20 = -1073741267;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v20 = -1073741492;
    SetFailureLocation(a7, 0, 13, -1073741492, 32);
  }
LABEL_38:
  (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v34, 10240LL);
  return v20;
}
