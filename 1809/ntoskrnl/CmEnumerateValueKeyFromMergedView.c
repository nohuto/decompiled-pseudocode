/*
 * XREFs of CmEnumerateValueKeyFromMergedView @ 0x1407F2744
 * Callers:
 *     NtEnumerateValueKey @ 0x1405D4890 (NtEnumerateValueKey.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindNameInList @ 0x1405D162C (CmpFindNameInList.c)
 *     CmpQueryKeyValueData @ 0x1405D2B30 (CmpQueryKeyValueData.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockTwoKcbs @ 0x1406BD8D8 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1406BD924 (CmpLockTwoKcbsShared.c)
 */

__int64 __fastcall CmEnumerateValueKeyFromMergedView(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        int a5,
        _DWORD *Src,
        unsigned int a7,
        int *a8,
        unsigned int *a9)
{
  __int64 v12; // r15
  int KeyValueData; // ebx
  _DWORD *v14; // r12
  ULONG_PTR v15; // rdi
  ULONG_PTR v16; // r14
  char v17; // al
  unsigned int *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned int v22; // esi
  unsigned int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r13
  __int16 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rsi
  unsigned int v32; // ecx
  __int64 v33; // rax
  int v35; // [rsp+48h] [rbp-69h]
  unsigned int v36; // [rsp+4Ch] [rbp-65h]
  _DWORD v37[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v38; // [rsp+58h] [rbp-59h]
  __int64 v39; // [rsp+60h] [rbp-51h] BYREF
  unsigned int *v40; // [rsp+68h] [rbp-49h]
  _DWORD v41[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v42; // [rsp+78h] [rbp-39h]
  _DWORD v43[2]; // [rsp+80h] [rbp-31h] BYREF
  _DWORD v44[2]; // [rsp+88h] [rbp-29h] BYREF
  _DWORD v45[2]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v46; // [rsp+98h] [rbp-19h]
  __int16 v47; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-9h]
  int v49; // [rsp+F8h] [rbp+47h]

  v39 = 0LL;
  v46 = 0LL;
  v44[0] = -1;
  v44[1] = 0;
  v42 = 0LL;
  v12 = 0LL;
  v45[0] = -1;
  KeyValueData = 0;
  v45[1] = 0;
  v14 = 0LL;
  v40 = 0LL;
  v49 = 0;
  v35 = 0;
  v38 = 0LL;
  v41[0] = -1;
  v41[1] = 0;
  v43[0] = -1;
  v43[1] = 0;
  v37[0] = -1;
  v37[1] = 0;
  if ( !a3 )
    CmpLockRegistry();
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v39);
    if ( KeyValueData < 0 )
    {
      if ( !a3 )
        goto LABEL_66;
      return (unsigned int)KeyValueData;
    }
    v12 = v39;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(a2 + 8);
  if ( !a3 )
    CmpLockTwoKcbsShared(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8));
  if ( CmpIsKeyDeletedForKeyBody(a1, v12) )
  {
    v17 = *(_BYTE *)(a1 + 48);
LABEL_13:
    KeyValueData = (v17 & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_64;
  }
  if ( CmpIsKeyDeletedForKeyBody(a2, v12) )
  {
    v17 = *(_BYTE *)(a2 + 48);
    goto LABEL_13;
  }
  if ( !v12 )
    goto LABEL_23;
  if ( *(_QWORD *)(v15 + 280) == v12 )
  {
    v18 = (unsigned int *)(v15 + 272);
    v40 = (unsigned int *)(v15 + 272);
  }
  else
  {
    v18 = 0LL;
  }
  if ( *(_QWORD *)(v16 + 280) == v12 )
    v14 = (_DWORD *)(v16 + 272);
  if ( !v18 )
  {
LABEL_23:
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 8LL))(
            *(_QWORD *)(v15 + 24),
            *(unsigned int *)(v15 + 32),
            v44);
    v46 = v19;
    if ( !v19 )
    {
      KeyValueData = -1073741670;
      goto LABEL_64;
    }
    v18 = (unsigned int *)(v19 + 36);
    v40 = (unsigned int *)(v19 + 36);
  }
  if ( v14 )
    goto LABEL_30;
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 8LL))(
          *(_QWORD *)(v16 + 24),
          *(unsigned int *)(v16 + 32),
          v45);
  v42 = v20;
  v21 = v20;
  if ( v20 )
  {
    v14 = (_DWORD *)(v20 + 36);
LABEL_30:
    v22 = 0;
    v23 = 0;
    while ( v23 < *v18 )
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 8LL))(
              *(_QWORD *)(v15 + 24),
              v18[1],
              v41);
      v38 = v24;
      if ( !v24 )
      {
        KeyValueData = -1073741670;
        goto LABEL_59;
      }
      v25 = v23;
      v26 = *(_QWORD *)(v15 + 24);
      v36 = *(_DWORD *)(v24 + 4 * v25);
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v26 + 8))(v26, v36, v37);
      v28 = v27;
      if ( !v27 )
      {
        KeyValueData = -1073741670;
LABEL_45:
        v31 = 0LL;
        goto LABEL_55;
      }
      v29 = *(_WORD *)(v27 + 16);
      v48 = v27 + 20;
      v47 = *(_WORD *)(v27 + 2);
      if ( CmpFindNameInList(*(_QWORD *)(v16 + 24), (int)v14, (int)&v47, (v29 & 1) << 16, 0LL, (__int64)&v39)
        && (_DWORD)v39 == -1 )
      {
        if ( v22 == a4 )
        {
          v30 = v15;
          v31 = 0LL;
          goto LABEL_53;
        }
        v35 = ++v22;
      }
      v23 = ++v49;
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v37);
      if ( v38 )
      {
        (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v41);
        v38 = 0LL;
      }
      if ( v22 > a4 )
        goto LABEL_45;
      v18 = v40;
    }
    v32 = v22 + *v14;
    if ( v32 <= a4 )
    {
      KeyValueData = -2147483622;
      if ( a9 )
        *a9 = v32;
      goto LABEL_45;
    }
    v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 8LL))(
            *(_QWORD *)(v16 + 24),
            (unsigned int)v14[1],
            v43);
    v31 = v33;
    if ( !v33
      || (v26 = *(_QWORD *)(v16 + 24),
          v36 = *(_DWORD *)(v33 + 4LL * (a4 - v35)),
          (v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v26 + 8))(v26, v36, v37)) == 0) )
    {
      KeyValueData = -1073741670;
      goto LABEL_55;
    }
    v30 = v16;
LABEL_53:
    KeyValueData = CmpQueryKeyValueData(v30, v36, v28, a5, Src, a7, a8);
    if ( v28 )
      (*(void (__fastcall **)(__int64, _DWORD *))(v26 + 16))(v26, v37);
LABEL_55:
    if ( v38 )
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v41);
    if ( v31 )
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 16LL))(*(_QWORD *)(v16 + 24), v43);
LABEL_59:
    v21 = v42;
    goto LABEL_60;
  }
  KeyValueData = -1073741670;
LABEL_60:
  if ( v46 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v44);
  if ( v21 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 16LL))(*(_QWORD *)(v16 + 24), v45);
LABEL_64:
  if ( !a3 )
  {
    CmpUnlockTwoKcbs(v15, v16);
LABEL_66:
    CmpUnlockRegistry();
  }
  return (unsigned int)KeyValueData;
}
