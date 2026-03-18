/*
 * XREFs of NtGdiMonoBitmap @ 0x1C029B290
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C010E12C (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMonoBitmap(HSURF a1)
{
  unsigned int IsMonochrome; // ebx
  __int64 v2; // rdx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)v4, a1);
  IsMonochrome = 0;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 128);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v6);
    DEC_SHARE_REF_CNT(v2);
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v4);
  return IsMonochrome;
}
