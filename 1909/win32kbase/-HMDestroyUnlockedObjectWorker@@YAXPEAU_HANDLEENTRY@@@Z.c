/*
 * XREFs of ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AA02C
 * Callers:
 *     HMUnlockObjectInternal @ 0x1C0026F70 (HMUnlockObjectInternal.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0028960 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0028B40 (DestroyThreadsObjects.c)
 *     ThreadUnlockWorker1 @ 0x1C002A380 (ThreadUnlockWorker1.c)
 *     HMUnlockObjectWorker @ 0x1C002FFA0 (HMUnlockObjectWorker.c)
 *     HMDestroyUnlockedObject @ 0x1C00B05A0 (HMDestroyUnlockedObject.c)
 * Callees:
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C0028C7C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMUnlockObjectWorker @ 0x1C002FFA0 (HMUnlockObjectWorker.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003009C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00300E8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0092BB0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     EtwTraceUserDestroyHandle @ 0x1C00A870C (EtwTraceUserDestroyHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     HMCleanupGrantedHandle @ 0x1C0102D98 (HMCleanupGrantedHandle.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0102F08 (HMRemoveHandleForObjectWorker.c)
 */

void __fastcall HMDestroyUnlockedObjectWorker(struct _HANDLEENTRY *a1)
{
  struct _MCGEN_TRACE_CONTEXT ***v2; // r14
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int8 v5; // cl
  __int64 v6; // rsi
  unsigned int EtwUserHandleType; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // al
  CompositionObject *v11; // rcx
  char v12; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  v2 = (struct _MCGEN_TRACE_CONTEXT ***)gpKernelHandleTable;
  v3 = a1 - qword_1C0210758;
  v4 = 0LL;
  *((_BYTE *)a1 + 25) |= 2u;
  v5 = *((_BYTE *)a1 + 24);
  v6 = 3LL * (unsigned int)(v3 >> 5);
  if ( v5 == 19 || v5 == 22 )
  {
    EtwUserHandleType = GetEtwUserHandleType(v5);
    EtwTraceUserDestroyHandle(*v2[v6], EtwUserHandleType, 0LL);
    if ( (*((_BYTE *)a1 + 25) & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(*v2[v6], v8, v9);
      *((_BYTE *)a1 + 25) &= ~0x20u;
    }
    v10 = *((_BYTE *)a1 + 24);
    if ( v10 == 19 )
    {
      v11 = (CompositionObject *)v2[v6][4];
    }
    else
    {
      if ( v10 != 22 )
      {
LABEL_11:
        HMRemoveHandleForObjectWorker(a1);
        goto LABEL_12;
      }
      v4 = (__int64)v2[v6][2];
      v11 = *(CompositionObject **)(v4 + 32);
    }
    CompositionObject::Release(v11);
    goto LABEL_11;
  }
  (*(&gahti + 3 * v5))((ULONG_PTR)v2[3 * (unsigned int)(v3 >> 5)]);
LABEL_12:
  if ( !gbInDestroyHandleTableObjects && v4 )
    HMUnlockObjectWorker(v4);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
}
