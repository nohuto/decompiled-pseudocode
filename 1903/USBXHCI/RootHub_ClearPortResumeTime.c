/*
 * XREFs of RootHub_ClearPortResumeTime @ 0x1C0020EA4
 * Callers:
 *     UsbDevice_UcxEvtDisable @ 0x1C003C550 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_ClearPortResumeTime(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 88LL * (unsigned int)(a2 - 1);
  DynamicLock_Acquire(*(_QWORD *)(v3 + v2 + 24));
  --*(_DWORD *)(v3 + v2 + 40);
  return DynamicLock_Release(*(_QWORD *)(v3 + *(_QWORD *)(a1 + 48) + 24));
}
