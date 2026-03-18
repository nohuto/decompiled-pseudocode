/*
 * XREFs of GetProcessorGroupInformation @ 0x1C0009154
 * Callers:
 *     NVMeControllerFilterResouceRequirements @ 0x1C000AD58 (NVMeControllerFilterResouceRequirements.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     FreeProcessorGroupInfo @ 0x1C0008E60 (FreeProcessorGroupInfo.c)
 */

char __fastcall GetProcessorGroupInformation(__int64 a1)
{
  unsigned __int16 *v2; // rsi
  unsigned __int16 v3; // bp
  _QWORD *v4; // r14
  __int64 v5; // rbx
  unsigned int v6; // ecx
  unsigned int v7; // eax

  FreeProcessorGroupInfo(a1);
  v2 = (unsigned __int16 *)(a1 + 200);
  StorPortExtendedFunction(18LL, a1, a1 + 200);
  v3 = 0;
  if ( *(_WORD *)(a1 + 200)
    && (v4 = (_QWORD *)(a1 + 216),
        StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 200)),
        *(_QWORD *)(a1 + 216)) )
  {
    NVMeZeroMemory(*(void **)(a1 + 216), 16 * *v2);
    if ( *v2 )
    {
      do
      {
        v5 = 16LL * v3;
        StorPortExtendedFunction(19LL, a1, v3);
        *(_WORD *)(v5 + *v4) = v3++;
        v6 = *(_DWORD *)(v5 + *v4 + 8) - ((*(_DWORD *)(v5 + *v4 + 8) >> 1) & 0x55555555);
        *(_WORD *)(v5 + *v4 + 2) = (unsigned __int16)((16843009
                                                     * (((v6 & 0x33333333)
                                                       + ((v6 >> 2) & 0x33333333)
                                                       + (((v6 & 0x33333333) + ((v6 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v7 = HIDWORD(*(_QWORD *)(v5 + *v4 + 8)) - (((unsigned int)HIDWORD(*(_QWORD *)(v5 + *v4 + 8)) >> 1) & 0x55555555);
        *(_WORD *)(v5 + *v4 + 2) += (unsigned __int16)((16843009
                                                      * (((v7 & 0x33333333)
                                                        + ((v7 >> 2) & 0x33333333)
                                                        + (((v7 & 0x33333333) + ((v7 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        *(_WORD *)(a1 + 202) += *(_WORD *)(v5 + *v4 + 2);
      }
      while ( v3 < *v2 );
    }
    return 1;
  }
  else
  {
    FreeProcessorGroupInfo(a1);
    return 0;
  }
}
