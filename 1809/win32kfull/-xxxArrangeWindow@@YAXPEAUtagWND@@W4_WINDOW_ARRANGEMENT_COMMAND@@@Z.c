/*
 * XREFs of ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01E7130
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     xxxHandleNCMouseGuys @ 0x1C0156CFC (xxxHandleNCMouseGuys.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006A180 (IsShellWndManagementBehaviorEnabled.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015E360 (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01E4358 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01E4950 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E69FC (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01E87DC (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C01FB410 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall xxxArrangeWindow(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // rax
  unsigned int v5; // r14d
  __int64 v6; // r8
  unsigned int v7; // esi
  int v8; // r13d
  BOOLEAN v9; // r12
  __int64 v10; // rbx
  struct _MOVESIZEDATA *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN v18[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h]
  _QWORD v20[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v21[44]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = a2;
  LOBYTE(v4) = WindowArrangementAllowed((struct tagWND *)a1);
  if ( (_BYTE)v4 )
  {
    LOBYTE(v4) = v2 - 15;
    if ( (unsigned int)(v2 - 15) <= 7 )
    {
      if ( *(_DWORD *)*gpDispInfo > 1u || (LOBYTE(v4) = v2 - 21, (unsigned int)(v2 - 21) > 1) )
      {
        if ( (_DWORD)v2 != 17
          || (LODWORD(v4) = IsShellWndManagementBehaviorEnabled(*(_QWORD *)(a1 + 24), 2), !(_DWORD)v4) )
        {
          LODWORD(v4) = EvaluateArrangeState(a1);
          v5 = (unsigned int)v4;
          if ( (_DWORD)v4 != 6 )
          {
            v6 = (int)v4 + 6 * (v2 - 15);
            v4 = dword_1C02D9810;
            v7 = dword_1C02D9810[v6];
            if ( v7 != 8 )
            {
              LODWORD(v4) = ArrangeActionCompatibleWithStyle(a1, v7);
              if ( (_DWORD)v4 )
              {
                v8 = 0;
                v17 = 0;
                memset(v21, 0, 0x158uLL);
                v9 = 0;
                v10 = 0LL;
                v18[0] = 0;
                v11 = 0LL;
                v19 = 0LL;
                if ( v7 - 3 <= 4 )
                {
                  v11 = (struct _MOVESIZEDATA *)v21;
                  if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
                    __fastfail(3u);
                  v21[1] = &gActiveMoveSizeDataList;
                  v21[0] = gActiveMoveSizeDataList;
                  *(_QWORD *)(gActiveMoveSizeDataList + 8) = v21;
                  gActiveMoveSizeDataList = (__int64)v21;
                  PushW32ThreadLock((__int64)v21, v20, (__int64)EditionRemoveFromMsdList);
                  CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)v18, v12);
                  xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v7, v5, 0LL, v21, &v17);
                  v8 = v17;
                  v10 = v19;
                  v9 = v18[0];
                }
                LOBYTE(v4) = xxxApplyArrangeAction((struct tagWND *)a1, v5, v7, v8, v11);
                if ( v11 )
                  LOBYTE(v4) = PopAndFreeAlwaysW32ThreadLock((__int64)v20, v13);
                if ( v10 )
                {
                  v15 = *(_DWORD *)(v10 + 1484);
                  if ( v15 <= 0 )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
                    v15 = *(_DWORD *)(v10 + 1484);
                  }
                  LODWORD(v4) = v15 - 1;
                  *(_DWORD *)(v10 + 1484) = (_DWORD)v4;
                  if ( !(_DWORD)v4 )
                    LOBYTE(v4) = KeSetKernelStackSwapEnable(v9);
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)v4;
}
