/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x1408B6C60
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x1408B6B34 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rdi
  struct _EX_RUNDOWN_REF *v5; // rbx
  char v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 *v9; // rcx
  _BYTE v11[48]; // [rsp+28h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( v4 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v11);
      v6 = *(_BYTE *)(a2 + 4);
      v7 = *(_DWORD *)a2;
      if ( v6 )
        _interlockedbittestandset((volatile signed __int32 *)(v4 + 888), v7);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(v4 + 888), v7);
      v8 = 0LL;
      v9 = *(__int64 **)(BugCheckParameter1 + 1064);
      if ( v9 )
        v8 = *v9;
      if ( v8 )
      {
        if ( v6 )
          _interlockedbittestandset((volatile signed __int32 *)(v8 + 576), v7);
        else
          _interlockedbittestandreset((volatile signed __int32 *)(v8 + 576), v7);
      }
      KiUnstackDetachProcess((__int64)v11, 0LL);
      ExReleaseRundownProtection_0(v5);
    }
  }
  return 0LL;
}
