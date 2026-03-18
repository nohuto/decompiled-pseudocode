/*
 * XREFs of ?RemoveResolutionPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0149468
 * Callers:
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C014941C (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

void __fastcall CCD_TOPOLOGY::RemoveResolutionPathDescriptor(struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v8[4]; // [rsp+20h] [rbp-40h] BYREF

  *(_QWORD *)a1 &= 0xA00uLL;
  *((_QWORD *)a1 + 1) &= 0xA00uLL;
  memset(v8, 0, 0x38uLL);
  v2 = v8[1];
  *((_OWORD *)a1 + 2) = v8[0];
  v3 = v8[2];
  *((_OWORD *)a1 + 3) = v2;
  *(_QWORD *)&v2 = *(_QWORD *)&v8[3];
  *((_OWORD *)a1 + 4) = v3;
  *((_QWORD *)a1 + 10) = v2;
  memset(v8, 0, 0x20uLL);
  v4 = v8[0];
  v5 = v8[1];
  *(_QWORD *)&v8[0] = 0LL;
  *((_OWORD *)a1 + 6) = v4;
  v6 = *(unsigned __int64 *)&v8[0];
  *((_BYTE *)a1 + 128) = 0;
  *((_QWORD *)a1 + 17) = 0LL;
  *((_QWORD *)a1 + 19) = 0LL;
  *((_DWORD *)a1 + 48) = 0;
  *(_OWORD *)((char *)a1 + 168) = v6;
  *((_OWORD *)a1 + 7) = v5;
  memset(v8, 0, 0x28uLL);
  v7 = v8[1];
  *(_OWORD *)((char *)a1 + 232) = v8[0];
  *(_QWORD *)&v6 = *(_QWORD *)&v8[2];
  *(_OWORD *)((char *)a1 + 248) = v7;
  *((_QWORD *)a1 + 33) = v6;
}
