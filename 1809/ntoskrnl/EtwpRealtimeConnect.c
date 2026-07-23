/*
 * XREFs of EtwpRealtimeConnect @ 0x1406C3D98
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C2E98 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C4248 (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x1406C42D0 (EtwpOpenConsumer.c)
 */

__int64 __fastcall EtwpRealtimeConnect(__int64 a1)
{
  volatile void *v2; // rsi
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  SIZE_T v9; // rdx
  __int16 v10; // ax
  __int64 v11; // r12
  unsigned int *v12; // rax
  unsigned int *v13; // rsi
  int v14; // ebx
  _WORD *v15; // rbx
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rax
  char v18; // cl
  _QWORD *v19; // r14
  int inserted; // edi
  __int16 v22; // ax
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  PVOID v24; // [rsp+50h] [rbp-C8h] BYREF
  PVOID v25; // [rsp+58h] [rbp-C0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-B8h]
  PVOID v27; // [rsp+68h] [rbp-B0h]
  PVOID v28; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v29; // [rsp+78h] [rbp-A0h]
  volatile void *v30; // [rsp+80h] [rbp-98h]
  unsigned __int64 v31; // [rsp+88h] [rbp-90h]
  unsigned __int64 v32; // [rsp+90h] [rbp-88h]
  volatile void *v33; // [rsp+98h] [rbp-80h]
  __int64 v34; // [rsp+A0h] [rbp-78h] BYREF
  int v35; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-68h]
  __int64 v37; // [rsp+B8h] [rbp-60h]
  int v38; // [rsp+C0h] [rbp-58h]
  __int128 v39; // [rsp+C8h] [rbp-50h]
  unsigned int v40; // [rsp+120h] [rbp+8h]
  unsigned int v41; // [rsp+128h] [rbp+10h]
  PVOID v42; // [rsp+130h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp+20h] BYREF

  v28 = 0LL;
  v27 = 0LL;
  v40 = *(_DWORD *)a1;
  Handle = 0LL;
  v33 = *(volatile void **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v41 = *(_DWORD *)(a1 + 4);
  v29 = *(_QWORD *)(a1 + 48);
  v2 = *(volatile void **)(a1 + 40);
  v30 = v2;
  v3 = *(_QWORD *)(a1 + 56);
  v31 = v3;
  v4 = *(_QWORD *)(a1 + 64);
  v32 = v4;
  ProbeForWrite(v33, (((v41 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v41, 4u);
  v5 = v29;
  if ( v29 >= 0x7FFFFFFF0000LL )
    v5 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  v6 = v3;
  if ( v3 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  v7 = v4;
  if ( v4 >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v7 = *(_DWORD *)v7;
  v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v8 && ((v10 = *(_WORD *)(v8 + 8), v10 == 332) || v10 == 452) )
    v9 = 4LL;
  else
    v9 = 8LL;
  ProbeForWrite(v2, v9, 4u);
  v11 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v12 = EtwpAcquireLoggerContextByLoggerId(v11, v40, 1);
  v13 = v12;
  if ( !v12 )
    return 3221225485LL;
  if ( (v12[3] & 0x100) != 0 )
  {
    v14 = EtwpCheckLoggerControlAccess(0x400u, (__int64)v12);
    if ( v14 >= 0 )
    {
      v14 = EtwpOpenConsumer(&Handle);
      if ( v14 >= 0 )
      {
        v14 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 24), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v24, 0LL);
        v27 = v24;
        if ( v14 >= 0 )
        {
          v14 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 32), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v25, 0LL);
          v28 = v25;
          if ( v14 >= 0 )
          {
            v35 = 48;
            v36 = 0LL;
            v38 = 64;
            v37 = 0LL;
            v39 = 0LL;
            v14 = ObCreateObjectEx(
                    0,
                    EtwpRealTimeConnectionObjectType,
                    (int)&v35,
                    1u,
                    (__int64)Object,
                    160,
                    0,
                    0,
                    &v42,
                    0LL);
            if ( v14 >= 0 )
            {
              v15 = v42;
              memset(v42, 0, 0xA0uLL);
              v15[44] = v40;
              *((_QWORD *)v15 + 2) = Handle;
              v16 = v42;
              *((_QWORD *)v42 + 3) = KeGetCurrentThread()->ApcState.Process;
              v16[6] = v24;
              v16[7] = v25;
              v16[8] = v29;
              v16[9] = v30;
              v16[14] = Address;
              *((_DWORD *)v16 + 30) = v41;
              v16[17] = v31;
              v16[18] = v32;
              v16[19] = v11;
              *((_DWORD *)v16 + 24) = v41 >> 12;
              v16[13] = v33;
              v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
              if ( v17 && ((v22 = *(_WORD *)(v17 + 8), v22 == 332) || v22 == 452) )
                v18 = 16;
              else
                v18 = 0;
              v19 = v42;
              *((_BYTE *)v42 + 90) = v18 | *((_BYTE *)v42 + 90) & 0xEF;
              v19[5] = a1;
              inserted = ObInsertObjectEx(v19, 0LL, 1024LL, 1, 0, (PVOID *)&v34, (unsigned __int64 *)(a1 + 72));
              if ( inserted >= 0 )
              {
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v13 + 176), 0LL);
                *((_QWORD *)v13 + 46) = v19;
                ExReleasePushLockEx((ULONG_PTR)(v13 + 176), 0LL);
                EtwpSynchronizeWithLogger(v13, 32LL);
              }
              EtwpReleaseLoggerContext(v13, 1);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v14 = -1073741811;
  }
  EtwpReleaseLoggerContext(v13, 1);
  if ( Handle )
    ZwClose(Handle);
  if ( v27 )
    ObfDereferenceObject(v27);
  if ( v28 )
    ObfDereferenceObject(v28);
  return (unsigned int)v14;
}
