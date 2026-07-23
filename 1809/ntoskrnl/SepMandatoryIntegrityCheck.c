/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x140052270
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140050960 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x140165C60 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140166464 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepMandatoryIntegrityCheck(int *a1, __int64 a2, char a3, __int64 a4, char a5, char a6, __int64 a7)
{
  int v7; // eax
  int v8; // ebx
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned int v13; // edx
  int v14; // eax
  char *v15; // r14
  __int64 v16; // rax
  __int16 **v17; // rax
  __int16 *v18; // r15
  unsigned __int8 v19; // al
  int v20; // eax
  __int16 v21; // r13
  unsigned __int16 v22; // r12
  __int16 v23; // ax
  unsigned __int8 v24; // si
  int v25; // ecx
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // r15d
  char v29; // dl
  char v30; // cl
  char v31; // r10
  char v32; // al
  char v33; // si
  __int64 result; // rax
  __int64 v35; // rax
  char v36; // dl
  char v37; // bp
  int v38; // r10d
  int v39; // r9d
  int v40; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v42; // rbp
  __int64 v43; // rcx
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v45; // r8
  void *OwnerEntryForLegacyShim; // r15
  int v47; // ecx
  int v48; // r8d
  char v49; // [rsp+30h] [rbp-58h]
  char v50; // [rsp+31h] [rbp-57h]
  char v51; // [rsp+32h] [rbp-56h]
  char v52; // [rsp+34h] [rbp-54h]

  v7 = *(_DWORD *)(a4 + 212);
  v8 = 0;
  v51 = 0;
  *(_DWORD *)(a7 + 8) = v7;
  v50 = 0;
  v49 = 0;
  if ( (v7 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 )
      goto LABEL_45;
    v10 = *(_WORD *)(a2 + 2);
    if ( (v10 & 0x10) == 0 )
      goto LABEL_45;
    if ( v10 < 0 )
    {
      v35 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v35 )
        goto LABEL_45;
      v11 = a2 + v35;
    }
    else
    {
      v11 = *(_QWORD *)(a2 + 24);
    }
    if ( v11 )
    {
      v12 = v11 + 8;
      v13 = 0;
      if ( *(_WORD *)(v11 + 4) )
      {
        while ( *(_BYTE *)v12 != 17 )
        {
          ++v13;
          v12 += *(unsigned __int16 *)(v12 + 2);
          if ( v13 >= *(unsigned __int16 *)(v11 + 4) )
            goto LABEL_45;
        }
        if ( (*(_BYTE *)(v12 + 1) & 8) == 0 )
        {
          v14 = *(_DWORD *)(v12 + 4);
          v15 = (char *)(v12 + 8);
          v52 = v14;
          goto LABEL_11;
        }
      }
    }
LABEL_45:
    v15 = (char *)SepDefaultMandatorySid;
    v52 = 1;
LABEL_11:
    if ( a5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v42 = *(_QWORD *)(a4 + 48);
      v43 = *(unsigned __int16 *)(v42 + 26);
      if ( (v43 & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, v42, 0LL, 0LL);
      LOWORD(v43) = *(_WORD *)(v42 + 26) & 1;
      if ( (_WORD)v43 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v45 = KeGetCurrentThread();
        if ( CurrentIrql > 1u )
          KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
        if ( (v45->ApcState.InProgressFlags & 2) != 0 )
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( !CurrentIrql && (v45->MiscFlags & 0x400) == 0 && !v45->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( (_WORD)v43 )
      {
        OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v43);
        if ( !(unsigned __int8)ExAcquireFastResourceShared(v42, (ULONG_PTR)OwnerEntryForLegacyShim) )
          ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
      }
      else
      {
        ExpAcquireResourceSharedLite(*(_QWORD *)(a4 + 48), 1);
      }
    }
    v16 = *(unsigned int *)(a4 + 208);
    if ( (_DWORD)v16 == -1 || (v17 = (__int16 **)(*(_QWORD *)(a4 + 152) + 16 * v16)) == 0LL )
      v18 = (__int16 *)SeUntrustedMandatorySid;
    else
      v18 = *v17;
    if ( a6 )
      v18 = (__int16 *)SepDefaultMandatorySid;
    if ( a5 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
      KeLeaveCriticalRegion();
    }
    v19 = v15[1];
    if ( v19 )
      v20 = *(_DWORD *)&v15[4 * v19 + 4];
    else
      v20 = 0;
    *(_DWORD *)(a7 + 12) = v20;
    v21 = *v18;
    v22 = *(_WORD *)v15;
    v23 = HIBYTE(*v18);
    v24 = v23;
    if ( *(_WORD *)v15 == *v18 )
    {
      if ( !memcmp(v15, v18, 4 * ((unsigned __int64)v22 >> 8) + 8) )
        goto LABEL_48;
    }
    else
    {
      v24 = v23;
    }
    v25 = *(_DWORD *)(v18 + 1);
    if ( !v25 )
      v25 = (unsigned __int16)v18[3] - 4096;
    if ( v25 )
      goto LABEL_90;
    v26 = *(_DWORD *)(v15 + 2);
    if ( !v26 )
      v26 = *((unsigned __int16 *)v15 + 3) - 4096;
    if ( v26 )
    {
LABEL_90:
      v32 = 0;
      v28 = -1073741811;
      v33 = 0;
LABEL_43:
      *(_BYTE *)(a7 + 5) = v32;
      result = v28;
      *(_BYTE *)(a7 + 4) = v33;
      *(_BYTE *)(a7 + 6) = v49;
      *(_DWORD *)a7 = v8;
      return result;
    }
    if ( v21 != v22 || memcmp(v18, v15, 4LL * v24 + 8) )
    {
      if ( v24 )
      {
        v27 = *(_DWORD *)&v18[2 * v24 + 2];
        v28 = 0;
      }
      else
      {
        v28 = 0;
        v27 = 0;
      }
      if ( HIBYTE(v22) && v27 < *(_DWORD *)&v15[4 * HIBYTE(v22) + 4] )
      {
        v29 = 0;
LABEL_36:
        if ( (*(_DWORD *)(a7 + 8) & 1) != 0 )
        {
          v30 = 1;
          v8 = *a1 | ~*a1 & a1[2] | 0x120000;
          v50 = 1;
          if ( v29 )
          {
            v31 = 1;
            v51 = 1;
            v8 |= a1[3] | 0x11FFFFF;
LABEL_39:
            v49 = v30;
            if ( v29 )
            {
              v32 = v50;
              v33 = v51;
            }
            else
            {
              v36 = 0;
              v49 = v30;
              v37 = v30;
              if ( (v52 & 2) == 0 )
                v36 = v30;
              if ( (v52 & 4) != 0 )
              {
                v37 = 0;
                v49 = 0;
              }
              v33 = 0;
              if ( (v52 & 1) == 0 )
                v33 = v31;
              if ( (v52 & 2) != 0 )
              {
                v38 = 0;
                if ( v33 )
                  v38 = a1[1] | 0x10D0000;
                v39 = *a1;
                if ( v37 )
                  v38 |= ~v39 & a1[2] | 0x100000;
                v8 &= v38 | ~(v39 | 0x20000);
              }
              if ( (v52 & 4) != 0 )
              {
                v47 = 0;
                if ( v33 )
                  v47 = a1[1] | 0x10D0000;
                v48 = *a1;
                if ( v36 )
                  v47 |= v48 | 0x20000;
                v8 &= ~(~v47 & (~v48 & a1[2] | 0x100000));
              }
              v32 = v36;
              if ( (v52 & 1) != 0 )
              {
                v40 = 0;
                if ( v37 )
                  v40 = ~*a1 & a1[2] | 0x100000;
                if ( v36 )
                  v40 |= *a1 | 0x20000;
                v8 &= ~(~v40 & (a1[1] | 0x10D0000));
                v32 = v36;
              }
            }
            if ( (*(_QWORD *)(a4 + 72) & 0x100000000LL) != 0 )
              v8 |= 0x80000u;
            goto LABEL_43;
          }
        }
        else
        {
          v30 = 0;
        }
        v31 = 0;
        goto LABEL_39;
      }
LABEL_35:
      v29 = 1;
      goto LABEL_36;
    }
LABEL_48:
    v28 = 0;
    goto LABEL_35;
  }
  *(_DWORD *)a7 = a1[3];
  result = 0LL;
  *(_WORD *)(a7 + 4) = 257;
  *(_BYTE *)(a7 + 6) = 1;
  return result;
}
