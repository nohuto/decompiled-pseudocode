/*
 * XREFs of ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C008E800
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C008E5F4 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C008F620 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSandboxedCurrentProcess(__int64 a1)
{
  __int64 result; // rax

  result = PsGetCurrentProcessWin32Process(a1);
  if ( result )
    return *(_DWORD *)(result + 264) | *(_DWORD *)(result + 12) & 0x80u;
  return result;
}
