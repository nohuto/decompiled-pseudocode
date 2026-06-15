/*
 * XREFs of ?SetWindowId@CAudioStream@@QEAAXI@Z @ 0x1800DAE60
 * Callers:
 *     ?SetWindowId@CAudioSession@@UEAAJI@Z @ 0x1800032B0 (-SetWindowId@CAudioSession@@UEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioStream::SetWindowId(CAudioStream *this, int a2)
{
  __int64 v2; // rcx

  *((_DWORD *)this + 20) = a2;
  v2 = *((_QWORD *)this + 25);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
}
