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
  _RTL_RB_TREE *v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BALANCED_NODE *Root; // rbx
  BOOLEAN v9; // di
  int v10; // eax
  _RTL_BALANCED_NODE *v11; // rax
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *v13; // rsi
  unsigned int inserted; // ebx
  _RTL_BALANCED_NODE **v15; // r14
  _RTL_BALANCED_NODE *i; // rdi
  unsigned __int16 ParentValue; // ax
  _RTL_BALANCED_NODE *v18; // r12
  _RTL_BALANCED_NODE *v19; // rax
  __int64 v20; // [rsp+28h] [rbp-69h]
  int CurrentThreadProcessId; // [rsp+58h] [rbp-39h] BYREF
  PVOID Object; // [rsp+60h] [rbp-31h] BYREF
  __int64 v23; // [rsp+68h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-21h]
  __int64 v25; // [rsp+78h] [rbp-19h] BYREF
  _OWORD v26[3]; // [rsp+80h] [rbp-11h] BYREF

  v4 = (_RTL_RB_TREE *)(a1 + 4080);
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
  BugCheckParameter2 = (ULONG_PTR)&v4[1];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v4[1], 0LL);
  Root = v4->Root;
  v9 = 0;
  if ( v4->Root )
  {
    while ( 1 )
    {
      v10 = PidNodeCompare(&CurrentThreadProcessId, Root);
      if ( v10 <= 0 )
      {
        if ( v10 >= 0 )
        {
          v13 = Root;
LABEL_16:
          v15 = &v13[1].Children[1];
          for ( i = v13[1].Children[1]; i != (_RTL_BALANCED_NODE *)v15; i = i->Children[0] )
          {
            ParentValue = i->ParentValue;
            if ( ParentValue == a2 )
            {
              inserted = -1073741811;
              goto LABEL_25;
            }
            if ( ParentValue > a2 )
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
            v18 = (_RTL_BALANCED_NODE *)Object;
            *((_WORD *)Object + 8) = a2;
            WORD2(v18->ParentValue) = ++*(_WORD *)(a1 + 4104);
            v18[1].Children[0] = v13;
            v19 = i->Children[1];
            i->Children[1] = v18;
            v19->Children[0] = v18;
            v18->Children[1] = v19;
            v18->Children[0] = i;
            ObReferenceObjectByPointer(v18, 0, EtwpSessionDemuxObjectType, 0);
            inserted = ObInsertObjectEx(v18, 0LL, 0, 0, 0, (__int64)&v25, &v23);
            if ( !inserted )
            {
              *a3 = WORD2(v18->ParentValue);
              *a4 = v23;
              goto LABEL_27;
            }
          }
LABEL_25:
          if ( *v15 == (_RTL_BALANCED_NODE *)v15 )
          {
            RtlRbRemoveNode(v4, v13);
            ExFreePoolWithTag(v13, 0);
          }
          goto LABEL_27;
        }
        v11 = Root->Children[0];
        if ( !Root->Children[0] )
        {
          v9 = 0;
          break;
        }
      }
      else
      {
        v11 = Root->Children[1];
        if ( !v11 )
        {
          v9 = 1;
          break;
        }
      }
      Root = v11;
    }
  }
  PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x48777445u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    LODWORD(PoolWithTag[1].Children[0]) = CurrentThreadProcessId;
    PoolWithTag[1].ParentValue = (unsigned __int64)&PoolWithTag[1].Children[1];
    PoolWithTag[1].Children[1] = (_RTL_BALANCED_NODE *)((char *)PoolWithTag + 32);
    RtlRbInsertNodeEx(v4, Root, v9, PoolWithTag);
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
