/*
 * XREFs of MiMapViewOfPhysicalSection @ 0x14077A454
 * Callers:
 *     MiMapViewOfSection @ 0x140608D80 (MiMapViewOfSection.c)
 * Callees:
 *     MiIsPfn @ 0x140005EA0 (MiIsPfn.c)
 *     MiIsProcessCfgEnabled @ 0x14001C880 (MiIsProcessCfgEnabled.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14001D164 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiReferenceVad @ 0x140053980 (MiReferenceVad.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x140071808 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140072FCC (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140073DA0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140073FB0 (MiUnlockVad.c)
 *     MiDereferenceIoPages @ 0x1401174CC (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140118650 (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x140118CE8 (MiSanitizePage.c)
 *     MiInsertViewOfPhysicalSection @ 0x140196F5C (MiInsertViewOfPhysicalSection.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiCommitVadCfgBits @ 0x1405EAD98 (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x1405EB1EC (MiIsVaRangeAvailable.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x14060A440 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x14060A890 (MiSelectUserAddress.c)
 */

__int64 __fastcall MiMapViewOfPhysicalSection(__int64 a1, unsigned __int64 *a2, _QWORD *a3, unsigned int a4, char *a5)
{
  __int64 v5; // r15
  PVOID PoolWithTag; // rax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  int inserted; // esi
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r10
  __int64 v25; // r12
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // r9
  int IsPfn; // eax
  _DWORD *v29; // rdx
  int v30; // r8d
  unsigned __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rbp
  int v37; // eax
  __int64 v38; // rdx
  ULONG_PTR v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int *v43; // rcx
  __int64 v44; // [rsp+50h] [rbp-68h] BYREF
  __int64 v45; // [rsp+58h] [rbp-60h]
  _QWORD *v46; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v47; // [rsp+68h] [rbp-50h]
  unsigned __int64 v48; // [rsp+70h] [rbp-48h]
  unsigned __int64 v49; // [rsp+78h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 88);
  if ( a4 >> 3 != 2 && (a4 & 5) != 5 && a4 != 24 )
  {
    v46 = 0LL;
    CurrentThread = KeGetCurrentThread();
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
    v11 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x88uLL);
    *(_QWORD *)(v11 + 16) = -2LL;
    *(_QWORD *)(v11 + 72) = &qword_1404645B0;
    v12 = *(_DWORD *)(v11 + 64);
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_DWORD *)(v11 + 64) = v12 & 0xFBFFFFFF;
    *(_DWORD *)(v11 + 48) = *(_DWORD *)(v11 + 48) & 0xFFFFF01F | ((a4 & 0x1F) << 7) | 0x10;
    v13 = MiSanitizePage(*a3 >> 12);
    v44 = 0LL;
    v14 = v13;
    v45 = -1LL;
    *(_QWORD *)(v11 + 80) = v13;
    *(_QWORD *)(v11 + 88) = v13;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v5);
    if ( (*(_DWORD *)(v5 + 780) & 0x20) != 0 )
    {
      inserted = -1073741558;
    }
    else
    {
      v15 = (unsigned __int16)*(_DWORD *)a3;
      if ( (*(_DWORD *)(a1 + 72) & 1) != 0 )
      {
        v21 = v15 + *a2;
        if ( !MiIsVaRangeAvailable(v5, v21, *(_QWORD *)(a1 + 24), *(_QWORD *)a1, *(_QWORD *)(a1 + 8)) )
        {
          inserted = -1073741800;
          goto LABEL_31;
        }
      }
      else
      {
        v16 = *(_QWORD *)(a1 + 8);
        v17 = *(_QWORD *)a1;
        v18 = *(_QWORD *)(a1 + 16);
        v47 = *(_QWORD *)(a1 + 24) + v15;
        inserted = MiSelectUserAddress(*(_DWORD *)(a1 + 40), v17, v16, v47, v18, 0LL, a4, 0, (__int64 *)&v46, &v44);
        if ( inserted < 0 )
          goto LABEL_31;
        v20 = v44 + v47 - 1;
        v21 = (unsigned __int16)*(_DWORD *)a3 + v44;
        v22 = v21;
      }
      v23 = v22 >> 12;
      v24 = v20 >> 12;
      *(_BYTE *)(v11 + 33) = BYTE4(v24);
      *(_BYTE *)(v11 + 32) = BYTE4(v23);
      *(_DWORD *)(v11 + 24) = v23;
      v49 = v23;
      v48 = v24;
      *(_DWORD *)(v11 + 28) = v24;
      v47 = v14
          + ((unsigned int)v24 | ((unsigned __int64)BYTE4(v24) << 32))
          - ((unsigned int)v23 | ((unsigned __int64)BYTE4(v23) << 32));
      v44 = -1LL;
      v25 = 0LL;
      v14 = MiSanitizePage(v14);
      v26 = v14;
      if ( v14 <= v27 )
      {
        do
        {
          IsPfn = MiIsPfn(v26);
          if ( !IsPfn )
          {
            v33 = v26;
            if ( v25 )
              v33 = v32;
            ++v25;
            v32 = v33;
            v44 = v33;
          }
          if ( (v26 == v31 || IsPfn == 1) && v25 )
          {
            inserted = MiReferenceIoPages(1, v32, v25, v30, v29, v29);
            if ( inserted < 0 )
              goto LABEL_31;
            v31 = v47;
            v35 = v25 + v44 - 1;
            v25 = 0LL;
            v45 = v35;
            v44 = -1LL;
          }
          ++v26;
        }
        while ( v26 <= v31 );
      }
      inserted = MiInsertVadCharges(v11, (struct _KPROCESS *)v5);
      if ( inserted >= 0 )
      {
        MiInsertViewOfPhysicalSection(v5, v11);
        if ( v46 )
          MiAdvanceVadHint(v49, v48, v46);
        if ( (a4 & 2) != 0 && MiIsProcessCfgEnabled() )
        {
          MiLockVad((__int64)CurrentThread, v11);
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v5, v41, v42);
          inserted = MiCommitVadCfgBits(v11, 0LL, a5);
          if ( inserted < 0 )
          {
            MiReferenceVad(v11);
            MiDeleteVad(v43, 0LL, 0);
            return (unsigned int)inserted;
          }
          MiUnlockVad((__int64)CurrentThread, v11);
        }
        else
        {
          UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v5);
        }
        *a2 = v21;
        return 0LL;
      }
    }
LABEL_31:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v5);
    v36 = v45;
    if ( v45 != -1 )
    {
      while ( v14 <= v36 )
      {
        v37 = MiIsPfn(v14);
        if ( !v37 )
        {
          v40 = v14;
          if ( v39 )
            v40 = v38;
          ++v39;
          v38 = v40;
        }
        if ( (v37 == 1 || v14 == v36) && v39 )
          MiDereferenceIoPages(1, v38, v39);
        ++v14;
      }
    }
    ExFreePoolWithTag((PVOID)v11, 0);
    return (unsigned int)inserted;
  }
  return 3221225541LL;
}
