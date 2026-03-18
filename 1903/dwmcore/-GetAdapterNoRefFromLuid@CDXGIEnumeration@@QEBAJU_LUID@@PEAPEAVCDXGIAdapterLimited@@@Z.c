/*
 * XREFs of ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x1800A8BEC
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180024F2C (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x1800A46DC (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDXGIEnumeration::GetAdapterNoRefFromLuid(
        CDXGIEnumeration *this,
        struct _LUID a2,
        struct CDXGIAdapterLimited **a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  unsigned int v5; // ebx
  CDXGIEnumeration **v7; // r11
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v3 = *((_DWORD *)this + 22);
  LODWORD(v4) = 0;
  if ( v3 )
  {
    v7 = (CDXGIEnumeration **)*((_QWORD *)this + 8);
    v5 = 0;
    for ( this = *v7; ; this = v7[v4] )
    {
      if ( a2 == *((_QWORD *)this + 42) )
      {
        *a3 = this;
        return v5;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v3 )
        break;
    }
    v8 = 156;
  }
  else
  {
    v8 = 143;
  }
  v5 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802920EC, 1u, 0x8898008D, v8, 0LL);
  return v5;
}
