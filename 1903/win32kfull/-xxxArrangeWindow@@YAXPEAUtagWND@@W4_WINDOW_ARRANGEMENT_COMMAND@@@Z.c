/*
 * XREFs of ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FCA7C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C02124D4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C002E7CC (IsShellWndManagementBehaviorEnabled.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C0164300 (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C016436C (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01F9BEC (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01FA1E8 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC310 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FE164 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212384 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxArrangeWindow(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // r12d
  __int64 v8; // r9
  __int64 v9; // r15
  struct _MOVESIZEDATA *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h]
  _QWORD v20[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v21[44]; // [rsp+60h] [rbp-A0h] BYREF

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
      v6 = *(_DWORD *)&asc_1C02EBF20[24 * v2 - 384 + 4 * (int)v4];
      if ( v6 != 8 )
      {
        if ( (unsigned int)ArrangeActionCompatibleWithStyle(a1, v6) )
        {
          v7 = 0;
          v17 = 0;
          memset(v21, 0, 0x158uLL);
          v9 = 0LL;
          memset(v20, 0, sizeof(v20));
          v10 = 0LL;
          v18[0] = 0;
          v19 = 0LL;
          if ( v6 - 3 <= 4 )
          {
            v10 = (struct _MOVESIZEDATA *)v21;
            if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
              __fastfail(3u);
            v21[1] = &gActiveMoveSizeDataList;
            v21[0] = gActiveMoveSizeDataList;
            *(_QWORD *)(gActiveMoveSizeDataList + 8) = v21;
            gActiveMoveSizeDataList = (__int64)v21;
            PushW32ThreadLock((__int64)v21, v20, (__int64)EditionRemoveFromMsdList, v8);
            CKernelStackSwap::DisableStackSwap((CKernelStackSwap *)v18, v11, v12, v13);
            xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v6, v5, 0LL, v21, &v17);
            v7 = v17;
            v9 = v19;
          }
          xxxApplyArrangeAction((struct tagWND *)a1, v5, v6, v7, v10);
          if ( v10 )
            PopAndFreeAlwaysW32ThreadLock((__int64)v20, v14, v15, v16);
          if ( v9 )
            CKernelStackSwap::TryEnableStackSwap((CKernelStackSwap *)v18);
        }
      }
    }
  }
}
