/*
 * XREFs of Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___ @ 0x18012931C
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1801259F0 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800A49E8 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     _lambda_6259f25ffd63f30b19db4bdb19c78366_::operator() @ 0x18012988C (_lambda_6259f25ffd63f30b19db4bdb19c78366_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___(
        unsigned int *a1,
        __int64 a2)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v4; // rbx
  const char *v5; // r9
  __int64 *v6; // rcx
  __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned int v9; // r8d
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v12; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v4 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
    if ( *((_BYTE *)v4 + 120) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v4);
      v12 = v4;
      v10[0] = a2;
      v10[1] = v4;
      v10[2] = &v12;
      v6 = (__int64 *)*((_QWORD *)v4 + 13);
      v7 = (__int64 *)v6[1];
      v8 = v6;
      if ( *((_BYTE *)v7 + 25) )
        goto LABEL_11;
      v9 = *a1;
      do
      {
        if ( *((_DWORD *)v7 + 8) >= v9 )
        {
          v8 = v7;
          v7 = (__int64 *)*v7;
        }
        else
        {
          v7 = (__int64 *)v7[2];
        }
      }
      while ( !*((_BYTE *)v7 + 25) );
      if ( v8 == v6 || v9 < *((_DWORD *)v8 + 8) )
LABEL_11:
        v8 = (__int64 *)*((_QWORD *)v4 + 13);
      if ( v8 != v6 )
      {
        lambda_6259f25ffd63f30b19db4bdb19c78366_::operator()(v10, v8 + 5);
        v4 = v12;
      }
      if ( v4 )
        ReleaseSRWLockExclusive((PSRWLOCK)v4);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x13F,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdevicesnapshot.h",
      v5);
  }
}
