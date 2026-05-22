/*
 * XREFs of ??_GV2PropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180111210
 * Callers:
 *     <none>
 * Callees:
 *     ??1V2PropertyRequest@Holographic@Internal@Windows@@UEAA@XZ @ 0x180110D5C (--1V2PropertyRequest@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::Holographic::V2PropertyRequest *__fastcall Windows::Internal::Holographic::V2PropertyRequest::`scalar deleting destructor'(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  Windows::Internal::Holographic::V2PropertyRequest::~V2PropertyRequest(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
