/*
 * XREFs of VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002E404
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C00073F0 (VidSchiScheduleCommandToRun.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031554 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0001218 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C0008E90 (VidSchiUnwaitMonitoredFences.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C0015EB0 (VidSchiCompleteSignalCommmand.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

_QWORD *__fastcall VidSchiProcessCrossAdapterSignaledSyncObjects(
        struct HwQueueStagingList *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 **v5; // rdx
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rcx
  _QWORD *result; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  int v13; // eax
  __int64 v14; // r14
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v18; // [rsp+28h] [rbp-D8h]
  _BYTE v19[48]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v20[130]; // [rsp+60h] [rbp-A0h] BYREF

  v18 = &v17;
  v17 = (__int64)&v17;
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v19, (unsigned __int64 *)(a2 + 2552), a3, 0);
  v5 = (__int64 **)(a2 + 2536);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (__int64 *)v5 )
      break;
    if ( (__int64 **)v6[1] != v5
      || (v7 = (__int64 *)*v6, *(__int64 **)(*v6 + 8) != v6)
      || (*v5 = v7, v7[1] = (__int64)v5, *v6 = 0LL, v6[1] = 0LL, v8 = v6 + 2, v9 = v18, (__int64 *)*v18 != &v17) )
    {
LABEL_20:
      __fastfail(3u);
    }
    v8[1] = (__int64)v18;
    *v8 = (__int64)&v17;
    *v9 = (__int64)v8;
    --*(_DWORD *)(a2 + 2568);
    v18 = v8;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v19);
  while ( 1 )
  {
    result = (_QWORD *)v17;
    if ( (__int64 *)v17 == &v17 )
      return result;
    if ( *(__int64 **)(v17 + 8) != &v17 )
      goto LABEL_20;
    v11 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
      goto LABEL_20;
    v17 = *(_QWORD *)v17;
    *(_QWORD *)(v11 + 8) = &v17;
    v12 = result - 22;
    *result = 0LL;
    result[1] = 0LL;
    v13 = *((_DWORD *)result - 33);
    v14 = *(_QWORD *)(a2 + 232);
    if ( v13 == 2 )
    {
      memset(v20, 0, sizeof(v20));
      v15 = *((_BYTE *)v12 + 27) == 0;
      LODWORD(v20[0]) = 895576406;
      LODWORD(v20[6]) = 5;
      v20[11] = v14;
      if ( v15 )
        v16 = v12[9];
      else
        v16 = *(_QWORD *)(v12[26] + 32LL);
      v20[67] = v16;
      v20[35] = v12;
      HIDWORD(v20[34]) = 1;
      VidSchiCompleteSignalCommmand((__int64)a1, (__int64)v20, 0LL);
    }
    else if ( (unsigned int)(v13 - 4) <= 1 )
    {
      if ( *(_BYTE *)(v12[26] + 48LL) )
        _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled((_VIDSCH_SYNC_OBJECT *)v12, a1, 0);
      else
        VidSchiUnwaitMonitoredFences((__int64)a1, a2);
    }
  }
}
