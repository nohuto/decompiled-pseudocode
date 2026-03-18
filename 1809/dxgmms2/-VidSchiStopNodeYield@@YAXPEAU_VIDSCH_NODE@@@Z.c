/*
 * XREFs of ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013BD8
 * Callers:
 *     VidSchiCheckYieldExitCondition @ 0x1C00128BC (VidSchiCheckYieldExitCondition.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013DC8 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C002672C (McTemplateK0pq.c)
 */

void __fastcall VidSchiStopNodeYield(unsigned __int64 QuadPart, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int MostSignificantBit; // edx
  unsigned __int64 v7; // rtt
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(QuadPart + 1984) = 0LL;
  v3 = QuadPart;
  v4 = *(_DWORD *)(QuadPart + 1756);
  v5 = *(_QWORD *)(QuadPart + 24);
  *(_BYTE *)(QuadPart + 2008) = 0;
  if ( v4 )
  {
    MostSignificantBit = RtlFindMostSignificantBit(v4);
    QuadPart = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
    if ( QuadPart )
    {
      if ( *(_DWORD *)(QuadPart + 404) < MostSignificantBit )
      {
        *(_QWORD *)(v3 + 136) = *(_QWORD *)(v3 + 96);
        QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
        if ( is_mul_ok(QuadPart, 0x989680uLL) )
        {
          a3 = QuadPart * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
        }
        else
        {
          v7 = QuadPart;
          QuadPart /= PerformanceFrequency.QuadPart;
          a3 = 10000000 * QuadPart + 10000000 * (v7 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
        }
        *(_QWORD *)(v3 + 128) = a3;
      }
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pq(QuadPart, &EventYieldStopNode, a3, *(_QWORD *)(v5 + 16), *(unsigned __int16 *)(v3 + 4));
}
