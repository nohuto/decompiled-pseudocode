/*
 * XREFs of ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x1801E8BB8
 * Callers:
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18014B36C (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x1801E88F0 (-DoStackCapture@@YAXIJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MilWerRegisterMemoryBlock(const void *a1, unsigned int a2)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( ModuleHandleW )
  {
    ProcAddress = GetProcAddress(ModuleHandleW, "WerRegisterMemoryBlock");
    if ( ProcAddress )
      ((void (__fastcall *)(const void *, _QWORD))ProcAddress)(a1, a2);
  }
}
