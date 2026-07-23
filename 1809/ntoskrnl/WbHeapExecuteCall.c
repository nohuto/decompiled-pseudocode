/*
 * XREFs of WbHeapExecuteCall @ 0x140625ADC
 * Callers:
 *     WbDispatchOperation @ 0x140626384 (WbDispatchOperation.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     WbValidateHeapExecuteCallArguments @ 0x14062517C (WbValidateHeapExecuteCallArguments.c)
 *     WbGetTrapFrame @ 0x14062546C (WbGetTrapFrame.c)
 *     sub_1406254F4 @ 0x1406254F4 (sub_1406254F4.c)
 *     sub_1406255F0 @ 0x1406255F0 (sub_1406255F0.c)
 *     WbSetTrapFrame @ 0x1406257B4 (WbSetTrapFrame.c)
 *     WbGetHeapExecutedBlock @ 0x14062592C (WbGetHeapExecutedBlock.c)
 *     sub_140625A74 @ 0x140625A74 (sub_140625A74.c)
 *     WbGetWarbirdThread @ 0x14062604C (WbGetWarbirdThread.c)
 *     sub_140626220 @ 0x140626220 (sub_140626220.c)
 */

__int64 __fastcall WbHeapExecuteCall(__int64 a1, _QWORD *a2, char *a3, unsigned int a4)
{
  int HeapExecutedBlock; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int16 v13; // ax
  unsigned __int64 v14; // rax
  __int16 v15; // ax
  __int16 v16; // ax
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h]
  int v22; // [rsp+50h] [rbp-B0h]
  _QWORD v23[42]; // [rsp+60h] [rbp-A0h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  HeapExecutedBlock = WbValidateHeapExecuteCallArguments((__int64)a2, a4, v23);
  if ( HeapExecutedBlock >= 0 )
  {
    HeapExecutedBlock = WbGetHeapExecutedBlock(a1, (__int64)v23, &v19);
    if ( HeapExecutedBlock >= 0 )
    {
      HeapExecutedBlock = WbGetWarbirdThread(a1, v9, &v18);
      if ( HeapExecutedBlock >= 0 )
      {
        HeapExecutedBlock = WbGetTrapFrame(v18, (__int64)&v20);
        if ( HeapExecutedBlock >= 0 )
        {
          HeapExecutedBlock = sub_1406254F4(v18, (__int64)v19, v21, v20, v22);
          if ( HeapExecutedBlock >= 0 )
          {
            HeapExecutedBlock = sub_1406255F0((__int64)v23, (__int64)v19, &v20, a2, a3, a4);
            if ( HeapExecutedBlock >= 0 )
            {
              v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
              if ( !v10 )
                goto LABEL_8;
              v13 = *(_WORD *)(v10 + 8);
              if ( v13 != 332 && v13 != 452 )
                goto LABEL_8;
              v14 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
              if ( !v14 )
                goto LABEL_18;
              v15 = *(_WORD *)(v14 + 8);
              if ( !v15 )
                goto LABEL_18;
              if ( v15 != 332 )
              {
                if ( v15 != 452 )
                {
LABEL_18:
                  HeapExecutedBlock = -1073741637;
                  goto LABEL_11;
                }
              }
              else
              {
LABEL_8:
                v22 &= ~0x100u;
              }
              v21 = v19[3];
              HeapExecutedBlock = WbSetTrapFrame(v18, (__int64)&v20);
              if ( HeapExecutedBlock >= 0 )
              {
                v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
                if ( v11 )
                {
                  v16 = *(_WORD *)(v11 + 8);
                  if ( v16 == 332 || v16 == 452 )
                  {
                    v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
                    if ( v17 && *(_WORD *)(v17 + 8) == 332 )
                      HeapExecutedBlock = v21;
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
  sub_140626220(a1, v18);
  sub_140625A74(a1, (__int64)v19);
  return (unsigned int)HeapExecutedBlock;
}
