/*
 * XREFs of GreGetBitmapDimension @ 0x1C02A2984
 * Callers:
 *     NtGdiGetBitmapDimension @ 0x1C0291BB0 (NtGdiGetBitmapDimension.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapDimension(HSURF a1, _QWORD *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  ULONG v6; // ecx
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  char v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
  SURFREF::SURFREF((SURFREF *)v9, a1);
  v5 = v10;
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 112) & 0x4000000) == 0 )
      goto LABEL_8;
    if ( a2 )
    {
      v4 = 1;
      *a2 = *(_QWORD *)(v10 + 152);
      goto LABEL_8;
    }
    v6 = 87;
  }
  else
  {
    v6 = 6;
  }
  EngSetLastError(v6);
  v5 = v10;
LABEL_8:
  if ( v5 )
    DEC_SHARE_REF_CNT(v5);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v9);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
  return v4;
}
