/*
 * XREFs of sub_1800CFA48 @ 0x1800CFA48
 * Callers:
 *     sub_180022698 @ 0x180022698 (sub_180022698.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_180024FBC @ 0x180024FBC (sub_180024FBC.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_180032198 @ 0x180032198 (sub_180032198.c)
 *     sub_18007E384 @ 0x18007E384 (sub_18007E384.c)
 *     LdrProcessInitializationComplete @ 0x18007F5B0 (LdrProcessInitializationComplete.c)
 *     sub_1800CE410 @ 0x1800CE410 (sub_1800CE410.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     sub_1800CF68C @ 0x1800CF68C (sub_1800CF68C.c)
 */

int __fastcall sub_1800CFA48(__int16 a1, __int64 a2, char a3, char a4, unsigned __int16 *a5, unsigned __int16 *a6)
{
  _BYTE *v6; // rdi
  unsigned int v7; // ebx
  _BYTE *Heap; // rax
  __int64 v12; // rcx
  char v14; // [rsp+20h] [rbp-288h]
  int v15[3]; // [rsp+24h] [rbp-284h] BYREF
  _BYTE Fields[576]; // [rsp+30h] [rbp-278h] BYREF

  v6 = Fields;
  v7 = 0;
  v14 = a3;
  if ( a5 )
  {
    v7 = *a5 + 2;
    if ( a6 )
      v7 += *a6 + 2;
  }
  if ( v7 > 0x214 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7 + 42);
    v6 = Heap;
    if ( !Heap )
      return (int)Heap;
    a3 = v14;
  }
  *((_WORD *)v6 + 3) = a1;
  if ( a2 != -1 )
  {
    *((_QWORD *)v6 + 4) = a2;
    v6[40] = a3;
    v6[41] = a4;
    if ( v7 )
    {
      sub_1800CF68C((__int64)a5, (_WORD *)v6 + 21, v7, v15);
      if ( a6 )
        sub_1800CF68C((__int64)a6, &v6[v15[0] + 42], v7 - v15[0], v15);
      if ( RtlGetCurrentServiceSessionId() )
        v12 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
      else
        v12 = 2147353476LL;
      ZwTraceEvent((HANDLE)*(unsigned __int8 *)v12, 0x402u, v7 + 10, v6);
    }
  }
  Heap = Fields;
  if ( Fields != v6 )
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  return (int)Heap;
}
