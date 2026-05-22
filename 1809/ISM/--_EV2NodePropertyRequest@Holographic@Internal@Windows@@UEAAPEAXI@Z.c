/*
 * XREFs of ??_EV2NodePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180111780
 * Callers:
 *     <none>
 * Callees:
 *     ??1V2PropertyRequest@Holographic@Internal@Windows@@UEAA@XZ @ 0x180110D5C (--1V2PropertyRequest@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::Holographic::V2NodePropertyRequest *__fastcall Windows::Internal::Holographic::V2NodePropertyRequest::`vector deleting destructor'(
        Windows::Internal::Holographic::V2NodePropertyRequest *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rdi
  char *v6; // rcx
  char v7; // si

  v4 = (char *)this + 168;
  v6 = (char *)*((_QWORD *)this + 28);
  v7 = a2;
  if ( v6 )
  {
    LOBYTE(a2) = v6 != v4;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 32LL))(v6, a2);
    *((_QWORD *)v4 + 7) = 0LL;
  }
  Windows::Internal::Holographic::V2PropertyRequest::~V2PropertyRequest(this, a2, a3, a4);
  if ( (v7 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
