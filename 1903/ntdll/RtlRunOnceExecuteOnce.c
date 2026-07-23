/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x18000AFD0
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 *     sub_180009B8C @ 0x180009B8C (sub_180009B8C.c)
 *     RtlRandomEx @ 0x180009C90 (RtlRandomEx.c)
 *     sub_180009D9C @ 0x180009D9C (sub_180009D9C.c)
 *     sub_18000A590 @ 0x18000A590 (sub_18000A590.c)
 *     sub_18000A68C @ 0x18000A68C (sub_18000A68C.c)
 *     sub_18004CFFC @ 0x18004CFFC (sub_18004CFFC.c)
 *     RtlSetHeapInformation @ 0x180079240 (RtlSetHeapInformation.c)
 *     sub_180083BF4 @ 0x180083BF4 (sub_180083BF4.c)
 *     sub_180084FB8 @ 0x180084FB8 (sub_180084FB8.c)
 *     sub_1800CFD74 @ 0x1800CFD74 (sub_1800CFD74.c)
 *     sub_1800CFE80 @ 0x1800CFE80 (sub_1800CFE80.c)
 *     sub_1800D0184 @ 0x1800D0184 (sub_1800D0184.c)
 *     sub_1800D03F8 @ 0x1800D03F8 (sub_1800D03F8.c)
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 *     sub_1800D062C @ 0x1800D062C (sub_1800D062C.c)
 *     sub_1800D070C @ 0x1800D070C (sub_1800D070C.c)
 *     sub_1800D07EC @ 0x1800D07EC (sub_1800D07EC.c)
 *     sub_18010251C @ 0x18010251C (sub_18010251C.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18000B240 (RtlRunOnceComplete.c)
 *     sub_1800830A4 @ 0x1800830A4 (sub_1800830A4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800F8F8C @ 0x1800F8F8C (sub_1800F8F8C.c)
 */

NTSTATUS __cdecl RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  signed __int64 Ptr; // rax
  NTSTATUS v9; // edi
  signed __int64 v11; // rdx
  signed __int64 v12; // rcx
  PVOID v13; // r8
  int v14; // ebx
  char v15[24]; // [rsp+20h] [rbp-18h] BYREF

  Ptr = (signed __int64)RunOnce->Ptr;
  if ( ((__int64)RunOnce->Ptr & 3) == 2 )
  {
LABEL_2:
    if ( Context )
      *Context = (PVOID)(Ptr & 0xFFFFFFFFFFFFFFFCuLL);
    return 0;
  }
  do
  {
    while ( 1 )
    {
      v11 = Ptr & 3;
      if ( (Ptr & 3) == 0 )
        break;
      if ( v11 != 1 )
      {
        if ( v11 != 3 )
          goto LABEL_2;
        v14 = -1073741584;
        v15[0] = 0;
        goto LABEL_20;
      }
      Ptr = sub_1800830A4(Ptr, RunOnce);
    }
    v12 = Ptr;
    Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, 1LL, Ptr);
  }
  while ( Ptr != v12 );
  if ( !((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
  {
    v9 = -1073741823;
    v14 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
    if ( v14 >= 0 )
      return v9;
    v15[0] = 2;
    goto LABEL_20;
  }
  if ( Context )
    v13 = *Context;
  else
    v13 = 0LL;
  v14 = RtlRunOnceComplete(RunOnce, 0, v13);
  if ( v14 < 0 )
  {
    v15[0] = 1;
LABEL_20:
    sub_1800F8F8C((unsigned int)v14, v15, 1LL);
    return v14;
  }
  return 0;
}
