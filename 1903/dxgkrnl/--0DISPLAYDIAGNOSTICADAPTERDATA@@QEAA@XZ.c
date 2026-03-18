/*
 * XREFs of ??0DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ @ 0x1C00498C0
 * Callers:
 *     <none>
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001DBB8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

DISPLAYDIAGNOSTICADAPTERDATA *__fastcall DISPLAYDIAGNOSTICADAPTERDATA::DISPLAYDIAGNOSTICADAPTERDATA(
        DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 20) = 0;
  *((_BYTE *)this + 32) = 0;
  `vector constructor iterator'(
    (char *)this + 40,
    224LL,
    4LL,
    (void (__fastcall *)(char *))VIDPNSOURCEINFO::VIDPNSOURCEINFO);
  *((_DWORD *)this + 234) = 0;
  `vector constructor iterator'(
    (char *)this + 940,
    16LL,
    4LL,
    (void (__fastcall *)(char *))VIDPNTARGETINFO::VIDPNTARGETINFO);
  *((_DWORD *)this + 251) = 0;
  return this;
}
