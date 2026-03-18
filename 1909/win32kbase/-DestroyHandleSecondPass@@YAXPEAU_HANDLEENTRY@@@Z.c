/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0107470
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMDestroyUnlockedObject @ 0x1C00B05A0 (HMDestroyUnlockedObject.c)
 */

void __fastcall DestroyHandleSecondPass(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v7,
    a2,
    a3);
  v5 = 3LL * (unsigned int)((a1 - qword_1C0210758) >> 5);
  v6 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((a1 - qword_1C0210758) >> 5));
  if ( *(_DWORD *)(v6 + 8) )
    *(_DWORD *)(v6 + 8) = 0;
  HMDestroyUnlockedObject(a1, v5, v4);
}
