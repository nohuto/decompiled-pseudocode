/*
 * XREFs of CmQueryMultipleValueKey @ 0x140630040
 * Callers:
 *     NtQueryMultipleValueKey @ 0x14063B060 (NtQueryMultipleValueKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x1405FAAF0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     HvUnlockHiveFlusherShared @ 0x14062D480 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14062D4B4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14062DAD4 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindValueByName @ 0x1406304A4 (CmpFindValueByName.c)
 *     CmpFindNameInList @ 0x1406304D4 (CmpFindNameInList.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140632D84 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpGetValueData @ 0x14064E540 (CmpGetValueData.c)
 *     CmpUnlockTwoKcbs @ 0x140650340 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1406503DC (CmpLockTwoKcbsShared.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408280E4 (CmQueryMultipleValueForLayeredKey.c)
 */

__int64 __fastcall CmQueryMultipleValueKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        _DWORD *a7)
{
  __int64 v10; // r14
  __int64 v11; // r13
  ULONG_PTR v12; // rsi
  ULONG_PTR v13; // r15
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // r10d
  int v17; // edi
  unsigned int v18; // ecx
  ULONG_PTR v19; // r13
  unsigned __int16 *v20; // r8
  unsigned __int16 i; // dx
  unsigned int ValueByName; // ecx
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned int v25; // r13d
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  unsigned __int16 *v28; // rdx
  unsigned int MultipleValueForLayeredKey; // ebx
  int v31; // ebx
  int v32; // eax
  int v33; // r12d
  int v34; // eax
  char v35; // [rsp+40h] [rbp-D8h]
  unsigned int Size; // [rsp+44h] [rbp-D4h] BYREF
  unsigned int Size_4; // [rsp+48h] [rbp-D0h]
  unsigned int v38; // [rsp+4Ch] [rbp-CCh]
  int v39; // [rsp+50h] [rbp-C8h]
  int v40; // [rsp+54h] [rbp-C4h]
  int v41; // [rsp+58h] [rbp-C0h]
  ULONG_PTR v42; // [rsp+60h] [rbp-B8h]
  __int64 v43; // [rsp+68h] [rbp-B0h] BYREF
  unsigned int v44; // [rsp+70h] [rbp-A8h]
  void *Src; // [rsp+78h] [rbp-A0h] BYREF
  _DWORD v46[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v47; // [rsp+88h] [rbp-90h]
  _DWORD v48[4]; // [rsp+90h] [rbp-88h] BYREF
  unsigned __int16 *v49; // [rsp+A0h] [rbp-78h]
  _DWORD v50[2]; // [rsp+A8h] [rbp-70h] BYREF
  ULONG_PTR v51; // [rsp+B0h] [rbp-68h]
  _DWORD v52[2]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-58h]
  __int64 v54; // [rsp+C8h] [rbp-50h]
  ULONG_PTR v55; // [rsp+D0h] [rbp-48h]
  ULONG_PTR v56; // [rsp+D8h] [rbp-40h]
  char v57; // [rsp+120h] [rbp+8h] BYREF
  __int64 v58; // [rsp+130h] [rbp+18h]
  unsigned int v59; // [rsp+138h] [rbp+20h]

  v59 = a4;
  v58 = a3;
  v51 = 0LL;
  v42 = 0LL;
  v46[0] = -1;
  v46[1] = 0;
  v38 = 0;
  Size_4 = 0;
  v35 = 0;
  v48[0] = -1;
  v48[1] = 0;
  v47 = 0LL;
  v52[0] = -1;
  v52[1] = 0;
  v10 = 0LL;
  v53 = 0LL;
  v11 = 0LL;
  v43 = 0LL;
  LOBYTE(v41) = 0;
  LOBYTE(v40) = 0;
  Src = 0LL;
  v57 = 0;
  v50[0] = -1;
  v50[1] = 0;
  CmpLockRegistry();
  v12 = *(_QWORD *)(a1 + 8);
  v55 = v12;
  if ( *(_WORD *)(v12 + 66) )
  {
    MultipleValueForLayeredKey = CmQueryMultipleValueForLayeredKey(a1, v58, a4, a5, (__int64)a6, (__int64)a7);
    CmpUnlockRegistry();
    return MultipleValueForLayeredKey;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockKcbShared(v12);
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v31 = (*(_DWORD *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
      CmpUnlockKcb(v12);
LABEL_48:
      CmpUnlockRegistry();
      return (unsigned int)(v31 - 1073741444);
    }
    CmpUnlockKcb(v12);
    v33 = CmpTransSearchAddTransFromKeyBody(a1, &v43);
    if ( v33 < 0 )
    {
      CmpUnlockRegistry();
      return (unsigned int)v33;
    }
    v11 = v43;
  }
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    v53 = v10;
  }
  CmpLockTwoKcbsShared(v10, v12);
  if ( CmpIsKeyDeletedForKeyBody(a1, v11) )
  {
    v32 = *(_DWORD *)(a1 + 48);
LABEL_47:
    v31 = (v32 & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs(v10, v12);
    goto LABEL_48;
  }
  if ( a2 && CmpIsKeyDeletedForKeyBody(a2, v11) )
  {
    v32 = *(_DWORD *)(a2 + 48);
    goto LABEL_47;
  }
  v13 = *(_QWORD *)(v12 + 32);
  v56 = v13;
  HvLockHiveFlusherShared(v13);
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v13 + 8))(v13, *(unsigned int *)(v12 + 40), v48);
  v54 = v14;
  if ( !v14 )
  {
    HvUnlockHiveFlusherShared(v13);
LABEL_56:
    CmpUnlockTwoKcbs(v10, v12);
    CmpUnlockRegistry();
    return 3221225626LL;
  }
  CmpUpdateKeyNodeAccessBits(v13, v14, *(_DWORD *)(v12 + 40));
  HvUnlockHiveFlusherShared(v13);
  if ( v11 )
  {
    v34 = (unsigned __int8)v41;
    if ( *(_QWORD *)(v12 + 288) == v11 )
      v34 = 1;
    v41 = v34;
  }
  if ( !v10 )
  {
    v15 = 0LL;
    LOBYTE(v16) = v40;
    goto LABEL_12;
  }
  v51 = *(_QWORD *)(v10 + 32);
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v51 + 8))(v51, *(unsigned int *)(v10 + 40), v52);
  v47 = v15;
  if ( !v15 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v13 + 16))(v13, v48);
    goto LABEL_56;
  }
  LOBYTE(v16) = v40;
  if ( v11 )
  {
    v16 = (unsigned __int8)v40;
    if ( *(_QWORD *)(v10 + 288) == v11 )
      v16 = 1;
    v40 = v16;
  }
LABEL_12:
  v17 = 0;
  v18 = 0;
  v19 = 0LL;
  while ( 1 )
  {
    v44 = v18;
    if ( v18 >= v59 )
      break;
    v20 = (unsigned __int16 *)(v58 + 32LL * v18);
    v49 = v20;
    for ( i = *v20; i && !*(_WORD *)(*((_QWORD *)v20 + 1) + 2 * ((unsigned __int64)i >> 1) - 2); *v20 = i )
      i -= 2;
    ValueByName = -1;
    v39 = -1;
    Size = -1;
    if ( v10 )
    {
      v19 = v51;
      v42 = v51;
      if ( (_BYTE)v16 )
      {
        CmpFindNameInList(v51, v10 + 280, (_DWORD)v20, 0, 0LL, (__int64)&Size);
        ValueByName = Size;
        v39 = Size;
      }
      else
      {
        ValueByName = CmpFindValueByName(v51, v15);
        v39 = ValueByName;
        Size = ValueByName;
      }
      LODWORD(v20) = (_DWORD)v49;
    }
    if ( ValueByName == -1 )
    {
      v19 = v13;
      v42 = v13;
      if ( (_BYTE)v41 )
      {
        CmpFindNameInList(v13, v12 + 280, (_DWORD)v20, 0, 0LL, (__int64)&Size);
        ValueByName = Size;
        v39 = Size;
      }
      else
      {
        ValueByName = CmpFindValueByName(v13, v54);
        v39 = ValueByName;
      }
      if ( ValueByName == -1 )
      {
        v17 = -1073741772;
        break;
      }
    }
    v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *, __int64))(v19 + 8))(v19, ValueByName, v46, v15);
    v43 = v23;
    if ( !v23 )
    {
      v17 = -1073741670;
      goto LABEL_38;
    }
    v25 = *(_DWORD *)(v23 + 4);
    if ( v25 >= 0x80000000 )
      v25 += 0x80000000;
    Size = v25;
    v26 = (Size_4 + 3) & 0xFFFFFFFC;
    Size_4 = v26;
    v48[3] = v26;
    v27 = (v38 + 3) & 0xFFFFFFFC;
    v38 = v27;
    v48[2] = v27;
    if ( v25 + v26 > *a6 || v25 + v26 < v26 || v35 )
    {
      v35 = 1;
    }
    else
    {
      v19 = v42;
      if ( !(unsigned __int8)CmpGetValueData(
                               v42,
                               v39,
                               v23,
                               (unsigned int)&Size,
                               (__int64)&Src,
                               (__int64)&v57,
                               (__int64)v50) )
      {
        v17 = -1073741670;
        v23 = v43;
        goto LABEL_38;
      }
      v25 = Size;
      memmove((void *)(a5 + Size_4), Src, Size);
      v28 = v49;
      *((_DWORD *)v49 + 6) = *(_DWORD *)(v43 + 12);
      *((_QWORD *)v28 + 2) = __PAIR64__(Size_4, v25);
      if ( v57 )
      {
        ExFreePoolWithTag(Src, 0);
        v57 = 0;
      }
      else
      {
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v42 + 16))(v42, v50);
      }
      Src = 0LL;
      Size_4 += v25;
      v27 = v38;
    }
    v38 = v25 + v27;
    v19 = v42;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v42 + 16))(v42, v46);
    v18 = v44 + 1;
    v15 = v47;
    LOBYTE(v16) = v40;
  }
  v24 = v38;
  v23 = 0LL;
  if ( v17 >= 0 )
  {
    if ( v35 )
      v17 = -2147483643;
    *a6 = Size_4;
    if ( a7 )
      *a7 = v24;
  }
LABEL_38:
  if ( v23 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(v19 + 16))(v19, v46, v24, v15);
  if ( v47 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(v51 + 16))(v51, v52, v24, v15);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(v13 + 16))(v13, v48, v24, v15);
  CmpUnlockTwoKcbs(v10, v12);
  CmpUnlockRegistry();
  return (unsigned int)v17;
}
