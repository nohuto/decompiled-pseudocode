/*
 * XREFs of ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00354F4
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00A9F44 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C003B980 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 */

void __fastcall VidSchiDestroyNodeSchedulingLog(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rsi
  int i; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  bool v7; // cf
  __int64 v8; // rcx
  unsigned int v9; // edx
  void *v10; // rcx
  _DWORD v11[14]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  for ( i = *((_DWORD *)a1 + 2790); i; i = *((_DWORD *)a1 + 2790) )
    KeWaitForSingleObject((char *)a1 + 11168, Executive, 0, 0, 0LL);
  if ( *((_QWORD *)a1 + 1386) )
  {
    memset(v11, 0, 0x28uLL);
    v4 = *((unsigned __int16 *)a1 + 2);
    v5 = *(_QWORD *)(v1 + 616);
    v6 = v5 + 8 * v4;
    v7 = (unsigned int)v4 < *(_DWORD *)(v1 + 688);
    if ( (unsigned int)v4 >= *(_DWORD *)(v1 + 688) )
      v6 = *(_QWORD *)(v1 + 616);
    v11[1] = *(unsigned __int16 *)(*(_QWORD *)v6 + 6LL);
    if ( v7 )
      v5 += 8 * v4;
    v8 = *(_QWORD *)(v1 + 8);
    v11[0] = *(unsigned __int16 *)(*(_QWORD *)v5 + 8LL);
    ((void (__fastcall **)(__int64, _DWORD *))DxgCoreInterface)[20](v8, v11);
    v10 = (void *)*((_QWORD *)a1 + 1386);
    if ( v10 )
      VIDMM_SCH_LOG::`scalar deleting destructor'(v10, v9);
    *((_QWORD *)a1 + 1386) = 0LL;
  }
}
