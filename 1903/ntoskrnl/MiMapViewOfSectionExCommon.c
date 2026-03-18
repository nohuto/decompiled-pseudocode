/*
 * XREFs of MiMapViewOfSectionExCommon @ 0x1406788E4
 * Callers:
 *     MmMapViewOfSectionEx @ 0x1400AF744 (MmMapViewOfSectionEx.c)
 *     NtMapViewOfSectionEx @ 0x1406EA1E0 (NtMapViewOfSectionEx.c)
 *     MiPerformImageHotPatch @ 0x1408905D8 (MiPerformImageHotPatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiMapViewOfSectionCommon @ 0x140608400 (MiMapViewOfSectionCommon.c)
 *     MiMapParametersInitialize @ 0x140608C30 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140608D80 (MiMapViewOfSection.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x140678174 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiMapExParametersInitialize @ 0x140678B84 (MiMapExParametersInitialize.c)
 *     DbgkMapViewOfSection @ 0x140678CC0 (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x1406EE8D8 (EtwTiLogMapExecView.c)
 */

NTSTATUS __fastcall MiMapViewOfSectionExCommon(
        void *a1,
        void *a2,
        int a3,
        PVOID *a4,
        PVOID *a5,
        _QWORD *a6,
        int a7,
        int a8,
        __int64 *Address,
        unsigned int a10,
        int a11,
        __int64 a12,
        KPROCESSOR_MODE a13,
        int a14)
{
  NTSTATUS result; // eax
  int MapExtendedParameters; // ebx
  int v19; // edx
  PVOID v20[7]; // [rsp+58h] [rbp-120h] BYREF
  _QWORD v21[16]; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD v22[13]; // [rsp+110h] [rbp-68h] BYREF

  memset(v21, 0, sizeof(v21));
  memset(v20, 0, 0x30uLL);
  memset(v22, 0, 0x40uLL);
  result = MiMapViewOfSectionCommon(a2, a1, a3, a4, (unsigned __int64)a6, (unsigned __int64)a5, a8, 0LL, a13, v20);
  if ( result < 0 )
  {
    if ( v20[0] )
      ++dword_140466324;
    else
      ++dword_140466320;
  }
  else
  {
    MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, a10, a13, 6, v22);
    if ( MapExtendedParameters >= 0 )
    {
      MapExtendedParameters = MiMapParametersInitialize(
                                v21,
                                (__int64)v20[4],
                                (__int64)v20[5],
                                (__int64)v20[0],
                                (__int64)v20[1],
                                a7,
                                a8,
                                0LL);
      if ( MapExtendedParameters >= 0 )
      {
        MapExtendedParameters = MiMapExParametersInitialize(v21, v20, v22);
        if ( MapExtendedParameters >= 0 )
        {
          HIDWORD(v21[9]) = a11;
          v21[10] = a12;
          HIDWORD(v21[7]) |= a14;
          MapExtendedParameters = MiMapViewOfSection((__int64)v20[4], (__int64)v21, v20, 0LL, &v20[2], 1, 0);
          if ( MapExtendedParameters >= 0 )
          {
            if ( (v21[9] & 4) != 0 )
              DbgkMapViewOfSection((ULONG_PTR)v20[5]);
            if ( (*((_DWORD *)v20[4] + 14) & 0x20) == 0 && ((__int64)v20[3] & 2) != 0 )
            {
              LOBYTE(v19) = a13;
              EtwTiLogMapExecView(v20[5], v19, v20[0], v20[1], a7, a8);
            }
            *a4 = v20[0];
            *a6 = v21[3];
            if ( a5 )
              *a5 = v20[2];
          }
        }
      }
    }
    if ( MapExtendedParameters < 0 )
    {
      if ( v20[0] )
        ++dword_140466324;
      else
        ++dword_140466320;
    }
    if ( !a3 )
    {
      ObfDereferenceObject(v20[4]);
      ObfDereferenceObjectWithTag(v20[5], 0x77566D4Du);
    }
    return MapExtendedParameters;
  }
  return result;
}
