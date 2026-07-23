/*
 * XREFs of PspLookupProcessQuotaBlock @ 0x14065B4C0
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x14065B2F4 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     PspUnlockQuotaListShared @ 0x1400DD190 (PspUnlockQuotaListShared.c)
 *     PspUnlockQuotaListExclusive @ 0x140193C48 (PspUnlockQuotaListExclusive.c)
 *     PspHashKeyValue @ 0x14065B5BC (PspHashKeyValue.c)
 *     PspSafeReferenceQuotaBlock @ 0x14065BC5C (PspSafeReferenceQuotaBlock.c)
 */

__int64 __fastcall PspLookupProcessQuotaBlock(void *a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // eax
  __int64 v9; // rbx
  signed __int64 *v10; // rsi
  signed __int64 *i; // rdi
  signed __int64 *v13; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  signed __int64 **v18; // rdx

  CurrentThread = KeGetCurrentThread();
  v8 = PspHashKeyValue();
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v10 = (signed __int64 *)(PspQuotaBlockTable + 24LL * v8);
  if ( a4 )
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
  else
    ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
  if ( a1 )
  {
    for ( i = (signed __int64 *)v10[1]; ; i = (signed __int64 *)*i )
    {
      if ( i == v10 + 1 )
        goto LABEL_6;
      if ( RtlEqualSid(a1, i + 7) )
        break;
    }
    v9 = (__int64)(i - 65);
  }
  else
  {
    if ( !a3 )
      goto LABEL_6;
    v9 = PspDefaultQuotaBlock;
  }
  if ( v9 )
  {
    if ( (unsigned int)PspSafeReferenceQuotaBlock(v9) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 516));
    }
    else
    {
      if ( a4 && !a3 )
      {
        v15 = (_QWORD *)(v9 + 520);
        v16 = *v15;
        if ( *(_QWORD **)(*v15 + 8LL) != v15 )
          goto LABEL_31;
        v17 = (_QWORD *)v15[1];
        if ( (_QWORD *)*v17 != v15 )
          goto LABEL_31;
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        *v15 = 0LL;
      }
      v9 = 0LL;
    }
  }
LABEL_6:
  if ( a4 )
  {
    if ( v9 )
    {
LABEL_17:
      PspUnlockQuotaListExclusive((__int64)CurrentThread, (unsigned __int64)v10);
      return v9;
    }
    v13 = (signed __int64 *)(a4 + 520);
    if ( a3 )
    {
      PspDefaultQuotaBlock = a4;
      *v13 = 1LL;
      goto LABEL_17;
    }
    v18 = (signed __int64 **)v10[2];
    if ( *v18 == v10 + 1 )
    {
      *v13 = (signed __int64)(v10 + 1);
      *(_QWORD *)(a4 + 528) = v18;
      *v18 = v13;
      v10[2] = (signed __int64)v13;
      goto LABEL_17;
    }
LABEL_31:
    __fastfail(3u);
  }
  PspUnlockQuotaListShared((__int64)CurrentThread, v10);
  return v9;
}
