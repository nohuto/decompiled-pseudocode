/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x14065E96C
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E19B0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2BE0 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpUnlockBlob @ 0x1405E4F60 (AlpcpUnlockBlob.c)
 *     MmUnsecureVirtualMemory @ 0x14060C520 (MmUnsecureVirtualMemory.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14065E4F8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14065EDF0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateView @ 0x14065EEC8 (AlpcpCreateView.c)
 *     AlpcpReferenceBlob @ 0x14065F5C0 (AlpcpReferenceBlob.c)
 *     AlpcpDeleteView @ 0x14065F968 (AlpcpDeleteView.c)
 *     AlpcpLocateView @ 0x14065FA18 (AlpcpLocateView.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14065FA38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpRestoreWriteAccess @ 0x140660750 (AlpcpRestoreWriteAccess.c)
 */

__int64 __fastcall AlpcpExposeViewAttributeInSenderContext(PVOID Object, __int64 a2)
{
  ULONG_PTR v4; // rdi
  int v5; // r14d
  ULONG_PTR i; // rsi
  ULONG_PTR View; // rax
  ULONG_PTR v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  int v12; // eax
  __int64 v13; // rax
  ULONG_PTR v14; // [rsp+20h] [rbp-40h]
  _BYTE v15[48]; // [rsp+28h] [rbp-38h] BYREF

  memset(v15, 0, sizeof(v15));
  v4 = *(_QWORD *)(a2 + 144);
  v5 = 0;
  for ( i = *(_QWORD *)(v4 + 16); ; AlpcpUnlockBlob(i) )
  {
    AlpcpLockForCachedReferenceBlob(i);
    View = AlpcpLocateView(i, Object);
    v14 = View;
    v8 = View;
    if ( !View || AlpcpReferenceBlob(View) > 0 )
      break;
  }
  if ( (*(_DWORD *)(i + 48) & 1) != 0 )
  {
    if ( v8 == *(_QWORD *)(i + 80) )
    {
LABEL_12:
      *(_DWORD *)(a2 + 40) |= 0x4000u;
      *(_QWORD *)(a2 + 144) = v8;
      ++*(_DWORD *)(v8 + 76);
      goto LABEL_13;
    }
    if ( v8 && v8 == *(_QWORD *)(i + 72) )
    {
      v12 = *(_DWORD *)(v4 + 72);
      if ( (v12 & 8) == 0 )
      {
        v13 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v4 + 32));
        if ( !v13 )
        {
          if ( *(_QWORD *)(v8 + 64) )
          {
            KiStackAttachProcess(*(_KPROCESS **)(v8 + 32), 0, (__int64)v15);
            MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
            KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
            *(_QWORD *)(v8 + 64) = 0LL;
          }
          *(_DWORD *)(v8 + 72) |= 1u;
          AlpcpDereferenceBlobEx(v8);
          *(_QWORD *)(i + 72) = 0LL;
          *(_QWORD *)(i + 80) = 0LL;
          *(_DWORD *)(i + 48) &= ~1u;
          goto LABEL_12;
        }
        *(_QWORD *)(v4 + 64) = v13;
        v12 = *(_DWORD *)(v4 + 72);
      }
      *(_DWORD *)(v4 + 72) = v12 & 0xFFFFFFFE;
      AlpcpReferenceBlob(v4);
      if ( *(_QWORD *)(v8 + 64) )
      {
        KiStackAttachProcess(*(_KPROCESS **)(v8 + 32), 0, (__int64)v15);
        MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
        KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
        *(_QWORD *)(v8 + 64) = 0LL;
      }
      *(_DWORD *)(v8 + 72) |= 1u;
      *(_QWORD *)(i + 72) = v4;
      *(_QWORD *)(i + 80) = v8;
      AlpcpDereferenceBlobEx(v8);
      goto LABEL_12;
    }
    v9 = *(_DWORD *)(v4 + 72);
    if ( (v9 & 8) != 0 )
      goto LABEL_9;
    v10 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v4 + 32));
    if ( v10 )
    {
      *(_QWORD *)(v4 + 64) = v10;
      v9 = *(_DWORD *)(v4 + 72);
LABEL_9:
      *(_DWORD *)(v4 + 72) = v9 & 0xFFFFFFFE;
      AlpcpReferenceBlob(v4);
      *(_QWORD *)(i + 80) = 0LL;
      *(_QWORD *)(i + 72) = v4;
      if ( v8 )
      {
        *(_QWORD *)(i + 80) = v8;
        goto LABEL_12;
      }
      v5 = AlpcpCreateView(i, Object);
      if ( v5 >= 0 )
        goto LABEL_11;
      AlpcpRestoreWriteAccess(v4);
      AlpcpDereferenceBlobEx(v4);
      goto LABEL_35;
    }
    *(_QWORD *)(i + 72) = 0LL;
    *(_QWORD *)(i + 80) = 0LL;
    *(_DWORD *)(i + 48) &= ~1u;
  }
  else if ( v8 )
  {
    goto LABEL_12;
  }
  v5 = AlpcpCreateView(i, Object);
  if ( v5 >= 0 )
  {
LABEL_11:
    v8 = v14;
    goto LABEL_12;
  }
LABEL_35:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_13:
  --*(_DWORD *)(v4 + 76);
  if ( (*(_DWORD *)(v4 + 72) & 2) != 0 )
  {
    AlpcpDeleteView(v4);
    *(_DWORD *)(v4 + 72) &= ~2u;
  }
  AlpcpUnlockBlob(i);
  AlpcpDereferenceBlobEx(v4);
  return (unsigned int)v5;
}
