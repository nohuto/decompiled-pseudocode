/*
 * XREFs of ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016BA8
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015E54 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x180016DDC (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180016F78 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x1800170CC (-RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z.c)
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017250 (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017BD8 (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall RmpActivityHostAllocateAndInitialize(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PSM_HOST_INFO *a3,
        char a4,
        struct _RM_ACTIVITY_HOST **a5)
{
  char *Heap; // rax
  char *v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned int v12; // r14d
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // r8d
  int State; // ebx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x590uLL);
  v10 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x590uLL);
    *((_QWORD *)v10 + 6) = a1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a2) <= 1 )
      __fastfail(0xEu);
    *((_QWORD *)v10 + 7) = a2;
    *((_QWORD *)v10 + 170) = v10 + 1352;
    *((_QWORD *)v10 + 169) = v10 + 1352;
    v11 = *((_QWORD *)a3 + 68);
    memset_0(v10, 0, 0x30uLL);
    *((_QWORD *)v10 + 4) = v11;
    *((_QWORD *)v10 + 2) = 1LL;
    v12 = a4 & 1;
    *((_DWORD *)v10 + 10) = 0;
    *((_QWORD *)v10 + 1) = HIBYTE(v11)
                         + 37
                         * (BYTE6(v11)
                          + 37
                          * (BYTE5(v11)
                           + 37
                           * (BYTE4(v11)
                            + 37
                            * (BYTE3(v11)
                             + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883LL)))))));
    HampHostInitialize(v12, a3, (struct _RM_HAM_ACTIVITY_HOST *)(v10 + 64));
    v13 = v10 + 1056;
    v14 = 2LL;
    do
    {
      v13[2] = 0LL;
      v13[1] = v13;
      *v13 = v13;
      v13 += 3;
      --v14;
    }
    while ( v14 );
    v15 = *((_DWORD *)a3 + 133);
    State = RmpPolicyResizeScratchBuffers((struct _RM_PARTITION *)((char *)a2 + 144), ++*((_DWORD *)a2 + 48), v15);
    if ( State >= 0 )
      State = 0;
    if ( State >= 0 )
    {
      State = RmpEnforcementInfoInitializeCommon((struct _RM_ACTIVITY_HOST *)v10);
      if ( State >= 0 )
      {
        if ( v12 )
          *((_DWORD *)v10 + 297) |= 0x180u;
        State = RmpSystemReferenceHostWithPsm((struct _RM_ACTIVITY_HOST *)v10, (void **)v10 + 143);
        if ( State >= 0 )
        {
          State = HampHostAllocateState(
                    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1608),
                    (struct _RM_HAM_ACTIVITY_HOST *)(v10 + 64));
          if ( State >= 0 )
          {
            State = TpAllocWork(v10 + 1328, RmpActivityHostCommitUseUpdateWorker, v10, 0LL);
            if ( State >= 0 )
            {
              State = 0;
              *a5 = (struct _RM_ACTIVITY_HOST *)v10;
              v10 = 0LL;
            }
          }
        }
      }
    }
    if ( v10 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
