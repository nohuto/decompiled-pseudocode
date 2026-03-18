/*
 * XREFs of KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1402A951C
 * Callers:
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 * Callees:
 *     KiValidateTriageDumpDataArray @ 0x140199E2C (KiValidateTriageDumpDataArray.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1402A8B84 (KeValidateBugCheckCallbackRecord.c)
 *     KiValidateComponentName @ 0x1402A9A38 (KiValidateComponentName.c)
 */

char KiInvokeBugCheckAddTriageDumpDataCallbacks()
{
  __int64 v0; // rax
  __int64 (__fastcall *v1)(__int64, PVOID, __int64 *); // rbx
  __int64 v2; // rdx
  __int64 *v3; // rdx
  __int64 v5[11]; // [rsp+30h] [rbp-58h] BYREF
  int v6; // [rsp+90h] [rbp+8h]
  PVOID *v7; // [rsp+98h] [rbp+10h] BYREF
  __int64 (__fastcall *v8)(__int64, PVOID, __int64 *); // [rsp+A0h] [rbp+18h]
  PVOID *v9; // [rsp+A8h] [rbp+20h]

  LOBYTE(v0) = (unsigned __int8)memset(v5, 0, 0x38uLL);
  v9 = &KeBugCheckReasonCallbackListHead;
  v1 = (__int64 (__fastcall *)(__int64, PVOID, __int64 *))KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_14044D958 )
  {
    v7 = &KeBugCheckReasonCallbackListHead;
    while ( 1 )
    {
      v8 = v1;
      if ( (char *)v1 == (char *)&KeBugCheckReasonCallbackListHead )
        break;
      LOBYTE(v0) = KeValidateBugCheckCallbackRecord((__int64)v1, 7, &v7);
      if ( (_BYTE)v0 )
      {
        v5[0] = 0LL;
        v5[1] = 0x200000000000001LL;
        LODWORD(v5[2]) = KiBugCheckData;
        v5[3] = qword_14044D248;
        v5[4] = qword_14044D250;
        v5[5] = qword_14044D258;
        v5[6] = qword_14044D260;
        LOBYTE(v0) = (*((__int64 (__fastcall **)(__int64, PVOID, __int64 *))v1 + 2))(7LL, v1, v5);
        if ( v5[0]
          && (LOBYTE(v0) = KiValidateTriageDumpDataArray(v5[0], v2, 0x2000000u), (_BYTE)v0)
          && (LOBYTE(v0) = KiValidateComponentName(*((STRSAFE_PCNZCH *)v1 + 3)), (_BYTE)v0) )
        {
          *(_QWORD *)(v5[0] + 40) = *((_QWORD *)v1 + 3);
          *(_DWORD *)(v5[0] + 32) = v6 + 1;
          v0 = v5[0];
          v3 = (__int64 *)qword_14044D968;
          if ( *(__int64 **)qword_14044D968 != &KeBugCheckTriageDumpDataArrayListHead )
            __fastfail(3u);
          *(_QWORD *)v5[0] = &KeBugCheckTriageDumpDataArrayListHead;
          *(_QWORD *)(v0 + 8) = v3;
          *v3 = v0;
          qword_14044D968 = v0;
          *((_BYTE *)v1 + 44) = 3;
        }
        else
        {
          *((_BYTE *)v1 + 44) = 4;
        }
      }
      else if ( !v7 )
      {
        return v0;
      }
      v1 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))v1;
    }
  }
  return v0;
}
