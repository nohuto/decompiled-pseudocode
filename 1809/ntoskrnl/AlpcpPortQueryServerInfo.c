/*
 * XREFs of AlpcpPortQueryServerInfo @ 0x14084BF28
 * Callers:
 *     NtAlpcQueryInformation @ 0x14068FA30 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     ObReferenceObjectSafe @ 0x14010C190 (ObReferenceObjectSafe.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140617E4C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpGetPortNameInformation @ 0x14084BE70 (AlpcpGetPortNameInformation.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x14084C518 (AlpcpReferenceMessageByWaitingThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpPortQueryServerInfo(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        KPROCESSOR_MODE AccessMode)
{
  unsigned int v5; // r13d
  void *v7; // rcx
  NTSTATUS result; // eax
  const void **v9; // rdi
  int PortNameInformation; // esi
  ULONG_PTR v11; // r14
  __int64 v12; // r13
  __int64 *v13; // r12
  __int64 v14; // r14
  __int64 v15; // r12
  signed __int64 *v16; // rdi
  signed __int64 *v17; // r12
  _QWORD *v18; // r13
  unsigned int v19; // r14d
  bool v20; // [rsp+30h] [rbp-78h]
  ULONG_PTR v21; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  const void **v23; // [rsp+48h] [rbp-60h] BYREF
  __int64 v24; // [rsp+50h] [rbp-58h]
  void *v25; // [rsp+58h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-48h]
  unsigned int v27; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v28; // [rsp+C0h] [rbp+18h]
  unsigned int *v29; // [rsp+C8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v5 = a3;
  if ( a1 || a3 < 8 )
    return -1073741811;
  if ( AccessMode )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = *(void **)a2;
    v25 = *(void **)a2;
  }
  else
  {
    v7 = *(void **)a2;
    v25 = *(void **)a2;
  }
  result = ObReferenceObjectByHandle(v7, 0x40u, (POBJECT_TYPE)PsThreadType, AccessMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = 0LL;
    v23 = 0LL;
    v27 = 0;
    v20 = 0;
    v24 = 0LL;
    PortNameInformation = AlpcpReferenceMessageByWaitingThread(Object, &v21);
    if ( PortNameInformation == -1073741275 )
    {
      v11 = 0LL;
      PortNameInformation = 0;
    }
    else
    {
      if ( PortNameInformation < 0 )
      {
        ObfDereferenceObject(Object);
        return PortNameInformation;
      }
      v11 = v21;
      AlpcpLockForCachedReferenceBlob(v21);
      --*(_WORD *)(v11 - 30);
      if ( v11 == *((_QWORD *)Object + 220) )
      {
        v12 = *(_QWORD *)(v11 + 24);
        if ( v12 && (v13 = *(__int64 **)(v12 + 16)) != 0LL )
        {
          BugCheckParameter2 = (ULONG_PTR)(v13 - 2);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v13 - 2), 0LL);
          AlpcpUnlockMessage(v11);
          v21 = 0LL;
          v14 = *v13;
          if ( !*v13 )
            goto LABEL_24;
          v14 &= -(__int64)(ObReferenceObjectSafe(*v13) != 0);
          if ( !v14 )
            goto LABEL_24;
          if ( (((*(_DWORD *)(v12 + 416) & 6) - 2) & 0xFFFFFFFD) != 0 )
            v13 += 2;
          v15 = *v13;
          v16 = (signed __int64 *)v15;
          if ( v15 )
          {
            if ( v15 != v14 && !ObReferenceObjectSafe(v15) )
LABEL_24:
              v16 = 0LL;
          }
          v17 = (signed __int64 *)BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v17);
          KeAbPostRelease((ULONG_PTR)v17);
          if ( !v16 || !v14 )
            goto LABEL_39;
          ExAcquirePushLockSharedEx((ULONG_PTR)(v16 + 44), 0LL);
          v18 = 0LL;
          if ( (v16[3] & 1) == 0 )
            v18 = (_QWORD *)v16[3];
          if ( v18 )
            ObfReferenceObjectWithTag(v18, 0x63706C41u);
          if ( _InterlockedCompareExchange64(v16 + 44, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v16 + 44);
          KeAbPostRelease((ULONG_PTR)(v16 + 44));
          if ( v18 )
          {
            v24 = v18[92];
            ObfDereferenceObjectWithTag(v18, 0x63706C41u);
            v5 = v28;
            if ( v28 > 0x10 )
              v27 = v28 - 16;
            PortNameInformation = AlpcpGetPortNameInformation((char *)v14, &v23, &v27);
            v20 = PortNameInformation >= 0;
          }
          else
          {
LABEL_39:
            v5 = v28;
          }
          if ( v14 )
            ObfDereferenceObject((PVOID)v14);
          if ( v16 && v16 != (signed __int64 *)v14 )
            ObfDereferenceObject(v16);
          v9 = v23;
          v11 = v21;
        }
        else
        {
          v5 = v28;
        }
      }
    }
    if ( v11 )
      AlpcpUnlockMessage(v11);
    ObfDereferenceObject(Object);
    v19 = 32;
    if ( v9 )
    {
      v19 = *((unsigned __int16 *)v9 + 1) + 32;
    }
    else if ( PortNameInformation == -1073741820 )
    {
      v19 = v27 + 16;
    }
    if ( v5 < v19 )
      PortNameInformation = -1073741820;
    if ( PortNameInformation >= 0 )
    {
      *(_BYTE *)a2 = v20;
      *(_QWORD *)(a2 + 8) = v24;
      if ( v9 )
      {
        *(_WORD *)(a2 + 16) = *(_WORD *)v9;
        *(_WORD *)(a2 + 18) = *((_WORD *)v9 + 1);
        *(_QWORD *)(a2 + 24) = a2 + 32;
        memmove((void *)(a2 + 32), v9[1], *((unsigned __int16 *)v9 + 1));
      }
      else
      {
        *(_DWORD *)(a2 + 16) = 0;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
    }
    if ( v29 && ((int)(PortNameInformation + 0x80000000) < 0 || PortNameInformation == -1073741820) )
      *v29 = v19;
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    return PortNameInformation;
  }
  return result;
}
