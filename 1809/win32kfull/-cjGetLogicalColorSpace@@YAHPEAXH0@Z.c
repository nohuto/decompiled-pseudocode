/*
 * XREFs of ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C0299F78
 * Callers:
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C02836E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C0299860 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 */

__int64 __fastcall cjGetLogicalColorSpace(HCOLORSPACE a1, unsigned int a2, char *a3)
{
  unsigned int v3; // edi
  __int64 v6; // r8
  __int64 v7; // rcx
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v3 = 0;
  if ( a2 >= 0x24C && a3 )
  {
    COLORSPACEREF::COLORSPACEREF((COLORSPACEREF *)v9, a1);
    v6 = v10;
    if ( v10 )
    {
      *(_DWORD *)a3 = *(_DWORD *)(v10 + 24);
      *((_DWORD *)a3 + 1) = *(_DWORD *)(v6 + 28);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v6 + 32);
      *((_DWORD *)a3 + 3) = *(_DWORD *)(v6 + 36);
      *((_DWORD *)a3 + 4) = *(_DWORD *)(v6 + 40);
      *(_OWORD *)(a3 + 20) = *(_OWORD *)(v6 + 44);
      *(_OWORD *)(a3 + 36) = *(_OWORD *)(v6 + 60);
      *((_DWORD *)a3 + 13) = *(_DWORD *)(v6 + 76);
      *((_DWORD *)a3 + 14) = *(_DWORD *)(v6 + 80);
      *((_DWORD *)a3 + 15) = *(_DWORD *)(v6 + 84);
      *((_DWORD *)a3 + 16) = *(_DWORD *)(v6 + 88);
      RtlStringCchCopyW(a3 + 68, 260LL, (char *)(v6 + 92));
      v7 = v10;
      v3 = 592;
      if ( a2 < 0x250 )
        v3 = 588;
      else
        *((_DWORD *)a3 + 147) = *(_DWORD *)(v10 + 612);
      if ( v7 )
        DEC_SHARE_REF_CNT(v7);
    }
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v9);
  }
  return v3;
}
