/*
 * XREFs of MiMapViewOfSectionExCommon @ 0x14067E25C
 * Callers:
 *     MmMapViewOfSectionEx @ 0x1400E5CE4 (MmMapViewOfSectionEx.c)
 *     NtMapViewOfSectionEx @ 0x1406EB3D0 (NtMapViewOfSectionEx.c)
 *     MiPerformImageHotPatch @ 0x14088FDF8 (MiPerformImageHotPatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiMapViewOfSectionCommon @ 0x140609F10 (MiMapViewOfSectionCommon.c)
 *     MiMapParametersInitialize @ 0x14060A740 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x14060A890 (MiMapViewOfSection.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x14067D884 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiMapExParametersInitialize @ 0x14067E4FC (MiMapExParametersInitialize.c)
 *     DbgkMapViewOfSection @ 0x14067E638 (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x1406F0428 (EtwTiLogMapExecView.c)
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
      ++dword_140466024;
    else
      ++dword_140466020;
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
        ++dword_140466024;
      else
        ++dword_140466020;
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
