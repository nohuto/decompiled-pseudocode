/*
 * XREFs of DpiSetTargetAdjustedColorimetry2 @ 0x1C0052AF0
 * Callers:
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C014AE94 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C001A698 (DpiFdoGetChildDescriptor.c)
 *     DpiDxgkDdiSetTargetAdjustedColorimetry2 @ 0x1C0052420 (DpiDxgkDdiSetTargetAdjustedColorimetry2.c)
 */

__int64 __fastcall DpiSetTargetAdjustedColorimetry2(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // edx
  int v5; // r9d
  __int64 v6; // r10
  _QWORD *ChildDescriptor; // r11
  __int64 result; // rax
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int128 v11; // xmm1
  int v12; // eax
  __int64 v13; // rdx
  __int128 v14[3]; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+60h] [rbp-18h]

  ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64), a2);
  result = 0LL;
  if ( !ChildDescriptor )
    return 3221225485LL;
  if ( *((_BYTE *)ChildDescriptor + 65) )
  {
    v9 = *(_QWORD *)(v6 + 40);
    if ( *(_DWORD *)(v9 + 28) >= 0xA007u )
    {
      v10 = (const GUID *)v4;
      v11 = *(_OWORD *)(a3 + 16);
      v12 = *(_DWORD *)(a3 + 48);
      v13 = *(_QWORD *)(v6 + 48);
      v14[0] = *(_OWORD *)a3;
      v14[2] = *(_OWORD *)(a3 + 32);
      v14[1] = v11;
      v15 = v12;
      return DpiDxgkDdiSetTargetAdjustedColorimetry2(v9, v13, v10, v14, v5);
    }
  }
  return result;
}
