/*
 * XREFs of WmipClearIrpObjectList @ 0x14010C2EC
 * Callers:
 *     WmipCompleteGuidIrpWithError @ 0x14010BD38 (WmipCompleteGuidIrpWithError.c)
 *     WmipNotificationIrpCancel @ 0x14010BDD0 (WmipNotificationIrpCancel.c)
 *     WmipWriteWnodeToObject @ 0x14010C1D4 (WmipWriteWnodeToObject.c)
 *     WmipReceiveNotifications @ 0x140124AD8 (WmipReceiveNotifications.c)
 * Callees:
 *     <none>
 */

void __fastcall WmipClearIrpObjectList(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rax

  v1 = (_QWORD *)(a1 + 120);
  v2 = *(_QWORD **)(a1 + 120);
  while ( v2 != v1 )
  {
    v3 = v2;
    v4 = v2;
    v2 = (_QWORD *)*v2;
    *(v3 - 1) = 0LL;
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
}
