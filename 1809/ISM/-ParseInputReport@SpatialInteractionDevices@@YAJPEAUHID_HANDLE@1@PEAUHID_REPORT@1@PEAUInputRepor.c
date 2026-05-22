/*
 * XREFs of ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800A5208
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1801259F0 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::ReadPosePosition @ 0x1800A4F80 (SpatialInteractionDevices--ReadPosePosition.c)
 *     SpatialInteractionDevices::ReadPoseOrientation @ 0x1800A5048 (SpatialInteractionDevices--ReadPoseOrientation.c)
 *     SpatialInteractionDevices::ReadLocalOrientation @ 0x1800A5114 (SpatialInteractionDevices--ReadLocalOrientation.c)
 *     SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_ @ 0x1800A6970 (SpatialInteractionDevices--ReadKnownFloats_DirectX--XMFLOAT2_2_.c)
 *     SpatialInteractionDevices::ReadKnownFloats_float_1_ @ 0x1800A6B00 (SpatialInteractionDevices--ReadKnownFloats_float_1_.c)
 */

__int64 __fastcall SpatialInteractionDevices::ParseInputReport(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        struct SpatialInteractionDevices::HID_REPORT *a3,
        struct SpatialInteractionDevices::InputReport *a4)
{
  __int64 *v6; // rcx
  USHORT v7; // r12
  __int64 *v9; // rbx
  unsigned __int8 v10; // dl
  __int64 *v11; // rax
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  int v21; // ebp
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rbx
  ULONG v25; // edx
  char v26; // r13
  struct _USAGE_AND_PAGE *v27; // r8
  USHORT v28; // dx
  NTSTATUS Usages; // eax
  __int64 v30; // rcx
  __int64 v31; // r9
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  ULONG UsageLength; // [rsp+80h] [rbp+8h] BYREF

  v6 = (__int64 *)*((_QWORD *)this + 31);
  v7 = 0;
  v9 = v6;
  v10 = **((_BYTE **)a2 + 1);
  v11 = (__int64 *)v6[1];
  if ( *((_BYTE *)v11 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_BYTE *)v11 + 32) >= v10 )
    {
      v9 = v11;
      v11 = (__int64 *)*v11;
    }
    else
    {
      v11 = (__int64 *)v11[2];
    }
  }
  while ( !*((_BYTE *)v11 + 25) );
  if ( v9 == v6 || v10 < *((_BYTE *)v9 + 32) )
LABEL_8:
    v9 = v6;
  if ( v9 != v6 && *(_BYTE *)(v9[5] + 143) )
  {
    SpatialInteractionDevices::ReadPosePosition(this, a2, (__int64)a3);
    SpatialInteractionDevices::ReadPoseOrientation(this, a2, (__int64)a3);
    if ( *((_BYTE *)a3 + 29) )
    {
      if ( *((_BYTE *)a3 + 28) )
      {
        v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 3)) & _xmm);
        if ( v12 <= 0.001 )
        {
          v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 4)) & _xmm);
          if ( v13 <= 0.001 )
          {
            v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 5)) & _xmm);
            if ( v14 <= 0.001 )
            {
              v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 6)) & _xmm);
              if ( v15 <= 0.001 )
                *((_WORD *)a3 + 14) = 0;
            }
          }
        }
      }
    }
    SpatialInteractionDevices::ReadLocalOrientation((__int64)this, v9[5], (int)a2, (__int64)a3);
    v17 = v9[5];
    if ( *(_BYTE *)(v17 + 138) )
    {
      if ( (int)SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_(
                  (_DWORD)this,
                  (_DWORD)a2,
                  v16,
                  (int)v17 + 8,
                  (__int64)a3 + 44) >= 0 )
      {
        *((_BYTE *)a3 + 52) = 1;
        if ( !*((_BYTE *)this + 232) )
        {
          if ( *((_BYTE *)this + 233) )
            *((float *)a3 + 11) = 1.0 - *((float *)a3 + 11);
          if ( *((_BYTE *)this + 234) )
            *((float *)a3 + 12) = 1.0 - *((float *)a3 + 12);
        }
      }
    }
    v18 = v9[5];
    if ( *(_BYTE *)(v18 + 139) )
    {
      if ( (int)SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_(
                  (_DWORD)this,
                  (_DWORD)a2,
                  v16,
                  (int)v18 + 24,
                  (__int64)a3 + 56) >= 0 )
      {
        *((_BYTE *)a3 + 64) = 1;
        if ( !*((_BYTE *)this + 232) )
        {
          if ( *((_BYTE *)this + 235) )
            *((float *)a3 + 14) = 1.0 - *((float *)a3 + 14);
          if ( *((_BYTE *)this + 236) )
            *((float *)a3 + 15) = 1.0 - *((float *)a3 + 15);
        }
      }
    }
    v19 = v9[5];
    if ( *(_BYTE *)(v19 + 136)
      && (int)SpatialInteractionDevices::ReadKnownFloats_float_1_((_DWORD)this, (_DWORD)a2, v16, v19, (__int64)a3 + 68) >= 0 )
    {
      *((_BYTE *)a3 + 72) = 1;
    }
    v20 = v9[5];
    if ( *(_BYTE *)(v20 + 137)
      && (int)SpatialInteractionDevices::ReadKnownFloats_float_1_(
                (_DWORD)this,
                (_DWORD)a2,
                v16,
                (int)v20 + 40,
                (__int64)a3 + 96) >= 0 )
    {
      *((_BYTE *)a3 + 100) = 1;
    }
    v21 = 0;
    *((_DWORD *)a3 + 8) = *((_DWORD *)this + 60);
    *((_DWORD *)a3 + 9) = *(_DWORD *)(v9[5] + 144);
    v22 = v9[5];
    v23 = *(_QWORD *)(v22 + 160);
    v24 = *(_QWORD *)(v22 + 152);
    if ( (v23 - v24) / 12 )
    {
      v25 = 0;
      v26 = 1;
      UsageLength = 0;
      while ( v24 != v23 )
      {
        if ( v26 || v7 != *(_WORD *)v24 )
        {
          v7 = *(_WORD *)v24;
          v27 = (struct _USAGE_AND_PAGE *)*((_QWORD *)this + 34);
          v28 = *(_WORD *)v24;
          UsageLength = *((_DWORD *)this + 66);
          v26 = 0;
          Usages = HidP_GetUsagesEx(
                     HidP_Input,
                     v28,
                     v27,
                     &UsageLength,
                     *((PHIDP_PREPARSED_DATA *)this + 7),
                     *((PCHAR *)a2 + 1),
                     *(_DWORD *)a2);
          if ( Usages < 0 )
            return wil::details::in1diag3::Return_NtStatus(
                     retaddr,
                     (void *)0x291,
                     (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                     (const char *)(unsigned int)Usages);
          v25 = UsageLength;
        }
        v30 = 0LL;
        if ( v25 )
        {
          v31 = *((_QWORD *)this + 34);
          while ( *(_WORD *)(v31 + 4 * v30) != *(_WORD *)(v24 + 4)
               || *(_WORD *)(v31 + 4 * v30 + 2) != *(_WORD *)(v24 + 2) )
          {
            v30 = (unsigned int)(v30 + 1);
            if ( (unsigned int)v30 >= v25 )
              goto LABEL_51;
          }
          v21 |= *(_DWORD *)(v24 + 8);
        }
LABEL_51:
        v24 += 12LL;
      }
    }
    *((_DWORD *)a3 + 10) = v21;
  }
  return 0LL;
}
