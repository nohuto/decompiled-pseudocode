/*
 * XREFs of MiParseImageLoadConfig @ 0x140659FF0
 * Callers:
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009C6C (MiDereferenceControlAreaFile.c)
 *     MiFreeImageCfgContext @ 0x140097570 (MiFreeImageCfgContext.c)
 *     MiIsRetpolineEnabled @ 0x140097E88 (MiIsRetpolineEnabled.c)
 *     MiIsImportOptimizationEnabled @ 0x1401543D4 (MiIsImportOptimizationEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiLogRelocationRva @ 0x140657E30 (MiLogRelocationRva.c)
 *     MiFreeImageRetpolineContext @ 0x14065A548 (MiFreeImageRetpolineContext.c)
 *     MiCaptureImageCfgContext @ 0x14065ABB0 (MiCaptureImageCfgContext.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x14065AF5C (MiCaptureDynamicRelocationTableRva.c)
 *     RtlCreateRvaList @ 0x14066FE24 (RtlCreateRvaList.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406D5090 (MiCaptureRetpolineRelocationTables.c)
 *     MiCreateRetpolineRelocationInformation @ 0x1406EA2E0 (MiCreateRetpolineRelocationInformation.c)
 *     MiFreeImageLoadConfig @ 0x14072A1C0 (MiFreeImageLoadConfig.c)
 */

__int64 __fastcall MiParseImageLoadConfig(_DWORD *a1, char *a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  ULONG_PTR v10; // r13
  int RetpolineRelocationInformation; // ebx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int16 v15; // ax
  unsigned int v16; // eax
  unsigned int *v17; // rdx
  unsigned int v18; // eax
  int v19; // edx
  __int64 v20; // rax
  int v21; // r9d
  int v22; // eax
  int v23; // r8d
  int v24; // eax
  int v26; // [rsp+28h] [rbp-340h]
  size_t v27; // [rsp+28h] [rbp-340h]
  _DWORD NtHeader[7]; // [rsp+64h] [rbp-304h] BYREF
  int v29; // [rsp+80h] [rbp-2E8h] BYREF
  _DWORD *v30; // [rsp+88h] [rbp-2E0h]
  __int64 v31; // [rsp+90h] [rbp-2D8h]
  __int64 v32; // [rsp+98h] [rbp-2D0h]
  __int64 v33; // [rsp+A0h] [rbp-2C8h]
  __int64 v34; // [rsp+A8h] [rbp-2C0h]
  __int64 v35; // [rsp+B0h] [rbp-2B8h]
  _DWORD *v36; // [rsp+B8h] [rbp-2B0h]
  char *v37; // [rsp+C0h] [rbp-2A8h]
  __int64 v38; // [rsp+C8h] [rbp-2A0h]
  __int64 v39; // [rsp+D0h] [rbp-298h]
  char *v40; // [rsp+D8h] [rbp-290h]
  _DWORD *v41; // [rsp+E0h] [rbp-288h]
  char *v42; // [rsp+E8h] [rbp-280h]
  __int64 v43; // [rsp+F0h] [rbp-278h]
  _OWORD Src[17]; // [rsp+100h] [rbp-268h] BYREF
  __int64 v45[34]; // [rsp+210h] [rbp-158h] BYREF

  v30 = a1;
  v36 = a1;
  v41 = a1;
  v37 = a2;
  v42 = a2;
  NtHeader[3] = a3;
  NtHeader[0] = a3;
  v38 = a4;
  v43 = a4;
  v39 = a6;
  memset(v45, 0, 0x108uLL);
  v10 = 0LL;
  v33 = 0LL;
  v29 = 0;
  RetpolineRelocationInformation = 0;
  memset(Src, 0, sizeof(Src));
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v32 = v12;
  v34 = v12;
  v31 = *(_QWORD *)a4;
  v35 = v31;
  v13 = *(unsigned int *)(a4 + 96);
  if ( (_DWORD)v13 )
  {
    v14 = *(_DWORD *)(a4 + 100);
    v15 = *(_WORD *)(a4 + 48);
    if ( v15 == 523 )
    {
      v16 = 148;
    }
    else
    {
      if ( v15 != 267 )
        goto LABEL_32;
      v16 = 92;
    }
    NtHeader[1] = v16;
    if ( (unsigned int)v13 + v16 > (unsigned int)v13 && (unsigned int)v13 + v16 <= *(_DWORD *)(a4 + 16) )
    {
      v17 = (unsigned int *)&a2[v13];
      v40 = &a2[v13];
      if ( v14 >= v16 )
        goto LABEL_13;
      if ( *(_WORD *)(v12 + 48) == 332 )
      {
        if ( v14 > 4 )
          v14 = *v17;
        if ( v14 >= v16 )
        {
LABEL_13:
          if ( v14 >= 0x108 )
            v14 = 264;
          v18 = *(_DWORD *)(a4 + 96);
          if ( v18 + v14 > v18 && v18 + v14 <= *(_DWORD *)(a4 + 16) )
          {
            memmove(v45, v17, v14);
            v10 = MiReferenceControlAreaFile((__int64)v30);
            MiLogRelocationRva(*(_DWORD *)(a4 + 96), v14, v10, v30);
            *(_QWORD *)&Src[0] = v41;
            *((_QWORD *)&Src[0] + 1) = v10;
            *(_QWORD *)&Src[1] = v42;
            *((_QWORD *)&Src[1] + 1) = v31;
            *(_QWORD *)&Src[2] = NtHeader[0];
            *((_QWORD *)&Src[2] + 1) = v43;
            *(_QWORD *)&Src[3] = v45;
            DWORD2(Src[3]) = v14;
            RetpolineRelocationInformation = MiCaptureImageCfgContext(
                                               (int)v30,
                                               v10,
                                               (int)a2,
                                               v31,
                                               a3,
                                               v26,
                                               a4,
                                               (__int64)v45,
                                               v14,
                                               (__int64)&v29,
                                               &Src[4]);
            if ( RetpolineRelocationInformation >= 0 )
            {
              v19 = v29 | *(_DWORD *)a6;
              *(_DWORD *)a6 = v19;
              v20 = v32;
              *(_DWORD *)(a6 + 4) = *(_WORD *)(v32 + 48) == 452;
              *(_WORD *)(a6 + 8) = *(_WORD *)(v20 + 48);
              v21 = 0;
              if ( (v19 & 1) != 0 )
              {
                LODWORD(Src[8]) = 1;
                *((_QWORD *)&Src[9] + 1) = MiImageCfgRvaIteratorFirst;
                *(_QWORD *)&Src[10] = MiImageCfgRvaIteratorNext;
                v21 = 1;
                if ( (v19 & 8) != 0 )
                {
                  DWORD1(Src[8]) = 4;
                  Src[12] = 0LL;
                  v21 = 2;
                }
              }
              HIDWORD(Src[8]) = v21;
              if ( !v21
                || (RetpolineRelocationInformation = RtlCreateRvaList((int)Src, v19, 452, v21, &Src[8], v27, a6 + 16),
                    RetpolineRelocationInformation >= 0) )
              {
                if ( (MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled()) && *(_WORD *)(a4 + 48) == 523 )
                {
                  v22 = MiCaptureDynamicRelocationTableRva(a2, a3, (__int64)v45, v14, (PIMAGE_NT_HEADERS)NtHeader);
                  RetpolineRelocationInformation = v22;
                  if ( v22 == -1073741637 )
                  {
LABEL_27:
                    RetpolineRelocationInformation = 0;
                    goto LABEL_34;
                  }
                  if ( v22 >= 0 )
                  {
                    v24 = MiCaptureRetpolineRelocationTables((_DWORD)a2, a3, v23, NtHeader[0], (__int64)&Src[6]);
                    RetpolineRelocationInformation = v24;
                    if ( v24 == -1073741637 )
                      goto LABEL_27;
                    if ( v24 >= 0 )
                      RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation(
                                                         &Src[6],
                                                         &Src[4],
                                                         a3,
                                                         a6 + 24);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_32:
  if ( RetpolineRelocationInformation < 0 )
    MiFreeImageLoadConfig(a6);
LABEL_34:
  if ( v10 )
    MiDereferenceControlAreaFile((__int64)v30, v10);
  MiFreeImageCfgContext((__int64)&Src[4]);
  MiFreeImageRetpolineContext(&Src[6]);
  return (unsigned int)RetpolineRelocationInformation;
}
