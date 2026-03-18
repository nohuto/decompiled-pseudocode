/*
 * XREFs of MmPerfLogSessionRundown @ 0x14088B3AC
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmGetNextSession @ 0x14008CB70 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x14032DE80 (EtwTraceSiloDcEvent.c)
 */

__int64 __fastcall MmPerfLogSessionRundown(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int16 v5; // di
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 NextSession; // rax
  void *v9; // rbx
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 *v13; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+4Ch] [rbp-2Ch]

  v11 = 0LL;
  v12 = 0LL;
  v13 = &v11;
  v15 = 0;
  v5 = (a3 != 0) + 588;
  v6 = 0LL;
  v14 = 12;
  while ( 1 )
  {
    NextSession = MmGetNextSession(v6);
    v9 = (void *)NextSession;
    if ( !NextSession )
      break;
    v7 = *(_QWORD *)(NextSession + 1024);
    LODWORD(v12) = *(_DWORD *)(v7 + 8);
    v11 = v7;
    EtwTraceSiloDcEvent((__int64)&v13, 1u, a1, a2, v5, 0x401803u);
    v6 = v9;
  }
  return 0LL;
}
