/*
 * XREFs of _lambda_36a5c3cf09b4e72a442c67f1bbefbad9_::operator() @ 0x1C028AFA4
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C028C3AC (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000F618 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall lambda_36a5c3cf09b4e72a442c67f1bbefbad9_::operator()(CCD_TOPOLOGY **a1, __int64 a2, unsigned int a3)
{
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // r10
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // r8d

  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*a1, a3);
  result = 0x4000000000000LL;
  if ( (*(_QWORD *)a2 & 0x4000000000000LL) != 0
    && (*(_QWORD *)PathDescriptor & 0x4000000000000LL) != 0
    && *(_DWORD *)(a2 + 184) == *((_DWORD *)PathDescriptor + 46)
    && (*(_QWORD *)PathDescriptor & 0x20000LL) != 0 )
  {
    if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)PathDescriptor + 33)) - 1) & 0xFFFFFFFD) != 0 )
    {
      v8 = *(_DWORD *)(v6 + 156);
      result = *(unsigned int *)(v6 + 152);
    }
    else
    {
      v8 = *(_DWORD *)(v6 + 152);
      result = *(unsigned int *)(v6 + 156);
    }
    if ( (v9 = *(_DWORD *)(v6 + 96), v8 > v9)
      || (v10 = *(_DWORD *)(v6 + 100), (unsigned int)result > v10)
      || (v8 != v9 || (_DWORD)result != v10 ? (result = 0xFFFFFFFFLL) : (result = 0LL),
          (v7 & 0x400) == 0 && (int)result < 0) )
    {
      *(_QWORD *)v6 = v7 & 0xFFFFFFFFFF7DFE78uLL;
    }
  }
  return result;
}
