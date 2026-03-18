/*
 * XREFs of SecureDmaEnabler_PrepareMemoryForDma @ 0x1C00411B8
 * Callers:
 *     Control_Transfer_Map @ 0x1C0027110 (Control_Transfer_Map.c)
 *     Isoch_MapStage @ 0x1C0029B84 (Isoch_MapStage.c)
 *     Bulk_MapStage @ 0x1C002FC50 (Bulk_MapStage.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall SecureDmaEnabler_PrepareMemoryForDma(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v9; // rcx
  unsigned int v11; // edi
  int v12; // eax
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  int v16; // [rsp+28h] [rbp-10h]
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0LL;
  v9 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a2 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), 2u, 0x12u, 0x10u, (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids);
    return (unsigned int)-1073741637;
  }
  else
  {
    v12 = VslCreateSecureSection(&v17, *(_QWORD *)(v9 + 496), a2, 4LL, 1);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v13 = a6;
      memset(a6, 0, 0x20uLL);
      v13[1] = 0;
      v14 = a7;
      v13[2] = a4;
      *(_DWORD *)v14 = 1;
      *(_QWORD *)(v14 + 16) = *(unsigned int *)(a2 + 44);
      *(_DWORD *)(v14 + 24) = v13[2];
      v13[3] = a5;
      *((_QWORD *)v13 + 2) = v17;
      *v13 = 1;
    }
    else
    {
      v16 = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0x12u,
        0x11u,
        (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
        v16);
    }
  }
  return v11;
}
