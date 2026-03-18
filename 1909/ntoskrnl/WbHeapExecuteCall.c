/*
 * XREFs of WbHeapExecuteCall @ 0x1405CA6C8
 * Callers:
 *     WbDispatchOperation @ 0x1405CADA0 (WbDispatchOperation.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     WbGetTrapFrame @ 0x1405CA0C8 (WbGetTrapFrame.c)
 *     sub_1405CA150 @ 0x1405CA150 (sub_1405CA150.c)
 *     WbUpdateHeapExecutedCallArgumentList @ 0x1405CA204 (WbUpdateHeapExecutedCallArgumentList.c)
 *     WbSetTrapFrame @ 0x1405CA2D0 (WbSetTrapFrame.c)
 *     WbValidateHeapExecuteCallArguments @ 0x1405CA490 (WbValidateHeapExecuteCallArguments.c)
 *     WbGetHeapExecutedBlock @ 0x1405CA8C8 (WbGetHeapExecutedBlock.c)
 *     sub_1405CAA28 @ 0x1405CAA28 (sub_1405CAA28.c)
 *     sub_1405CAB3C @ 0x1405CAB3C (sub_1405CAB3C.c)
 *     WbGetWarbirdThread @ 0x1405CAB98 (WbGetWarbirdThread.c)
 *     PsWow64GetProcessMachine @ 0x1405E94D0 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall WbHeapExecuteCall(__int64 a1, _QWORD *a2, char *a3, unsigned int a4)
{
  int HeapExecutedBlock; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int16 v13; // ax
  __int16 v14; // ax
  unsigned __int64 v15; // rax
  __int16 v16; // ax
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  union wil_details_FeaturePropertyCache v22[84]; // [rsp+60h] [rbp-A0h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  memset(v22, 0, sizeof(v22));
  HeapExecutedBlock = WbValidateHeapExecuteCallArguments((__int64)a2, a4, v22);
  if ( HeapExecutedBlock >= 0 )
  {
    HeapExecutedBlock = WbGetHeapExecutedBlock(a1, v22, &v18);
    if ( HeapExecutedBlock >= 0 )
    {
      HeapExecutedBlock = WbGetWarbirdThread(a1, v9, &v17);
      if ( HeapExecutedBlock >= 0 )
      {
        HeapExecutedBlock = WbGetTrapFrame(v17, (__int64)&v19);
        if ( HeapExecutedBlock >= 0 )
        {
          HeapExecutedBlock = sub_1405CA150(v17, v18, v20, v19, v21);
          if ( HeapExecutedBlock >= 0 )
          {
            HeapExecutedBlock = WbUpdateHeapExecutedCallArgumentList((__int64)v22, v18, &v19, a2, a3, a4);
            if ( HeapExecutedBlock >= 0 )
            {
              v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
              if ( !v10 )
                goto LABEL_8;
              v14 = *(_WORD *)(v10 + 8);
              if ( v14 != 332 && v14 != 452 )
                goto LABEL_8;
              v15 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
              if ( !v15 )
                goto LABEL_24;
              v16 = *(_WORD *)(v15 + 8);
              if ( !v16 )
                goto LABEL_24;
              if ( v16 != 332 )
              {
                if ( v16 != 452 )
                {
LABEL_24:
                  HeapExecutedBlock = -1073741637;
                  goto LABEL_11;
                }
              }
              else
              {
LABEL_8:
                LODWORD(v21) = v21 & 0xFFFFFEFF;
              }
              v20 = *(_QWORD *)(v18 + 24);
              HeapExecutedBlock = WbSetTrapFrame(v17, (__int64)&v19);
              if ( HeapExecutedBlock >= 0 )
              {
                v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
                if ( v11 )
                {
                  v13 = *(_WORD *)(v11 + 8);
                  if ( (v13 == 332 || v13 == 452)
                    && (unsigned __int16)PsWow64GetProcessMachine(KeGetCurrentThread()->ApcState.Process) == 332 )
                  {
                    HeapExecutedBlock = v20;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  sub_1405CAB3C(a1, v17);
  sub_1405CAA28(a1, v18);
  return (unsigned int)HeapExecutedBlock;
}
