/*
 * XREFs of DpiFdoInitializeConnectionChangePackage @ 0x1C00444DC
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001E590 (DpiFdoHandleDisplayDetectControl.c)
 *     DpIndicateChildStatus @ 0x1C0042AB0 (DpIndicateChildStatus.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C0044DF8 (ExAllocateFromNPagedLookasideList.c)
 */

_DWORD *__fastcall DpiFdoInitializeConnectionChangePackage(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  _DWORD *v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rbx
  __int64 v15; // rax
  _DWORD *result; // rax
  signed __int64 v17; // rax
  unsigned int v18; // edi

  v12 = ExAllocateFromNPagedLookasideList(&Lookaside);
  v14 = v12;
  if ( v12 )
  {
    memset(v12, 0, 0x80uLL);
    v14[4] = 1953656900;
    v14[5] = 13;
    *((_OWORD *)v14 + 3) = *(_OWORD *)a1;
    *((_OWORD *)v14 + 4) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)v14 + 5) = *(_OWORD *)(a1 + 32);
    *((_OWORD *)v14 + 6) = *(_OWORD *)(a1 + 48);
    *((_QWORD *)v14 + 14) = *(_QWORD *)(a1 + 64);
    v17 = _InterlockedExchangeAdd64(&qword_1C008EC20, 1uLL);
    v14[9] = a4;
    *((_QWORD *)v14 + 3) = v17 + 1;
    v18 = v14[8] & 0xF0000000 | a2 & 0xFFFFFF | ((a3 & 0xF) << 24);
    *((_BYTE *)v14 + 124) = a5;
    *((_BYTE *)v14 + 125) = a6;
    *((_BYTE *)v14 + 127) = a8;
    *((_BYTE *)v14 + 126) = a7;
    result = v14;
    v14[8] = v18;
    *((_BYTE *)v14 + 120) = HIBYTE(a2);
  }
  else
  {
    v15 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v15 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v15);
    return 0LL;
  }
  return result;
}
