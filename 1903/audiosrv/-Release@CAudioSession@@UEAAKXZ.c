/*
 * XREFs of ?Release@CAudioSession@@UEAAKXZ @ 0x18003DB10
 * Callers:
 *     ?Release@CAudioSession@@W7EAAKXZ @ 0x18006BAB0 (-Release@CAudioSession@@W7EAAKXZ.c)
 *     ?Release@CAudioSession@@WBA@EAAKXZ @ 0x18006BAC0 (-Release@CAudioSession@@WBA@EAAKXZ.c)
 *     ?Release@CAudioSession@@WBI@EAAKXZ @ 0x18006BAD0 (-Release@CAudioSession@@WBI@EAAKXZ.c)
 *     ?Release@CAudioSession@@WCA@EAAKXZ @ 0x18006BAE0 (-Release@CAudioSession@@WCA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::Release(CAudioSession *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx

  v1 = (char *)this + 32;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))((char *)this + 32);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
