/*
 * XREFs of ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C002EA2C
 * Callers:
 *     HMUnlockObjectInternal @ 0x1C0026A50 (HMUnlockObjectInternal.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0027FC0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C00281A0 (DestroyThreadsObjects.c)
 *     ThreadUnlockWorker1 @ 0x1C00297F0 (ThreadUnlockWorker1.c)
 *     HMUnlockObjectWorker @ 0x1C0030DB0 (HMUnlockObjectWorker.c)
 *     HMDestroyUnlockedObject @ 0x1C00B34D0 (HMDestroyUnlockedObject.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002EACC (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002EB20 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMUnlockObjectWorker @ 0x1C0030DB0 (HMUnlockObjectWorker.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C006F964 (HMRemoveHandleForObjectWorker.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HMDestroyUnlockedObjectWorker(struct _HANDLEENTRY *a1)
{
  unsigned __int8 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  ULONG_PTR v6; // rcx
  void *v7; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  v2 = *((_BYTE *)a1 + 24);
  v3 = 0LL;
  v4 = 3LL * (unsigned int)((a1 - qword_1C0213758) >> 5);
  v5 = gpKernelHandleTable;
  *((_BYTE *)a1 + 25) |= 2u;
  v6 = v5[v4];
  if ( v2 == 19 )
  {
    v7 = *(void **)(v6 + 32);
LABEL_10:
    ObfDereferenceObject(v7);
    HMRemoveHandleForObjectWorker(a1);
    goto LABEL_4;
  }
  if ( v2 == 22 )
  {
    v3 = *(_QWORD *)(v6 + 16);
    v7 = *(void **)(v3 + 32);
    goto LABEL_10;
  }
  (*(&gahti + 3 * v2))(v6);
LABEL_4:
  if ( !gbInDestroyHandleTableObjects && v3 )
    HMUnlockObjectWorker(v3);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
}
