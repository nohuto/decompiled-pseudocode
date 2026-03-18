/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C002A6D4
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000CD30 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C002A57C (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C002ABC4 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C002E2A4 (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C00308F0 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 */

void __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct VIDSCH_FLIP_QUEUE *a3,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a4,
        enum _VIDSCH_FLIP_STATUS *a5,
        unsigned int a6)
{
  __int64 v8; // r14
  char *v9; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r13
  _QWORD *v24; // rax
  int v25; // edx
  char v26; // [rsp+40h] [rbp-C0h] BYREF
  char v27; // [rsp+41h] [rbp-BFh]
  unsigned int v28; // [rsp+44h] [rbp-BCh]
  __int128 v29; // [rsp+48h] [rbp-B8h] BYREF
  struct VIDSCH_FLIP_QUEUE *v30; // [rsp+58h] [rbp-A8h]
  char v31; // [rsp+60h] [rbp-A0h]
  int v32; // [rsp+61h] [rbp-9Fh]
  __int16 v33; // [rsp+65h] [rbp-9Bh]
  char v34; // [rsp+67h] [rbp-99h]
  _QWORD v35[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v36[40]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v37[80]; // [rsp+A0h] [rbp-60h] BYREF

  v8 = a2;
  v28 = a6;
  v9 = (char *)a3 + 1312 * a6;
  memset(v37, 0, sizeof(v37));
  v35[0] = 0LL;
  v35[1] = 0LL;
  memset(v36, 0, sizeof(v36));
  v13 = *((_QWORD *)v9 + 143);
  if ( v13 && v13 <= *((_QWORD *)a3 + 9) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
    v14[3] = 281LL;
    v14[4] = 36864LL;
    v14[5] = v8;
    v14[6] = *((int *)a3 + 15);
    v14[7] = a6;
    v13 = WdLogEvent5_WdCriticalError(v14);
    __debugbreak();
  }
  *((_QWORD *)a3 + 9) = v13;
  v27 = *(_DWORD *)a5 == 11;
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    (_DWORD)a1,
    (_DWORD)v9 + 80,
    v8,
    (_DWORD)a4,
    v27,
    (__int64)v37,
    (__int64)v35,
    (__int64)v36);
  if ( !*((_DWORD *)a4 + 5) )
  {
    *((_DWORD *)a4 + 530) = 0;
    v16 = WdLogNewEntry5_WdEvent(0LL, v15);
    *(_QWORD *)(v16 + 24) = v8;
    *(_QWORD *)(v16 + 32) = (**((_DWORD **)v9 + 158) >> 10) & 0x3FF;
LABEL_8:
    WdLogEvent5_WdEvent(v16);
LABEL_9:
    VidSchiComputeFlipEntryStatusAfterFlip(v17, a4, a5);
    v18 = *(unsigned int *)a5;
    if ( (_DWORD)v18 == 11 )
    {
      v19 = *((_QWORD *)a1 + v8 + 322);
      *((_QWORD *)a4 + 266) = *(_QWORD *)(v19 + 33192);
      *((_DWORD *)a4 + 531) = *(_DWORD *)(v19 + 33184);
      v18 = *(unsigned int *)a5;
    }
    VidSchiLogMmIoFlipMultiPlaneOverlay3(a1, v9 + 80, a4, v18);
    return;
  }
  if ( (*((_DWORD *)v9 + 304) & 0x800) != 0 )
  {
    *((_DWORD *)a4 + 530) = 0;
    v16 = WdLogNewEntry5_WdEvent(0LL, v15);
    goto LABEL_8;
  }
  v20 = *((unsigned int *)a1 + 8);
  v26 = 0;
  v21 = DpSynchronizeExecution(*((_QWORD *)a1 + 3), VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3, a4, v20, &v26);
  v17 = 0LL;
  v23 = v21;
  if ( v21 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, v22);
    v24[3] = 281LL;
    v24[4] = 11LL;
    v24[5] = v23;
    v24[6] = a4;
    v24[7] = *((_QWORD *)a1 + 2);
    WdLogEvent5_WdCriticalError(v24);
    __debugbreak();
  }
  if ( *((_DWORD *)a4 + 530) != -1073741267 || (*((_DWORD *)a4 + 4) & 1) == 0 )
    goto LABEL_9;
  *((_QWORD *)&v29 + 1) = __PAIR64__(v8, v28);
  v32 = v17;
  v33 = v17;
  v34 = v17;
  v31 = v27;
  *(_QWORD *)&v29 = a1;
  v30 = a3;
  VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(&v29, v22);
  if ( (*((_DWORD *)v9 + 304) & 0x10) != 0 )
    v25 = ((unsigned __int16)**((_DWORD **)v9 + 158) | (unsigned __int16)(**((_DWORD **)v9 + 158) >> 10)) & 0x3FF;
  else
    v25 = (1 << *((_DWORD *)a1 + 35)) - 1;
  *(_DWORD *)(*((_QWORD *)a1 + v8 + 322) + 2348LL) |= v25;
}
