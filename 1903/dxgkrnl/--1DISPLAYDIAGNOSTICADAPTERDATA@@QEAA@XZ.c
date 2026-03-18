/*
 * XREFs of ??1DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ @ 0x1C00499B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C564 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall DISPLAYDIAGNOSTICADAPTERDATA::~DISPLAYDIAGNOSTICADAPTERDATA(DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  `vector destructor iterator'(
    (char *)this + 40,
    224LL,
    4LL,
    (void (__fastcall *)(char *))VIDPNSOURCEINFO::~VIDPNSOURCEINFO);
}
