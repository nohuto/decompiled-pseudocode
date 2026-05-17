/*
 * XREFs of RtlInitializeRXact @ 0x18008A420
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpNtQueryValueKey @ 0x18007AD10 (RtlpNtQueryValueKey.c)
 *     RtlAbortRXact @ 0x18007E9E0 (RtlAbortRXact.c)
 *     sub_18007EA24 @ 0x18007EA24 (sub_18007EA24.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x18009CA80 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18009D2D0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x18009E0B0 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x18009E110 (ZwDeleteValueKey.c)
 */

__int64 __fastcall RtlInitializeRXact(__int64 a1, char a2, __int64 **a3)
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rbx
  int v12; // esi
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v17; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v19[2]; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  int v21; // [rsp+98h] [rbp-68h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING *p_DestinationString; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+B0h] [rbp-50h]
  __int128 v25; // [rsp+B8h] [rbp-48h]
  _DWORD v26[6]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v27[128]; // [rsp+E0h] [rbp-20h] BYREF

  v19[0] = 0LL;
  v19[1] = 0LL;
  v15 = 12;
  RtlInitUnicodeString(&DestinationString, L"RXACT");
  v21 = 48;
  p_DestinationString = &DestinationString;
  v22 = a1;
  v24 = 192;
  v25 = 0LL;
  result = ZwCreateKey(&v13, 196639LL, &v21, 0LL, 0LL, 0, &v16);
  if ( (int)result < 0 )
    return result;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 32LL);
  *a3 = (__int64 *)Heap;
  v8 = Heap;
  if ( !Heap )
  {
    ZwDeleteKey(v13);
    ZwClose(v13);
    return 3221225495LL;
  }
  v9 = v13;
  *(_QWORD *)(v8 + 24) = 0LL;
  *(_QWORD *)(v8 + 8) = v9;
  *(_QWORD *)v8 = a1;
  *(_BYTE *)(v8 + 16) = 1;
  if ( v16 == 1 )
  {
    v26[0] = 1;
    v10 = ZwSetValueKey(v13, v19, 0LL, 0LL, v26, 12);
    if ( v10 >= 0 )
      return 1073741828LL;
    ZwDeleteKey(v13);
    goto LABEL_15;
  }
  v10 = RtlpNtQueryValueKey(v13, &v18, v26, &v15);
  if ( v10 < 0 )
  {
LABEL_15:
    ZwClose(v13);
    goto LABEL_17;
  }
  if ( v15 != 12 || v26[0] != 1 )
  {
    v10 = -1073741736;
    goto LABEL_15;
  }
  RtlInitUnicodeString(&v17, L"Log");
  if ( (int)ZwQueryValueKey(v13, &v17, 0LL, v27, 128, &v14) < 0 )
    return 0LL;
  if ( !a2 )
    return 2147483672LL;
  result = ZwQueryValueKey(v13, &v17, 1LL, 0LL, 0, &v14);
  if ( (_DWORD)result == -1073741789 )
  {
    v11 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
    if ( v11 )
    {
      v12 = ZwQueryValueKey(v13, &v17, 1LL, v11, v14, &v14);
      if ( v12 >= 0 )
      {
        (*a3)[3] = v11 + *(unsigned int *)(v11 + 8);
        *((_BYTE *)*a3 + 16) = 0;
        v12 = sub_18007EA24(*a3);
        if ( v12 >= 0 )
        {
          ZwDeleteValueKey(v13, &v17);
          (*a3)[3] = v11;
          return RtlAbortRXact((__int64)*a3);
        }
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      v10 = v12;
LABEL_17:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)*a3);
      return (unsigned int)v10;
    }
    return 3221225495LL;
  }
  return result;
}
