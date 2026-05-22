/*
 * XREFs of ??_GInputSystem@@UEAAPEAXI@Z @ 0x18001B6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18001B720 (--1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

InputSystem *__fastcall InputSystem::`scalar deleting destructor'(InputSystem *this, char a2)
{
  BamoImpl::BamoInputSystemPrincipalImpl::~BamoInputSystemPrincipalImpl((InputSystem *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
