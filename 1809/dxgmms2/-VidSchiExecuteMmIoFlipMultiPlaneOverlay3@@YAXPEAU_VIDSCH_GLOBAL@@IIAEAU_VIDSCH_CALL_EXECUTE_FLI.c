/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0029C98
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000CFC0 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0029AA4 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C002A1D0 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C002DA2C (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0030110 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 */

void __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        int a3,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a4,
        enum _VIDSCH_FLIP_STATUS *a5,
        struct VIDSCH_FLIP_QUEUE *a6,
        unsigned int a7)
{
  __int64 v9; // r14
  char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r12
  _QWORD *v20; // rax
  int v21; // edx
  char v22; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v23; // [rsp+41h] [rbp-BFh]
  int v24; // [rsp+44h] [rbp-BCh]
  struct _VIDSCH_GLOBAL *v25; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+54h] [rbp-ACh]
  int v28; // [rsp+58h] [rbp-A8h]
  int v29; // [rsp+5Ch] [rbp-A4h]
  _QWORD v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[48]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v32[80]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = a2;
  v24 = a3;
  v10 = (char *)a6 + 1296 * a7;
  memset(v32, 0, sizeof(v32));
  v30[0] = 0LL;
  v30[1] = 0LL;
  memset(v31, 0, 0x28uLL);
  v23 = *(_DWORD *)a5 == 11;
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    (_DWORD)a1,
    (_DWORD)v10 + 56,
    v9,
    (_DWORD)a4,
    v23,
    (__int64)v32,
    (__int64)v30,
    (__int64)v31);
  if ( !*((_DWORD *)a4 + 5) )
  {
    *((_DWORD *)a4 + 530) = 0;
    v12 = WdLogNewEntry5_WdEvent(0LL, v11);
    *(_QWORD *)(v12 + 24) = v9;
    *(_QWORD *)(v12 + 32) = (**((_DWORD **)v10 + 153) >> 10) & 0x3FF;
LABEL_5:
    WdLogEvent5_WdEvent(v12);
LABEL_6:
    VidSchiComputeFlipEntryStatusAfterFlip(v13, a4, a5);
    v14 = *(unsigned int *)a5;
    if ( (_DWORD)v14 == 11 )
    {
      v15 = *((_QWORD *)a1 + v9 + 322);
      *((_QWORD *)a4 + 266) = *(_QWORD *)(v15 + 33184);
      *((_DWORD *)a4 + 531) = *(_DWORD *)(v15 + 33176);
      v14 = *(unsigned int *)a5;
    }
    VidSchiLogMmIoFlipMultiPlaneOverlay3(a1, v10 + 56, a4, v14);
    return;
  }
  if ( (*((_DWORD *)v10 + 294) & 0x800) != 0 )
  {
    *((_DWORD *)a4 + 530) = 0;
    v12 = WdLogNewEntry5_WdEvent(0LL, v11);
    goto LABEL_5;
  }
  v16 = *((unsigned int *)a1 + 8);
  v22 = 0;
  v17 = DpSynchronizeExecution(*((_QWORD *)a1 + 3), VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3, a4, v16, &v22);
  v19 = v17;
  if ( v17 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v18);
    v20[3] = 281LL;
    v20[4] = 11LL;
    v20[5] = v19;
    v20[6] = a4;
    v20[7] = *((_QWORD *)a1 + 2);
    WdLogEvent5_WdCriticalError(v20);
    __debugbreak();
  }
  if ( *((_DWORD *)a4 + 530) != -1073741267 || (*((_DWORD *)a4 + 4) & 1) == 0 )
    goto LABEL_6;
  v25 = a1;
  v28 = v24;
  v29 = v23;
  v27 = v9;
  v26 = a7;
  VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc((__int64 *)&v25, 5);
  if ( (*((_DWORD *)v10 + 294) & 0x10) != 0 )
    v21 = ((unsigned __int16)**((_DWORD **)v10 + 153) | (unsigned __int16)(**((_DWORD **)v10 + 153) >> 10)) & 0x3FF;
  else
    v21 = (1 << *((_DWORD *)a1 + 35)) - 1;
  *(_DWORD *)(*((_QWORD *)a1 + v9 + 322) + 2340LL) |= v21;
}
