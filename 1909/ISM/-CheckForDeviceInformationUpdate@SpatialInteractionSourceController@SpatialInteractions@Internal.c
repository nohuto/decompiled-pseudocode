/*
 * XREFs of ?CheckForDeviceInformationUpdate@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N@Z @ 0x180164198
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x180166CB0 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CheckForDeviceInformationUpdate(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        bool *a2)
{
  char v4; // r9
  char v5; // dl
  LONGLONG v6; // r8
  bool v7; // cl
  char v8; // al
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  v4 = *((_BYTE *)this + 952);
  v5 = *((_BYTE *)this + 1052);
  v6 = PerformanceCount.QuadPart / (qword_1801E0C68 / 1000);
  v7 = *((_BYTE *)this + 1020)
    && PerformanceCount.QuadPart / (qword_1801E0C68 / 1000) - *((_QWORD *)this + 118) > 500
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 254) - *((float *)this + 239))) & _xmm) >= 0.050000001;
  v8 = *((_BYTE *)this + 105);
  *((_BYTE *)this + 105) = 0;
  if ( v8 || v5 != v4 || v7 )
  {
    *a2 = 1;
    *((_BYTE *)this + 952) = *((_BYTE *)this + 1052);
    *((_DWORD *)this + 239) = *((_DWORD *)this + 254);
    *((_QWORD *)this + 118) = v6;
  }
  else
  {
    *a2 = 0;
  }
}
