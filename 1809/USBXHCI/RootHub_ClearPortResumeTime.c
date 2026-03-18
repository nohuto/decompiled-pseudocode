/*
 * XREFs of RootHub_ClearPortResumeTime @ 0x1C001D4F4
 * Callers:
 *     UsbDevice_UcxEvtDisable @ 0x1C00372B0 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_ClearPortResumeTime(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v5; // rdi

  v2 = *(_QWORD *)(a1 + 48);
  v3 = (unsigned int)(a2 - 1);
  v5 = 10 * v3;
  DynamicLock_Acquire(*(_QWORD *)(v2 + 80 * v3 + 24));
  --*(_DWORD *)(v2 + 8 * v5 + 40);
  return DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v5 + 24));
}
