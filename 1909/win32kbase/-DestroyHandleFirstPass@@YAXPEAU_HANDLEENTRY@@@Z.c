/*
 * XREFs of ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C01073C0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMDestroyObject @ 0x1C0073400 (HMDestroyObject.c)
 */

void __fastcall DestroyHandleFirstPass(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int i; // r8d
  __int64 v10; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v11,
    a2,
    a3);
  v5 = gpKernelHandleTable;
  v6 = (unsigned int)((a1 - qword_1C0210758) >> 5);
  v7 = 3 * v6;
  if ( *((_BYTE *)a1 + 24) == 22 )
    HMUnlockObject(*(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * v6) + 16LL));
  v8 = v5[v7];
  if ( *(_DWORD *)(v8 + 8) )
  {
    if ( *((_BYTE *)a1 + 24) == 13 )
    {
      *(_QWORD *)(v8 + 48) = 0LL;
      *(_QWORD *)(v8 + 56) = 0LL;
      if ( *(_QWORD *)(v8 + 96) )
      {
        for ( i = 0; i < *(_DWORD *)(v8 + 88); *(_QWORD *)(*(_QWORD *)(v8 + 96) + 8 * v10) = 0LL )
          v10 = i++;
      }
      *(_DWORD *)(v8 + 88) = 0;
    }
  }
  else
  {
    HMDestroyObject((void *)v5[v7], v8, v4);
  }
}
