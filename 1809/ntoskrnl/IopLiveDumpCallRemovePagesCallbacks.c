/*
 * XREFs of IopLiveDumpCallRemovePagesCallbacks @ 0x140579168
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x140579B0C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IoFreeDumpRange @ 0x140280020 (IoFreeDumpRange.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140285D68 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140286300 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     RtlStringCbLengthA @ 0x140286484 (RtlStringCbLengthA.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140292470 (KeValidateBugCheckCallbackRecord.c)
 *     MmIsAddressValid @ 0x1402ABBA0 (MmIsAddressValid.c)
 */

char __fastcall IopLiveDumpCallRemovePagesCallbacks(_DWORD *a1)
{
  _DWORD *v1; // r12
  ULONG v2; // edi
  _BYTE *v3; // rsi
  bool IsTracingEnabled; // r13
  __int64 v5; // r14
  __int64 *v6; // rax
  void *v7; // rcx
  bool v8; // r12
  int v9; // r9d
  unsigned int v10; // eax
  int v11; // r9d
  char *v12; // rdx
  int v13; // eax
  size_t pcbLength; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v16; // [rsp+40h] [rbp-C8h]
  _DWORD *v17; // [rsp+48h] [rbp-C0h]
  _QWORD v18[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+80h] [rbp-88h]
  _DWORD *v21; // [rsp+88h] [rbp-80h]
  _QWORD v22[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v23[6]; // [rsp+A0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-38h] BYREF

  v1 = a1;
  v17 = a1;
  v21 = a1;
  memset(v19, 0, sizeof(v19));
  memset(v23, 0, sizeof(v23));
  v2 = 1;
  pcbLength = 1LL;
  v3 = algn_140574B30;
  v16 = algn_140574B30;
  IsTracingEnabled = IopLiveDumpIsTracingEnabled();
  if ( IsTracingEnabled )
    EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_START, 0LL, 0, 0LL);
  v5 = KeBugCheckAddRemovePagesCallbackListHead;
  v6 = &KeBugCheckAddRemovePagesCallbackListHead;
  v18[0] = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( 1 )
  {
    v18[1] = v5;
    if ( (__int64 *)v5 == &KeBugCheckAddRemovePagesCallbackListHead )
      break;
    v20 = v5;
    LOBYTE(v6) = KeValidateBugCheckCallbackRecord(v5, 6, v18);
    if ( (_BYTE)v6 )
    {
      if ( IsTracingEnabled )
      {
        v7 = *(void **)(v5 + 24);
        if ( v7 && MmIsAddressValid(v7) && RtlStringCbLengthA(*(STRSAFE_PCNZCH *)(v5 + 24), 0x101uLL, &pcbLength) >= 0 )
        {
          v3 = *(_BYTE **)(v5 + 24);
          v2 = ++pcbLength;
        }
        else
        {
          pcbLength = 1LL;
          v2 = 1;
          v3 = algn_140574B30;
        }
        v16 = v3;
        UserData.Ptr = (ULONGLONG)v3;
        UserData.Size = v2;
        UserData.Reserved = 0;
        EtwWrite(
          IopLiveDumpEtwRegHandle,
          &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_START,
          0LL,
          1u,
          &UserData);
      }
      v19[0] = 0LL;
      HIDWORD(v19[1]) = *v1;
      do
      {
        v19[2] = 0LL;
        LODWORD(v19[1]) = 0;
        v19[3] = 0LL;
        v8 = 0;
        (*(void (__fastcall **)(__int64, __int64, _QWORD *))(v20 + 16))(6LL, v20, v19);
        if ( v19[3] )
        {
          v9 = v19[1];
          if ( (v19[1] & 0x80000003) != 0 )
          {
            v10 = v19[1] & 0x80000000;
            if ( SLODWORD(v19[1]) < 0 )
            {
              v9 = v19[1] & 0x7FFFFFFF;
              LODWORD(v19[1]) &= ~0x80000000;
            }
            v8 = v10 != 0;
            if ( ((v9 - 1) & v9) != 0 )
            {
              v13 = -1073741811;
            }
            else
            {
              v11 = v9 & 1;
              v12 = (char *)v19[2];
              if ( !v11 )
                v12 = (char *)(v19[2] >> 12);
              v22[0] = *((_QWORD *)v17 + 50);
              v22[1] = *((_QWORD *)v17 + 51);
              v23[2] = v22;
              v13 = IoFreeDumpRange((__int64)v23, v12, v19[3], 2 * (v11 ^ 1u));
            }
            if ( v13 < 0 )
            {
              v8 = 0;
              IopLiveDumpTraceRemovePagesCallbackFailure((__int64)v3, v2, v13);
            }
          }
        }
      }
      while ( v8 );
      if ( IsTracingEnabled )
      {
        UserData.Ptr = (ULONGLONG)v3;
        UserData.Size = v2;
        UserData.Reserved = 0;
        EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_END, 0LL, 1u, &UserData);
      }
      v1 = v17;
    }
    else if ( !v18[0] )
    {
      break;
    }
    v5 = *(_QWORD *)v5;
    v6 = &KeBugCheckAddRemovePagesCallbackListHead;
  }
  if ( IsTracingEnabled )
    LOBYTE(v6) = EtwWrite(
                   IopLiveDumpEtwRegHandle,
                   &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_END,
                   0LL,
                   0,
                   0LL);
  return (char)v6;
}
