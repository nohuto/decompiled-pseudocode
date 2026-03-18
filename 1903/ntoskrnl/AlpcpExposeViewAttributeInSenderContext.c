/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x14064ACD4
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E1230 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2410 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpUnlockBlob @ 0x1405E4790 (AlpcpUnlockBlob.c)
 *     MmUnsecureVirtualMemory @ 0x14060AA10 (MmUnsecureVirtualMemory.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064A878 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateView @ 0x14064B228 (AlpcpCreateView.c)
 *     AlpcpReferenceBlob @ 0x14064B920 (AlpcpReferenceBlob.c)
 *     AlpcpDeleteView @ 0x14064BCD8 (AlpcpDeleteView.c)
 *     AlpcpLocateView @ 0x14064BD88 (AlpcpLocateView.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14064BDA8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpRestoreWriteAccess @ 0x14064CABC (AlpcpRestoreWriteAccess.c)
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
