/*
 * XREFs of ??_GApplicationSpecificEndpointInfo@@UEAAPEAXI@Z @ 0x18001AA20
 * Callers:
 *     <none>
 * Callees:
 *     ??1ApplicationSpecificEndpointInfo@@UEAA@XZ @ 0x18001AA5C (--1ApplicationSpecificEndpointInfo@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ApplicationSpecificEndpointInfo *__fastcall ApplicationSpecificEndpointInfo::`scalar deleting destructor'(
        ApplicationSpecificEndpointInfo *this,
        char a2)
{
  ApplicationSpecificEndpointInfo::~ApplicationSpecificEndpointInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
