/*
 * XREFs of HMDestroyUnlockedObject @ 0x1C0034DD0
 * Callers:
 *     ThreadUnlock1 @ 0x1C0022E20 (ThreadUnlock1.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0035470 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0035630 (DestroyThreadsObjects.c)
 *     HMUnlockObjectInternal @ 0x1C0037470 (HMUnlockObjectInternal.c)
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00A8E80 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C00BC470 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C00B1224 (HMRemoveHandleForObjectWorker.c)
 */

void __fastcall HMDestroyUnlockedObject(_BYTE *a1)
{
  unsigned __int8 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  ULONG_PTR v6; // rcx
  void *v7; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  v2 = a1[24];
  v3 = 0LL;
  v4 = 3LL * (unsigned int)((a1 - (_BYTE *)qword_1C01A0E28) >> 5);
  v5 = gpKernelHandleTable;
  a1[25] |= 2u;
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
    HMUnlockObject(v3);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
}
