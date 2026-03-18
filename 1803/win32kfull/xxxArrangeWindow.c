/*
 * XREFs of xxxArrangeWindow @ 0x1C01C5D64
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxHandleNCMouseGuys @ 0x1C01359C0 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D3C (IsShellWndManagementBehaviorEnabled.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01C0220 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C2254 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01C336C (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     EvaluateArrangeState @ 0x1C01C56C8 (EvaluateArrangeState.c)
 *     WindowArrangementAllowed @ 0x1C01D688C (WindowArrangementAllowed.c)
 */

__int64 __fastcall xxxArrangeWindow(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  int v6; // edi
  int v7; // r15d
  struct _MOVESIZEDATA *v8; // r14
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v11[44]; // [rsp+50h] [rbp-B0h] BYREF

  result = WindowArrangementAllowed(a1);
  if ( (_DWORD)result )
  {
    result = (unsigned int)(a2 - 15);
    if ( (unsigned int)result <= 7 )
    {
      if ( *(_DWORD *)*gpDispInfo > 1u || (result = (unsigned int)(a2 - 21), (unsigned int)result > 1) )
      {
        if ( a2 != 17 || (result = IsShellWndManagementBehaviorEnabled(*(_QWORD *)(a1 + 24), 2), !(_DWORD)result) )
        {
          result = EvaluateArrangeState(a1);
          v5 = (int)result;
          if ( (_DWORD)result != 6 )
          {
            result = (__int64)dword_1C02E61D0;
            v6 = dword_1C02E61D0[6 * a2 - 90 + v5];
            if ( v6 != 8 )
            {
              result = ArrangeActionCompatibleWithStyle(a1, v6);
              if ( (_DWORD)result )
              {
                v7 = 0;
                v9 = 0;
                memset(v11, 0, 0x158uLL);
                v8 = 0LL;
                if ( (unsigned int)(v6 - 3) <= 4 )
                {
                  v8 = (struct _MOVESIZEDATA *)v11;
                  if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
                    __fastfail(3u);
                  v11[1] = &gActiveMoveSizeDataList;
                  v11[0] = gActiveMoveSizeDataList;
                  *(_QWORD *)(gActiveMoveSizeDataList + 8) = v11;
                  gActiveMoveSizeDataList = (__int64)v11;
                  PushW32ThreadLock((__int64)v11, v10, (__int64)EditionRemoveFromMsdList);
                  xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v6, v5, 0, (__int64)v11, &v9);
                  v7 = v9;
                }
                result = xxxApplyArrangeAction((struct tagWND *)a1, (unsigned int)v5, v6, v7, v8);
                if ( v8 )
                  return PopAndFreeAlwaysW32ThreadLock((__int64)v10);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
