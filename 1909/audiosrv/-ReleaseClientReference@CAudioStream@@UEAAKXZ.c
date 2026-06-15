/*
 * XREFs of ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x1800462F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::ReleaseClientReference(CAudioStream *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 16LL))(this);
  return v2;
}
