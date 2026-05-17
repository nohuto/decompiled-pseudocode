/*
 * XREFs of RtlValidateProcessHeaps @ 0x1800EFA30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180048120 @ 0x180048120 (sub_180048120.c)
 *     RtlValidateHeap @ 0x180070350 (RtlValidateHeap.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     __chkstk @ 0x1800A1730 (__chkstk.c)
 *     RtlGetProcessHeaps @ 0x1800EED80 (RtlGetProcessHeaps.c)
 */

char RtlValidateProcessHeaps()
{
  char v0; // si
  unsigned int ProcessHeaps; // eax
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  bool v6; // al
  _BYTE *v7; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v9[4096]; // [rsp+40h] [rbp-C0h] BYREF

  v7 = v9;
  v0 = 1;
  ProcessHeaps = RtlGetProcessHeaps(0x200u, (__int64)v9);
  v3 = 0LL;
  v4 = ProcessHeaps;
  if ( ProcessHeaps > 0x200 )
  {
    v8 = 8LL * ProcessHeaps;
    v7 = 0LL;
    if ( (int)ZwAllocateVirtualMemory() < 0 )
      return 0;
    v4 = (unsigned int)RtlGetProcessHeaps(v4, (__int64)v7);
  }
  if ( (_DWORD)v4 )
  {
    do
    {
      v6 = RtlValidateHeap(*(_QWORD *)&v7[v3], 0, 0LL);
      v3 += 8LL;
      LOBYTE(v2) = -v6;
      v0 &= v2;
      --v4;
    }
    while ( v4 );
  }
  if ( v7 != v9 )
    sub_180048120(v2, &v7, &v8, 0x8000LL);
  return v0;
}
