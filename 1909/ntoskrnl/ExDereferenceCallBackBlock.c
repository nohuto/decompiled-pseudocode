/*
 * XREFs of ExDereferenceCallBackBlock @ 0x14001D240
 * Callers:
 *     ExCallCallBack @ 0x1405EBA04 (ExCallCallBack.c)
 *     NtFindAtom @ 0x1405EBA80 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1405EBC10 (PsInvokeWin32Callout.c)
 *     PspCallProcessNotifyRoutines @ 0x1405EBCF4 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1405EBF80 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1405EC0D0 (PsCallImageNotifyRoutines.c)
 *     ExCallSessionCallBack @ 0x140639448 (ExCallSessionCallBack.c)
 *     DbgkLkmdRegisterCallback @ 0x140758C00 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140759080 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x14084AC90 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x14084AD34 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x1408A6F60 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1408CA530 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1408CA620 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ExDereferenceCallBackBlock(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  v2 = *a1;
  if ( ((unsigned __int64)a2 ^ *a1) >= 0xF )
  {
LABEL_4:
    ExReleaseRundownProtection_0(a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64(a1, v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( ((unsigned __int64)a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
