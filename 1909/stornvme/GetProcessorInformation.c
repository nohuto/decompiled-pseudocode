/*
 * XREFs of GetProcessorInformation @ 0x1C0009134
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000AF04 (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00052B0 (__security_check_cookie.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     FreeProcessorInfo @ 0x1C0008CFC (FreeProcessorInfo.c)
 */

char __fastcall GetProcessorInformation(__int64 a1)
{
  unsigned __int16 v2; // si
  unsigned __int16 v3; // ax
  _QWORD *v4; // r14
  _DWORD *v5; // r15
  __int64 *v6; // r13
  unsigned int v7; // ecx
  unsigned __int16 v8; // r12
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int16 v12; // cx
  __int64 v13; // rbx
  char v14; // r15
  __int64 v15; // r12
  __int64 v16; // rcx
  char v18; // [rsp+38h] [rbp-29h]
  unsigned __int16 v19; // [rsp+3Ah] [rbp-27h]
  unsigned __int16 v20; // [rsp+3Ch] [rbp-25h]
  __int16 v21; // [rsp+40h] [rbp-21h] BYREF
  char v22; // [rsp+42h] [rbp-1Fh]
  char v23; // [rsp+43h] [rbp-1Eh]
  unsigned int v24; // [rsp+44h] [rbp-1Dh]
  __int64 v25; // [rsp+48h] [rbp-19h]
  _BYTE v26[56]; // [rsp+50h] [rbp-11h] BYREF

  v18 = 1;
  FreeProcessorInfo(a1);
  v2 = 0;
  if ( !*(_WORD *)(a1 + 200) )
    goto LABEL_26;
  v3 = *(_WORD *)(a1 + 202);
  if ( !v3 )
    goto LABEL_26;
  v4 = (_QWORD *)(a1 + 232);
  StorPortExtendedFunction(0LL, a1, 48 * (unsigned int)v3);
  if ( !*(_QWORD *)(a1 + 232) )
    goto LABEL_26;
  NVMeZeroMemory(*(void **)(a1 + 232), 48 * *(unsigned __int16 *)(a1 + 202));
  v5 = (_DWORD *)(a1 + 208);
  StorPortExtendedFunction(22LL, a1, a1 + 208);
  StorPortExtendedFunction(20LL, a1, a1 + 204);
  if ( *(_DWORD *)(a1 + 204)
    && (v6 = (__int64 *)(a1 + 224),
        StorPortExtendedFunction(0LL, a1, (unsigned int)(24 * (*v5 + 1))),
        *(_QWORD *)(a1 + 224)) )
  {
    NVMeZeroMemory(*(void **)(a1 + 224), 24 * (*v5 + 1));
    v7 = 0;
    v20 = 0;
    v8 = 0;
    do
    {
      v9 = *v6;
      v25 = 3LL * v8;
      *(_WORD *)(v9 + 8 * v25) = v8;
      StorPortExtendedFunction(21LL, a1, v7);
      v10 = *(_DWORD *)(*v6 + 24LL * v8 + 8) - ((*(_DWORD *)(*v6 + 24LL * v8 + 8) >> 1) & 0x55555555);
      *(_WORD *)(*v6 + 24LL * v8 + 2) = (unsigned __int16)((16843009
                                                          * (((v10 & 0x33333333)
                                                            + ((v10 >> 2) & 0x33333333)
                                                            + (((v10 & 0x33333333) + ((v10 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v11 = HIDWORD(*(_QWORD *)(*v6 + 24LL * v8 + 8))
          - (((unsigned int)HIDWORD(*(_QWORD *)(*v6 + 24LL * v8 + 8)) >> 1) & 0x55555555);
      *(_WORD *)(*v6 + 24LL * v8 + 2) += (unsigned __int16)((16843009
                                                           * (((v11 & 0x33333333)
                                                             + ((v11 >> 2) & 0x33333333)
                                                             + (((v11 & 0x33333333) + ((v11 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v12 = *(_WORD *)(*v6 + 24LL * v8 + 16);
      v19 = v12;
      if ( *(_WORD *)(*v6 + 24LL * v8 + 2) )
      {
        v13 = *(_QWORD *)(*v6 + 24LL * v8 + 8);
        if ( v13 )
        {
          v14 = v18;
          v15 = v25;
          do
          {
            if ( _bittest64(&v13, (unsigned __int8)v2) )
            {
              v21 = v12;
              v22 = v2;
              v23 = 0;
              StorPortExtendedFunction(56LL, a1, &v21);
              *(_DWORD *)(*v4 + 48LL * v24) = v24;
              *(_QWORD *)(*v4 + 48LL * v24 + 24) = *(_QWORD *)(a1 + 216) + 16LL * v19;
              *(_QWORD *)(48LL * v24 + *v4 + 32) = *v6 + 8 * v15;
              if ( (*(_DWORD *)(a1 + 3748) & 0x10) != 0 && v14 )
              {
                memset(v26, 0, sizeof(v26));
                LODWORD(v25) = 56;
                if ( (unsigned int)StorPortExtendedFunction(23LL, a1, &v21) )
                  goto LABEL_19;
                v16 = *(_QWORD *)&v26[32];
                if ( !*(_QWORD *)&v26[32] )
                  goto LABEL_19;
                if ( *(_WORD *)&v26[40] == v21 )
                {
                  _bittestandreset64(&v16, v2);
                  *(_QWORD *)&v26[32] = v16;
                }
                if ( v16 )
                  *(_OWORD *)(48LL * v24 + *v4 + 8) = *(_OWORD *)&v26[32];
                else
LABEL_19:
                  v14 = 0;
              }
              v12 = v19;
              _bittestandreset64(&v13, v2);
            }
            ++v2;
          }
          while ( v13 );
          v8 = v20;
          v18 = v14;
          v5 = (_DWORD *)(a1 + 208);
        }
        v2 = 0;
      }
      v7 = ++v8;
      v20 = v8;
    }
    while ( (unsigned int)v8 <= *v5 );
    return 1;
  }
  else
  {
LABEL_26:
    FreeProcessorInfo(a1);
    return 0;
  }
}
