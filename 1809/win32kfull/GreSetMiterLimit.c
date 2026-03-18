/*
 * XREFs of GreSetMiterLimit @ 0x1C010D670
 * Callers:
 *     NtGdiSetMiterLimit @ 0x1C010D610 (NtGdiSetMiterLimit.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetMiterLimit(HDC a1, float a2, _DWORD *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[32]; // [rsp+30h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v4 = v7[0];
  v5 = 0;
  if ( v7[0] && a2 >= 1.0 )
  {
    if ( a3 )
      *a3 = *(_DWORD *)(v7[0] + 224LL);
    *(float *)(v4 + 224) = a2;
    v5 = 1;
  }
  else
  {
    EngSetLastError(0x57u);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v8);
  return v5;
}
