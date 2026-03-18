/*
 * XREFs of ?Create@CGlobalCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18003A854
 * Callers:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18002AD70 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::Create(
        struct _LUID a1,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3,
        struct _LUID **a4)
{
  struct _LUID *v8; // rax
  unsigned int v9; // ecx
  struct _LUID *v10; // rdi
  struct _LUID *v11; // rax
  struct _RTL_GENERIC_TABLE *v12; // rcx
  unsigned int v13; // ecx
  unsigned int v14; // esi
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  _QWORD Buffer[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 NewElement; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = (struct _LUID *)DefaultHeap::AllocClear(0x198uLL);
  v10 = v8;
  if ( v8 )
  {
    v8[1].LowPart = 0;
    v8[3] = (struct _LUID)a3;
    v8[5] = a2;
    v11 = v8 + 9;
    v10[6] = (struct _LUID)v11;
    v10[7] = (struct _LUID)v11;
    v10[8] = (struct _LUID)&v10[10];
    *v10 = (struct _LUID)&CGlobalCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
    v10[2] = (struct _LUID)&CGlobalCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
    LOBYTE(v10[10].LowPart) = 0;
    v10[11] = (struct _LUID)v10;
    v10[18].LowPart = 0;
    v10[15] = (struct _LUID)&v10[19];
    v10[16] = (struct _LUID)&v10[19];
    v10[17].LowPart = 1;
    v10[17].HighPart = 1;
    v10[29] = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v10);
    v12 = (struct _RTL_GENERIC_TABLE *)(*(_QWORD *)&v10[3] + 8LL);
    Buffer[0] = v10[5];
    Buffer[1] = v10;
    if ( RtlInsertElementGenericTable(v12, Buffer, 0x10u, &NewElement) )
    {
      v10[4] = a1;
      v14 = 0;
      *a4 = v10;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x66u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x18u, 0LL);
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x2Bu, 0LL);
      CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)v10);
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x28u, 0LL);
  }
  return v14;
}
