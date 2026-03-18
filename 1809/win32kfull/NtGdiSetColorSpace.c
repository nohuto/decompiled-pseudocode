/*
 * XREFs of NtGdiSetColorSpace @ 0x1C0127D40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C0299860 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 */

__int64 __fastcall NtGdiSetColorSpace(HDC a1, HCOLORSPACE a2)
{
  unsigned int v3; // ebx
  _BYTE v5[32]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v6; // [rsp+40h] [rbp-40h]
  _QWORD v7[7]; // [rsp+48h] [rbp-38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( a2 == *(HCOLORSPACE *)(*(_QWORD *)(v7[0] + 976LL) + 16LL) )
    {
      v3 = 1;
    }
    else
    {
      COLORSPACEREF::COLORSPACEREF((COLORSPACEREF *)v5, a2);
      if ( v6 )
      {
        DEC_SHARE_REF_CNT(*(_QWORD *)(v7[0] + 96LL));
        *(_QWORD *)(*(_QWORD *)(v7[0] + 976LL) + 16LL) = a2;
        *(_QWORD *)(v7[0] + 96LL) = v6;
        INC_SHARE_REF_CNT(v6);
        v3 = 1;
        if ( v6 )
          DEC_SHARE_REF_CNT(v6);
      }
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v5);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v3;
}
