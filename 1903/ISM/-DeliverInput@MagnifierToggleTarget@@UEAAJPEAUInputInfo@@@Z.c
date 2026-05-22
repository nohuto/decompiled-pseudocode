/*
 * XREFs of ?DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180105E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?AveragePoint@@YA?AUtagPOINT@@PEBUInputInfo@@@Z @ 0x180105C68 (-AveragePoint@@YA-AUtagPOINT@@PEBUInputInfo@@@Z.c)
 */

__int64 __fastcall MagnifierToggleTarget::DeliverInput(MagnifierToggleTarget *this, struct InputInfo *a2)
{
  struct tagPOINT v3; // rax
  __int64 v4; // rcx
  struct tagPOINT v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 24) )
  {
    *((_BYTE *)this + 24) = 1;
    v3 = AveragePoint(a2);
    v4 = *((_QWORD *)this + 2);
    v6 = v3;
    (*(void (__fastcall **)(__int64, struct tagPOINT *))(*(_QWORD *)(v4 + 8) + 24LL))(v4 + 8, &v6);
  }
  return 0LL;
}
