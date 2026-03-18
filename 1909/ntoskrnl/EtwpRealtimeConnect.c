/*
 * XREFs of EtwpRealtimeConnect @ 0x1406CAEC8
 * Callers:
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpGetCurrentSiloState @ 0x1403303B4 (EtwpGetCurrentSiloState.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C43B0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5400 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ObInsertObject @ 0x1405D9D30 (ObInsertObject.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObCreateObject @ 0x140681580 (ObCreateObject.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CB384 (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x1406CB40C (EtwpOpenConsumer.c)
 */

__int64 __fastcall EtwpRealtimeConnect(__int64 a1)
{
  unsigned int v2; // esi
  volatile void *v3; // r12
  unsigned __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int16 v9; // ax
  SIZE_T v10; // rdx
  unsigned int *v11; // rax
  unsigned int *v12; // rsi
  int v13; // ebx
  _WORD *v14; // rbx
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rax
  char v17; // cl
  _QWORD *v18; // r14
  NTSTATUS inserted; // edi
  __int16 v21; // ax
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  PVOID v23; // [rsp+58h] [rbp-C0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v25; // [rsp+68h] [rbp-B0h]
  PVOID v26; // [rsp+70h] [rbp-A8h]
  PVOID v27; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v28; // [rsp+80h] [rbp-98h]
  unsigned __int64 v29; // [rsp+88h] [rbp-90h]
  __int64 CurrentSiloState; // [rsp+90h] [rbp-88h]
  volatile void *v31; // [rsp+98h] [rbp-80h]
  _DWORD v32[2]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-70h]
  __int64 v34; // [rsp+B0h] [rbp-68h]
  int v35; // [rsp+B8h] [rbp-60h]
  int v36; // [rsp+BCh] [rbp-5Ch]
  __int128 v37; // [rsp+C0h] [rbp-58h]
  PVOID NewObject; // [rsp+D0h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+120h] [rbp+8h]
  unsigned int v40; // [rsp+128h] [rbp+10h]
  PVOID v41; // [rsp+130h] [rbp+18h] BYREF
  HANDLE v42; // [rsp+138h] [rbp+20h] BYREF

  v32[1] = 0;
  v36 = 0;
  v27 = 0LL;
  v26 = 0LL;
  v2 = *(_DWORD *)a1;
  v39 = *(_DWORD *)a1;
  v42 = 0LL;
  v31 = *(volatile void **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v40 = *(_DWORD *)(a1 + 4);
  v28 = *(_QWORD *)(a1 + 48);
  v3 = *(volatile void **)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 56);
  v29 = v4;
  v25 = *(_QWORD *)(a1 + 64);
  ProbeForWrite(v31, (((v40 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v40, 4u);
  v5 = v28;
  if ( v28 >= 0x7FFFFFFF0000LL )
    v5 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  v6 = v4;
  if ( v4 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  v7 = v25;
  if ( v25 >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v7 = *(_DWORD *)v7;
  v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
  if ( v8 && ((v9 = *(_WORD *)(v8 + 8), v9 == 332) || v9 == 452) )
    v10 = 4LL;
  else
    v10 = 8LL;
  ProbeForWrite(v3, v10, 4u);
  CurrentSiloState = EtwpGetCurrentSiloState();
  v11 = EtwpAcquireLoggerContextByLoggerId(CurrentSiloState, v2, 1);
  v12 = v11;
  if ( !v11 )
    return 3221225485LL;
  if ( (v11[3] & 0x100) != 0 )
  {
    v13 = EtwpCheckLoggerControlAccess(0x400u, (__int64)v11);
    if ( v13 >= 0 )
    {
      v13 = EtwpOpenConsumer(&v42);
      if ( v13 >= 0 )
      {
        v13 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 24), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        v26 = Object;
        if ( v13 >= 0 )
        {
          v13 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 32), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v23, 0LL);
          v27 = v23;
          if ( v13 >= 0 )
          {
            v32[0] = 48;
            v33 = 0LL;
            v35 = 64;
            v34 = 0LL;
            v37 = 0LL;
            v13 = ObCreateObject(0, EtwpRealTimeConnectionObjectType, (int)v32, 1u, 0, 160, 0, 0, &v41);
            if ( v13 >= 0 )
            {
              v14 = v41;
              memset(v41, 0, 0xA0uLL);
              v14[44] = v39;
              *((_QWORD *)v14 + 2) = v42;
              v15 = v41;
              *((_QWORD *)v41 + 3) = KeGetCurrentThread()->ApcState.Process;
              v15[6] = Object;
              v15[7] = v23;
              v15[8] = v28;
              v15[9] = v3;
              v15[14] = Address;
              *((_DWORD *)v15 + 30) = v40;
              v15[17] = v29;
              v15[18] = v25;
              v15[19] = CurrentSiloState;
              *((_DWORD *)v15 + 24) = v40 >> 12;
              v15[13] = v31;
              v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
              if ( v16 && ((v21 = *(_WORD *)(v16 + 8), v21 == 332) || v21 == 452) )
                v17 = 16;
              else
                v17 = 0;
              v18 = v41;
              *((_BYTE *)v41 + 90) = v17 | *((_BYTE *)v41 + 90) & 0xEF;
              v18[5] = a1;
              inserted = ObInsertObject(v18, 0LL, 0x400u, 1u, &NewObject, (PHANDLE)(a1 + 72));
              if ( inserted >= 0 )
              {
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v12 + 176), 0LL);
                *((_QWORD *)v12 + 46) = v18;
                ExReleasePushLockEx((ULONG_PTR)(v12 + 176), 0LL);
                EtwpSynchronizeWithLogger(v12, 32LL);
              }
              EtwpReleaseLoggerContext(v12, 1);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v13 = -1073741811;
  }
  EtwpReleaseLoggerContext(v12, 1);
  if ( v42 )
    ZwClose(v42);
  if ( v26 )
    ObfDereferenceObject(v26);
  if ( v27 )
    ObfDereferenceObject(v27);
  return (unsigned int)v13;
}
