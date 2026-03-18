/*
 * XREFs of EtwpLogMemInfoWsHelper @ 0x1408F478C
 * Callers:
 *     EtwpLogMemInfoWs @ 0x1408F4460 (EtwpLogMemInfoWs.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall EtwpLogMemInfoWsHelper(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  UserData.Reserved = 0;
  v6 = 0;
  v4 = a2 + 1;
  v2 = 68 * *a2;
  UserData.Ptr = (ULONGLONG)a2;
  UserData.Size = 4;
  v5 = v2;
  if ( a1 )
  {
    EtwpLogKernelEvent((__int64)&UserData, *(_QWORD *)(a1 + 1080), *(_DWORD *)a1, 2u, 0x27Du, 0x401804u);
  }
  else
  {
    EtwTraceKernelEvent((__int64)&UserData, 2u, 0x20800000u, 0x27Du, 0x401804u);
    if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4520) & 0x800000) != 0 )
      EtwWrite(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO_WS, 0LL, 2u, &UserData);
  }
}
