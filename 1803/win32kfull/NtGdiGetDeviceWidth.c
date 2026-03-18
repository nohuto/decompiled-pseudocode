/*
 * XREFs of NtGdiGetDeviceWidth @ 0x1C027F120
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078C80 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetDeviceWidth(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(v3[0] + 1448LL) - *(_DWORD *)(v3[0] + 1440LL);
    DCOBJ::~DCOBJ((DCOBJ *)v3);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v1;
}
