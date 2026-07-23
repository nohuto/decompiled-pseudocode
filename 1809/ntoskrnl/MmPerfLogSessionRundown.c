/*
 * XREFs of MmPerfLogSessionRundown @ 0x14085335C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140727414 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmGetNextSession @ 0x140012740 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x140310770 (EtwTraceSiloDcEvent.c)
 */

__int64 __fastcall MmPerfLogSessionRundown(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int16 v4; // di
  void *i; // rcx
  __int64 v7; // rdx
  __int64 NextSession; // rax
  void *v9; // rbx
  __int64 *v11; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+38h] [rbp-40h]
  int v13; // [rsp+3Ch] [rbp-3Ch]
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+48h] [rbp-30h]

  v12 = 12;
  v11 = &v14;
  v13 = 0;
  v4 = (a3 != 0) + 588;
  for ( i = 0LL; ; i = v9 )
  {
    NextSession = MmGetNextSession(i);
    v9 = (void *)NextSession;
    if ( !NextSession )
      break;
    v7 = *(_QWORD *)(NextSession + 1024);
    v15 = *(_DWORD *)(v7 + 8);
    v14 = v7;
    EtwTraceSiloDcEvent((__int64)&v11, 1u, a1, a2, v4, 0x401803u);
  }
  return 0LL;
}
