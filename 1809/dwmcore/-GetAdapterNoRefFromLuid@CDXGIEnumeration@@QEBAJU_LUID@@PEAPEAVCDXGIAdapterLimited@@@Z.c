/*
 * XREFs of ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x18007EDC4
 * Callers:
 *     ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x180080D5C (-CheckForDriverUpdating@CDisplaySet@@AEAAJXZ.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008A208 (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDXGIEnumeration::GetAdapterNoRefFromLuid(
        CDXGIEnumeration *this,
        struct _LUID a2,
        struct CDXGIAdapterLimited **a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  CDXGIEnumeration **v5; // r11
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v3 = *((_DWORD *)this + 22);
  LODWORD(v4) = 0;
  if ( v3 )
  {
    v5 = (CDXGIEnumeration **)*((_QWORD *)this + 8);
    v6 = 0;
    for ( this = *v5; ; this = v5[v4] )
    {
      if ( a2 == *((_QWORD *)this + 42) )
      {
        *a3 = this;
        return v6;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v3 )
        break;
    }
    v8 = 158;
  }
  else
  {
    v8 = 145;
  }
  v6 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_18024C878, 1u, -2003304307, v8);
  return v6;
}
