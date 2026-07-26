/*
 * XREFs of ndisSriovInterfaceGetDeviceLocation @ 0x1C00FB4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisIovFindVFByVFId @ 0x1C00F904C (ndisIovFindVFByVFId.c)
 */

void __fastcall ndisSriovInterfaceGetDeviceLocation(__int64 a1, unsigned __int16 a2, _WORD *a3, _BYTE *a4, _BYTE *a5)
{
  int v9; // ebx
  __int64 *VFByVFId; // rax

  v9 = 0;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_q(0x69u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, a1);
  VFByVFId = ndisIovFindVFByVFId(a1, a2);
  if ( VFByVFId )
  {
    *a3 = *((_WORD *)VFByVFId + 863);
    *a4 = *((_BYTE *)VFByVFId + 1725);
    *a5 = *((_BYTE *)VFByVFId + 1724);
  }
  else
  {
    v9 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qD(0x6Au, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, a1, v9);
}
