/*
 * XREFs of HMRemoveHandleForObjectWorker @ 0x1C006F964
 * Callers:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C002EA2C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObject @ 0x1C006F8C0 (HMRemoveHandleForObject.c)
 * Callees:
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00282DC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     EtwTraceUserDestroyHandle @ 0x1C006FA60 (EtwTraceUserDestroyHandle.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     HMCleanupGrantedHandle @ 0x1C01057C8 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMRemoveHandleForObjectWorker(_BYTE *a1, __int64 a2, __int64 a3)
{
  void ***v4; // r14
  __int64 v5; // rsi
  unsigned int EtwUserHandleType; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int16 v9; // bx
  __int16 v10; // ax
  signed __int64 v11; // rdi
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)&v13,
    a2,
    a3);
  --giheCount;
  v4 = (void ***)gpKernelHandleTable;
  v5 = 3LL * (unsigned int)((a1 - (_BYTE *)qword_1C0213758) >> 5);
  EtwUserHandleType = GetEtwUserHandleType(a1[24]);
  EtwTraceUserDestroyHandle(*v4[v5], EtwUserHandleType, 0);
  if ( (a1[25] & 0x20) != 0 )
    HMCleanupGrantedHandle(*v4[v5], v7, v8);
  v9 = *((_WORD *)a1 + 13) + 1;
  memset(a1, 0, 0x20uLL);
  v4[v5] = 0LL;
  v4[v5 + 1] = 0LL;
  v4[v5 + 2] = 0LL;
  v10 = 1;
  if ( v9 != -1 )
    v10 = v9;
  *((_WORD *)a1 + 13) = v10;
  v11 = (a1 - (_BYTE *)qword_1C0213758) >> 5;
  if ( (v11 & 1) != 0 )
  {
    *((_QWORD *)gpKernelHandleTable + 3 * v11) = qword_1C0213700;
    qword_1C0213700 = v11;
  }
  else
  {
    *((_QWORD *)gpKernelHandleTable + 3 * v11) = qword_1C02136F8;
    qword_1C02136F8 = v11;
  }
  return 1LL;
}
