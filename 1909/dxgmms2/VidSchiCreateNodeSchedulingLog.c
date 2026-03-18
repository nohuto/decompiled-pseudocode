/*
 * XREFs of VidSchiCreateNodeSchedulingLog @ 0x1C0038660
 * Callers:
 *     ?VidSchiProcessAsyncOperation@@YAXPEAX@Z @ 0x1C0035B50 (-VidSchiProcessAsyncOperation@@YAXPEAX@Z.c)
 *     VidSchCreateSchedulingLogs @ 0x1C0091730 (VidSchCreateSchedulingLogs.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011240 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00113C4 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003426C (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C003B980 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003B9B4 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00CD1A8 (VidSchiSerializeSchedulingLog.c)
 */

__int64 __fastcall VidSchiCreateNodeSchedulingLog(struct _VIDSCH_NODE *a1, unsigned int a2)
{
  __int64 v2; // r14
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edx
  int v8; // esi
  void *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  void *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // r13
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  _QWORD v21[5]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v22[4]; // [rsp+58h] [rbp-28h] BYREF
  __int16 v23; // [rsp+78h] [rbp-8h]
  PVOID P; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v25; // [rsp+D0h] [rbp+50h] BYREF
  void *v26; // [rsp+D8h] [rbp+58h] BYREF

  v2 = a2;
  memset(v21, 0, sizeof(v21));
  v4 = *((_QWORD *)a1 + 3);
  v5 = *((unsigned __int16 *)a1 + 2);
  P = 0LL;
  v6 = *(_QWORD *)(v4 + 616);
  if ( (unsigned int)v5 < *(_DWORD *)(v4 + 688) )
    v6 += 8 * v5;
  v8 = VIDMM_SCH_LOG::CreateSchLog(
         *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v4 + 8) + 552LL),
         *(unsigned __int16 *)(*(_QWORD *)v6 + 6LL),
         (unsigned int)(32 * (v2 + 1)),
         (struct VIDMM_SCH_LOG **)&P,
         &v26,
         &v25);
  if ( v8 < 0 )
    goto LABEL_16;
  v9 = v26;
  *((_QWORD *)v26 + 1) = v2;
  v10 = *((unsigned __int16 *)a1 + 2);
  v11 = *(_QWORD *)(v4 + 616);
  if ( (unsigned int)v10 < *(_DWORD *)(v4 + 688) )
    v11 += 8 * v10;
  HIDWORD(v21[0]) = *(unsigned __int16 *)(*(_QWORD *)v11 + 6LL);
  v12 = *(_QWORD *)(v4 + 616);
  if ( (unsigned int)v10 < *(_DWORD *)(v4 + 688) )
    v12 += 8 * v10;
  v13 = *(unsigned __int16 *)(*(_QWORD *)v12 + 8LL);
  LODWORD(v21[4]) = (unsigned int)(3 * v2) >> 2;
  v21[3] = v25;
  LODWORD(v21[0]) = v13;
  LODWORD(v21[1]) = v2;
  v21[2] = v9;
  v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[20])(*(_QWORD *)(v4 + 8), v21);
  if ( v8 == -1073741822 )
    v8 = 0;
  if ( v8 < 0 )
  {
LABEL_16:
    if ( P )
      VIDMM_SCH_LOG::`scalar deleting destructor'(P, v7);
    return (unsigned int)v8;
  }
  else
  {
    v23 = 0;
    v22[0] = v4 + 1648;
    AcquireSpinLock::Acquire((Acquire *)v22);
    v14 = (void *)*((_QWORD *)a1 + 1386);
    v15 = *((_QWORD *)a1 + 1391);
    v16 = *((_QWORD *)a1 + 1392);
    v17 = *((_QWORD *)a1 + 1393);
    v26 = (void *)*((_QWORD *)a1 + 1394);
    *((_QWORD *)a1 + 1386) = P;
    v18 = v25;
    *((_DWORD *)a1 + 2774) = v2;
    *((_QWORD *)a1 + 1389) = v18;
    *((_QWORD *)a1 + 1388) = v9;
    *((_QWORD *)a1 + 1394) = 0LL;
    *((_QWORD *)a1 + 1392) = 0LL;
    *((_QWORD *)a1 + 1393) = 0LL;
    *((_QWORD *)a1 + 1391) = 0LL;
    *((_QWORD *)a1 + 1390) = 0LL;
    VidSchiCalibrateHwClock(a1);
    AcquireSpinLock::Release((AcquireSpinLock *)v22);
    if ( v14 )
    {
      if ( bTracingEnabled )
        VidSchiSerializeSchedulingLog((_DWORD)a1, (_DWORD)v14, v15, v16, v17, (__int64)v26);
      VIDMM_SCH_LOG::`scalar deleting destructor'(v14, v19);
    }
    return 0LL;
  }
}
