/*
 * XREFs of KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x140292C50
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140292470 (KeValidateBugCheckCallbackRecord.c)
 *     KiValidateComponentName @ 0x140293150 (KiValidateComponentName.c)
 *     KiValidateTriageDumpDataArray @ 0x140293200 (KiValidateTriageDumpDataArray.c)
 */

char KiInvokeBugCheckAddTriageDumpDataCallbacks()
{
  _UNKNOWN **v0; // rax
  PVOID *v1; // rbx
  __int64 v2; // rdx
  _QWORD *v3; // rdx
  __int64 v5; // [rsp+30h] [rbp-58h] BYREF
  int v6; // [rsp+38h] [rbp-50h]
  int v7; // [rsp+3Ch] [rbp-4Ch]
  int v8; // [rsp+40h] [rbp-48h]
  __int64 v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+58h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  int v14; // [rsp+90h] [rbp+8h]
  PVOID *v15; // [rsp+98h] [rbp+10h] BYREF
  PVOID *v16; // [rsp+A0h] [rbp+18h]
  PVOID *v17; // [rsp+A8h] [rbp+20h]

  v0 = &retaddr;
  v17 = &KeBugCheckReasonCallbackListHead;
  v1 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_140423288 )
  {
    v15 = &KeBugCheckReasonCallbackListHead;
    while ( 1 )
    {
      v16 = v1;
      if ( v1 == &KeBugCheckReasonCallbackListHead )
        break;
      LOBYTE(v0) = KeValidateBugCheckCallbackRecord((__int64)v1, 7, &v15);
      if ( (_BYTE)v0 )
      {
        v5 = 0LL;
        v6 = 1;
        v7 = 0x2000000;
        v8 = KiBugCheckData;
        v9 = qword_140422688;
        v10 = qword_140422690;
        v11 = qword_140422698;
        v12 = qword_1404226A0;
        LOBYTE(v0) = ((__int64 (__fastcall *)(__int64, PVOID *, __int64 *))v1[2])(7LL, v1, &v5);
        if ( v5
          && (LOBYTE(v0) = KiValidateTriageDumpDataArray(v5, v2, 0x2000000LL), (_BYTE)v0)
          && (LOBYTE(v0) = KiValidateComponentName((STRSAFE_PCNZCH)v1[3]), (_BYTE)v0) )
        {
          *(_QWORD *)(v5 + 32) = v1[3];
          *(_DWORD *)(v5 + 28) = v14 + 1;
          v0 = (_UNKNOWN **)v5;
          v3 = (_QWORD *)qword_140423278;
          if ( *(__int64 **)qword_140423278 != &KeBugCheckTriageDumpDataArrayListHead )
            __fastfail(3u);
          *(_QWORD *)v5 = &KeBugCheckTriageDumpDataArrayListHead;
          v0[1] = v3;
          *v3 = v0;
          qword_140423278 = (__int64)v0;
          *((_BYTE *)v1 + 44) = 3;
        }
        else
        {
          *((_BYTE *)v1 + 44) = 4;
        }
      }
      else if ( !v15 )
      {
        return (char)v0;
      }
      v1 = (PVOID *)*v1;
    }
  }
  return (char)v0;
}
