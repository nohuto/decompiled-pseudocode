/*
 * XREFs of ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1C01161DC
 * Callers:
 *     NtGdiMakeObjectXferable @ 0x1C0116150 (NtGdiMakeObjectXferable.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall XFERDCOBJ::bPrepareDCForXfer(HDC a1, int a2)
{
  unsigned int v3; // ebx
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] && a2 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    v3 = 1;
    *(_DWORD *)(v5[0] + 2120LL) = a2;
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v6);
  return v3;
}
