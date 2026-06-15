/*
 * XREFs of ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x18005B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005C1E4 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeRange(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5)
{
  unsigned int v7; // ebx
  float *v8; // rax

  v7 = -2147467261;
  if ( !a3 || !a4 || !a5 )
    goto LABEL_10;
  if ( a2 == -1 )
    a2 = *((_DWORD *)this + 30);
  if ( a2 >= *((_DWORD *)this + 31) )
  {
    v7 = -2147024809;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetVolumeRange", 205, v7);
    return v7;
  }
  v8 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((char *)this + 88, a2);
  v7 = 0;
  *a3 = v8[2];
  *a4 = v8[3];
  *a5 = v8[4];
  return v7;
}
