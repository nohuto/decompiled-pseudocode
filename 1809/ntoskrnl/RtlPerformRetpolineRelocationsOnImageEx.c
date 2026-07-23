/*
 * XREFs of RtlPerformRetpolineRelocationsOnImageEx @ 0x1402F7294
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImage @ 0x1402F7264 (RtlPerformRetpolineRelocationsOnImage.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409B98C4 (MiApplyRetpolineToBootDrivers.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409D3744 (MiApplyRetpolineFixupsToKernelAndHal.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlApplyImportRelocationToImage @ 0x1402F6D34 (RtlApplyImportRelocationToImage.c)
 *     RtlpApplyGenericRetpolineFixup @ 0x1402F774C (RtlpApplyGenericRetpolineFixup.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1402F7794 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1402F7860 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpConstructIndirectRelocationFixup @ 0x1402F7C90 (RtlpConstructIndirectRelocationFixup.c)
 *     RtlpConstructSwitchJumpRelocationFixup @ 0x1402F7E48 (RtlpConstructSwitchJumpRelocationFixup.c)
 */

__int64 __fastcall RtlPerformRetpolineRelocationsOnImageEx(
        char *BaseOfImage,
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
  int *v18; // rbx
  int v19; // r13d
  unsigned __int64 v20; // r14
  int *v21; // rdi
  unsigned int *v22; // rdi
  int v23; // r13d
  unsigned __int64 v24; // r14
  unsigned int *v25; // rsi
  unsigned int v26; // ebx
  unsigned int *v27; // rdi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // r14
  unsigned int *v31; // rsi
  unsigned int v32; // ebx
  int v34; // [rsp+48h] [rbp-79h]
  char *v35; // [rsp+48h] [rbp-79h]
  _BYTE v37[48]; // [rsp+60h] [rbp-61h] BYREF
  _QWORD v38[2]; // [rsp+90h] [rbp-31h] BYREF
  _QWORD v39[2]; // [rsp+A0h] [rbp-21h] BYREF

  memset(v37, 0, sizeof(v37));
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  result = RtlpCaptureRetpolineBinaryInfoForImage(BaseOfImage, a5 & -(__int64)(a6 != 0), v37);
  if ( (int)result >= 0 )
  {
    result = RtlpCaptureDynamicRelocationTableRva(BaseOfImage, a3);
    if ( (int)result >= 0 )
    {
      v14 = &BaseOfImage[v34];
      v15 = (unsigned __int64)&v14[*((unsigned int *)v14 + 1) + 8];
      v16 = v14 + 8;
      if ( (unsigned __int64)v16 >= v15 )
        return 3221225659LL;
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
      v35 = v12;
      v38[0] = v11;
      if ( v10 )
      {
        v18 = (int *)(v10 + 12);
        v39[0] = &v10[*((unsigned int *)v10 + 2) + 12];
        if ( (unsigned __int64)(v10 + 12) < v39[0] )
        {
          v19 = a8;
          do
          {
            if ( *v18 < v17 || *v18 >= v17 + v19 )
            {
              v20 = (unsigned __int64)v18 + (unsigned int)v18[1];
              v21 = v18 + 2;
              if ( (unsigned __int64)(v18 + 2) < v20 )
              {
                do
                {
                  if ( (*v21 & 0xFFF) != 0 || v21 == v18 + 2 )
                    RtlApplyImportRelocationToImage((__int64)BaseOfImage, a3, (int)v37, a5, *v18, v21, a6, 0);
                  ++v21;
                }
                while ( (unsigned __int64)v21 < v20 );
                v17 = a7;
                v19 = a8;
              }
            }
            v18 = (int *)((char *)v18 + (unsigned int)v18[1]);
          }
          while ( (unsigned __int64)v18 < v39[0] );
          v11 = (char *)v38[0];
          v12 = v35;
        }
        if ( !v11 )
        {
LABEL_41:
          if ( !v12 )
            return 0LL;
LABEL_42:
          v27 = (unsigned int *)(v12 + 12);
          v28 = (unsigned __int64)&v12[*((unsigned int *)v12 + 2) + 12];
          v38[0] = v28;
          if ( (unsigned __int64)(v12 + 12) < v28 )
          {
            v29 = v28;
            do
            {
              if ( *v27 < v17 || *v27 >= v17 + a8 )
              {
                v30 = (unsigned __int64)v27 + v27[1];
                v31 = v27 + 2;
                if ( (unsigned __int64)(v27 + 2) < v30 )
                {
                  do
                  {
                    if ( (*(_WORD *)v31 & 0xFFF) != 0 || v31 == v27 + 2 )
                    {
                      v32 = (*(_WORD *)v31 & 0xFFF) + *v27;
                      RtlpConstructSwitchJumpRelocationFixup(v32, (unsigned int)v37, a5, (_DWORD)v31, a6, (__int64)v39);
                      RtlpApplyGenericRetpolineFixup(BaseOfImage, a3, v39, v32);
                    }
                    v31 = (unsigned int *)((char *)v31 + 2);
                  }
                  while ( (unsigned __int64)v31 < v30 );
                  v17 = a7;
                  v29 = v38[0];
                }
              }
              v27 = (unsigned int *)((char *)v27 + v27[1]);
            }
            while ( (unsigned __int64)v27 < v29 );
          }
          return 0LL;
        }
      }
      else if ( !v11 )
      {
        if ( !v12 )
          return 3221225659LL;
        goto LABEL_42;
      }
      v22 = (unsigned int *)(v11 + 12);
      v39[0] = &v11[*((unsigned int *)v11 + 2) + 12];
      if ( (unsigned __int64)(v11 + 12) < v39[0] )
      {
        v23 = a8;
        do
        {
          if ( *v22 < v17 || *v22 >= v17 + v23 )
          {
            v24 = (unsigned __int64)v22 + v22[1];
            v25 = v22 + 2;
            if ( (unsigned __int64)(v22 + 2) < v24 )
            {
              do
              {
                if ( (*(_WORD *)v25 & 0xFFF) != 0 || v25 == v22 + 2 )
                {
                  v26 = (*(_WORD *)v25 & 0xFFF) + *v22;
                  RtlpConstructIndirectRelocationFixup(v26, (unsigned int)v37, a5, (_DWORD)v25, a6, (__int64)v38);
                  RtlpApplyGenericRetpolineFixup(BaseOfImage, a3, v38, v26);
                }
                v25 = (unsigned int *)((char *)v25 + 2);
              }
              while ( (unsigned __int64)v25 < v24 );
              v17 = a7;
              v23 = a8;
            }
          }
          v22 = (unsigned int *)((char *)v22 + v22[1]);
        }
        while ( (unsigned __int64)v22 < v39[0] );
        v12 = v35;
      }
      goto LABEL_41;
    }
  }
  return result;
}
