/*
 * XREFs of rimPopulateContactFrameData @ 0x1C012B2F8
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C012BC0C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4ContactPopulationSource@12@@Z @ 0x1C0127D0C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4Co.c)
 *     rimExtractPointerDeviceUsages @ 0x1C012A314 (rimExtractPointerDeviceUsages.c)
 *     rimTransformGeometry @ 0x1C012C3C8 (rimTransformGeometry.c)
 */

__int64 __fastcall rimPopulateContactFrameData(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        int *a12,
        _QWORD *a13)
{
  __int64 v13; // r15
  struct _HIDP_PREPARSED_DATA *v15; // rax
  __int64 v16; // rdi
  int v17; // ebx
  __int64 v18; // r14
  __int64 v19; // rax
  int PointerDeviceUsages; // ebx
  int v21; // edx
  struct _HIDP_PREPARSED_DATA *v24; // [rsp+B8h] [rbp+10h]

  v13 = *(_QWORD *)(a2 + 480);
  v15 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  v16 = *(_QWORD *)(v13 + 808);
  v17 = *(_DWORD *)(v13 + 780);
  v18 = a7 + 2344;
  *(_DWORD *)(a7 + 2340) |= 2u;
  v24 = v15;
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a13 = *(_QWORD *)(a7 + 36);
  *a12 = (*(_DWORD *)(a7 + 8) >> 3) & 1;
  memset((void *)(a7 + 2344), 0, 0xD8uLL);
  *(_DWORD *)(a7 + 2344) = *(_DWORD *)a7;
  *(_DWORD *)(a7 + 2392) = a6;
  *(_WORD *)(a7 + 2400) = *(_WORD *)(a7 + 4);
  *(_WORD *)(a7 + 2402) = a5;
  *(_DWORD *)(a7 + 2472) = v17;
  *(_QWORD *)(a7 + 2488) = v16;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    v19 = *(_QWORD *)(a2 + 24);
  else
    v19 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a7 + 2424) = v19;
  PointerDeviceUsages = rimExtractPointerDeviceUsages(
                          v13,
                          v24,
                          a3,
                          a4,
                          *(_QWORD *)(a1 + 640) == 0LL,
                          *(unsigned __int8 *)(a1 + 849),
                          v18,
                          a8,
                          a9,
                          a10,
                          a11);
  if ( PointerDeviceUsages >= 0 )
  {
    if ( !*a8 )
    {
      v21 = (*(_DWORD *)(a7 + 8) >> 3) & 1;
      *(_DWORD *)(a7 + 2340) ^= (*(_DWORD *)(a7 + 2340) ^ ~(*(_DWORD *)(a7 + 2420) >> 22)) & 4;
      rimTransformGeometry(v13, v21, v18, (_DWORD)a13, (__int64)a12);
    }
    InputTraceLogging::RIM::PopulateContact(a2, *(unsigned int *)(v13 + 24), *(_WORD *)(a7 + 2400), a7 + 2408, 0);
  }
  else
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x39u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
  }
  return (unsigned int)PointerDeviceUsages;
}
