/*
 * XREFs of ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02AE65C
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C02AF2A0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0025F08 (GreGetBitmapBitsSize.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreGetDIBitsInternal @ 0x1C00BE2FC (GreGetDIBitsInternal.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00E2FC8 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E3048 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall GreIcmQueryBrushBitmap(
        HDC a1,
        HBRUSH a2,
        struct tagBITMAPINFO *a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6,
        int *a7)
{
  unsigned int DIBitsInternal; // ebx
  unsigned int v8; // r12d
  int v9; // ebp
  int *v12; // rdi
  BRUSH *v13; // rdi
  unsigned int BitmapBitsSize; // esi
  __int64 result; // rax
  __int64 v16; // [rsp+50h] [rbp-58h] BYREF
  int v17; // [rsp+58h] [rbp-50h]
  int v18; // [rsp+5Ch] [rbp-4Ch]
  BRUSH *v19[9]; // [rsp+60h] [rbp-48h] BYREF

  DIBitsInternal = 0;
  v8 = 0;
  v9 = 0;
  if ( a3 )
  {
    if ( a6 )
    {
      v12 = a7;
      if ( a7 )
      {
        if ( a5 )
        {
          v17 = 0;
          v18 = 0;
          XDCOBJ::vLock((XDCOBJ *)&v16, a1);
          if ( !v16 )
          {
LABEL_22:
            *a6 = v8;
            result = DIBitsInternal;
            *v12 = v9;
            return result;
          }
          if ( (*(_DWORD *)(v16 + 120) & 1) == 0 )
          {
LABEL_21:
            XDCOBJ::vUnlockFast((XDCOBJ *)&v16);
            goto LABEL_22;
          }
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v19, a2);
          v13 = v19[0];
          if ( v19[0] )
          {
            if ( (*((_DWORD *)v19[0] + 10) & 0x80u) != 0 )
            {
              v8 = *((_DWORD *)v19[0] + 21);
              if ( !v8 )
              {
                if ( BRUSH::hFindIcmDIB(v19[0], *(void **)(*(_QWORD *)(v16 + 976) + 248LL)) )
                {
                  v9 = 1;
                }
                else
                {
                  memset(&a3->bmiHeader.biWidth, 0, 0x424uLL);
                  a3->bmiHeader.biSize = 44;
                  DIBitsInternal = GreGetDIBitsInternal(a1, *((_QWORD *)v13 + 3), 0, 0, 0LL, a3, 0, 0, 0x428u);
                  if ( DIBitsInternal )
                  {
                    BitmapBitsSize = GreGetBitmapBitsSize((__int64)a3);
                    if ( BitmapBitsSize )
                    {
                      if ( a4 )
                      {
                        if ( BitmapBitsSize > *a5 )
                          goto LABEL_20;
                        DIBitsInternal = GreGetDIBitsInternal(
                                           a1,
                                           *((_QWORD *)v13 + 3),
                                           0,
                                           abs32(a3->bmiHeader.biHeight),
                                           a4,
                                           a3,
                                           0,
                                           BitmapBitsSize,
                                           0x428u);
                      }
                      else
                      {
                        DIBitsInternal = 1;
                      }
                      *a5 = BitmapBitsSize;
                      goto LABEL_20;
                    }
                    DIBitsInternal = 0;
                  }
                }
              }
            }
          }
LABEL_20:
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v19);
          v12 = a7;
          goto LABEL_21;
        }
      }
    }
  }
  return 0LL;
}
