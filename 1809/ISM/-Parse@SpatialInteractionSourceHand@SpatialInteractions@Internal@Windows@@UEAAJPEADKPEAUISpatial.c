/*
 * XREFs of ?Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800BDDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_N33@Z @ 0x1800BDF98 (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatia.c)
 *     ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800BE94C (-ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::Parse(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        char *a2,
        __int64 a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        __int64 a5,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a6,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a7,
        bool *a8,
        enum MPCAugmentedInputGestureType *a9,
        bool *a10,
        bool *a11)
{
  char v13; // al
  char v14; // r14
  char v15; // di
  char v16; // bp
  bool v17; // r15
  bool v18; // r12
  int v19; // edi
  bool v20; // zf
  __int64 v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a10 = 0;
  v13 = *((_BYTE *)this + 105);
  *((_BYTE *)this + 105) = 0;
  *a11 = v13 != 0;
  *(_DWORD *)a9 = 0;
  if ( !*((_QWORD *)this + 11) || !a4 )
    goto LABEL_15;
  v14 = 1;
  v15 = *((_BYTE *)this + 209);
  v16 = *((_BYTE *)this + 210);
  v17 = *((_DWORD *)this + 53) != 0;
  v18 = *((_BYTE *)this + 208) == 0;
  if ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::ReadNextState(this) )
  {
    do
    {
      if ( v18 || *((_BYTE *)this + 210) != v16 || *((_BYTE *)this + 209) != v15 )
      {
        v19 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::AddReport(
                this,
                *((_QWORD *)this + 25),
                a4,
                a6,
                a7,
                v17,
                v15,
                v16);
        if ( v19 < 0 )
        {
          v21 = 188LL;
          goto LABEL_14;
        }
        v16 = *((_BYTE *)this + 210);
        v15 = *((_BYTE *)this + 209);
        v17 = *((_DWORD *)this + 53) != 0;
        v20 = *((_BYTE *)this + 208) == 0;
        *a10 = 1;
        v18 = v20;
        v14 = 0;
      }
    }
    while ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::ReadNextState(this) );
    if ( !v14 )
      goto LABEL_15;
  }
  v19 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::AddReport(
          this,
          a5,
          a4,
          a6,
          a7,
          v17,
          v15,
          v16);
  if ( v19 < 0 )
  {
    v21 = 203LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)(unsigned int)v19);
    return (unsigned int)v19;
  }
  else
  {
LABEL_15:
    *a8 = *((_BYTE *)this + 209);
    return 0LL;
  }
}
