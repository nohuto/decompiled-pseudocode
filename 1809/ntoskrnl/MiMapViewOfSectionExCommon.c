/*
 * XREFs of MiMapViewOfSectionExCommon @ 0x140677DD0
 * Callers:
 *     MmMapViewOfSectionEx @ 0x1400F29B8 (MmMapViewOfSectionEx.c)
 *     NtMapViewOfSectionEx @ 0x1406CBE10 (NtMapViewOfSectionEx.c)
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiMapViewOfSection @ 0x1405F0B10 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1405F1080 (MiMapParametersInitialize.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x140677058 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiMapExParametersInitialize @ 0x14067802C (MiMapExParametersInitialize.c)
 *     MiMapViewOfSectionCommon @ 0x1406783B0 (MiMapViewOfSectionCommon.c)
 *     DbgkMapViewOfSection @ 0x14067863C (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x1406D0680 (EtwTiLogMapExecView.c)
 */

__int64 __fastcall MiMapViewOfSectionExCommon(
        __int64 a1,
        ULONG_PTR a2,
        int a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        int a7,
        int a8,
        unsigned __int64 *Address,
        unsigned int a10,
        int a11,
        __int64 a12,
        char a13,
        int a14)
{
  __int64 result; // rax
  int MapExtendedParameters; // edi
  int v17; // edx
  __int64 v18; // [rsp+58h] [rbp-120h] BYREF
  __int64 v19; // [rsp+60h] [rbp-118h]
  __int64 v20; // [rsp+68h] [rbp-110h] BYREF
  char v21; // [rsp+70h] [rbp-108h]
  PVOID Object; // [rsp+78h] [rbp-100h]
  PVOID v23; // [rsp+80h] [rbp-F8h]
  _BYTE v24[24]; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-D0h]
  int v26; // [rsp+C4h] [rbp-B4h]
  char v27; // [rsp+D0h] [rbp-A8h]
  int v28; // [rsp+D4h] [rbp-A4h]
  __int64 v29; // [rsp+D8h] [rbp-A0h]
  _QWORD v30[13]; // [rsp+110h] [rbp-68h] BYREF

  result = MiMapViewOfSectionCommon(a2, (__int64)a6, (__int64)a5, a8, 0LL, a13, &v18);
  if ( (int)result < 0 )
  {
    if ( v18 )
      ++dword_14043B944;
    else
      ++dword_14043B940;
  }
  else
  {
    MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, a10, a13, 6, v30);
    if ( MapExtendedParameters >= 0 )
    {
      MapExtendedParameters = MiMapParametersInitialize(v24, (__int64)Object, (__int64)v23, v18, v19, a7, a8, 0LL);
      if ( MapExtendedParameters >= 0 )
      {
        MapExtendedParameters = MiMapExParametersInitialize(v24, &v18, v30);
        if ( MapExtendedParameters >= 0 )
        {
          v28 = a11;
          v29 = a12;
          v26 |= a14;
          MapExtendedParameters = MiMapViewOfSection((__int64)Object, (__int64)v24, (void **)&v18, 0LL, &v20, 1, 0);
          if ( MapExtendedParameters >= 0 )
          {
            if ( (v27 & 4) != 0 )
              DbgkMapViewOfSection(v23);
            if ( (*((_DWORD *)Object + 14) & 0x20) == 0 && (v21 & 2) != 0 )
            {
              LOBYTE(v17) = a13;
              EtwTiLogMapExecView((_DWORD)v23, v17, v18, v19, a7, a8);
            }
            *a4 = v18;
            *a6 = v25;
            if ( a5 )
              *a5 = v20;
          }
        }
      }
    }
    if ( MapExtendedParameters < 0 )
    {
      if ( v18 )
        ++dword_14043B944;
      else
        ++dword_14043B940;
    }
    if ( !a3 )
    {
      ObfDereferenceObject(Object);
      ObfDereferenceObjectWithTag(v23, 0x77566D4Du);
    }
    return (unsigned int)MapExtendedParameters;
  }
  return result;
}
