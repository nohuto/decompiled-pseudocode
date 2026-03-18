/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C0146CB8
 * Callers:
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C00D07E4 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0146BD8 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D9114 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        CCD_TOPOLOGY *this,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR **a3)
{
  __int64 result; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v5; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  if ( (*(_QWORD *)a2 & 0x1000000000LL) != 0 && (*((_DWORD *)this + 21) & 1) == 0 )
    return 0LL;
  result = CCD_TOPOLOGY::AddPathDescriptor(
             (__int64)this,
             (_QWORD *)a2 + 2,
             *((_DWORD *)a2 + 6),
             *((_DWORD *)a2 + 7),
             *((_BYTE *)a2 + 129) & 1,
             (*((_BYTE *)a2 + 129) & 2) != 0,
             *((_DWORD *)a2 + 22),
             *((_DWORD *)a2 + 23),
             *((_DWORD *)a2 + 53),
             (__int64 *)&v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *v6 = *(struct D3DKMT_PATHMODALITY_DESCRIPTOR **)a2;
    *((_OWORD *)v5 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v5 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v5 + 4) = *((_OWORD *)a2 + 4);
    v5[10] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 10);
    *((_DWORD *)v5 + 22) = *((_DWORD *)a2 + 22);
    *((_DWORD *)v5 + 23) = *((_DWORD *)a2 + 23);
    *((_OWORD *)v5 + 6) = *((_OWORD *)a2 + 6);
    *((_OWORD *)v5 + 7) = *((_OWORD *)a2 + 7);
    *((_DWORD *)v5 + 33) = *((_DWORD *)a2 + 33);
    *((_DWORD *)v5 + 34) = *((_DWORD *)a2 + 34);
    *((_DWORD *)v5 + 35) = *((_DWORD *)a2 + 35);
    v5[18] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 18);
    v5[19] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 19);
    *(_OWORD *)(v5 + 21) = *(_OWORD *)((char *)a2 + 168);
    *((_DWORD *)v5 + 46) = *((_DWORD *)a2 + 46);
    *((_DWORD *)v5 + 47) = *((_DWORD *)a2 + 47);
    *((_DWORD *)v5 + 48) = *((_DWORD *)a2 + 48);
    *((_DWORD *)v5 + 51) = *((_DWORD *)a2 + 51);
    *((_DWORD *)v5 + 52) = *((_DWORD *)a2 + 52);
    return (unsigned int)result;
  }
  return result;
}
