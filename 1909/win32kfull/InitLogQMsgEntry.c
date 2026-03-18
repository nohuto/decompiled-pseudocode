/*
 * XREFs of InitLogQMsgEntry @ 0x1C01D69A0
 * Callers:
 *     LogQMsg @ 0x1C01D6AD8 (LogQMsg.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

int __fastcall InitLogQMsgEntry(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  *(_DWORD *)(a2 + 168) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_DWORD *)(a2 + 172) = (unsigned int)PsGetCurrentThreadId();
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 96);
  *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a2 + 144) = *(_OWORD *)(a1 + 144);
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a1 + 160);
  memset((void *)(a2 + 184), 0, 8LL * Count);
  *(_DWORD *)(a2 + 176) = 0;
  if ( (dword_1C0325DD0 & 0xFFFFFFFD) == 0 )
    *(_DWORD *)(a2 + 176) = RtlWalkFrameChain((PVOID *)(a2 + 184), Count, 0);
  LODWORD(v4) = dword_1C0325DD0 - 1;
  if ( (unsigned int)(dword_1C0325DD0 - 1) <= 1 )
  {
    v4 = *(int *)(a2 + 176);
    if ( (int)v4 < (int)Count )
    {
      LODWORD(v4) = RtlWalkFrameChain((PVOID *)(a2 + 8 * (v4 + 23)), Count - v4, 1u);
      *(_DWORD *)(a2 + 176) += v4;
    }
  }
  return v4;
}
