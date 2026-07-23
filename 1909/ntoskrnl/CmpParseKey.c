/*
 * XREFs of CmpParseKey @ 0x1405F9560
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     PsGetCurrentSilo @ 0x140043C50 (PsGetCurrentSilo.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     PsGetPermanentSiloContext @ 0x140101B40 (PsGetPermanentSiloContext.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmpCleanupParseContext @ 0x1405FF960 (CmpCleanupParseContext.c)
 *     CmpDoesParseEnterRegistryA @ 0x1406EA858 (CmpDoesParseEnterRegistryA.c)
 *     CmpRollbackTransactionArray @ 0x140831620 (CmpRollbackTransactionArray.c)
 *     PsGetParentSilo @ 0x1408C43A0 (PsGetParentSilo.c)
 */

__int64 __fastcall CmpParseKey(
        __int64 a1,
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
  __int128 v14; // xmm0
  struct _LOOKASIDE_LIST_EX *v15; // r9
  __int64 *v16; // r12
  __int64 v17; // rsi
  unsigned __int16 v18; // r8
  _WORD *v19; // rdx
  __int16 v20; // ax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // ebx
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rdi
  struct _KTHREAD *v29; // rdx
  bool v30; // zf
  struct _PRIVILEGE_SET *v31; // rdi
  __int64 i; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v36; // rbx
  int v37; // eax
  int v38; // [rsp+38h] [rbp-C8h]
  __int128 v39; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+70h] [rbp-90h] BYREF
  _SLIST_ENTRY v42; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp-68h]
  _WORD v46[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v47; // [rsp+A4h] [rbp-5Ch]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  _QWORD v49[18]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v50; // [rsp+140h] [rbp+40h] BYREF
  int v51; // [rsp+148h] [rbp+48h]
  int v52; // [rsp+14Ch] [rbp+4Ch]
  _QWORD *v53; // [rsp+150h] [rbp+50h]
  int v54; // [rsp+158h] [rbp+58h]
  __int128 v55; // [rsp+15Ch] [rbp+5Ch]
  __int64 v56; // [rsp+16Ch] [rbp+6Ch]
  int v57; // [rsp+174h] [rbp+74h]
  __int64 v58; // [rsp+178h] [rbp+78h] BYREF
  int v59; // [rsp+180h] [rbp+80h]
  int v60; // [rsp+184h] [rbp+84h]
  _QWORD *v61; // [rsp+188h] [rbp+88h]
  int v62; // [rsp+190h] [rbp+90h]
  __int128 v63; // [rsp+194h] [rbp+94h]
  __int64 v64; // [rsp+1A4h] [rbp+A4h]
  int v65; // [rsp+1ACh] [rbp+ACh]
  _SLIST_ENTRY v66; // [rsp+1B0h] [rbp+B0h] BYREF
  _SLIST_ENTRY v67; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v68[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  char v69; // [rsp+228h] [rbp+128h]
  unsigned int v71; // [rsp+250h] [rbp+150h]

  v69 = 0;
  v44 = 0LL;
  v14 = *a7;
  Privileges = 0LL;
  v39 = v14;
  memset(v49, 0, 0x88uLL);
  v16 = a11;
  v17 = a8;
  v42.Next = 0LL;
  *((_QWORD *)&v42.Next + 1) = 0LL;
  v43 = 0LL;
  v40[1] = v40;
  *a11 = 0LL;
  v40[0] = v40;
  v71 = 0;
  v41 = 0;
  if ( a2 != CmKeyObjectType )
    return 3221225508LL;
  if ( (PVOID)a1 == CmpRegistryRootObject )
  {
    for ( i = *(_QWORD *)(a10 + 8); ; i = PsGetParentSilo(i) )
    {
      a8 = 0LL;
      PsGetPermanentSiloContext(i, CmpSiloContextSlot, (unsigned __int64 *)&a8);
      if ( a8 )
      {
        a1 = *(_QWORD *)(a8 + 32);
        if ( a1 )
          break;
      }
    }
  }
  v18 = v39;
  v19 = (_WORD *)*((_QWORD *)&v39 + 1);
  if ( (_WORD)v39 )
  {
    while ( *(_WORD *)(*((_QWORD *)&v39 + 1) + 2 * ((unsigned __int64)v18 >> 1) - 2) == 92 )
    {
      v30 = v18 == 2;
      v18 -= 2;
      LOWORD(v39) = v18;
      if ( v30 )
        goto LABEL_8;
    }
    if ( v18 )
    {
      v20 = WORD1(v39);
      do
      {
        if ( *v19 != 92 )
          break;
        ++v19;
        v18 -= 2;
        v20 -= 2;
        *((_QWORD *)&v39 + 1) = v19;
        LOWORD(v39) = v18;
        WORD1(v39) = v20;
      }
      while ( v18 );
    }
  }
LABEL_8:
  if ( !v17 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                      PagedPool,
                                                      0x128uLL,
                                                      0x34364D43u,
                                                      v15);
    Privileges = TransientPoolWithTag;
    v36 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    memset(TransientPoolWithTag, 0, 0x90uLL);
    memset(&v36[8], 0, 0x38uLL);
    *(_QWORD *)&v36[7].Privilege[0].Luid.HighPart = 0LL;
    *(_QWORD *)&v36[7].Privilege[0].Luid.HighPart = (char *)v36 + 144;
    *(_QWORD *)&v36[7].Control = (char *)v36 + 144;
    memset(&v36[10].Privilege[0].Attributes, 0, 0x50uLL);
    v19 = (_WORD *)*((_QWORD *)&v39 + 1);
    v17 = (__int64)v36;
    v18 = v39;
  }
  if ( *(_QWORD *)(a1 + 8) != *((_QWORD *)CmpRegistryRootObject + 1)
    || !v18
    || ((*v19 - 65) & 0xFFDF) != 0
    || v18 > 2u && v19[1] != 92
    || (*(_DWORD *)v17 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)v17 & 0x800) != 0 && !(unsigned __int8)CmpDoesParseEnterRegistryA(a1, &v39) )
    {
      v25 = -1073741790;
      goto LABEL_38;
    }
    if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
      *(_DWORD *)(v17 + 24) |= 0x10u;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v49[13] = 1LL;
      LODWORD(v49[15]) = *(_DWORD *)(v17 + 28);
      HIDWORD(v49[15]) = a5;
      v49[14] = &v39;
      LOBYTE(v49[16]) = a4;
      LODWORD(v49[3]) = *(_DWORD *)(v17 + 24);
      v49[2] = CmKeyObjectType;
      LODWORD(v49[7]) = *(_DWORD *)(a3 + 16);
      v49[0] = String2;
      v49[1] = a1;
      v49[9] = v16;
      v22 = *(_QWORD *)(v17 + 72);
      if ( (v22 & 1) != 0 )
        v22 = 0LL;
      v49[12] = v22;
      v42.Next = (_SLIST_ENTRY *)v49;
      v43 = v17 + 144;
      if ( (*(_DWORD *)v17 & 1) != 0 )
      {
        v46[0] = *(_WORD *)(v17 + 4);
        v46[1] = v46[0];
        v48 = *(_QWORD *)(v17 + 8);
        v49[8] = v17 + 32;
        v49[4] = v46;
        v49[5] = *(_QWORD *)(a3 + 64);
        v49[6] = a9;
        v47 = 0;
        v23 = CmpCallCallBacksEx(0x1Au, (__int64)v49, &v42, 1, 0x1Bu, a1, (__int64)v40);
      }
      else
      {
        v23 = CmpCallCallBacksEx(0x1Cu, (__int64)v49, &v42, 1, 0x1Du, a1, (__int64)v40);
      }
      v25 = v23;
      if ( v23 >= 0 )
      {
        LODWORD(a1) = v49[1];
        v69 = 1;
        goto LABEL_21;
      }
      if ( v23 == -1073740541 )
      {
        v25 = *((_DWORD *)&v42.Next + 2);
        if ( *((_DWORD *)&v42.Next + 2) != 260 )
        {
          if ( *((_DWORD *)&v42.Next + 2) != 872 )
          {
            v37 = HIDWORD(v49[7]);
            *(_DWORD *)(a3 + 20) |= HIDWORD(v49[7]);
            *(_DWORD *)(a3 + 16) &= ~(v37 | 0x2000000);
            v25 = 0;
            goto LABEL_37;
          }
          goto LABEL_80;
        }
      }
LABEL_35:
      if ( v25 != 872 )
      {
        if ( v25 != 260 )
        {
LABEL_37:
          v29 = KeGetCurrentThread();
          v30 = v29->KernelApcDisable++ == -1;
          if ( v30
            && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
            && !v29->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery(v24);
          }
          goto LABEL_38;
        }
        CurrentSilo = PsGetCurrentSilo();
LABEL_54:
        v24 = a10;
        *(_QWORD *)(a10 + 8) = CurrentSilo;
        goto LABEL_37;
      }
LABEL_80:
      CurrentSilo = 0LL;
      *(_QWORD *)(v17 + 64) = 0LL;
      goto LABEL_54;
    }
    while ( 1 )
    {
LABEL_21:
      while ( 1 )
      {
        *(_OWORD *)v68 = v39;
        v26 = CmpDoParseKey(a1, a3, a4, a5, String2, (__int64)v68, v17, v38, (__int64)&v44);
        v25 = v26;
        if ( v26 != 259 )
          break;
        KeWaitForSingleObject((char *)&stru_140424E80 + 152 * *(unsigned int *)(v17 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v17 &= ~0x100u;
      }
      if ( v26 != -1073741267 )
        break;
      if ( v71 >= 0x40 )
      {
        v25 = -1073741772;
        goto LABEL_25;
      }
      if ( (*(_DWORD *)(v17 + 96) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v17 + 120), *(_QWORD *)(v17 + 128), v27, &v41);
        *(_DWORD *)(v17 + 96) &= ~4u;
        *(_DWORD *)(v17 + 120) = 0;
        *(_QWORD *)(v17 + 128) = 0LL;
      }
      ++v71;
    }
    if ( v26 >= 0 )
      *v16 = v44;
LABEL_25:
    if ( !v69 )
      goto LABEL_35;
    v24 = *(unsigned int *)(a3 + 20);
    v28 = *v16;
    HIDWORD(v49[7]) = *(_DWORD *)(a3 + 20);
    if ( (*(_DWORD *)v17 & 1) != 0 )
    {
      if ( !CmpCallBackCount )
        goto LABEL_32;
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v40[0] != v40 )
      {
        v50 = v28;
        v52 = 0;
        v56 = 0LL;
        v57 = 0;
        v51 = v25;
        v53 = v49;
        v54 = v25;
        v66.Next = (_SLIST_ENTRY *)&v50;
        *((_QWORD *)&v66.Next + 1) = &v42;
        v55 = 0LL;
        CmpCallCallBacksEx(0x1Bu, (__int64)&v50, &v66, 0, 0x1Bu, v28, (__int64)v40);
        v25 = v54;
      }
    }
    else
    {
      if ( !CmpCallBackCount )
      {
LABEL_32:
        if ( v25 >= 0 && (_DWORD)v24 != *(_DWORD *)(a3 + 20) )
        {
          *(_DWORD *)(a3 + 20) = v24;
          v24 = *(_DWORD *)(a3 + 24) & ~((unsigned int)v24 | 0x2000000);
          *(_DWORD *)(a3 + 16) = v24;
        }
        goto LABEL_35;
      }
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v40[0] != v40 )
      {
        v58 = v28;
        v60 = 0;
        v61 = v49;
        v64 = 0LL;
        v67.Next = (_SLIST_ENTRY *)&v58;
        v65 = 0;
        *((_QWORD *)&v67.Next + 1) = &v42;
        v59 = v25;
        v63 = 0LL;
        v62 = v25;
        CmpCallCallBacksEx(0x1Du, (__int64)&v58, &v67, 0, 0x1Du, v28, (__int64)v40);
        v25 = v62;
      }
    }
    v24 = HIDWORD(v49[7]);
    goto LABEL_32;
  }
  v25 = -1073741790;
LABEL_38:
  v31 = Privileges;
  if ( Privileges )
  {
    CmpCleanupParseContext(Privileges, 0LL);
    CmSiFreeMemory(v31);
  }
  return (unsigned int)v25;
}
