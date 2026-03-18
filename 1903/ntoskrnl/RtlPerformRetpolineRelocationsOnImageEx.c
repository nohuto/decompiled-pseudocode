/*
 * XREFs of RtlPerformRetpolineRelocationsOnImageEx @ 0x140187478
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImage @ 0x1403154A0 (RtlPerformRetpolineRelocationsOnImage.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409F0194 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409F0BB8 (MiApplyRetpolineToBootDrivers.c)
 * Callees:
 *     RtlpApplyGenericRetpolineFixup @ 0x140097BE0 (RtlpApplyGenericRetpolineFixup.c)
 *     RtlpConstructSwitchJumpRelocationFixup @ 0x1401362F8 (RtlpConstructSwitchJumpRelocationFixup.c)
 *     RtlApplyImportRelocationToImage @ 0x140187A3C (RtlApplyImportRelocationToImage.c)
 *     RtlApplyIndirectRelocationToImage @ 0x140187AF0 (RtlApplyIndirectRelocationToImage.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140187B9C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140187CD4 (RtlpCaptureDynamicRelocationTableRva.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall RtlPerformRetpolineRelocationsOnImageEx(
        char *BaseAddress,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned int a7,
        int a8)
{
  char *v10; // r14
  char *v11; // rsi
  char *v12; // r13
  __int64 result; // rax
  char *v14; // rcx
  unsigned __int64 v15; // rdx
  char *v16; // rcx
  unsigned int v17; // r15d
  unsigned int *v18; // rbx
  int v19; // r13d
  unsigned __int64 v20; // r14
  unsigned int *v21; // rdi
  unsigned __int64 v22; // r12
  unsigned int *v23; // rbx
  int v24; // r13d
  unsigned __int64 v25; // rsi
  unsigned int *v26; // rdi
  unsigned int *v27; // rdi
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r14
  unsigned __int16 *v30; // rsi
  int v31; // ebx
  int v33; // [rsp+48h] [rbp-69h]
  char *v34; // [rsp+48h] [rbp-69h]
  unsigned __int64 v35; // [rsp+50h] [rbp-61h]
  _DWORD v37[12]; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int64 v38; // [rsp+98h] [rbp-19h] BYREF
  int v39; // [rsp+A0h] [rbp-11h]
  __int16 v40; // [rsp+A4h] [rbp-Dh]

  memset(v37, 0, sizeof(v37));
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  result = RtlpCaptureRetpolineBinaryInfoForImage(BaseAddress, a5 & -(__int64)(a6 != 0), v37);
  if ( (int)result >= 0 )
  {
    result = RtlpCaptureDynamicRelocationTableRva(BaseAddress, a3);
    if ( (int)result >= 0 )
    {
      v14 = &BaseAddress[v33];
      v15 = (unsigned __int64)&v14[*((unsigned int *)v14 + 1) + 8];
      v16 = v14 + 8;
      if ( (unsigned __int64)v16 < v15 )
      {
        do
        {
          switch ( *(_QWORD *)v16 )
          {
            case 3LL:
              v10 = v16;
              break;
            case 4LL:
              v11 = v16;
              break;
            case 5LL:
              v12 = v16;
              break;
          }
          v16 += *((unsigned int *)v16 + 2) + 12;
        }
        while ( (unsigned __int64)v16 < v15 );
        v17 = a7;
        v34 = v12;
        if ( v10 )
        {
          v18 = (unsigned int *)(v10 + 12);
          v38 = (unsigned __int64)&v10[*((unsigned int *)v10 + 2) + 12];
          if ( (unsigned __int64)(v10 + 12) < v38 )
          {
            v19 = a8;
            do
            {
              if ( *v18 < v17 || *v18 >= v17 + v19 )
              {
                v20 = (unsigned __int64)v18 + v18[1];
                v21 = v18 + 2;
                if ( (unsigned __int64)(v18 + 2) < v20 )
                {
                  do
                  {
                    if ( (*v21 & 0xFFF) != 0 || v21 == v18 + 2 )
                      RtlApplyImportRelocationToImage(
                        (_DWORD)BaseAddress,
                        a3,
                        (unsigned int)v37,
                        a5,
                        *v18,
                        (__int64)v21,
                        a6,
                        0);
                    ++v21;
                  }
                  while ( (unsigned __int64)v21 < v20 );
                  v17 = a7;
                  v19 = a8;
                }
              }
              v18 = (unsigned int *)((char *)v18 + v18[1]);
            }
            while ( (unsigned __int64)v18 < v38 );
            v12 = v34;
          }
          if ( !v11 )
          {
LABEL_32:
            if ( !v12 )
              return 0LL;
LABEL_40:
            v27 = (unsigned int *)(v12 + 12);
            v35 = (unsigned __int64)&v12[*((unsigned int *)v12 + 2) + 12];
            if ( (unsigned __int64)(v12 + 12) < v35 )
            {
              v28 = (unsigned __int64)&v12[*((unsigned int *)v12 + 2) + 12];
              do
              {
                if ( *v27 < v17 || *v27 >= v17 + a8 )
                {
                  v29 = (unsigned __int64)v27 + v27[1];
                  v30 = (unsigned __int16 *)(v27 + 2);
                  if ( (unsigned __int64)(v27 + 2) < v29 )
                  {
                    do
                    {
                      if ( (*v30 & 0xFFF) != 0 || v30 == (unsigned __int16 *)(v27 + 2) )
                      {
                        v31 = (*v30 & 0xFFF) + *v27;
                        v38 = 0LL;
                        v39 = 0;
                        v40 = 0;
                        RtlpConstructSwitchJumpRelocationFixup(v31, v37, a5, v30, a6, (__int64)&v38);
                        RtlpApplyGenericRetpolineFixup((unsigned __int64)BaseAddress, a3, &v38, v31);
                      }
                      ++v30;
                    }
                    while ( (unsigned __int64)v30 < v29 );
                    v17 = a7;
                    v28 = v35;
                  }
                }
                v27 = (unsigned int *)((char *)v27 + v27[1]);
              }
              while ( (unsigned __int64)v27 < v28 );
            }
            return 0LL;
          }
LABEL_21:
          v22 = (unsigned __int64)&v11[*((unsigned int *)v11 + 2) + 12];
          v23 = (unsigned int *)(v11 + 12);
          v38 = v22;
          if ( (unsigned __int64)(v11 + 12) < v22 )
          {
            v24 = a8;
            do
            {
              if ( *v23 < v17 || *v23 >= v17 + v24 )
              {
                v25 = (unsigned __int64)v23 + v23[1];
                v26 = v23 + 2;
                if ( (unsigned __int64)(v23 + 2) < v25 )
                {
                  do
                  {
                    if ( (*(_WORD *)v26 & 0xFFF) != 0 || v26 == v23 + 2 )
                      RtlApplyIndirectRelocationToImage(
                        (_DWORD)BaseAddress,
                        a3,
                        (unsigned int)v37,
                        a5,
                        *v23,
                        (__int64)v26,
                        a6);
                    v26 = (unsigned int *)((char *)v26 + 2);
                  }
                  while ( (unsigned __int64)v26 < v25 );
                  v17 = a7;
                  v22 = v38;
                  v24 = a8;
                }
              }
              v23 = (unsigned int *)((char *)v23 + v23[1]);
            }
            while ( (unsigned __int64)v23 < v22 );
            v12 = v34;
          }
          goto LABEL_32;
        }
        if ( v11 )
          goto LABEL_21;
        if ( v12 )
          goto LABEL_40;
      }
      return 3221225659LL;
    }
  }
  return result;
}
