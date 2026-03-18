/*
 * XREFs of KiInvokeBugCheckEntryCallbacks @ 0x1402A96CC
 * Callers:
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1402A8B84 (KeValidateBugCheckCallbackRecord.c)
 */

void KiInvokeBugCheckEntryCallbacks()
{
  PVOID *v0; // rbx
  PVOID *v1; // [rsp+40h] [rbp+8h] BYREF
  PVOID *v2; // [rsp+48h] [rbp+10h]
  PVOID *v3; // [rsp+50h] [rbp+18h]

  v3 = &KeBugCheckReasonCallbackListHead;
  v0 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_14044D958 )
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
