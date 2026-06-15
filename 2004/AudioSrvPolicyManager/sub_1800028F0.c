/*
 * XREFs of sub_1800028F0 @ 0x1800028F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

FARPROC __fastcall sub_1800028F0(__int64 a1, __int64 a2, unsigned int a3)
{
  HMODULE ModuleHandleW; // rax
  FARPROC result; // rax

  ModuleHandleW = GetModuleHandleW(L"kernelbase.dll");
  result = GetProcAddress(ModuleHandleW, "RaiseFailFastException");
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64, __int64, _QWORD))result)(a1, a2, a3);
  return result;
}
