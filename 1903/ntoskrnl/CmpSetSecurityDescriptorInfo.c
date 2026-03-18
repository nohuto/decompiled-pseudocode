/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x14063BAF0
 * Callers:
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140092A90 (CmpFreeTransientPoolWithTag.c)
 *     CmpRemoveSecurityCellList @ 0x14012F9D0 (CmpRemoveSecurityCellList.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7A30 (RtlLengthSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1405C7BE0 (RtlpSetSecurityObject.c)
 *     HvpMarkCellDirty @ 0x1405D4FF0 (HvpMarkCellDirty.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14062DAD4 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     HvAllocateCell @ 0x14062E37C (HvAllocateCell.c)
 *     CmGetKCBCacheSecurity @ 0x140631B4C (CmGetKCBCacheSecurity.c)
 *     CmAddLogForAction @ 0x140633958 (CmAddLogForAction.c)
 *     CmpAddSecurityCellToCache @ 0x14063CFF4 (CmpAddSecurityCellToCache.c)
 *     CmpFindMatchingDescriptorCell @ 0x14063D380 (CmpFindMatchingDescriptorCell.c)
 *     CmpTraceSecurityChanging @ 0x14063D600 (CmpTraceSecurityChanging.c)
 *     SeCheckForCriticalAceRemoval @ 0x14063DA60 (SeCheckForCriticalAceRemoval.c)
 *     CmpConstructNameWithStatus @ 0x140655750 (CmpConstructNameWithStatus.c)
 *     CmpAssignSecurityToKcb @ 0x140656884 (CmpAssignSecurityToKcb.c)
 *     CmpFindSecurityCellCacheIndex @ 0x140656940 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 CmpSetSecurityDescriptorInfo(ULONG_PTR a1, unsigned int *a2, ...)
{
  unsigned int v4; // r13d
  ULONG_PTR v5; // rsi
  __int64 v6; // r14
  unsigned int v7; // r15d
  __int64 (__fastcall *v8)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v9; // rax
  __int64 v11; // r12
  unsigned int *KCBCacheSecurity; // rax
  __int64 v13; // rax
  struct _LOOKASIDE_LIST_EX *v14; // r9
  unsigned int *v15; // r15
  int v16; // edi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 *v20; // rdi
  __int64 v21; // rbx
  PSECURITY_DESCRIPTOR v22; // r13
  unsigned int v23; // r14d
  __int64 v24; // r13
  __int64 v25; // rbx
  unsigned int v26; // r14d
  _DWORD *v27; // rcx
  ULONG v28; // edx
  unsigned int v29; // eax
  ULONG_PTR BugCheckParameter4; // r12
  ULONG v31; // eax
  unsigned int Cell; // eax
  __int64 v33; // rax
  PSECURITY_DESCRIPTOR v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // r13
  _DWORD *v37; // rcx
  int v38; // eax
  __int64 v40; // [rsp+50h] [rbp-89h]
  unsigned int v41; // [rsp+58h] [rbp-81h]
  __int64 v42; // [rsp+60h] [rbp-79h] BYREF
  ULONG_PTR v43; // [rsp+68h] [rbp-71h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-69h] BYREF
  _DWORD v45[2]; // [rsp+78h] [rbp-61h] BYREF
  __int64 v46; // [rsp+80h] [rbp-59h]
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-51h]
  _DWORD v48[2]; // [rsp+90h] [rbp-49h] BYREF
  size_t Size; // [rsp+98h] [rbp-41h]
  _DWORD v50[2]; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD v51[2]; // [rsp+A8h] [rbp-31h] BYREF
  void *v52; // [rsp+B0h] [rbp-29h] BYREF
  _DWORD *v53; // [rsp+B8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-19h] BYREF
  ULONG_PTR v57; // [rsp+138h] [rbp+5Fh] BYREF
  va_list va; // [rsp+138h] [rbp+5Fh]
  __int64 v59; // [rsp+140h] [rbp+67h] BYREF
  va_list va1; // [rsp+140h] [rbp+67h]
  __int64 v61; // [rsp+148h] [rbp+6Fh]
  __int64 v62; // [rsp+150h] [rbp+77h]
  __int64 v63; // [rsp+158h] [rbp+7Fh]
  __int64 v64; // [rsp+160h] [rbp+87h]
  __int64 *v65; // [rsp+168h] [rbp+8Fh]
  va_list va2; // [rsp+170h] [rbp+97h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v57 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v59 = va_arg(va2, _QWORD);
  v61 = va_arg(va2, _QWORD);
  v62 = va_arg(va2, _QWORD);
  v63 = va_arg(va2, _QWORD);
  v64 = va_arg(va2, _QWORD);
  v65 = va_arg(va2, __int64 *);
  v40 = 0LL;
  v45[1] = 0;
  v45[0] = -1;
  v48[0] = -1;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 40);
  v50[0] = -1;
  v51[0] = -1;
  v48[1] = 0;
  v50[1] = 0;
  v51[1] = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8);
  v42 = 0LL;
  LODWORD(v43) = v7;
  v9 = v8(v5, v7, v51);
  v46 = v9;
  if ( !v9 )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v5, v9, v7);
  v11 = v63;
  KCBCacheSecurity = (unsigned int *)CmGetKCBCacheSecurity(a1, v63);
  v41 = *KCBCacheSecurity;
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, *KCBCacheSecurity, v45);
  v15 = (unsigned int *)v13;
  if ( v13 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                      PagedPool,
                                                      *(unsigned int *)(v13 + 16),
                                                      0x36384D43u,
                                                      v14);
    Privileges = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v16 = -1073741670;
LABEL_18:
      if ( v15 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v45);
      goto LABEL_20;
    }
    memmove(TransientPoolWithTag, v15 + 5, v15[4]);
    v19 = *a2;
    v20 = v65;
    if ( (v19 & 4) != 0 )
    {
      SeCheckForCriticalAceRemoval(Privileges, v57, v65, (__int64 *)va1);
      if ( (_BYTE)v59 )
      {
        v52 = 0LL;
        CmpConstructNameWithStatus(a1, &v52);
        if ( v52 )
        {
          v16 = -1073741822;
          CmpFreeTransientPoolWithTag(v52, 0x624E4D43u);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
          v16 = -1073741822;
        }
        goto LABEL_11;
      }
    }
    SecurityDescriptor = Privileges;
    v16 = RtlpSetSecurityObject(v18, *a2, v57, (__int64 *)&SecurityDescriptor, 0, v61, v62, v20);
    if ( v16 < 0 )
    {
LABEL_11:
      v21 = 0LL;
LABEL_12:
      CmSiFreeMemory(Privileges);
      if ( v4 )
        HvFreeCell(v5, v4);
      if ( v21 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v50);
      if ( v6 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v48);
      goto LABEL_18;
    }
    v22 = SecurityDescriptor;
    v16 = CmpTraceSecurityChanging(a1, Privileges, *a2, v57, SecurityDescriptor);
    if ( v16 < 0 )
    {
      v4 = 0;
      goto LABEL_83;
    }
    LODWORD(Size) = RtlLengthSecurityDescriptor(v22);
    if ( v11 )
      v23 = 1;
    else
      v23 = (unsigned int)v43 >> 31;
    v24 = v64;
    v25 = MEMORY[0xFFFFF78000000014];
    if ( v11 )
    {
      if ( !HvpMarkCellDirty(v5, v41, 0) )
      {
LABEL_30:
        v16 = -1073741443;
LABEL_31:
        v6 = v42;
LABEL_32:
        v4 = 0;
LABEL_83:
        v21 = v40;
LABEL_84:
        if ( SecurityDescriptor )
          ExFreePoolWithTag(SecurityDescriptor, 0);
        goto LABEL_12;
      }
      *(_DWORD *)(v24 + 96) = -1;
      *(_QWORD *)(v24 + 88) = 0LL;
      *(_DWORD *)(v24 + 68) = 9;
    }
    else if ( !HvpMarkCellDirty(v5, (unsigned int)v43, 0) || !HvpMarkCellDirty(v5, v41, 0) )
    {
      goto LABEL_30;
    }
    if ( (unsigned __int8)CmpFindMatchingDescriptorCell(v5, SecurityDescriptor, v23, (ULONG_PTR *)va, &v53) )
    {
      v26 = v57;
      if ( (_DWORD)v57 == v41 )
      {
        if ( v11 )
        {
          ++v15[3];
          *(_QWORD *)(v24 + 88) = v53;
          *(_DWORD *)(v24 + 96) = v26;
        }
        else
        {
          *(_QWORD *)(v46 + 4) = v25;
          *(_QWORD *)(a1 + 168) = v25;
        }
        goto LABEL_31;
      }
      if ( !HvpMarkCellDirty(v5, (unsigned int)v57, 0) )
        goto LABEL_30;
      if ( v11 )
      {
        v27 = v53;
        *(_DWORD *)(v24 + 96) = *v53;
        *(_QWORD *)(v24 + 88) = v27;
      }
      else if ( v15[3] == 1 && (!HvpMarkCellDirty(v5, v15[1], 0) || !HvpMarkCellDirty(v5, v15[2], 0)) )
      {
        goto LABEL_30;
      }
      v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v26, v48);
      if ( !v6 )
      {
        if ( !v11 )
          KeBugCheckEx(0x51u, 4uLL, 5uLL, v5, (unsigned int)v57);
        v16 = -1073741670;
        goto LABEL_32;
      }
      if ( !v11 )
      {
        v29 = v15[3];
        if ( v29 == 1 )
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v45);
          v15 = 0LL;
          CmpRemoveSecurityCellList(v5, v41);
          HvFreeCell(v5, v41);
        }
        else
        {
          v15[3] = v29 - 1;
        }
        *(_DWORD *)(v46 + 44) = v57;
      }
      ++*(_DWORD *)(v6 + 12);
      LODWORD(BugCheckParameter4) = v41;
    }
    else
    {
      v31 = RtlLengthSecurityDescriptor(SecurityDescriptor);
      Cell = HvAllocateCell(v5, v31 + 20, v23, (__int64)&v42, (__int64)v48);
      BugCheckParameter4 = Cell;
      if ( Cell == -1 )
      {
        v16 = -1073741670;
        goto LABEL_31;
      }
      if ( v63 )
      {
        v6 = v42;
        *(_DWORD *)(v42 + 8) = Cell;
        *(_DWORD *)(v6 + 4) = Cell;
      }
      else
      {
        if ( !HvpMarkCellDirty(v5, v15[1], 0) || v15[3] == 1 && !HvpMarkCellDirty(v5, v15[2], 0) )
        {
          v6 = v42;
          v16 = -1073741443;
          v4 = BugCheckParameter4;
          goto LABEL_83;
        }
        v33 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v15[1], v50);
        v6 = v42;
        v40 = v33;
        if ( !v33 )
        {
          v16 = -1073741670;
          v4 = BugCheckParameter4;
          v21 = 0LL;
          goto LABEL_84;
        }
        *(_DWORD *)(v42 + 4) = v15[1];
        *(_DWORD *)(v6 + 8) = v41;
        v15[1] = BugCheckParameter4;
        *(_DWORD *)(v33 + 8) = BugCheckParameter4;
        --v15[3];
      }
      v34 = SecurityDescriptor;
      *(_WORD *)v6 = 27507;
      v35 = Size;
      *(_DWORD *)(v6 + 12) = 1;
      *(_DWORD *)(v6 + 16) = v35;
      memmove((void *)(v6 + 20), v34, v35);
      if ( (int)CmpAddSecurityCellToCache(v5, (unsigned int)BugCheckParameter4, 0LL) < 0 )
      {
        v21 = v40;
        if ( !v63 )
        {
          ++v15[3];
          v15[1] = *(_DWORD *)(v6 + 4);
          *(_DWORD *)(v40 + 8) = *(_DWORD *)(v6 + 8);
        }
        v16 = -1073741670;
        v4 = BugCheckParameter4;
        goto LABEL_84;
      }
      if ( !v63 )
      {
        v36 = v46;
        *(_DWORD *)(v46 + 44) = BugCheckParameter4;
        if ( !v15[3] )
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v45);
          v15 = 0LL;
          CmpRemoveSecurityCellList(v5, v41);
          HvFreeCell(v5, v41);
        }
LABEL_78:
        *(_QWORD *)(v36 + 4) = v25;
        ++*(_QWORD *)(a1 + 304);
        *(_QWORD *)(a1 + 168) = v25;
        CmpAssignSecurityToKcb(a1, *(unsigned int *)(v36 + 44), 0);
        v4 = 0;
        goto LABEL_83;
      }
      if ( !(unsigned __int8)CmpFindSecurityCellCacheIndex(v5, (unsigned int)BugCheckParameter4, &v43) )
        KeBugCheckEx(0x51u, 4uLL, 3uLL, a1, BugCheckParameter4);
      v37 = *(_DWORD **)(*(_QWORD *)(v5 + 1880) + 16LL * (unsigned int)v43 + 8);
      *(_QWORD *)(v24 + 88) = v37;
      *(_DWORD *)(v24 + 96) = *v37;
    }
    if ( v63 )
    {
      v38 = CmAddLogForAction(v24, v28);
      v4 = 0;
      v16 = v38;
      if ( v38 < 0 && (*(_DWORD *)(v6 + 12))-- == 1 )
      {
        CmpRemoveSecurityCellList(v5, (unsigned int)BugCheckParameter4);
        HvFreeCell(v5, (unsigned int)BugCheckParameter4);
      }
      goto LABEL_83;
    }
    v36 = v46;
    goto LABEL_78;
  }
  v16 = -1073741670;
LABEL_20:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v51);
  return (unsigned int)v16;
}
