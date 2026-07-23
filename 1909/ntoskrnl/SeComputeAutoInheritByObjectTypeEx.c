/*
 * XREFs of SeComputeAutoInheritByObjectTypeEx @ 0x14000AD40
 * Callers:
 *     SeComputeAutoInheritByObjectType @ 0x14012C9B0 (SeComputeAutoInheritByObjectType.c)
 *     ObpAssignSecurity @ 0x1405C8F20 (ObpAssignSecurity.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 * Callees:
 *     RtlFindAceByType @ 0x14000AC80 (RtlFindAceByType.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall SeComputeAutoInheritByObjectTypeEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *Index)
{
  _DWORD *v5; // rdi
  char v6; // r13
  int v11; // esi
  int v12; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  int v16; // ebx
  __int64 v17; // rcx
  int v18; // eax
  __int16 v20; // ax
  ACL *v21; // rcx
  _DWORD *AceByType; // rax
  __int64 v23; // rax
  __int16 v24; // ax
  ACL *v25; // rcx
  __int64 v26; // rax
  _BYTE *v27; // rax

  v5 = Index;
  v6 = 0;
  v11 = 0;
  v12 = 0;
  if ( Index )
  {
    if ( *Index != 8 )
      return 3221225485LL;
    Index[1] = -1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL);
  v14 = 0;
  if ( SepMandatoryObjectTypePolicyCount )
  {
    v15 = SepMandatoryObjectTypePolicy;
    while ( a1 != *v15 )
    {
      ++v14;
      v15 += 3;
      if ( v14 >= SepMandatoryObjectTypePolicyCount )
      {
        v16 = 0;
        goto LABEL_13;
      }
    }
    v17 = 3LL * v14;
    v18 = SepMandatoryObjectTypePolicy[2 * v17 + 2];
    if ( (v18 & 1) != 0 )
    {
      v11 = SepMandatoryObjectTypePolicy[2 * v17 + 4];
      v12 = SepMandatoryObjectTypePolicy[2 * v17 + 3];
    }
    if ( (v18 & 2) != 0 )
    {
      v16 = SepMandatoryObjectTypePolicy[2 * v17 + 5];
      v6 = 1;
    }
    else
    {
      v16 = 0;
    }
  }
  else
  {
    v16 = 0;
  }
LABEL_13:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KeLeaveCriticalRegion();
  if ( v12 && a2 )
  {
    v20 = *(_WORD *)(a2 + 2);
    if ( (v20 & 0x10) != 0 )
    {
      if ( v20 >= 0 )
      {
        v21 = *(ACL **)(a2 + 24);
      }
      else
      {
        v23 = *(unsigned int *)(a2 + 12);
        v21 = (_DWORD)v23 ? (ACL *)(v23 + a2) : 0LL;
      }
    }
    else
    {
      v21 = 0LL;
    }
    AceByType = RtlFindAceByType(v21, 0x11u, 0LL);
    if ( AceByType )
    {
      AceByType[1] |= v12;
      v11 = 0;
    }
  }
  if ( v6 )
  {
    if ( a2 )
    {
      LODWORD(Index) = 0;
      while ( 1 )
      {
        v24 = *(_WORD *)(a2 + 2);
        if ( (v24 & 0x10) != 0 )
        {
          if ( v24 >= 0 )
          {
            v25 = *(ACL **)(a2 + 24);
          }
          else
          {
            v26 = *(unsigned int *)(a2 + 12);
            v25 = (_DWORD)v26 ? (ACL *)(v26 + a2) : 0LL;
          }
        }
        else
        {
          v25 = 0LL;
        }
        v27 = RtlFindAceByType(v25, 0x11u, (PULONG)&Index);
        if ( v27 )
        {
          if ( (v27[1] & 8) == 0 )
            break;
        }
        LODWORD(Index) = (_DWORD)Index + 1;
        if ( !v27 )
          goto LABEL_55;
      }
      *((_DWORD *)v27 + 1) &= v16;
    }
    else
    {
LABEL_55:
      if ( v5 )
      {
        v5[1] = v16;
        v11 |= 0x800u;
      }
    }
  }
  if ( a3 )
  {
    if ( (!a2 || (*(_BYTE *)(a2 + 2) & 4) == 0) && (*(_WORD *)(a3 + 2) & 0x400) != 0 )
      v11 |= 1u;
    if ( (!a2 || (*(_BYTE *)(a2 + 2) & 0x10) == 0) && (*(_WORD *)(a3 + 2) & 0x800) != 0 )
      v11 |= 2u;
  }
  *a4 = v11;
  return 0LL;
}
