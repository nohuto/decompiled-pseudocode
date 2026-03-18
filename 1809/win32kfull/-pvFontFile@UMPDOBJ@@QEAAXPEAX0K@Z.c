/*
 * XREFs of ?pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z @ 0x1C02959A8
 * Callers:
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C0298690 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 * Callees:
 *     ReferenceW32Process @ 0x1C01B83A4 (ReferenceW32Process.c)
 */

void __fastcall UMPDOBJ::pvFontFile(UMPDOBJ *this, void *a2, void *a3, int a4)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  *((_QWORD *)this + 47) = CurrentProcessWin32Process;
  ReferenceW32Process(CurrentProcessWin32Process);
  *((_QWORD *)this + 45) = a2;
  *((_QWORD *)this + 44) = a3;
  *((_DWORD *)this + 93) = a4;
}
