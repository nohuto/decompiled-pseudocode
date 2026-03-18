/*
 * XREFs of DbgkCaptureLiveDump @ 0x14084A848
 * Callers:
 *     NtSystemDebugControl @ 0x140918020 (NtSystemDebugControl.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     IoThreadToProcess @ 0x14000E470 (IoThreadToProcess.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     DbgkpLkmdSnapData @ 0x1402812B0 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapDataEx @ 0x1402812E4 (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapGlobals @ 0x14028131C (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapThread @ 0x1402816B4 (DbgkpLkmdSnapThread.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x140281718 (DbgkpLkmdSqmIncrementDword.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 *     EtwUnregister @ 0x140749F60 (EtwUnregister.c)
 *     DbgkpLkmdFireCallbacks @ 0x14084AD34 (DbgkpLkmdFireCallbacks.c)
 *     DbgkpLkmdSqmIsOptedIn @ 0x14084B270 (DbgkpLkmdSqmIsOptedIn.c)
 *     DbgkpLkmdSqmStatus @ 0x14084B40C (DbgkpLkmdSqmStatus.c)
 *     DbgkpTriageDumpInitialize @ 0x14084C4E0 (DbgkpTriageDumpInitialize.c)
 */

__int64 __fastcall DbgkCaptureLiveDump(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  REGHANDLE v7; // rsi
  PVOID v8; // r12
  PEPROCESS v9; // r14
  _DWORD *PoolWithTag; // rdi
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
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v28; // [rsp+58h] [rbp-A8h]
  PVOID Object[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h]
  PVOID v31[1292]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+28E0h] [rbp+27E0h] BYREF
  __int64 v33; // [rsp+28E8h] [rbp+27E8h]

  v30 = a4;
  v7 = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0LL;
  v9 = 0LL;
  memset(v31, 0, sizeof(v31));
  RegHandle = 0LL;
  PoolWithTag = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( !*(_DWORD *)(a1 + 44) || a3 < 0x40000 || (*(_DWORD *)a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)DbgkpLkmdSqmIsOptedIn() )
  {
    EtwRegister(&stru_140396F48, 0LL, 0LL, &RegHandle);
    v7 = RegHandle;
    if ( RegHandle )
      DbgkpLkmdSqmIncrementDword(RegHandle, 3292);
  }
  memset(&v31[1280], 0, 0x30uLL);
  v11 = DbgkpTriageDumpInitialize(&v31[1280], a2, a3, &v31[1286]);
  v12 = 0LL;
  v13 = v11;
  if ( v11 >= 0 )
  {
    v13 = ((__int64 (__fastcall *)(PVOID *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v31[1286])(
            &v31[1280],
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
          v33 = 0LL;
          v32 = 3221225473LL;
          v18 = ObReferenceObjectByHandle(
                  *(HANDLE *)(v16 + 8 * v17),
                  0x1FFFFFu,
                  (POBJECT_TYPE)PsThreadType,
                  AccessMode,
                  Object,
                  0LL);
          v8 = Object[0];
          v19 = v18;
          v20 = v25;
          if ( v19 != -1073741790 )
            v20 = 0;
          v25 = v20;
          if ( v19 >= 0 )
          {
            if ( !v9 )
            {
              v21 = IoThreadToProcess((PETHREAD)Object[0]);
              v9 = v21;
              if ( v21 )
              {
                ObfReferenceObjectWithTag(v21, 0x4C676244u);
                DbgkpLkmdSnapDataEx((__int64)v31);
              }
            }
            v22 = DbgkpLkmdSnapThread((__int64)v31, a1, (__int64)v8, (__int64)&v32);
            if ( !v22 )
              v22 = v32;
            if ( PoolWithTag )
              PoolWithTag[v12] = v22;
            DbgkpLkmdFireCallbacks(v31, 2LL, v8);
            if ( v7 )
              DbgkpLkmdSqmStatus(v7, &v32);
            ObfDereferenceObject(v8);
            v8 = 0LL;
            if ( (_DWORD)v32 == -1073741670 )
            {
LABEL_32:
              if ( !v25 )
              {
                if ( v9 )
                  DbgkpLkmdFireCallbacks(v31, 1LL, v9);
                LODWORD(v27) = *(_DWORD *)(a1 + 44);
                v28 = PoolWithTag;
                DbgkpLkmdSnapData((__int64)v31, (__int64)&v27, 16LL);
                if ( PoolWithTag )
                  DbgkpLkmdSnapData((__int64)v31, (__int64)PoolWithTag, (unsigned int)RegHandle);
                if ( (int)DbgkpLkmdSnapDataEx((__int64)v31) >= 0 )
                  *(_QWORD *)Object[1] = &v27;
                v13 = ((__int64 (__fastcall *)(PVOID *, __int64))v31[1291])(&v31[1280], v30);
              }
              break;
            }
          }
          else
          {
            if ( PoolWithTag )
              PoolWithTag[v12] = v19;
            if ( v7 )
            {
              LODWORD(v32) = v19;
              DbgkpLkmdSqmStatus(v7, &v32);
            }
          }
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 44) )
            goto LABEL_32;
        }
      }
      if ( v9 )
        ObfDereferenceObjectWithTag(v9, 0x4C676244u);
      if ( v8 )
        ObfDereferenceObject(v8);
    }
  }
  if ( v31[1284] )
    ExFreePoolWithTag(v31[1284], 0x4D574454u);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x704E534Bu);
  if ( v7 )
    EtwUnregister(v7);
  return (unsigned int)v13;
}
