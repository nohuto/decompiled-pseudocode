/*
 * XREFs of LogicalCursorPosFromDpiAwarenessContext @ 0x1C00396F0
 * Callers:
 *     <none>
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x1C0039790 (PhysicalToLogicalDPIPoint.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogicalCursorPosFromDpiAwarenessContext(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // edx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 92) >> 8;
    v6 = 0LL;
    if ( (((unsigned __int16)(a1 >> 8) ^ (unsigned __int16)v4) & 0x1FF) == 0 )
      return *(_QWORD *)(v3 + 84);
    PhysicalToLogicalDPIPoint(&v6, (char *)gpsi + 4960, a1, 0LL);
    return v6;
  }
  return v2;
}
