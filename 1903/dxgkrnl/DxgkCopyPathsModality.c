/*
 * XREFs of DxgkCopyPathsModality @ 0x1C026D590
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D6BA8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Copy@CCD_TOPOLOGY@@QEAAJPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02C01CC (-Copy@CCD_TOPOLOGY@@QEAAJPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DxgkCopyPathsModality(__int64 a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int v3; // ebx
  int v4; // [rsp+20h] [rbp-60h] BYREF
  __int64 v5; // [rsp+28h] [rbp-58h]
  __int64 v6; // [rsp+30h] [rbp-50h]
  __int64 v7; // [rsp+38h] [rbp-48h]
  __int16 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  bool v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  int v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+74h] [rbp-Ch]

  if ( !a1 && a2 )
    return 3221225485LL;
  v12 = a1;
  v4 = 0;
  v5 = 0LL;
  v13 = a1 == 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v14 = 0;
  v15 = 1;
  v16 = 0LL;
  v3 = CCD_TOPOLOGY::Copy((CCD_TOPOLOGY *)&v4, a2);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v4);
  return v3;
}
