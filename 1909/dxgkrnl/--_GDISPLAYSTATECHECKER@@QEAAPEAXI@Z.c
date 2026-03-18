/*
 * XREFs of ??_GDISPLAYSTATECHECKER@@QEAAPEAXI@Z @ 0x1C0049AEC
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C0296EC0 (DxgkCheckDisplayState.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_EVIDPNSOURCEINFO@@QEAAPEAXI@Z @ 0x1C0049AA8 (--_EVIDPNSOURCEINFO@@QEAAPEAXI@Z.c)
 */

DISPLAYSTATECHECKER *__fastcall DISPLAYSTATECHECKER::`scalar deleting destructor'(DISPLAYSTATECHECKER *this)
{
  VIDPNSOURCEINFO *v2; // rcx

  `vector destructor iterator'(
    (char *)this + 1848,
    1008LL,
    4LL,
    (void (__fastcall *)(char *))DISPLAYDIAGNOSTICADAPTERDATA::~DISPLAYDIAGNOSTICADAPTERDATA);
  v2 = (VIDPNSOURCEINFO *)*((_QWORD *)this + 224);
  if ( v2 )
    VIDPNSOURCEINFO::`vector deleting destructor'(v2);
  `vector destructor iterator'((char *)this, 224LL, 8LL, (void (__fastcall *)(char *))VIDPNSOURCEINFO::~VIDPNSOURCEINFO);
  ExFreePoolWithTag(this, 0);
  return this;
}
