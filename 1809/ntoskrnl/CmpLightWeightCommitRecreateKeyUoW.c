/*
 * XREFs of CmpLightWeightCommitRecreateKeyUoW @ 0x140582804
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140695BDC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407FAE88 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpLightWeightCommitRecreateKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]
  int v12; // [rsp+58h] [rbp+10h] BYREF
  __int16 v13; // [rsp+5Ch] [rbp+14h]

  v10 = -1;
  v11 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 64);
  *(_QWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)(v6 + 32), &v10) + 4) = *a2;
  v7 = *a2;
  ++*(_QWORD *)(v6 + 296);
  *(_QWORD *)(v6 + 160) = v7;
  (*(void (__fastcall **)(__int64, int *))(v5 + 16))(v5, &v10);
  v8 = *(_QWORD *)(a1 + 48);
  v12 = 8;
  v13 = 257;
  CmpEnumerateAllHigherLayerKcbs(
    v8,
    (unsigned int)CmpFlushNotifiesPreCallback,
    (unsigned int)CmpFlushNotifiesPostCallback,
    (unsigned int)&v12,
    1,
    1);
  return CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8LL);
}
