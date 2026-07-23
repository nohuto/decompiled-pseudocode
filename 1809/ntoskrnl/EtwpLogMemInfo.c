/*
 * XREFs of EtwpLogMemInfo @ 0x140311110
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x140311260 (EtwpLogMemInfoTimerCallback.c)
 *     EtwpLogMemInfoRundown @ 0x1408BFC9C (EtwpLogMemInfoRundown.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1400A8910 (MmQueryMemoryListInformation.c)
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall EtwpLogMemInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // [rsp+40h] [rbp-C0h] BYREF
  GUID v7; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int8 *v9; // [rsp+110h] [rbp+10h] BYREF
  int v10; // [rsp+118h] [rbp+18h]
  int v11; // [rsp+11Ch] [rbp+1Ch]
  __int64 v12; // [rsp+120h] [rbp+20h]
  int v13; // [rsp+128h] [rbp+28h]
  int v14; // [rsp+12Ch] [rbp+2Ch]

  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v6;
  v6 = 8;
  UserData.Size = 1;
  MmQueryMemoryListInformation(0LL, &v7.Data4[4], 0xB0u, a4, &v7);
  v11 = 0;
  v14 = 0;
  v9 = &v7.Data4[4];
  v10 = 176;
  v12 = a2;
  v13 = 32;
  if ( a1 )
  {
    EtwpLogKernelEvent((__int64)&v9, *(_QWORD *)(a1 + 1080), *(_DWORD *)a1, 2u, 0x270u, 0x401803u);
  }
  else
  {
    if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4520) & 0x80000) != 0 )
      EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    EtwTraceKernelEvent((__int64)&v9, 2u, 0x20080000u, 0x270u, 0x401803u);
  }
}
