/*
 * XREFs of SecureDmaEnabler_PrepareMemoryForDma @ 0x1C0046A48
 * Callers:
 *     Control_Transfer_Map @ 0x1C002B95C (Control_Transfer_Map.c)
 *     Isoch_MapStage @ 0x1C002E590 (Isoch_MapStage.c)
 *     Bulk_MapStage @ 0x1C0034954 (Bulk_MapStage.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
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
  int v10; // edi
  _DWORD *v11; // rbx
  __int64 v12; // rcx
  int v14; // [rsp+28h] [rbp-10h]
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = 0LL;
  if ( *(_QWORD *)a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0x12u,
        0x10u,
        (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids);
    return (unsigned int)-1073741637;
  }
  else
  {
    v10 = VslCreateSecureSection(&v15, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 560LL), a2, 4LL, 1);
    if ( v10 >= 0 )
    {
      v11 = a6;
      memset(a6, 0, 0x20uLL);
      v12 = a7;
      v11[2] = a4;
      *(_DWORD *)v12 = 1;
      *(_QWORD *)(v12 + 16) = *(unsigned int *)(a2 + 44);
      *(_DWORD *)(v12 + 24) = v11[2];
      v11[3] = a5;
      *((_QWORD *)v11 + 2) = v15;
      *v11 = 1;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0x12u,
        0x11u,
        (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
        v14);
    }
  }
  return (unsigned int)v10;
}
