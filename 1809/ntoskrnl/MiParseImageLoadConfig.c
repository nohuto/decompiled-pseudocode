/*
 * XREFs of MiParseImageLoadConfig @ 0x140651A9C
 * Callers:
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiFreeImageCfgContext @ 0x1400DA50C (MiFreeImageCfgContext.c)
 *     MiIsImportOptimizationEnabled @ 0x1400DA590 (MiIsImportOptimizationEnabled.c)
 *     MiIsRetpolineEnabled @ 0x1400DA5F0 (MiIsRetpolineEnabled.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiLogRelocationRva @ 0x14064C34C (MiLogRelocationRva.c)
 *     MiFreeImageRetpolineContext @ 0x140651FC4 (MiFreeImageRetpolineContext.c)
 *     MiCaptureImageCfgContext @ 0x1406533F0 (MiCaptureImageCfgContext.c)
 *     RtlCreateRvaList @ 0x1406537E0 (RtlCreateRvaList.c)
 *     MiFreeImageLoadConfig @ 0x1406FE53C (MiFreeImageLoadConfig.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x14074CC3C (MiCaptureDynamicRelocationTableRva.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140854B34 (MiCaptureRetpolineRelocationTables.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140854D60 (MiCreateRetpolineRelocationInformation.c)
 */

__int64 __fastcall MiParseImageLoadConfig(__int64 a1, char *a2, unsigned int a3, __int64 *a4, __int64 a5, int *a6)
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
  int v19; // eax
  int v20; // r9d
  int v21; // eax
  int v22; // r8d
  int v23; // eax
  size_t v25; // [rsp+28h] [rbp-340h]
  _DWORD NtHeader[7]; // [rsp+64h] [rbp-304h] BYREF
  int v27; // [rsp+80h] [rbp-2E8h]
  __int64 v28; // [rsp+88h] [rbp-2E0h]
  __int64 v29; // [rsp+90h] [rbp-2D8h]
  __int64 v30; // [rsp+98h] [rbp-2D0h]
  __int64 v31; // [rsp+A0h] [rbp-2C8h]
  __int64 v32; // [rsp+A8h] [rbp-2C0h]
  __int64 v33; // [rsp+B0h] [rbp-2B8h]
  __int64 v34; // [rsp+B8h] [rbp-2B0h]
  char *v35; // [rsp+C0h] [rbp-2A8h]
  __int64 *v36; // [rsp+C8h] [rbp-2A0h]
  int *v37; // [rsp+D0h] [rbp-298h]
  char *v38; // [rsp+D8h] [rbp-290h]
  __int64 v39; // [rsp+E0h] [rbp-288h]
  char *v40; // [rsp+E8h] [rbp-280h]
  __int64 *v41; // [rsp+F0h] [rbp-278h]
  _OWORD Src[17]; // [rsp+100h] [rbp-268h] BYREF
  __int64 v43[34]; // [rsp+210h] [rbp-158h] BYREF

  v28 = a1;
  v34 = a1;
  v39 = a1;
  v35 = a2;
  v40 = a2;
  NtHeader[3] = a3;
  NtHeader[0] = a3;
  v36 = a4;
  v41 = a4;
  v37 = a6;
  v10 = 0LL;
  v31 = 0LL;
  v27 = 0;
  RetpolineRelocationInformation = 0;
  memset(Src, 0, sizeof(Src));
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v30 = v12;
  v32 = v12;
  v29 = *a4;
  v33 = v29;
  v13 = *((unsigned int *)a4 + 24);
  if ( (_DWORD)v13 )
  {
    v14 = *((_DWORD *)a4 + 25);
    v15 = *((_WORD *)a4 + 24);
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
    if ( (unsigned int)v13 + v16 > (unsigned int)v13 && (unsigned int)v13 + v16 <= *((_DWORD *)a4 + 4) )
    {
      v17 = (unsigned int *)&a2[v13];
      v38 = &a2[v13];
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
          v18 = *((_DWORD *)a4 + 24);
          if ( v18 + v14 > v18 && v18 + v14 <= *((_DWORD *)a4 + 4) )
          {
            memmove(v43, v17, v14);
            v10 = MiReferenceControlAreaFile(v28);
            MiLogRelocationRva(*((_DWORD *)a4 + 24), v14, v10, v28);
            *(_QWORD *)&Src[0] = v39;
            *((_QWORD *)&Src[0] + 1) = v10;
            *(_QWORD *)&Src[1] = v40;
            *((_QWORD *)&Src[1] + 1) = v29;
            *(_QWORD *)&Src[2] = NtHeader[0];
            *((_QWORD *)&Src[2] + 1) = v41;
            *(_QWORD *)&Src[3] = v43;
            DWORD2(Src[3]) = v14;
            RetpolineRelocationInformation = MiCaptureImageCfgContext(v28, v10, (_DWORD)a2, v29, a3);
            if ( RetpolineRelocationInformation >= 0 )
            {
              v19 = v27 | *a6;
              *a6 = v19;
              a6[1] = *(_WORD *)(v30 + 48) == 452;
              v20 = 0;
              if ( (v19 & 1) != 0 )
              {
                LODWORD(Src[8]) = 1;
                *((_QWORD *)&Src[9] + 1) = MiImageCfgRvaIteratorFirst;
                *(_QWORD *)&Src[10] = MiImageCfgRvaIteratorNext;
                v20 = 1;
                if ( (v19 & 8) != 0 )
                {
                  DWORD1(Src[8]) = 4;
                  Src[12] = 0LL;
                  v20 = 2;
                }
              }
              HIDWORD(Src[8]) = v20;
              if ( !v20
                || (RetpolineRelocationInformation = RtlCreateRvaList(
                                                       (int)Src,
                                                       1,
                                                       452,
                                                       v20,
                                                       &Src[8],
                                                       v25,
                                                       (__int64)(a6 + 2)),
                    RetpolineRelocationInformation >= 0) )
              {
                if ( (MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled()) && *((_WORD *)a4 + 24) == 523 )
                {
                  v21 = MiCaptureDynamicRelocationTableRva(a2, a3, (__int64)v43, v14, (PIMAGE_NT_HEADERS)NtHeader);
                  RetpolineRelocationInformation = v21;
                  if ( v21 == -1073741637 )
                  {
LABEL_27:
                    RetpolineRelocationInformation = 0;
                    goto LABEL_34;
                  }
                  if ( v21 >= 0 )
                  {
                    v23 = MiCaptureRetpolineRelocationTables((_DWORD)a2, a3, v22, NtHeader[0], (__int64)&Src[6]);
                    RetpolineRelocationInformation = v23;
                    if ( v23 == -1073741637 )
                      goto LABEL_27;
                    if ( v23 >= 0 )
                      RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation(
                                                         &Src[6],
                                                         &Src[4],
                                                         a3,
                                                         a6 + 4);
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
    MiDereferenceControlAreaFile(v28, v10);
  MiFreeImageCfgContext((__int64)&Src[4]);
  MiFreeImageRetpolineContext(&Src[6]);
  return (unsigned int)RetpolineRelocationInformation;
}
