/*
 * XREFs of CmpParseKey @ 0x140642370
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeEnterCriticalRegion @ 0x1400B9B40 (KeEnterCriticalRegion.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     CmpDoesParseEnterRegistryA @ 0x1406428A0 (CmpDoesParseEnterRegistryA.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x14068F710 (CmpGetRegistryNamespaceRootForSilo.c)
 *     CmpRollbackTransactionArray @ 0x1407F9CDC (CmpRollbackTransactionArray.c)
 */

__int64 __fastcall CmpParseKey(
        _DWORD *RegistryNamespaceRootForSilo,
        POBJECT_TYPE *a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        PCUNICODE_STRING String2,
        __int128 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v14; // r13
  __int64 v15; // rdi
  unsigned int v16; // r15d
  signed int v17; // ebx
  unsigned __int16 v18; // cx
  _WORD *v19; // rdx
  bool v20; // zf
  __int16 v21; // ax
  PVOID TransientPoolWithTag; // rax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // r8
  __int64 *v28; // rdx
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rax
  int v33; // [rsp+38h] [rbp-C8h]
  __int128 v34; // [rsp+50h] [rbp-B0h] BYREF
  _SLIST_ENTRY v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37[2]; // [rsp+80h] [rbp-80h] BYREF
  _SLIST_ENTRY v38; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h]
  _QWORD v40[18]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v41[8]; // [rsp+140h] [rbp+40h] BYREF
  char v42; // [rsp+198h] [rbp+98h]

  CmpInitializeThreadInfo(v41);
  v42 = 0;
  v36 = 0LL;
  v14 = 0LL;
  v34 = *a7;
  memset(v40, 0, 0x88uLL);
  v15 = a8;
  v38.Next = 0LL;
  v16 = 0;
  *((_QWORD *)&v38.Next + 1) = 0LL;
  v39 = 0LL;
  *((_QWORD *)&v35.Next + 1) = &v35;
  v35.Next = &v35;
  LODWORD(a7) = 0;
  *a11 = 0LL;
  if ( a2 != CmKeyObjectType )
  {
    v17 = -1073741788;
    goto LABEL_61;
  }
  if ( RegistryNamespaceRootForSilo == CmpRegistryRootObject )
    RegistryNamespaceRootForSilo = (_DWORD *)CmpGetRegistryNamespaceRootForSilo(*(_QWORD *)(a10 + 8));
  v18 = v34;
  if ( (_WORD)v34 )
  {
    v19 = (_WORD *)*((_QWORD *)&v34 + 1);
    while ( *(_WORD *)(*((_QWORD *)&v34 + 1) + 2 * ((unsigned __int64)v18 >> 1) - 2) == 92 )
    {
      v20 = v18 == 2;
      v18 -= 2;
      LOWORD(v34) = v18;
      if ( v20 )
        goto LABEL_14;
    }
    if ( v18 )
    {
      v21 = WORD1(v34);
      do
      {
        if ( *v19 != 92 )
          break;
        ++v19;
        v18 -= 2;
        v21 -= 2;
        *((_QWORD *)&v34 + 1) = v19;
        LOWORD(v34) = v18;
        WORD1(v34) = v21;
      }
      while ( v18 );
    }
  }
LABEL_14:
  if ( !v15 )
  {
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x128uLL, 0x34364D43u);
    v14 = (__int64)TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v17 = -1073741670;
      goto LABEL_61;
    }
    memset(TransientPoolWithTag, 0, 0x128uLL);
    *(_QWORD *)(v14 + 152) = v14 + 144;
    *(_QWORD *)(v14 + 144) = v14 + 144;
    memset((void *)(v14 + 216), 0, 0x50uLL);
    v15 = v14;
  }
  if ( (unsigned __int8)CmpDoesParseEnterRegistryA(RegistryNamespaceRootForSilo, &v34) && (*(_DWORD *)v15 & 0x40) == 0 )
  {
    v17 = -1073741790;
    goto LABEL_59;
  }
  if ( (*(_DWORD *)v15 & 0x800) != 0 && !(unsigned __int8)CmpDoesParseEnterRegistryA(RegistryNamespaceRootForSilo, &v34) )
  {
    v17 = -1073741790;
    goto LABEL_59;
  }
  if ( (RegistryNamespaceRootForSilo[12] & 0x10) != 0 )
    *(_DWORD *)(v15 + 24) |= 0x10u;
  KeEnterCriticalRegion();
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
    while ( 1 )
    {
LABEL_39:
      while ( 1 )
      {
        *(_OWORD *)v37 = v34;
        v26 = CmpDoParseKey(
                (int)RegistryNamespaceRootForSilo,
                a3,
                a4,
                a5,
                String2,
                (__int64)v37,
                v15,
                v33,
                (__int64)&v36);
        v17 = v26;
        if ( v26 != 259 )
          break;
        KeWaitForSingleObject((char *)&stru_1403FFE80 + 152 * *(unsigned int *)(v15 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v15 &= ~0x100u;
      }
      if ( v26 != -1073741267 )
        break;
      if ( v16 >= 0x40 )
      {
        v17 = -1073741772;
LABEL_47:
        v28 = a11;
        goto LABEL_48;
      }
      if ( (*(_DWORD *)(v15 + 96) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v15 + 120), *(_QWORD *)(v15 + 128), v27, &a7);
        *(_DWORD *)(v15 + 96) &= ~4u;
        *(_DWORD *)(v15 + 120) = 0;
        *(_QWORD *)(v15 + 128) = 0LL;
      }
      ++v16;
    }
    if ( v26 < 0 )
      goto LABEL_47;
    v28 = a11;
    *a11 = v36;
LABEL_48:
    if ( v42 )
    {
      v29 = *v28;
      HIDWORD(v40[7]) = *(_DWORD *)(a3 + 20);
      v17 = CmPostCallbackNotificationEx(
              2 * (unsigned int)((*(_DWORD *)v15 & 1) == 0) + 27,
              v29,
              v17,
              (__int64)v40,
              (__int64)&v38,
              &v35);
      if ( v17 >= 0 )
      {
        v30 = HIDWORD(v40[7]);
        if ( HIDWORD(v40[7]) != *(_DWORD *)(a3 + 20) )
        {
          *(_DWORD *)(a3 + 20) = HIDWORD(v40[7]);
          *(_DWORD *)(a3 + 16) = *(_DWORD *)(a3 + 24) & ~(v30 | 0x2000000);
        }
      }
    }
LABEL_52:
    if ( v17 != 872 )
    {
      if ( v17 == 260 )
        *(_QWORD *)(a10 + 8) = PsGetCurrentSilo();
      goto LABEL_58;
    }
    goto LABEL_53;
  }
  v40[13] = 1LL;
  LODWORD(v40[15]) = *(_DWORD *)(v15 + 28);
  HIDWORD(v40[15]) = a5;
  v40[14] = &v34;
  LOBYTE(v40[16]) = a4;
  LODWORD(v40[3]) = *(_DWORD *)(v15 + 24);
  v40[2] = CmKeyObjectType;
  LODWORD(v40[7]) = *(_DWORD *)(a3 + 16);
  v40[9] = a11;
  v40[0] = String2;
  v40[1] = RegistryNamespaceRootForSilo;
  v23 = *(_QWORD *)(v15 + 72);
  if ( (v23 & 1) != 0 )
    v23 = 0LL;
  v40[12] = v23;
  v38.Next = (_SLIST_ENTRY *)v40;
  v39 = v15 + 144;
  if ( (*(_DWORD *)v15 & 1) != 0 )
  {
    LOWORD(v37[0]) = *(_WORD *)(v15 + 4);
    WORD1(v37[0]) = v37[0];
    v37[1] = *(_QWORD *)(v15 + 8);
    v40[8] = v15 + 32;
    v40[4] = v37;
    v40[5] = *(_QWORD *)(a3 + 64);
    v40[6] = a9;
    v24 = CmpCallCallBacksEx(0x1Au, (__int64)v40, &v38, 1, 0x1Bu, (__int64)RegistryNamespaceRootForSilo, &v35);
  }
  else
  {
    v24 = CmpCallCallBacksEx(0x1Cu, (__int64)v40, &v38, 1, 0x1Du, (__int64)RegistryNamespaceRootForSilo, &v35);
  }
  v17 = v24;
  if ( v24 >= 0 )
  {
    LODWORD(RegistryNamespaceRootForSilo) = v40[1];
    v42 = 1;
    goto LABEL_39;
  }
  if ( v24 != -1073740541 )
    goto LABEL_52;
  v17 = *((_DWORD *)&v38.Next + 2);
  if ( *((_DWORD *)&v38.Next + 2) == 260 )
    goto LABEL_52;
  if ( *((_DWORD *)&v38.Next + 2) == 872 )
  {
LABEL_53:
    v31 = a10;
    *(_QWORD *)(v15 + 64) = 0LL;
    *(_QWORD *)(v31 + 8) = 0LL;
    goto LABEL_58;
  }
  v25 = HIDWORD(v40[7]);
  *(_DWORD *)(a3 + 20) |= HIDWORD(v40[7]);
  *(_DWORD *)(a3 + 16) &= ~(v25 | 0x2000000);
  v17 = 0;
LABEL_58:
  KeLeaveCriticalRegion();
LABEL_59:
  if ( v14 )
  {
    CmpCleanupParseContext(v14, 0);
    CmSiFreeMemory((PPRIVILEGE_SET)v14);
  }
LABEL_61:
  CmCleanupThreadInfo(v41);
  return (unsigned int)v17;
}
