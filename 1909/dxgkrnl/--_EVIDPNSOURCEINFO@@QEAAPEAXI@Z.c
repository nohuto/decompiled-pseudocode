/*
 * XREFs of ??_EVIDPNSOURCEINFO@@QEAAPEAXI@Z @ 0x1C0049AA8
 * Callers:
 *     ??_GDISPLAYSTATECHECKER@@QEAAPEAXI@Z @ 0x1C0049AEC (--_GDISPLAYSTATECHECKER@@QEAAPEAXI@Z.c)
 *     ?Ensure@?$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z @ 0x1C0049B60 (-Ensure@-$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall VIDPNSOURCEINFO::`vector deleting destructor'(VIDPNSOURCEINFO *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    (char *)this,
    224LL,
    *((_QWORD *)this - 1),
    (void (__fastcall *)(char *))VIDPNSOURCEINFO::~VIDPNSOURCEINFO);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v1;
}
