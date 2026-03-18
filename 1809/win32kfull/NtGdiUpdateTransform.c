/*
 * XREFs of NtGdiUpdateTransform @ 0x1C029B160
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiUpdateTransform(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
  {
    v1 = 1;
    DC::vUpdateWtoDXform(v3[0]);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
