/*
 * XREFs of NtGdiIcmBrushInfo @ 0x1C02AF2A0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0025F08 (GreGetBitmapBitsSize.c)
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02AE65C (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02AE850 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 */

struct tagBITMAPINFO *__fastcall NtGdiIcmBrushInfo(
        HDC a1,
        HBRUSH a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        ULONG64 a5,
        ULONG64 a6,
        ULONG64 a7,
        int a8)
{
  struct tagBITMAPINFO *result; // rax
  struct tagBITMAPINFO *v11; // r14
  unsigned int v12; // edi
  struct tagBITMAPINFO *v13; // rcx
  __int64 v14; // r8
  unsigned int *v15; // rcx
  unsigned int BitmapBitsSize; // eax
  unsigned int v17; // r11d
  ULONG64 v18; // rcx
  unsigned int *v19; // rdx
  struct tagBITMAPINFO *v20; // rax
  __int64 v21; // r8
  _DWORD *v22; // rdx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  unsigned int v25; // [rsp+40h] [rbp-48h] BYREF
  int v26; // [rsp+44h] [rbp-44h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-40h] BYREF
  struct tagBITMAPINFO *v28; // [rsp+50h] [rbp-38h]

  v25 = 0;
  result = (struct tagBITMAPINFO *)PALLOCMEM2(0x428uLL, 1835231559LL, 0);
  v11 = result;
  v28 = result;
  if ( result )
  {
    if ( !a8 )
    {
      v26 = 0;
      v27 = 0;
      if ( a4 )
      {
        v19 = (unsigned int *)a5;
        if ( a5 >= MmUserProbeAddress )
          v19 = (unsigned int *)MmUserProbeAddress;
        v25 = *v19;
        ProbeForWrite((volatile void *)a4, v25, 4u);
      }
      v12 = GreIcmQueryBrushBitmap(a1, a2, v11, a4, &v25, &v27, &v26);
      if ( v12 )
      {
        ProbeForWrite((volatile void *)a3, 0x428uLL, 4u);
        v20 = v11;
        v21 = 8LL;
        do
        {
          *(_OWORD *)a3 = *(_OWORD *)&v20->bmiHeader.biSize;
          *(_OWORD *)(a3 + 16) = *(_OWORD *)&v20->bmiHeader.biCompression;
          *(_OWORD *)(a3 + 32) = *(_OWORD *)&v20->bmiHeader.biClrUsed;
          *(_OWORD *)(a3 + 48) = *(_OWORD *)&v20[1].bmiHeader.biWidth;
          *(_OWORD *)(a3 + 64) = *(_OWORD *)&v20[1].bmiHeader.biSizeImage;
          *(_OWORD *)(a3 + 80) = *(_OWORD *)&v20[1].bmiHeader.biClrImportant;
          *(_OWORD *)(a3 + 96) = *(_OWORD *)&v20[2].bmiHeader.biHeight;
          a3 += 128LL;
          *(_OWORD *)(a3 - 16) = *(_OWORD *)&v20[2].bmiHeader.biXPelsPerMeter;
          v20 = (struct tagBITMAPINFO *)((char *)v20 + 128);
          --v21;
        }
        while ( v21 );
        *(_OWORD *)a3 = *(_OWORD *)&v20->bmiHeader.biSize;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)&v20->bmiHeader.biCompression;
        *(_QWORD *)(a3 + 32) = *(_QWORD *)&v20->bmiHeader.biClrUsed;
        v22 = (_DWORD *)a5;
        if ( a5 >= MmUserProbeAddress )
          v22 = (_DWORD *)MmUserProbeAddress;
        *v22 = v25;
        v23 = (_DWORD *)a7;
        if ( a7 )
        {
          if ( a7 >= MmUserProbeAddress )
            v23 = (_DWORD *)MmUserProbeAddress;
          *v23 = v26;
        }
        v24 = (_DWORD *)a6;
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v24 = (_DWORD *)MmUserProbeAddress;
          *v24 = v27;
        }
      }
      goto LABEL_40;
    }
    if ( a8 == 1 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + 1064 > MmUserProbeAddress || a3 + 1064 < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v13 = result;
      v14 = 8LL;
      do
      {
        *(_OWORD *)&v13->bmiHeader.biSize = *(_OWORD *)a3;
        *(_OWORD *)&v13->bmiHeader.biCompression = *(_OWORD *)(a3 + 16);
        *(_OWORD *)&v13->bmiHeader.biClrUsed = *(_OWORD *)(a3 + 32);
        *(_OWORD *)&v13[1].bmiHeader.biWidth = *(_OWORD *)(a3 + 48);
        *(_OWORD *)&v13[1].bmiHeader.biSizeImage = *(_OWORD *)(a3 + 64);
        *(_OWORD *)&v13[1].bmiHeader.biClrImportant = *(_OWORD *)(a3 + 80);
        *(_OWORD *)&v13[2].bmiHeader.biHeight = *(_OWORD *)(a3 + 96);
        v13 = (struct tagBITMAPINFO *)((char *)v13 + 128);
        *(_OWORD *)&v13[-1].bmiHeader.biYPelsPerMeter = *(_OWORD *)(a3 + 112);
        a3 += 128LL;
        --v14;
      }
      while ( v14 );
      *(_OWORD *)&v13->bmiHeader.biSize = *(_OWORD *)a3;
      *(_OWORD *)&v13->bmiHeader.biCompression = *(_OWORD *)(a3 + 16);
      *(_QWORD *)&v13->bmiHeader.biClrUsed = *(_QWORD *)(a3 + 32);
      v15 = (unsigned int *)a5;
      if ( a5 >= MmUserProbeAddress )
        v15 = (unsigned int *)MmUserProbeAddress;
      v25 = *v15;
      BitmapBitsSize = GreGetBitmapBitsSize((__int64)result);
      if ( BitmapBitsSize && BitmapBitsSize <= v17 )
      {
        if ( (a4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = a4 + BitmapBitsSize;
        if ( v18 > MmUserProbeAddress || v18 < a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v12 = GreIcmSetBrushBitmap(a1, a2, v11, (void *)a4);
        goto LABEL_40;
      }
    }
    else
    {
      EngSetLastError(0x57u);
    }
    v12 = 0;
LABEL_40:
    Win32FreePool(v11);
    return (struct tagBITMAPINFO *)v12;
  }
  return result;
}
