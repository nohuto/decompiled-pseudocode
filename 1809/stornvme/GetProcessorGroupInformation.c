/*
 * XREFs of GetProcessorGroupInformation @ 0x1C000BC94
 * Callers:
 *     NVMeControllerFilterResouceRequirements @ 0x1C000D798 (NVMeControllerFilterResouceRequirements.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     FreeProcessorGroupInfo @ 0x1C000B9FC (FreeProcessorGroupInfo.c)
 */

char __fastcall GetProcessorGroupInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 v10; // bp
  __int64 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // ecx
  unsigned int v15; // eax

  FreeProcessorGroupInfo(a1, a2, a3, a4);
  v5 = (unsigned __int16 *)(a1 + 192);
  StorPortExtendedFunction(18LL, a1, a1 + 192, v6);
  v10 = 0;
  if ( *(_WORD *)(a1 + 192)
    && (v11 = (__int64 *)(a1 + 208),
        StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 192), 1701672526LL),
        *(_QWORD *)(a1 + 208)) )
  {
    NVMeZeroMemory(*(void **)(a1 + 208), 16 * *v5);
    if ( *v5 )
    {
      v12 = *v11;
      do
      {
        v13 = 16LL * v10;
        StorPortExtendedFunction(19LL, a1, v10, v13 + v12 + 8);
        *(_WORD *)(v13 + *v11) = v10++;
        v14 = *(_DWORD *)(v13 + *v11 + 8) - ((*(_DWORD *)(v13 + *v11 + 8) >> 1) & 0x55555555);
        *(_WORD *)(v13 + *v11 + 2) = (unsigned __int16)((16843009
                                                       * (((v14 & 0x33333333)
                                                         + ((v14 >> 2) & 0x33333333)
                                                         + (((v14 & 0x33333333) + ((v14 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v15 = HIDWORD(*(_QWORD *)(v13 + *v11 + 8))
            - (((unsigned int)HIDWORD(*(_QWORD *)(v13 + *v11 + 8)) >> 1) & 0x55555555);
        *(_WORD *)(v13 + *v11 + 2) += (unsigned __int16)((16843009
                                                        * (((v15 & 0x33333333)
                                                          + ((v15 >> 2) & 0x33333333)
                                                          + (((v15 & 0x33333333) + ((v15 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v12 = *v11;
        *(_WORD *)(a1 + 194) += *(_WORD *)(v13 + *v11 + 2);
      }
      while ( v10 < *v5 );
    }
    return 1;
  }
  else
  {
    FreeProcessorGroupInfo(a1, v7, v8, v9);
    return 0;
  }
}
