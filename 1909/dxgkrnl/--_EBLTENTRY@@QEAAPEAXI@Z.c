/*
 * XREFs of ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C0046E30
 * Callers:
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x1C0046E74 (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C027B544 (--1BLTQUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall BLTENTRY::`vector deleting destructor'(BLTENTRY *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    (char *)this,
    560LL,
    *((_QWORD *)this - 1),
    (void (__fastcall *)(char *))BLTENTRY::~BLTENTRY);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v1;
}
