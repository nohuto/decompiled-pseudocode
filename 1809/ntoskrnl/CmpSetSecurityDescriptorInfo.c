/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x1405B8C5C
 * Callers:
 *     CmpSetKeySecurity @ 0x1405B9548 (CmpSetKeySecurity.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     CmpRemoveSecurityCellList @ 0x140138058 (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1401B35C8 (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1401B3604 (CmpKeySecurityIncrementReferenceCount.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1401B3664 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401B3724 (CmpFindSecurityCellCacheIndexNew.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1401B601C (RtlLengthSecurityDescriptorStrict.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpAddSecurityCellToCache @ 0x1405AC584 (CmpAddSecurityCellToCache.c)
 *     CmpAssignSecurityToKcb @ 0x1405ADAE4 (CmpAssignSecurityToKcb.c)
 *     CmpFindMatchingDescriptorCell @ 0x1405AE000 (CmpFindMatchingDescriptorCell.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpTraceSecurityChanging @ 0x1405B9380 (CmpTraceSecurityChanging.c)
 *     SeCheckForCriticalAceRemoval @ 0x1405B9B50 (SeCheckForCriticalAceRemoval.c)
 *     RtlpSetSecurityObject @ 0x1405CB240 (RtlpSetSecurityObject.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405D03BC (CmpUpdateKeyNodeAccessBits.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     CmGetKCBCacheSecurity @ 0x1405D9A10 (CmGetKCBCacheSecurity.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 *     CmAddLogForAction @ 0x1406BE17C (CmAddLogForAction.c)
 *     HvMarkCellDirty @ 0x1408021B4 (HvMarkCellDirty.c)
 */

__int64 CmpSetSecurityDescriptorInfo(ULONG_PTR a1, _DWORD *a2, ...)
{
  __int64 v4; // r15
  ULONG_PTR v5; // r14
  unsigned int v6; // edi
  __int64 (__fastcall *v7)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v8; // rax
  __int64 v10; // rdi
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // r13
  int v14; // esi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rbx
  int v20; // r15d
  __int64 v21; // r13
  __int64 v22; // rbx
  ULONG_PTR BugCheckParameter4; // r12
  int *v24; // rcx
  __int64 v25; // rax
  bool v26; // di
  ULONG_PTR v27; // rdi
  __int64 v28; // r12
  int v29; // eax
  unsigned int Cell; // eax
  __int64 v31; // rax
  void *v32; // rdx
  unsigned int v33; // eax
  bool v34; // di
  _DWORD *v35; // rcx
  __int64 v36; // rcx
  bool v37; // bl
  unsigned int *v38; // [rsp+48h] [rbp-91h]
  __int64 v39; // [rsp+50h] [rbp-89h]
  unsigned int v40; // [rsp+58h] [rbp-81h]
  _DWORD v41[3]; // [rsp+5Ch] [rbp-7Dh] BYREF
  unsigned int v42; // [rsp+68h] [rbp-71h] BYREF
  void *Src; // [rsp+70h] [rbp-69h] BYREF
  _DWORD v44[2]; // [rsp+78h] [rbp-61h] BYREF
  _DWORD v45[2]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v46; // [rsp+88h] [rbp-51h]
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-49h]
  size_t Size; // [rsp+98h] [rbp-41h]
  _DWORD v49[2]; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD v50[2]; // [rsp+A8h] [rbp-31h] BYREF
  void *v51; // [rsp+B0h] [rbp-29h] BYREF
  int *v52; // [rsp+B8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-19h] BYREF
  ULONG_PTR v56; // [rsp+138h] [rbp+5Fh] BYREF
  va_list va; // [rsp+138h] [rbp+5Fh]
  __int64 v58; // [rsp+140h] [rbp+67h] BYREF
  va_list va1; // [rsp+140h] [rbp+67h]
  __int64 v60; // [rsp+148h] [rbp+6Fh]
  __int64 v61; // [rsp+150h] [rbp+77h]
  __int64 v62; // [rsp+158h] [rbp+7Fh]
  __int64 v63; // [rsp+160h] [rbp+87h]
  __int64 v64; // [rsp+168h] [rbp+8Fh]
  va_list va2; // [rsp+170h] [rbp+97h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v56 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v58 = va_arg(va2, _QWORD);
  v60 = va_arg(va2, _QWORD);
  v61 = va_arg(va2, _QWORD);
  v62 = va_arg(va2, _QWORD);
  v63 = va_arg(va2, _QWORD);
  v64 = va_arg(va2, _QWORD);
  v39 = 0LL;
  memset(v41, 0, sizeof(v41));
  v45[0] = -1;
  v44[0] = -1;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 32);
  v49[0] = -1;
  v50[0] = -1;
  v45[1] = 0;
  v44[1] = 0;
  v49[1] = 0;
  v50[1] = 0;
  v7 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8);
  v42 = v6;
  v8 = v7(v5, v6, v50);
  v46 = v8;
  if ( !v8 )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v5, v8, v6);
  v10 = v62;
  v11 = *(_DWORD *)CmGetKCBCacheSecurity(a1, v62);
  v40 = v11;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v11, v45);
  v38 = (unsigned int *)v12;
  v13 = v12;
  if ( v12 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                      PagedPool,
                                                      *(unsigned int *)(v12 + 16),
                                                      0x36384D43u);
    Privileges = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v14 = -1073741670;
LABEL_18:
      if ( v13 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v45);
      goto LABEL_20;
    }
    memmove(TransientPoolWithTag, (const void *)(v13 + 20), *(unsigned int *)(v13 + 16));
    v17 = *a2;
    v18 = v64;
    if ( (v17 & 4) != 0 )
    {
      SeCheckForCriticalAceRemoval(Privileges, v56, v64, (__int64 *)va1);
      if ( (_BYTE)v58 )
      {
        v51 = 0LL;
        CmpConstructNameWithStatus(a1, &v51);
        if ( v51 )
        {
          v14 = -1073741822;
          CmpFreeTransientPoolWithTag(v51, 0x624E4D43u);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
          v14 = -1073741822;
        }
        goto LABEL_11;
      }
    }
    Src = Privileges;
    v14 = RtlpSetSecurityObject(v16, *a2, v56, (unsigned int)&Src, 0, v60, v61, v18);
    if ( v14 < 0 )
    {
LABEL_11:
      v19 = 0LL;
LABEL_12:
      CmSiFreeMemory(Privileges);
      if ( v41[0] )
        HvFreeCell(v5, v41[0]);
      if ( v19 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v49);
      if ( v4 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v44);
      goto LABEL_18;
    }
    v14 = CmpTraceSecurityChanging(a1, (_DWORD)Privileges, *a2, v56, (__int64)Src);
    if ( v14 < 0 )
      goto LABEL_78;
    LODWORD(Size) = RtlLengthSecurityDescriptorStrict();
    if ( v10 )
      v20 = 1;
    else
      v20 = v42 >> 31;
    v21 = v63;
    v22 = MEMORY[0xFFFFF78000000014];
    if ( v10 )
    {
      if ( !(unsigned __int8)HvMarkCellDirty(v5, v11, 0LL) )
        goto LABEL_30;
      *(_DWORD *)(v21 + 96) = -1;
      *(_QWORD *)(v21 + 88) = 0LL;
      *(_DWORD *)(v21 + 68) = 9;
      *(_BYTE *)(v21 + 100) = 0;
    }
    else if ( !(unsigned __int8)HvMarkCellDirty(v5, v42, 0LL) || !(unsigned __int8)HvMarkCellDirty(v5, v11, 0LL) )
    {
      goto LABEL_30;
    }
    if ( CmpFindMatchingDescriptorCell(v5, Src, v20, (ULONG_PTR *)va, &v52) )
    {
      BugCheckParameter4 = (unsigned int)v56;
      if ( (_DWORD)v56 == v40 )
      {
        if ( v10 )
        {
          v14 = CmpKeySecurityIncrementReferenceCount((__int64)v38, v5, v56, 0);
          if ( v14 >= 0 )
          {
            *(_QWORD *)(v21 + 88) = v52;
            *(_DWORD *)(v21 + 96) = BugCheckParameter4;
          }
        }
        else
        {
          *(_QWORD *)(v46 + 4) = v22;
          *(_QWORD *)(a1 + 160) = v22;
        }
        goto LABEL_31;
      }
      if ( !(unsigned __int8)HvMarkCellDirty(v5, (unsigned int)v56, 0LL) )
        goto LABEL_30;
      if ( v10 )
      {
        v24 = v52;
        *(_DWORD *)(v21 + 96) = *v52;
        *(_QWORD *)(v21 + 88) = v24;
      }
      else
      {
        v14 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v38, v5, v40);
        if ( v14 < 0 )
          goto LABEL_31;
      }
      v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, (unsigned int)BugCheckParameter4, v44);
      v4 = v25;
      if ( !v25 )
      {
        if ( !v10 )
          KeBugCheckEx(0x51u, 4uLL, 5uLL, v5, BugCheckParameter4);
        v14 = -1073741670;
        goto LABEL_77;
      }
      v14 = CmpKeySecurityIncrementReferenceCount(v25, v5, BugCheckParameter4, 0);
      if ( v14 < 0 )
      {
LABEL_77:
        v13 = (__int64)v38;
        goto LABEL_78;
      }
      if ( !v10 )
      {
        v26 = CmpKeySecurityDecrementReferenceCount((__int64)v38, v5, v40);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v45);
        v38 = 0LL;
        if ( v26 )
        {
          CmpRemoveSecurityCellList(v5, v40);
          HvFreeCell(v5, v40);
        }
        *(_DWORD *)(v46 + 44) = BugCheckParameter4;
      }
      LODWORD(v27) = v40;
      v28 = v62;
      goto LABEL_71;
    }
    v29 = RtlLengthSecurityDescriptorStrict();
    Cell = HvAllocateCell(v5, v29 + 20, v20, (unsigned int)&v41[1], (__int64)v44);
    v27 = Cell;
    if ( Cell == -1 )
    {
      v14 = -1073741670;
      goto LABEL_31;
    }
    v28 = v62;
    v41[0] = Cell;
    if ( v62 )
    {
      v4 = *(_QWORD *)&v41[1];
      *(_DWORD *)(*(_QWORD *)&v41[1] + 8LL) = Cell;
      *(_DWORD *)(v4 + 4) = Cell;
LABEL_63:
      v32 = Src;
      *(_WORD *)v4 = 27507;
      v33 = Size;
      *(_DWORD *)(v4 + 12) = 1;
      *(_DWORD *)(v4 + 16) = v33;
      memmove((void *)(v4 + 20), v32, v33);
      v14 = CmpAddSecurityCellToCache(v5, v27, 0);
      if ( v14 < 0 )
      {
        v13 = (__int64)v38;
        v19 = v39;
        if ( !v28 )
        {
          v38[1] = *(_DWORD *)(v4 + 4);
          *(_DWORD *)(v39 + 8) = *(_DWORD *)(v4 + 8);
        }
        goto LABEL_79;
      }
      if ( !v28 )
      {
        *(_DWORD *)(v46 + 44) = v27;
        v34 = CmpKeySecurityDecrementReferenceCount((__int64)v38, v5, v40);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v45);
        v13 = 0LL;
        if ( v34 )
        {
          CmpRemoveSecurityCellList(v5, v40);
          HvFreeCell(v5, v40);
        }
        goto LABEL_73;
      }
      if ( !CmpFindSecurityCellCacheIndexNew(v5, v27, &v42) )
        KeBugCheckEx(0x51u, 4uLL, 3uLL, a1, v27);
      v35 = *(_DWORD **)(*(_QWORD *)(v5 + 1880) + 16LL * v42 + 8);
      *(_QWORD *)(v21 + 88) = v35;
      *(_DWORD *)(v21 + 96) = *v35;
LABEL_71:
      if ( v28 )
      {
        v41[0] = 0;
        v14 = CmAddLogForAction(v21);
        if ( v14 < 0 )
        {
          v37 = CmpKeySecurityDecrementReferenceCount(v4, v5, v27);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v44);
          v4 = 0LL;
          v41[0] = 0;
          if ( v37 )
          {
            CmpRemoveSecurityCellList(v5, (unsigned int)v27);
            HvFreeCell(v5, (unsigned int)v27);
            v41[0] = 0;
          }
        }
        goto LABEL_77;
      }
      v13 = (__int64)v38;
LABEL_73:
      v36 = v46;
      *(_QWORD *)(v46 + 4) = v22;
      ++*(_QWORD *)(a1 + 296);
      *(_QWORD *)(a1 + 160) = v22;
      CmpAssignSecurityToKcb(a1, *(unsigned int *)(v36 + 44), 0LL, 1, 0);
      v41[0] = 0;
LABEL_78:
      v19 = v39;
LABEL_79:
      if ( Src )
        ExFreePoolWithTag(Src, 0);
      goto LABEL_12;
    }
    if ( (unsigned __int8)HvMarkCellDirty(v5, v38[1], 0LL) )
    {
      v14 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v38, v5, v40);
      if ( v14 < 0 )
        goto LABEL_31;
      v31 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v38[1], v49);
      v4 = *(_QWORD *)&v41[1];
      v39 = v31;
      if ( !v31 )
      {
        v13 = (__int64)v38;
        v14 = -1073741670;
        v19 = 0LL;
        goto LABEL_79;
      }
      *(_DWORD *)(*(_QWORD *)&v41[1] + 4LL) = v38[1];
      *(_DWORD *)(v4 + 8) = v40;
      v38[1] = v27;
      *(_DWORD *)(v31 + 8) = v27;
      goto LABEL_63;
    }
LABEL_30:
    v14 = -1073741443;
LABEL_31:
    v4 = *(_QWORD *)&v41[1];
    goto LABEL_77;
  }
  v14 = -1073741670;
LABEL_20:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v50);
  return (unsigned int)v14;
}
