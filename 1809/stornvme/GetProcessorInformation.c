/*
 * XREFs of GetProcessorInformation @ 0x1C000BE24
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000DABC (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     FreeProcessorInfo @ 0x1C000BA48 (FreeProcessorInfo.c)
 */

char __fastcall GetProcessorInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 v8; // si
  unsigned __int16 v9; // ax
  _QWORD *v10; // r14
  _DWORD *v11; // r15
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 *v14; // r13
  unsigned int v15; // ecx
  unsigned __int16 v16; // r12
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  __int16 v20; // cx
  __int64 v21; // rbx
  char v22; // r15
  __int64 v23; // r12
  __int64 v24; // rcx
  char v26; // [rsp+38h] [rbp-29h]
  unsigned __int16 v27; // [rsp+3Ah] [rbp-27h]
  unsigned __int16 v28; // [rsp+3Ch] [rbp-25h]
  __int16 v29; // [rsp+40h] [rbp-21h] BYREF
  char v30; // [rsp+42h] [rbp-1Fh]
  char v31; // [rsp+43h] [rbp-1Eh]
  unsigned int v32; // [rsp+44h] [rbp-1Dh] BYREF
  __int64 v33; // [rsp+48h] [rbp-19h]
  _BYTE v34[56]; // [rsp+50h] [rbp-11h] BYREF

  v26 = 1;
  FreeProcessorInfo(a1, a2, a3, a4);
  v8 = 0;
  if ( !*(_WORD *)(a1 + 192) )
    goto LABEL_26;
  v9 = *(_WORD *)(a1 + 194);
  if ( !v9 )
    goto LABEL_26;
  v10 = (_QWORD *)(a1 + 224);
  StorPortExtendedFunction(0LL, a1, 48 * (unsigned int)v9, 1701672526LL);
  if ( !*(_QWORD *)(a1 + 224) )
    goto LABEL_26;
  NVMeZeroMemory(*(void **)(a1 + 224), 48 * *(unsigned __int16 *)(a1 + 194));
  v11 = (_DWORD *)(a1 + 200);
  StorPortExtendedFunction(22LL, a1, a1 + 200, v12);
  StorPortExtendedFunction(20LL, a1, a1 + 196, v13);
  if ( *(_DWORD *)(a1 + 196)
    && (v14 = (__int64 *)(a1 + 216),
        StorPortExtendedFunction(0LL, a1, (unsigned int)(24 * (*v11 + 1)), 1701672526LL),
        *(_QWORD *)(a1 + 216)) )
  {
    NVMeZeroMemory(*(void **)(a1 + 216), 24 * (*v11 + 1));
    v15 = 0;
    v28 = 0;
    v16 = 0;
    do
    {
      v17 = *v14;
      v33 = 3LL * v16;
      *(_WORD *)(v17 + 8 * v33) = v16;
      StorPortExtendedFunction(21LL, a1, v15, *v14 + 8 + 24LL * v16);
      v18 = *(_DWORD *)(*v14 + 24LL * v16 + 8) - ((*(_DWORD *)(*v14 + 24LL * v16 + 8) >> 1) & 0x55555555);
      *(_WORD *)(*v14 + 24LL * v16 + 2) = (unsigned __int16)((16843009
                                                            * (((v18 & 0x33333333)
                                                              + ((v18 >> 2) & 0x33333333)
                                                              + (((v18 & 0x33333333) + ((v18 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v19 = HIDWORD(*(_QWORD *)(*v14 + 24LL * v16 + 8))
          - (((unsigned int)HIDWORD(*(_QWORD *)(*v14 + 24LL * v16 + 8)) >> 1) & 0x55555555);
      *(_WORD *)(*v14 + 24LL * v16 + 2) += (unsigned __int16)((16843009
                                                             * (((v19 & 0x33333333)
                                                               + ((v19 >> 2) & 0x33333333)
                                                               + (((v19 & 0x33333333) + ((v19 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v20 = *(_WORD *)(*v14 + 24LL * v16 + 16);
      v27 = v20;
      if ( *(_WORD *)(*v14 + 24LL * v16 + 2) )
      {
        v21 = *(_QWORD *)(*v14 + 24LL * v16 + 8);
        if ( v21 )
        {
          v22 = v26;
          v23 = v33;
          do
          {
            if ( _bittest64(&v21, (unsigned __int8)v8) )
            {
              v29 = v20;
              v30 = v8;
              v31 = 0;
              StorPortExtendedFunction(56LL, a1, &v29, &v32);
              *(_DWORD *)(*v10 + 48LL * v32) = v32;
              *(_QWORD *)(*v10 + 48LL * v32 + 24) = *(_QWORD *)(a1 + 208) + 16LL * v27;
              *(_QWORD *)(48LL * v32 + *v10 + 32) = *v14 + 8 * v23;
              if ( (*(_DWORD *)(a1 + 3740) & 0x10) != 0 && v22 )
              {
                memset(v34, 0, sizeof(v34));
                LODWORD(v33) = 56;
                if ( (unsigned int)StorPortExtendedFunction(23LL, a1, &v29, 0LL) )
                  goto LABEL_19;
                v24 = *(_QWORD *)&v34[32];
                if ( !*(_QWORD *)&v34[32] )
                  goto LABEL_19;
                if ( *(_WORD *)&v34[40] == v29 )
                {
                  _bittestandreset64(&v24, v8);
                  *(_QWORD *)&v34[32] = v24;
                }
                if ( v24 )
                  *(_OWORD *)(48LL * v32 + *v10 + 8) = *(_OWORD *)&v34[32];
                else
LABEL_19:
                  v22 = 0;
              }
              v20 = v27;
              _bittestandreset64(&v21, v8);
            }
            ++v8;
          }
          while ( v21 );
          v16 = v28;
          v26 = v22;
          v11 = (_DWORD *)(a1 + 200);
        }
        v8 = 0;
      }
      v15 = ++v16;
      v28 = v16;
    }
    while ( (unsigned int)v16 <= *v11 );
    return 1;
  }
  else
  {
LABEL_26:
    FreeProcessorInfo(a1, v5, v6, v7);
    return 0;
  }
}
