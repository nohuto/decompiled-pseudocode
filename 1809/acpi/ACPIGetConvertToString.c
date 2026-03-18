/*
 * XREFs of ACPIGetConvertToString @ 0x1C0053DC0
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C000C1B0 (ACPIGetWorkerForString.c)
 * Callees:
 *     ACPIWideStringToAnsiHelper @ 0x1C00278CC (ACPIWideStringToAnsiHelper.c)
 *     ACPIGetConvertToStringWide @ 0x1C0053E24 (ACPIGetConvertToStringWide.c)
 */

__int64 __fastcall ACPIGetConvertToString(__int64 a1, int a2, int a3, int a4, _BYTE **a5, unsigned int *a6)
{
  _BYTE **v6; // rdi
  int v7; // ebx
  unsigned int v8; // r11d
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]

  v11 = HIDWORD(a1);
  v6 = a5;
  v10 = 0;
  v7 = ACPIGetConvertToStringWide(a1, a2, a3, a4, (__int64)a5, (__int64)&v10);
  if ( v7 >= 0 )
  {
    ACPIWideStringToAnsiHelper(*v6, v10);
    if ( a6 )
      *a6 = v8 >> 1;
  }
  return (unsigned int)v7;
}
