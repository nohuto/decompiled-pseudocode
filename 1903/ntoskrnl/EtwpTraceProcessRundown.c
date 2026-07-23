/*
 * XREFs of EtwpTraceProcessRundown @ 0x1407080D4
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140707DB0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     EtwpBuildProcessEvent @ 0x140690CA4 (EtwpBuildProcessEvent.c)
 */

__int64 __fastcall EtwpTraceProcessRundown(PEPROCESS Process, __int64 a2, __int16 a3, __int64 a4)
{
  char v8; // r8
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v11[2]; // [rsp+68h] [rbp-98h] BYREF
  int v12; // [rsp+6Ch] [rbp-94h]
  PVOID v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v17[40]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v18[52]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v19[18]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v12 = 0;
  memset(v18, 0, 0x198uLL);
  memset(v17, 0, sizeof(v17));
  v8 = *(_BYTE *)(a4 + 65);
  v13 = *(PVOID *)(a4 + 16);
  v11[1] = *(_WORD *)(a4 + 24);
  v14 = 0LL;
  v11[0] = 0;
  EtwpBuildProcessEvent(
    Process,
    a3,
    v8,
    (__int64)v17,
    &v14,
    (__int64)v19,
    (unsigned int *)&v10,
    (PSIZE_T)v18,
    (PANSI_STRING)&UnicodeString,
    v11,
    &P);
  EtwpLogKernelEvent((__int64)v19, *(_QWORD *)(a2 + 1112), *(_DWORD *)a2, v10, a3, 5249029 - (a3 != 807));
  if ( v13 != *(PVOID *)(a4 + 16) )
    ExFreePoolWithTag(v13, 0);
  RtlFreeAnsiString(&UnicodeString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
