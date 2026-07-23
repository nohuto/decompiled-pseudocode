/*
 * XREFs of CmQueryMultipleValueKey @ 0x1405D1194
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1405B8130 (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405D03BC (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInList @ 0x1405D162C (CmpFindNameInList.c)
 *     CmpGetValueData @ 0x1405D30A0 (CmpGetValueData.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockTwoKcbs @ 0x1406BD8D8 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1406BD924 (CmpLockTwoKcbsShared.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407EE82C (CmQueryMultipleValueForLayeredKey.c)
 */

__int64 __fastcall CmQueryMultipleValueKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        unsigned int *a7)
{
  int v7; // r12d
  int v8; // r13d
  __int64 v11; // r14
  ULONG_PTR v12; // rsi
  ULONG_PTR v13; // r13
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // r9
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned __int16 *v22; // r8
  unsigned __int16 i; // dx
  unsigned int v24; // r15d
  ULONG_PTR v25; // r12
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // r9d
  unsigned int v31; // edx
  ULONG_PTR v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // edx
  __int64 v36; // rcx
  unsigned int MultipleValueForLayeredKey; // ebx
  __int64 v39; // rcx
  int v40; // ebx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // r12d
  __int64 v45; // rcx
  char v46; // [rsp+40h] [rbp-D8h]
  unsigned int v47; // [rsp+44h] [rbp-D4h]
  int v48; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v49; // [rsp+4Ch] [rbp-CCh]
  unsigned int v50; // [rsp+50h] [rbp-C8h]
  _DWORD Size[3]; // [rsp+54h] [rbp-C4h] BYREF
  ULONG_PTR v52; // [rsp+60h] [rbp-B8h]
  int v53; // [rsp+68h] [rbp-B0h]
  int v54; // [rsp+6Ch] [rbp-ACh]
  void *Src; // [rsp+70h] [rbp-A8h] BYREF
  _DWORD v56[2]; // [rsp+78h] [rbp-A0h] BYREF
  _DWORD v57[2]; // [rsp+80h] [rbp-98h] BYREF
  unsigned int v58; // [rsp+88h] [rbp-90h] BYREF
  unsigned int v59; // [rsp+8Ch] [rbp-8Ch] BYREF
  _DWORD v60[2]; // [rsp+90h] [rbp-88h] BYREF
  __int64 v61; // [rsp+98h] [rbp-80h]
  ULONG_PTR v62; // [rsp+A0h] [rbp-78h]
  _DWORD v63[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-68h]
  __int64 v65; // [rsp+B8h] [rbp-60h]
  __int64 v66; // [rsp+C0h] [rbp-58h]
  __int64 v67; // [rsp+C8h] [rbp-50h]
  ULONG_PTR v68; // [rsp+D0h] [rbp-48h]
  ULONG_PTR v69; // [rsp+D8h] [rbp-40h]
  char v70; // [rsp+120h] [rbp+8h] BYREF
  __int64 v71; // [rsp+130h] [rbp+18h]
  unsigned int v72; // [rsp+138h] [rbp+20h]

  v72 = a4;
  v71 = a3;
  v8 = a3;
  v62 = 0LL;
  v52 = 0LL;
  v56[0] = -1;
  v56[1] = 0;
  v49 = 0;
  v47 = 0;
  v46 = 0;
  v57[0] = -1;
  v57[1] = 0;
  v61 = 0LL;
  v63[0] = -1;
  v63[1] = 0;
  v11 = 0LL;
  v64 = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  LOBYTE(v7) = 0;
  v53 = v7;
  LOBYTE(v50) = 0;
  Src = 0LL;
  v70 = 0;
  v60[0] = -1;
  v60[1] = 0;
  CmpLockRegistry(0xFFFFFFFFLL);
  v12 = *(_QWORD *)(a1 + 8);
  v68 = v12;
  if ( *(_WORD *)(v12 + 58) )
  {
    MultipleValueForLayeredKey = CmQueryMultipleValueForLayeredKey(a1, v8, v72, a5, (__int64)a6, (__int64)a7);
    CmpUnlockRegistry(v39);
    return MultipleValueForLayeredKey;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    ExAcquirePushLockSharedEx(v12 + 40, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(v12 + 48), 1u);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v40 = (*(_DWORD *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
      CmpUnlockKcb(v12);
LABEL_52:
      CmpUnlockRegistry(v41);
      return (unsigned int)(v40 - 1073741444);
    }
    CmpUnlockKcb(v12);
    v44 = CmpTransSearchAddTransFromKeyBody(a1, &Size[1]);
    if ( v44 < 0 )
    {
      CmpUnlockRegistry(v43);
      return (unsigned int)v44;
    }
    LOBYTE(v7) = v53;
  }
  if ( a2 )
  {
    v11 = *(_QWORD *)(a2 + 8);
    v64 = v11;
  }
  CmpLockTwoKcbsShared(v11, v12);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, *(_QWORD *)&Size[1]) )
  {
    v42 = *(_DWORD *)(a1 + 48);
LABEL_51:
    v40 = (v42 & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs(v11, v12);
    goto LABEL_52;
  }
  if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, *(_QWORD *)&Size[1]) )
  {
    v42 = *(_DWORD *)(a2 + 48);
    goto LABEL_51;
  }
  v13 = *(_QWORD *)(v12 + 24);
  v69 = v13;
  v14 = (volatile signed __int64 *)(v13 + 72);
  ExAcquirePushLockSharedEx(v13 + 72, 0LL);
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v13 + 8))(v13, *(unsigned int *)(v12 + 32), v57);
  v66 = v15;
  if ( !v15 )
  {
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
    KeAbPostRelease(v13 + 72);
    goto LABEL_62;
  }
  CmpUpdateKeyNodeAccessBits(v13, v15, *(_DWORD *)(v12 + 32));
  if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
  KeAbPostRelease(v13 + 72);
  v17 = *(_QWORD *)&Size[1];
  if ( *(_QWORD *)&Size[1] )
  {
    v7 = (unsigned __int8)v7;
    if ( *(_QWORD *)(v12 + 280) == *(_QWORD *)&Size[1] )
      v7 = 1;
    v53 = v7;
  }
  if ( v11 )
  {
    v62 = *(_QWORD *)(v11 + 24);
    v61 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v62 + 8))(v62, *(unsigned int *)(v11 + 32), v63);
    if ( v61 )
    {
      v18 = v50;
      if ( v17 )
      {
        v18 = (unsigned __int8)v50;
        if ( *(_QWORD *)(v11 + 280) == v17 )
          v18 = 1LL;
        v50 = v18;
      }
      goto LABEL_14;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v13 + 16))(v13, v57);
LABEL_62:
    CmpUnlockTwoKcbs(v11, v12);
    CmpUnlockRegistry(v45);
    return 3221225626LL;
  }
  v18 = v50;
LABEL_14:
  v19 = 0;
  v20 = 0LL;
  while ( 1 )
  {
    v54 = v20;
    v21 = 0LL;
    if ( (unsigned int)v20 >= v72 )
      goto LABEL_36;
    v67 = 3 * v20;
    v22 = *(unsigned __int16 **)(v71 + 24 * v20);
    *(_QWORD *)&Size[1] = v22;
    for ( i = *v22; i && !*(_WORD *)(*((_QWORD *)v22 + 1) + 2 * ((unsigned __int64)i >> 1) - 2); *v22 = i )
      i -= 2;
    v24 = -1;
    v48 = -1;
    if ( v11 )
    {
      v25 = v62;
      v52 = v62;
      if ( (_BYTE)v18 )
      {
        CmpFindNameInList(v62, v11 + 272, (_DWORD)v22, 0, 0LL, (__int64)&v48);
        v24 = v48;
      }
      else
      {
        CmpFindNameInList(v62, v61 + 36, (_DWORD)v22, 0, 0LL, (__int64)&v58);
        v24 = v58;
        v48 = v58;
      }
      LODWORD(v22) = Size[1];
    }
    else
    {
      v25 = v52;
    }
    if ( v24 == -1 )
    {
      v25 = v13;
      v52 = v13;
      if ( (_BYTE)v53 )
      {
        CmpFindNameInList(v13, v12 + 272, (_DWORD)v22, 0, 0LL, (__int64)&v48);
        v24 = v48;
      }
      else
      {
        CmpFindNameInList(v13, v66 + 36, (_DWORD)v22, 0, 0LL, (__int64)&v59);
        v24 = v59;
      }
      if ( v24 == -1 )
      {
        v19 = -1073741772;
        v21 = 0LL;
LABEL_36:
        v35 = v49;
        if ( v19 >= 0 )
        {
          if ( v46 )
            v19 = -2147483643;
          *a6 = v47;
          if ( a7 )
            *a7 = v35;
        }
LABEL_41:
        v32 = v52;
        goto LABEL_42;
      }
    }
    v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *, __int64))(v25 + 8))(v25, v24, v56, v18);
    v21 = v26;
    v65 = v26;
    if ( !v26 )
    {
      v19 = -1073741670;
      goto LABEL_41;
    }
    v27 = *(_DWORD *)(v26 + 4);
    v28 = v27 + 0x80000000;
    if ( v27 < 0x80000000 )
      v28 = v27;
    Size[0] = v28;
    v29 = (v47 + 3) & 0xFFFFFFFC;
    v47 = v29;
    Size[1] = v29;
    v30 = (v49 + 3) & 0xFFFFFFFC;
    v49 = v30;
    v48 = v30;
    if ( v28 + v29 > *a6 || v28 + v29 < v29 || v46 )
    {
      v46 = 1;
      v32 = v52;
      goto LABEL_35;
    }
    v31 = v24;
    v32 = v52;
    if ( !(unsigned __int8)CmpGetValueData(
                             v52,
                             v31,
                             v21,
                             (unsigned int)Size,
                             (__int64)&Src,
                             (__int64)&v70,
                             (__int64)v60) )
      break;
    memmove((void *)(a5 + v47), Src, Size[0]);
    v33 = v67;
    v34 = v71;
    *(_DWORD *)(v71 + 8 * v67 + 16) = *(_DWORD *)(v21 + 12);
    *(_DWORD *)(v34 + 8 * v33 + 8) = Size[0];
    *(_DWORD *)(v34 + 8 * v33 + 12) = v47;
    if ( v70 )
    {
      ExFreePoolWithTag(Src, 0);
      v70 = 0;
    }
    else
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v32 + 16))(v32, v60);
    }
    Src = 0LL;
    v28 = Size[0];
    v47 += Size[0];
    v30 = v49;
LABEL_35:
    v49 = v28 + v30;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v32 + 16))(v32, v56);
    v20 = (unsigned int)(v54 + 1);
    v18 = v50;
  }
  v19 = -1073741670;
LABEL_42:
  if ( v21 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(v32 + 16))(v32, v56, v16, v18);
  if ( v61 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(v62 + 16))(v62, v63, v16, v18);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(v13 + 16))(v13, v57, v16, v18);
  CmpUnlockTwoKcbs(v11, v12);
  CmpUnlockRegistry(v36);
  return (unsigned int)v19;
}
