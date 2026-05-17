/*
 * XREFs of sub_180003EB8 @ 0x180003EB8
 * Callers:
 *     sub_180004020 @ 0x180004020 (sub_180004020.c)
 * Callees:
 *     sub_1800042E0 @ 0x1800042E0 (sub_1800042E0.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_180003EB8(__int64 a1, __int64 a2, _DWORD *a3)
{
  const WCHAR *Heap; // rsi
  int v5; // ebx
  __int64 v6; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING v9; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v10[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  __int128 v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+28h] BYREF

  v17 = a2;
  v16 = -1LL;
  Heap = (const WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 4096LL);
  if ( !Heap )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  v10[1] = 0;
  v14 = 0;
  v11 = 0LL;
  p_DestinationString = &DestinationString;
  v10[0] = 48;
  v15 = 0LL;
  v13 = 64;
  v5 = ZwOpenKey(&v16, 131097LL, v10);
  if ( v5 >= 0 )
  {
    v6 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 16LL);
    if ( v6 )
    {
      sub_1800042E0(Heap);
      RtlInitUnicodeString(&v9, Heap);
      v5 = ZwQueryValueKey(v16, &v9, 2LL, v6, 16, &v17);
      if ( v5 >= 0 )
        *a3 = *(_DWORD *)(v6 + 12);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v6);
    }
    else
    {
      v5 = -1073741801;
    }
    ZwClose(v16);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  return (unsigned int)v5;
}
