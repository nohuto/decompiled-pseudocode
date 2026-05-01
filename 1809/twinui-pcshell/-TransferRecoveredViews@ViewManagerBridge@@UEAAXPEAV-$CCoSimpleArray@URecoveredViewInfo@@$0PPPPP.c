/*
 * XREFs of ?TransferRecoveredViews@ViewManagerBridge@@UEAAXPEAV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x1800824F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewManagerBridge::TransferRecoveredViews(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  *a2 = a1[19];
  a2[2] = a1[21];
  a2[1] = a1[20];
  a2[3] = a1[22];
  result = 0LL;
  a1[19] = 0LL;
  a1[21] = 0LL;
  a1[20] = 0LL;
  a1[22] = 0LL;
  return result;
}
