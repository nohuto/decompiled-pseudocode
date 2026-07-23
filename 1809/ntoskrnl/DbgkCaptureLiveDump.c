/*
 * XREFs of DbgkCaptureLiveDump @ 0x140812920
 * Callers:
 *     NtSystemDebugControl @ 0x1408DBAF0 (NtSystemDebugControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     IoThreadToProcess @ 0x1400ACE60 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     DbgkpLkmdSnapData @ 0x14026DC40 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapDataEx @ 0x14026DC74 (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapGlobals @ 0x14026DCAC (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapThread @ 0x14026E024 (DbgkpLkmdSnapThread.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x14026E088 (DbgkpLkmdSqmIncrementDword.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     EtwUnregister @ 0x140708610 (EtwUnregister.c)
 *     DbgkpLkmdFireCallbacks @ 0x140812DEC (DbgkpLkmdFireCallbacks.c)
 *     DbgkpLkmdSqmIsOptedIn @ 0x140813330 (DbgkpLkmdSqmIsOptedIn.c)
 *     DbgkpLkmdSqmStatus @ 0x1408134B4 (DbgkpLkmdSqmStatus.c)
 *     DbgkpTriageDumpInitialize @ 0x140814580 (DbgkpTriageDumpInitialize.c)
 */

__int64 __fastcall DbgkCaptureLiveDump(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  PVOID v7; // r12
  PEPROCESS v8; // r14
  _DWORD *PoolWithTag; // rdi
  REGHANDLE v10; // rsi
  int v11; // eax
  __int64 v12; // r13
  int v13; // r15d
  unsigned int i; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  int v19; // ecx
  char v20; // al
  PEPROCESS v21; // rax
  int v22; // eax
  char AccessMode; // [rsp+40h] [rbp-C0h]
  char v25; // [rsp+44h] [rbp-BCh]
  ULONGLONG RegHandle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v30; // [rsp+70h] [rbp-90h]
  _BYTE v31[10240]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v32[6]; // [rsp+2880h] [rbp+2780h] BYREF
  _QWORD v33[6]; // [rsp+28B0h] [rbp+27B0h] BYREF
  _DWORD v34[2]; // [rsp+28E0h] [rbp+27E0h] BYREF
  __int64 v35; // [rsp+28E8h] [rbp+27E8h]

  v28 = a4;
  RegHandle = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  PoolWithTag = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v10 = 0LL;
  if ( !*(_DWORD *)(a1 + 44) || a3 < 0x40000 || (*(_DWORD *)a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)DbgkpLkmdSqmIsOptedIn() )
  {
    EtwRegister(&stru_14035B840, 0LL, 0LL, &RegHandle);
    v10 = RegHandle;
    if ( RegHandle )
      DbgkpLkmdSqmIncrementDword(RegHandle, 3292);
  }
  memset(v32, 0, sizeof(v32));
  v11 = DbgkpTriageDumpInitialize(v32, a2, a3, v33);
  v12 = 0LL;
  v13 = v11;
  if ( v11 >= 0 )
  {
    v13 = ((__int64 (__fastcall *)(PVOID *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v33[0])(
            v32,
            *(unsigned int *)(a1 + 4),
            *(_QWORD *)(a1 + 8),
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 24),
            *(_QWORD *)(a1 + 32));
    if ( v13 >= 0 )
    {
      DbgkpLkmdSnapGlobals((__int64)v31);
      LODWORD(RegHandle) = 4 * *(_DWORD *)(a1 + 44) + 4;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)RegHandle, 0x704E534Bu);
      if ( PoolWithTag )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 44); PoolWithTag[v15] = -1073741823 )
          v15 = i++;
        PoolWithTag[i] = 1112752980;
      }
      v13 = -1073741790;
      v25 = 1;
      if ( *(_DWORD *)(a1 + 44) )
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(a1 + 48);
          v17 = (unsigned int)(v12 + *(_DWORD *)(a1 + 40));
          v35 = 0LL;
          v34[1] = 0;
          v34[0] = -1073741823;
          v18 = ObReferenceObjectByHandle(
                  *(HANDLE *)(v16 + 8 * v17),
                  0x1FFFFFu,
                  (POBJECT_TYPE)PsThreadType,
                  AccessMode,
                  Object,
                  0LL);
          v7 = Object[0];
          v19 = v18;
          v20 = v25;
          if ( v19 != -1073741790 )
            v20 = 0;
          v25 = v20;
          if ( v19 >= 0 )
          {
            if ( !v8 )
            {
              v21 = IoThreadToProcess((PETHREAD)Object[0]);
              v8 = v21;
              if ( v21 )
              {
                ObfReferenceObjectWithTag(v21, 0x4C676244u);
                DbgkpLkmdSnapDataEx((__int64)v31);
              }
            }
            v22 = DbgkpLkmdSnapThread((__int64)v31, a1, (__int64)v7, (__int64)v34);
            if ( !v22 )
              v22 = v34[0];
            if ( PoolWithTag )
              PoolWithTag[v12] = v22;
            DbgkpLkmdFireCallbacks(v31, 2LL, v7);
            if ( v10 )
              DbgkpLkmdSqmStatus(v10);
            ObfDereferenceObject(v7);
            v7 = 0LL;
            if ( v34[0] == -1073741670 )
            {
LABEL_32:
              if ( !v25 )
              {
                if ( v8 )
                  DbgkpLkmdFireCallbacks(v31, 1LL, v8);
                v29 = *(_DWORD *)(a1 + 44);
                v30 = PoolWithTag;
                DbgkpLkmdSnapData((__int64)v31, (__int64)&v29, 16LL);
                if ( PoolWithTag )
                  DbgkpLkmdSnapData((__int64)v31, (__int64)PoolWithTag, (unsigned int)RegHandle);
                if ( (int)DbgkpLkmdSnapDataEx((__int64)v31) >= 0 )
                  *(_QWORD *)Object[1] = &v29;
                v13 = ((__int64 (__fastcall *)(PVOID *, __int64))v33[5])(v32, v28);
              }
              break;
            }
          }
          else
          {
            if ( PoolWithTag )
              PoolWithTag[v12] = v19;
            if ( v10 )
            {
              v34[0] = v19;
              DbgkpLkmdSqmStatus(v10);
            }
          }
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 44) )
            goto LABEL_32;
        }
      }
      if ( v8 )
        ObfDereferenceObjectWithTag(v8, 0x4C676244u);
      if ( v7 )
        ObfDereferenceObject(v7);
    }
  }
  if ( v32[4] )
    ExFreePoolWithTag(v32[4], 0x4D574454u);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x704E534Bu);
  if ( v10 )
    EtwUnregister(v10);
  return (unsigned int)v13;
}
