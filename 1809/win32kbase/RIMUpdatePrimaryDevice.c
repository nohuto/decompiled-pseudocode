/*
 * XREFs of RIMUpdatePrimaryDevice @ 0x1C01192B0
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0118B60 (RIMRemoveFromActiveDevices.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0128580 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C012886C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x1C0117D70 (RIMGetPointerInputType.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C0164458 (ApiSetIsPointerInputTypeRedirected.c)
 */

__int64 __fastcall RIMUpdatePrimaryDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // eax

  result = 0LL;
  v4 = *(_QWORD *)(a1 + 480);
  if ( v4 )
    *(_DWORD *)(v4 + 308) &= ~4u;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 308) |= 4u;
    *(_QWORD *)(a1 + 480) = a2;
    v5 = RIMGetPointerInputType(a2);
    result = ApiSetIsPointerInputTypeRedirected(v5);
  }
  else
  {
    *(_QWORD *)(a1 + 480) = 0LL;
  }
  *(_DWORD *)(a1 + 488) = result;
  return result;
}
