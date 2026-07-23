/*
 * XREFs of sub_1800D45D0 @ 0x1800D45D0
 * Callers:
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 * Callees:
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 */

__int64 __fastcall sub_1800D45D0(const void **a1, _DWORD *a2)
{
  char v2; // al
  int v5; // ebx
  bool v6; // sf
  __int64 result; // rax

  v2 = dword_18015FAB0;
  if ( (dword_18015FAB0 & 3) != 0 )
  {
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1982,
      (unsigned int)"LdrpInitializeProcessWrapperFilter",
      0,
      "Process initialization raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      *(_DWORD *)*a1,
      *a1,
      a1[1]);
    v2 = dword_18015FAB0;
  }
  if ( (v2 & 0x10) != 0 )
    __debugbreak();
  v5 = 0;
  if ( byte_180165390 )
    __debugbreak();
  v6 = RtlReportException((PEXCEPTION_RECORD)*a1, (PCONTEXT)a1[1], 2u) < 0;
  result = 1LL;
  LOBYTE(v5) = !v6;
  *a2 = v5;
  return result;
}
