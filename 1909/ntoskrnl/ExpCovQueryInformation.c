/*
 * XREFs of ExpCovQueryInformation @ 0x14091462C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1400C61F0 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockShared @ 0x1400EF6D0 (ExfAcquirePushLockShared.c)
 *     ExfAcquirePushLockExclusive @ 0x1400EF900 (ExfAcquirePushLockExclusive.c)
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1406F4910 (RtlDuplicateUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x14070A210 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1409141D4 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x140914388 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x1409143BC (ExpCovQueryHypervisorInformation.c)
 *     ExpCovReadRequestBuffer @ 0x140914D0C (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovQueryInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int *v3; // r15
  SIZE_T v4; // rdi
  unsigned int *PoolWithTag; // rsi
  __int64 v8; // rax
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Buffer; // r13d
  unsigned int *v12; // rdi
  int v13; // eax
  unsigned __int64 v14; // r14
  void *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // ecx
  unsigned int v19; // r15d
  unsigned int v20; // eax
  void *v21; // rax
  __int64 v22; // [rsp+20h] [rbp-128h] BYREF
  unsigned int *v23; // [rsp+28h] [rbp-120h]
  unsigned int *v24; // [rsp+30h] [rbp-118h]
  unsigned __int64 v25; // [rsp+38h] [rbp-110h]
  unsigned int v26; // [rsp+40h] [rbp-108h]
  void *v27; // [rsp+48h] [rbp-100h]
  UNICODE_STRING StringIn; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD *v29; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v30; // [rsp+68h] [rbp-E0h]
  UNICODE_STRING v31[4]; // [rsp+70h] [rbp-D8h] BYREF
  _OWORD v32[4]; // [rsp+B0h] [rbp-98h] BYREF
  UNICODE_STRING v33; // [rsp+F0h] [rbp-58h] BYREF

  v3 = a3;
  v23 = a3;
  v4 = a2;
  v26 = a2;
  v30 = a1;
  memset(v31, 0, sizeof(v31));
  *(_QWORD *)&StringIn.Length = 0LL;
  StringIn.Buffer = 0LL;
  PoolWithTag = 0LL;
  v24 = 0LL;
  LODWORD(v31[3].Buffer) = 64;
  LODWORD(v31[0].Buffer) = v4;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( v3 )
    *v3 = 64;
  if ( (unsigned int)v4 < 0x40 )
    return 3221225476LL;
  v25 = a1 + 32;
  v8 = a1;
  if ( a1 >= 0x7FFFFFFF0000LL )
    v8 = 0x7FFFFFFF0000LL;
  v32[0] = *(_OWORD *)v8;
  v32[1] = *(_OWORD *)(v8 + 16);
  v32[2] = *(_OWORD *)(v8 + 32);
  v32[3] = *(_OWORD *)(v8 + 48);
  BYTE4(v31[0].Buffer) = LODWORD(v32[0]) == 1;
  v9 = ExpCovReadRequestBuffer((char *)v32 + 8, &StringIn, &v33, (char *)&v22 + 4);
  if ( v9 >= 0 )
  {
    *(_DWORD *)&v31[3].Length = HIDWORD(v22);
    v31[2] = v33;
    if ( !StringIn.Buffer || (v9 = RtlDuplicateUnicodeString(1u, &StringIn, &v31[1]), v9 >= 0) )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x72766F43u);
      v24 = PoolWithTag;
      *(_QWORD *)&v31[0].Length = PoolWithTag;
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
        goto LABEL_52;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovQueryInfoCallBack, (__int64)v31);
      if ( v9 < 0 )
      {
        KeLeaveCriticalRegion();
        goto LABEL_52;
      }
      ExpCovQueryHypervisorInformation((__int64 *)v31);
      Buffer = (unsigned int)v31[3].Buffer;
      LODWORD(v22) = *(_DWORD *)(&v31[3].MaximumLength + 1);
      if ( (unsigned int)v4 >= LODWORD(v31[3].Buffer)
        && (unsigned int)((__int64)(*(_QWORD *)&v31[0].Length - (_QWORD)PoolWithTag) >> 5) )
      {
        v12 = PoolWithTag;
        v13 = *(_DWORD *)(&v31[3].MaximumLength + 1);
        v14 = v25;
        while ( v13 )
        {
          v15 = (void *)(v12[6] + v14 + 32);
          *(_DWORD *)v14 = *v12;
          *(_DWORD *)(v14 + 4) = v12[1];
          *(_DWORD *)(v14 + 24) = v12[6];
          memmove((void *)(v14 + 28), v12 + 7, v12[6]);
          *(_WORD *)(v14 + 8) = *((_WORD *)v12 + 4);
          *(_WORD *)(v14 + 10) = *((_WORD *)v12 + 5);
          *(_QWORD *)(v14 + 16) = v15;
          memmove(v15, *((const void **)v12 + 2), *((unsigned __int16 *)v12 + 4));
          v16 = *v12;
          v14 += v16;
          v25 = v14;
          v12 = (unsigned int *)((char *)v12 + v16);
          v13 = --*(_DWORD *)(&v31[3].MaximumLength + 1);
        }
      }
      else
      {
        if ( (unsigned int)v4 < LODWORD(v31[3].Buffer) )
          v9 = -1073741820;
        v14 = v25;
      }
      if ( LODWORD(v32[0]) == 1 )
        ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
      else
        ExfAcquirePushLockShared((__int64)&ExpCovPushLock);
      v17 = ExpCovUnloadedModuleList;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (__int64 *)v17 == &ExpCovUnloadedModuleList )
          {
            ExfReleasePushLock(&ExpCovPushLock);
            KeLeaveCriticalRegion();
            if ( v3 )
              *v3 = Buffer;
            *(_DWORD *)(v30 + 4) = v22;
            goto LABEL_52;
          }
          v29 = (_QWORD *)v17;
          v27 = *(void **)(v17 + 56);
          if ( v27 )
          {
            if ( ExpCovIsUnLoadedModulePresent(v17, SHIDWORD(v22), &StringIn, &v33) )
              break;
          }
LABEL_31:
          v17 = *(_QWORD *)v17;
        }
        v18 = *(_DWORD *)(v17 + 48);
        if ( LODWORD(v32[0]) != 1 )
          v18 -= *((_DWORD *)v27 + 7);
        if ( v18 >= 0xFFFFFFE0 || (v19 = *(unsigned __int16 *)(v17 + 32) + v18 + 32, v19 < 0x20) )
          v19 = -1;
        v20 = v19 + Buffer;
        if ( v19 + Buffer >= Buffer )
        {
          Buffer += v19;
          if ( v26 >= v20 )
          {
            v27 = (void *)(v18 + v14 + 32);
            *(_DWORD *)v14 = v19;
            *(_DWORD *)(v14 + 4) = 0;
            *(_DWORD *)(v14 + 24) = v18;
            memmove((void *)(v14 + 28), *(const void **)(v17 + 56), v18);
            *(_WORD *)(v14 + 8) = *(_WORD *)(v17 + 32);
            *(_WORD *)(v14 + 10) = *(_WORD *)(v17 + 32);
            v21 = v27;
            *(_QWORD *)(v14 + 16) = v27;
            memmove(v21, *(const void **)(v17 + 40), *(unsigned __int16 *)(v17 + 32));
            v14 += v19;
            v25 = v14;
            if ( LODWORD(v32[0]) == 1 )
            {
              v17 = *(_QWORD *)(v17 + 8);
              ExpCovDeleteUnloadedModuleEntry(v29);
            }
            v3 = v23;
          }
          else
          {
            v3 = v23;
            if ( v23 )
              *v23 = v20;
            v9 = -1073741820;
          }
          LODWORD(v22) = v22 + 1;
          goto LABEL_31;
        }
        DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating total required length for %wZ\n", v17 + 32, v22);
        v17 = *(_QWORD *)v17;
        v3 = v23;
      }
    }
  }
LABEL_52:
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
  if ( v31[1].Buffer )
    RtlFreeAnsiString(&v31[1]);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x72766F43u);
  return (unsigned int)v9;
}
