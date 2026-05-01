/*
 * XREFs of CrmRegistrationCreateActivity @ 0x180032FD4
 * Callers:
 *     CrmSrvActivityAllocate @ 0x180032E38 (CrmSrvActivityAllocate.c)
 *     CrmRegistrationStartWithActivity @ 0x1800460D4 (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmActivityCleanup @ 0x1800067E4 (CrmActivityCleanup.c)
 *     CrmActivityInitialize @ 0x180032F58 (CrmActivityInitialize.c)
 *     CrmRegistrationAddActivity @ 0x18003307C (CrmRegistrationAddActivity.c)
 *     CrmActivityStart @ 0x180033278 (CrmActivityStart.c)
 */

__int64 __fastcall CrmRegistrationCreateActivity(__int64 a1, unsigned int a2, _QWORD *a3)
{
  PVOID Heap; // rax
  void *v7; // rbx
  int v8; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xB0uLL);
  v7 = Heap;
  if ( Heap )
  {
    CrmActivityInitialize((__int64)Heap, a1);
    v8 = CrmActivityStart(v7, a1, a2, a1 + 72);
    if ( v8 >= 0 )
    {
      CrmRegistrationAddActivity(a1, v7);
      if ( a3 )
        *a3 = v7;
      v7 = 0LL;
      v8 = 0;
    }
    if ( v7 )
    {
      CrmActivityCleanup((__int64)v7);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
