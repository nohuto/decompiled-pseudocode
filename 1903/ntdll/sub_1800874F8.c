/*
 * XREFs of sub_1800874F8 @ 0x1800874F8
 * Callers:
 *     sub_1800059B8 @ 0x1800059B8 (sub_1800059B8.c)
 *     sub_18006CF40 @ 0x18006CF40 (sub_18006CF40.c)
 *     sub_180086C60 @ 0x180086C60 (sub_180086C60.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_1800876E4 @ 0x1800876E4 (sub_1800876E4.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x18009CD60 (ZwDelayExecution.c)
 *     sub_18010E498 @ 0x18010E498 (sub_18010E498.c)
 */

__int64 __fastcall sub_1800874F8(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v10; // r8
  __int64 v11; // rbp
  _QWORD *v12; // r14
  __int64 v13; // r8
  void *ProcessHeap; // rcx
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+54h] [rbp+Ch]
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v16 = -1;
  v1 = *(unsigned int *)(a1 + 20);
  v15 = -3000000;
  if ( *(int *)(qword_180163518 + 16 * v1 + 8) > 1 )
  {
    do
      ZwDelayExecution(0LL, &v15);
    while ( *(int *)(qword_180163518 + 16LL * *(unsigned int *)(a1 + 20) + 8) > 1 );
  }
  if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
    sub_18010E498(a1);
  if ( *(_QWORD *)(a1 + 424) )
  {
    v17 = 0LL;
    ZwFreeVirtualMemory(-1LL, a1 + 424, &v17, 0x8000LL);
  }
  ZwClose(*(_QWORD *)(a1 + 136));
  ZwClose(*(_QWORD *)(a1 + 128));
  RtlDeleteCriticalSection((__int64 *)(a1 + 88));
  if ( *(_QWORD *)(a1 + 160) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 152));
  if ( *(_QWORD *)(a1 + 176) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 168));
  if ( *(_QWORD *)(a1 + 192) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 184));
  v3 = *(_QWORD **)(a1 + 464);
  while ( v3 != (_QWORD *)(a1 + 464) )
  {
    v10 = (__int64)v3;
    v3 = (_QWORD *)*v3;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  v4 = *(_QWORD **)(a1 + 480);
  while ( v4 != (_QWORD *)(a1 + 480) )
  {
    v11 = (__int64)v4;
    v12 = (_QWORD *)v4[3];
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v12 == v4 + 3 )
        break;
      v13 = (__int64)v12;
      v12 = (_QWORD *)*v12;
      RtlFreeHeap((__int64)ProcessHeap, 0, v13);
    }
    v4 = (_QWORD *)*v4;
    RtlFreeHeap((__int64)ProcessHeap, 0, v11);
  }
  v5 = *(_QWORD *)(a1 + 512);
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  v6 = *(_QWORD *)(a1 + 520);
  if ( v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  v7 = *(_QWORD *)(a1 + 536);
  if ( v7 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
  v8 = *(_QWORD *)(a1 + 552);
  if ( v8 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  sub_1800876E4(a1);
  _InterlockedExchange64((volatile __int64 *)(qword_180163518 + 16LL * *(unsigned int *)(a1 + 20)), 1LL);
  _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * *(unsigned int *)(a1 + 20) + 8));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
