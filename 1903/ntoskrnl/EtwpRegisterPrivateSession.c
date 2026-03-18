/*
 * XREFs of EtwpRegisterPrivateSession @ 0x1408FCEB4
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140036B70 (PsGetCurrentThreadProcessId.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlRbRemoveNode @ 0x140063870 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140064590 (RtlRbInsertNodeEx.c)
 *     ObReferenceObjectByPointer @ 0x140086CA0 (ObReferenceObjectByPointer.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     PidNodeCompare @ 0x1408FD45C (PidNodeCompare.c)
 */

__int64 __fastcall EtwpRegisterPrivateSession(__int64 a1, unsigned __int16 a2, _WORD *a3, _DWORD *a4)
{
  unsigned __int64 *v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rbx
  bool v9; // di
  int v10; // eax
  __int64 *v11; // rax
  __int64 *PoolWithTag; // rax
  __int64 *v13; // rsi
  unsigned int inserted; // ebx
  __int64 *v15; // r14
  __int64 *i; // rdi
  unsigned __int16 v17; // ax
  _WORD *v18; // r12
  _QWORD *v19; // rax
  __int64 v20; // [rsp+28h] [rbp-69h]
  int CurrentThreadProcessId; // [rsp+58h] [rbp-39h] BYREF
  PVOID Object; // [rsp+60h] [rbp-31h] BYREF
  __int64 v23; // [rsp+68h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-21h]
  __int64 v25; // [rsp+78h] [rbp-19h] BYREF
  _OWORD v26[3]; // [rsp+80h] [rbp-11h] BYREF

  v4 = (unsigned __int64 *)(a1 + 4080);
  v23 = 0LL;
  Object = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return 3221225659LL;
  if ( a2 > 8u )
    return 3221225485LL;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = (ULONG_PTR)(v4 + 2);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 2), 0LL);
  v8 = (__int64 *)*v4;
  v9 = 0;
  if ( *v4 )
  {
    while ( 1 )
    {
      v10 = PidNodeCompare(&CurrentThreadProcessId, v8);
      if ( v10 <= 0 )
      {
        if ( v10 >= 0 )
        {
          v13 = v8;
LABEL_16:
          v15 = v13 + 4;
          for ( i = (__int64 *)v13[4]; i != v15; i = (__int64 *)*i )
          {
            v17 = *((_WORD *)i + 8);
            if ( v17 == a2 )
            {
              inserted = -1073741811;
              goto LABEL_25;
            }
            if ( v17 > a2 )
              break;
          }
          LODWORD(v26[0]) = 48;
          *((_QWORD *)&v26[0] + 1) = 0LL;
          DWORD2(v26[1]) = 64;
          *(_QWORD *)&v26[1] = 0LL;
          v26[2] = 0LL;
          inserted = ObCreateObjectEx(0, EtwpSessionDemuxObjectType, (int)v26, 1u, v20, 32, 0, 0, &Object, 0LL);
          if ( !inserted )
          {
            v18 = Object;
            *((_WORD *)Object + 8) = a2;
            v18[10] = ++*(_WORD *)(a1 + 4104);
            *((_QWORD *)v18 + 3) = v13;
            v19 = (_QWORD *)i[1];
            i[1] = (__int64)v18;
            *v19 = v18;
            *((_QWORD *)v18 + 1) = v19;
            *(_QWORD *)v18 = i;
            ObReferenceObjectByPointer(v18, 0, EtwpSessionDemuxObjectType, 0);
            inserted = ObInsertObjectEx(v18, 0LL, 0, 0, 0, (__int64)&v25, &v23);
            if ( !inserted )
            {
              *a3 = v18[10];
              *a4 = v23;
              goto LABEL_27;
            }
          }
LABEL_25:
          if ( (__int64 *)*v15 == v15 )
          {
            RtlRbRemoveNode(v4, (unsigned __int64)v13);
            ExFreePoolWithTag(v13, 0);
          }
          goto LABEL_27;
        }
        v11 = (__int64 *)*v8;
        if ( !*v8 )
        {
          v9 = 0;
          break;
        }
      }
      else
      {
        v11 = (__int64 *)v8[1];
        if ( !v11 )
        {
          v9 = 1;
          break;
        }
      }
      v8 = v11;
    }
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x48777445u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 6) = CurrentThreadProcessId;
    PoolWithTag[5] = (__int64)(PoolWithTag + 4);
    PoolWithTag[4] = (__int64)(PoolWithTag + 4);
    RtlRbInsertNodeEx(v4, (unsigned __int64)v8, v9, (unsigned __int64)PoolWithTag);
    goto LABEL_16;
  }
  inserted = -1073741801;
LABEL_27:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Object )
    ObfDereferenceObject(Object);
  return inserted;
}
