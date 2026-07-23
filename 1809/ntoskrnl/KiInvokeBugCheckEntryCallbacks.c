/*
 * XREFs of KiInvokeBugCheckEntryCallbacks @ 0x140292DF0
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140292470 (KeValidateBugCheckCallbackRecord.c)
 */

void KiInvokeBugCheckEntryCallbacks()
{
  PVOID *v0; // rbx
  PVOID *v1; // [rsp+40h] [rbp+8h] BYREF
  PVOID *v2; // [rsp+48h] [rbp+10h]
  PVOID *v3; // [rsp+50h] [rbp+18h]

  v3 = &KeBugCheckReasonCallbackListHead;
  v0 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_140423288 )
  {
    v1 = &KeBugCheckReasonCallbackListHead;
    while ( 1 )
    {
      v2 = v0;
      if ( v0 == &KeBugCheckReasonCallbackListHead )
        break;
      if ( KeValidateBugCheckCallbackRecord((__int64)v0, 1, &v1) )
      {
        ((void (__fastcall *)(__int64, PVOID *, _QWORD))v0[2])(1LL, v0, 0LL);
        *((_BYTE *)v0 + 44) = 3;
      }
      else if ( !v1 )
      {
        return;
      }
      v0 = (PVOID *)*v0;
    }
  }
}
