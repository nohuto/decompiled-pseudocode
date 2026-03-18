/*
 * XREFs of UnionRect @ 0x1C0079C20
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C003A0C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     GetInheritedMonitor @ 0x1C0042D58 (GetInheritedMonitor.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     CalcWindowFullScreen @ 0x1C0079A8C (CalcWindowFullScreen.c)
 *     _ScrollDC @ 0x1C00F8D1C (_ScrollDC.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C010E2B4 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01D4150 (FlushWEFCOMPOSITEDDCEBounds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnionRect(_DWORD *a1, int *a2, int *a3)
{
  int v3; // r10d
  BOOL v5; // ecx
  BOOL v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 result; // rax
  __int128 v11; // xmm0

  v3 = *a2;
  v5 = *a2 >= a2[2] || a2[1] >= a2[3];
  v6 = *a3 >= a3[2] || a3[1] >= a3[3];
  if ( !v5 )
  {
    if ( !v6 )
    {
      if ( v3 >= *a3 )
        v3 = *a3;
      *a1 = v3;
      v7 = a2[1];
      if ( v7 >= a3[1] )
        v7 = a3[1];
      a1[1] = v7;
      v8 = a2[2];
      if ( v8 <= a3[2] )
        v8 = a3[2];
      a1[2] = v8;
      v9 = a2[3];
      if ( v9 <= a3[3] )
        v9 = a3[3];
      a1[3] = v9;
      return 1LL;
    }
    v11 = *(_OWORD *)a2;
LABEL_22:
    *(_OWORD *)a1 = v11;
    return 1LL;
  }
  if ( !v6 )
  {
    v11 = *(_OWORD *)a3;
    goto LABEL_22;
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  return result;
}
