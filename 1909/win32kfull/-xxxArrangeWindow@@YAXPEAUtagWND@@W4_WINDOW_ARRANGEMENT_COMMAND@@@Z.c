/*
 * XREFs of ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FC7CC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0211F94 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0023EEC (IsShellWndManagementBehaviorEnabled.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C0165594 (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C0165600 (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01F993C (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01F9F38 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC060 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FDEB4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0211E44 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxArrangeWindow(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // edi
  int v7; // r12d
  __int64 v8; // r15
  struct _MOVESIZEDATA *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h]
  _QWORD v17[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v18[44]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = a2;
  if ( WindowArrangementAllowed((struct tagWND *)a1)
    && (unsigned int)(v2 - 16) <= 7
    && (*(_DWORD *)*gpDispInfo > 1u || (unsigned int)(v2 - 22) > 1)
    && ((_DWORD)v2 != 18 || !(unsigned int)IsShellWndManagementBehaviorEnabled(*(_QWORD *)(a1 + 24), 2)) )
  {
    v4 = EvaluateArrangeState(a1);
    v5 = v4;
    if ( v4 != 6 )
    {
      v6 = *(_DWORD *)&asc_1C02EB550[24 * v2 - 384 + 4 * (int)v4];
      if ( v6 != 8 )
      {
        if ( (unsigned int)ArrangeActionCompatibleWithStyle(a1, v6) )
        {
          v7 = 0;
          v14 = 0;
          memset(v18, 0, 0x158uLL);
          v8 = 0LL;
          memset(v17, 0, sizeof(v17));
          v9 = 0LL;
          v15[0] = 0;
          v16 = 0LL;
          if ( v6 - 3 <= 4 )
          {
            v9 = (struct _MOVESIZEDATA *)v18;
            if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
              __fastfail(3u);
            v18[1] = &gActiveMoveSizeDataList;
            v18[0] = gActiveMoveSizeDataList;
            *(_QWORD *)(gActiveMoveSizeDataList + 8) = v18;
            gActiveMoveSizeDataList = (__int64)v18;
            PushW32ThreadLock((__int64)v18, v17, (__int64)EditionRemoveFromMsdList);
            CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)v15, v10, v11);
            xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v6, v5, 0LL, v18, &v14);
            v7 = v14;
            v8 = v16;
          }
          xxxApplyArrangeAction((struct tagWND *)a1, v5, v6, v7, v9);
          if ( v9 )
            PopAndFreeAlwaysW32ThreadLock((__int64)v17, v12, v13);
          if ( v8 )
            CKernelStackSwap::TryEnableStackSwap((CKernelStackSwap *)v15);
        }
      }
    }
  }
}
