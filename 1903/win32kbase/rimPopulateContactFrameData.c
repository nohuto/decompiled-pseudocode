/*
 * XREFs of rimPopulateContactFrameData @ 0x1C0158198
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C0158C0C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4ContactPopulationSource@12@@Z @ 0x1C015478C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4Co.c)
 *     rimExtractTransducerUsages @ 0x1C01548B0 (rimExtractTransducerUsages.c)
 *     rimExtractPointerDeviceUsages @ 0x1C0157000 (rimExtractPointerDeviceUsages.c)
 *     rimTransformGeometry @ 0x1C01592F0 (rimTransformGeometry.c)
 */

__int64 __fastcall rimPopulateContactFrameData(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        int *a12,
        _QWORD *a13)
{
  __int64 v13; // r14
  struct _HIDP_PREPARSED_DATA *v15; // rax
  __int64 v16; // rdi
  int v17; // ebx
  __int64 v18; // rax
  int v19; // edx
  int PointerDeviceUsages; // ebx
  int v21; // r9d
  struct _HIDP_PREPARSED_DATA *v24; // [rsp+B8h] [rbp+10h]

  v13 = *(_QWORD *)(a2 + 480);
  v15 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  v16 = *(_QWORD *)(v13 + 816);
  v17 = *(_DWORD *)(v13 + 788);
  *(_DWORD *)(a7 + 2340) |= 2u;
  v24 = v15;
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a13 = *(_QWORD *)(a7 + 36);
  *a12 = (*(_DWORD *)(a7 + 8) >> 3) & 1;
  memset((void *)(a7 + 2344), 0, 0xF0uLL);
  *(_DWORD *)(a7 + 2344) = *(_DWORD *)a7;
  *(_DWORD *)(a7 + 2392) = a6;
  *(_WORD *)(a7 + 2400) = *(_WORD *)(a7 + 4);
  *(_WORD *)(a7 + 2402) = a5;
  *(_DWORD *)(a7 + 2472) = v17;
  *(_QWORD *)(a7 + 2488) = v16;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    v18 = *(_QWORD *)(a2 + 24);
  else
    v18 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a7 + 2424) = v18;
  PointerDeviceUsages = rimExtractPointerDeviceUsages(
                          v13,
                          v24,
                          a3,
                          a4,
                          *(_QWORD *)(a1 + 640) == 0LL,
                          *(unsigned __int8 *)(a1 + 849),
                          a7 + 2344,
                          a8,
                          a9,
                          a10,
                          a11);
  if ( PointerDeviceUsages >= 0 )
  {
    if ( !*a8 )
    {
      *(_DWORD *)(a7 + 2340) ^= (*(_DWORD *)(a7 + 2340) ^ ~(*(_DWORD *)(a7 + 2420) >> 22)) & 4;
      rimTransformGeometry((struct tagHID_POINTER_DEVICE_INFO *)v13, (__int64)a12);
    }
    if ( (unsigned int)(*(_DWORD *)(v13 + 24) - 5) > 1
      || (PointerDeviceUsages = rimExtractTransducerUsages(a2, a5, a3, a4, a7), PointerDeviceUsages >= 0) )
    {
      InputTraceLogging::RIM::PopulateContact(a2, *(unsigned int *)(v13 + 24), *(_WORD *)(a7 + 2400), a7 + 2408, 0);
      return (unsigned int)PointerDeviceUsages;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 59;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = 58;
LABEL_7:
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v19, 1, v21, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
  }
  return (unsigned int)PointerDeviceUsages;
}
