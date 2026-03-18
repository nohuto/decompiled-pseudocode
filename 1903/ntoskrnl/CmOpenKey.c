/*
 * XREFs of CmOpenKey @ 0x1405FDBD0
 * Callers:
 *     NtOpenKeyEx @ 0x1405FFE80 (NtOpenKeyEx.c)
 *     NtOpenKey @ 0x1406C5160 (NtOpenKey.c)
 *     ExpWatchProductTypeWork @ 0x1406E4930 (ExpWatchProductTypeWork.c)
 *     NtOpenKeyTransactedEx @ 0x1406E7950 (NtOpenKeyTransactedEx.c)
 *     ExpWatchLicenseInfoWork @ 0x14090AB30 (ExpWatchLicenseInfoWork.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010A0C0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1405FDF30 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1405FDF90 (ObOpenObjectByName.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // r13d
  __int64 v10; // rcx
  unsigned __int8 v11; // si
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  int v17; // edi
  __int64 v19; // rcx
  HANDLE Handle[2]; // [rsp+60h] [rbp-1F8h] BYREF
  __int128 v21; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v22; // [rsp+80h] [rbp-1D8h]
  __int128 v23; // [rsp+90h] [rbp-1C8h]
  HANDLE *v24; // [rsp+A0h] [rbp-1B8h]
  __int64 v25; // [rsp+A8h] [rbp-1B0h]
  PVOID Object; // [rsp+B0h] [rbp-1A8h] BYREF
  LARGE_INTEGER v27[5]; // [rsp+B8h] [rbp-1A0h] BYREF
  _QWORD v28[38]; // [rsp+E0h] [rbp-178h] BYREF

  v24 = a1;
  v25 = a3;
  Handle[0] = 0LL;
  v21 = 0uLL;
  memset(v27, 0, 32);
  v22 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v27, 0x20000u);
  memset(v28, 0, 0x128uLL);
  v28[19] = &v28[18];
  v28[18] = &v28[18];
  memset(&v28[27], 0, 0x50uLL);
  HIDWORD(v28[3]) = a2 & 0x300;
  v9 = a2 & 0xFFFFFCFF;
  if ( (unsigned __int8)CmpAcquireShutdownRundown() )
  {
    if ( (a4 & 0x1C) == a4 )
    {
      v11 = KeGetCurrentThread()->$42514DC6747B59BF81E16C40547B231E::gap0[10];
      if ( v11 == 1 )
      {
        v12 = (__int64)a1;
        if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v12 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = *(_QWORD *)(a3 + 16);
        v23 = 0uLL;
        if ( v13 >= 0x7FFFFFFF0000LL )
          v13 = 0x7FFFFFFF0000LL;
        v14 = *(_DWORD *)v13;
        LODWORD(v23) = v14;
        v15 = *(_QWORD *)(v13 + 8);
        *((_QWORD *)&v23 + 1) = v15;
        v21 = v23;
        if ( (_WORD)v14 )
        {
          if ( (v15 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = v15 + (unsigned __int16)v14;
          if ( v16 > 0x7FFFFFFF0000LL || v16 < v15 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v21 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      }
      if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
        && *(_QWORD *)(a3 + 8)
        && ObReferenceObjectByHandle(
             *(HANDLE *)(a3 + 8),
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL) >= 0 )
      {
        v22 = *((_QWORD *)Object + 1);
        ObfDereferenceObject(Object);
      }
      v28[9] = a5;
      LODWORD(v28[3]) = a4;
      v17 = ObOpenObjectByName(a3, (_DWORD)CmKeyObjectType, v11, 0, v9, (__int64)v28, (__int64)Handle);
      if ( v17 >= 0 )
        *a1 = Handle[0];
      if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
      {
        v19 = v22;
        LOBYTE(v19) = 11;
        (*(void (__fastcall **)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, __int128 *))((char *)&NlsMbCodePageTag
                                                                                              + 7))(
          v19,
          v27,
          (unsigned int)v17,
          0LL,
          v22,
          &v21);
      }
      CmpCleanupParseContext(v28, 0LL);
      CmpReleaseShutdownRundown();
      return (unsigned int)v17;
    }
    else
    {
      CmpReleaseShutdownRundown();
      return 3221225714LL;
    }
  }
  else
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      LOBYTE(v10) = 11;
      (*(void (__fastcall **)(__int64, LARGE_INTEGER *, __int64, _QWORD, _QWORD, _QWORD))((char *)&NlsMbCodePageTag + 7))(
        v10,
        v27,
        3221225865LL,
        0LL,
        0LL,
        0LL);
    }
    return 3221225865LL;
  }
}
