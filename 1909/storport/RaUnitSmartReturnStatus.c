/*
 * XREFs of RaUnitSmartReturnStatus @ 0x1C0046AC0
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1C0046560 (RaUnitSmartDataIoctl.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C000FB94 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0018BF8 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0018C44 (StorBuildSynchronousScsiRequest.c)
 *     GetSrbScsiData @ 0x1C001F958 (GetSrbScsiData.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C00233A0 (PortSrbTranslateSrbToNtStatus.c)
 *     WPP_SF_ @ 0x1C0038C2C (WPP_SF_.c)
 *     WPP_SF_DD @ 0x1C0038C9C (WPP_SF_DD.c)
 */

__int64 __fastcall RaUnitSmartReturnStatus(__int64 a1, unsigned __int64 a2, __int64 i)
{
  _BYTE *v3; // r14
  bool v4; // zf
  char v7; // di
  char v8; // r9
  unsigned int v9; // r11d
  __int64 v10; // rcx
  unsigned __int64 v11; // r10
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  IRP *v16; // rax
  IRP *v17; // rbp
  int Status; // esi
  char v19; // cl
  _BYTE *v20; // rdx
  unsigned __int8 v21; // r10
  char v22; // r8
  int v23; // eax
  int v24; // r9d
  unsigned __int16 v25; // dx
  _DEVICE_OBJECT *AttachedDevice; // rcx
  _BYTE *v27; // rcx
  unsigned __int8 v28; // r9
  char v29; // r11
  unsigned __int8 v30; // al
  unsigned __int8 v31; // r9
  unsigned __int8 v32; // al
  char *v33; // rax
  int v34; // edx
  unsigned __int8 v35; // dl
  __int64 v37; // [rsp+20h] [rbp-38h]
  _IO_STATUS_BLOCK v38; // [rsp+30h] [rbp-28h] BYREF
  char v39; // [rsp+60h] [rbp+8h] BYREF
  _BYTE *v40; // [rsp+68h] [rbp+10h] BYREF

  v3 = (_BYTE *)i;
  v4 = *(_BYTE *)(a2 + 2) == 40;
  v38.Pointer = 0LL;
  v38.Information = 0LL;
  v7 = 1;
  if ( v4 )
  {
    v8 = 0;
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v9 = *(_DWORD *)(a2 + 56);
      for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
      {
        v10 = *(unsigned int *)(a2 + 4 * i + 120);
        if ( (unsigned int)v10 >= 0x80 )
        {
          v11 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v10 < (unsigned int)v11 )
          {
            v12 = (unsigned int)v10;
            v13 = *(_DWORD *)(v10 + a2) - 64;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                if ( v14 == 1 && v12 + 40 <= v11 )
                  break;
              }
              else if ( v12 + 56 <= v11 )
              {
                v8 = 1;
              }
            }
            else if ( v12 + 40 <= v11 )
            {
              v8 = 1;
            }
            if ( v8 )
              break;
          }
        }
      }
    }
  }
  v15 = *(_QWORD *)(a1 + 8);
  v40 = 0LL;
  v39 = 0;
  v16 = StorBuildSynchronousScsiRequest(v15, a2, i, &v38);
  v17 = v16;
  if ( v16 )
  {
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v16);
    if ( Status >= 0 )
    {
      Status = v17->IoStatus.Status;
      if ( Status >= 0 )
      {
        Status = PortSrbTranslateSrbToNtStatus(*(_BYTE *)(a2 + 3));
        if ( Status >= 0 )
        {
          if ( *(_BYTE *)(a2 + 2) == 40 )
          {
            GetSrbScsiData(a2, 0LL, 0LL, 0LL, &v40, &v39);
            v19 = *(_BYTE *)(a2 + 3);
            v20 = v40;
            v21 = v39;
          }
          else
          {
            v20 = *(_BYTE **)(a2 + 32);
            v21 = *(_BYTE *)(a2 + 11);
          }
          if ( v19 < 0 && v20 )
          {
            v22 = *v20 & 0x7F;
            if ( (unsigned __int8)(v22 - 114) > 1u )
            {
              if ( (unsigned __int8)(v22 - 112) <= 1u )
              {
                if ( v21 >= 0xCu )
                {
                  if ( v20[10] != 0xF4 || v20[9] != 44 )
                    v7 = 0;
                  *v3 = v7;
                  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                  {
                    v23 = (unsigned __int8)v20[9];
                    v24 = (unsigned __int8)v20[10];
                    v25 = 75;
                    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_41:
                    LODWORD(v37) = v23;
                    WPP_SF_DD(
                      (__int64)AttachedDevice,
                      v25,
                      (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
                      v24,
                      v37);
                  }
                }
              }
              else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
              {
                WPP_SF_(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  0x4Cu,
                  (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids);
              }
              goto LABEL_72;
            }
            v27 = 0LL;
            v28 = 0;
            v29 = 0;
            if ( !v21 )
            {
              v29 = 0;
              goto LABEL_51;
            }
            if ( (unsigned __int8)(v22 - 114) <= 1u )
            {
              if ( v20 + 8 <= &v20[v21] )
              {
                v30 = v20[7];
                if ( v30 <= 0xF7u )
                {
                  v31 = v21;
                  v32 = v30 + 8;
                  if ( v32 <= v21 )
                    v31 = v32;
                  v28 = v31 - 8;
                  if ( v28 )
                  {
                    v27 = v20 + 8;
                    v29 = 1;
                  }
                }
              }
LABEL_51:
              if ( v29 )
              {
                v39 = 9;
                if ( v27 )
                {
                  if ( v28 )
                  {
LABEL_60:
                    if ( v28 >= 2u )
                    {
                      v33 = &v39;
                      v34 = 0;
                      while ( *v27 != *v33 )
                      {
                        ++v34;
                        ++v33;
                        if ( v34 )
                        {
                          v35 = v27[1] + 2;
                          if ( v28 <= v35 )
                            goto LABEL_72;
                          v27 += v35;
                          v28 -= v35;
                          goto LABEL_60;
                        }
                      }
                      if ( v28 >= 0xEu && v27 )
                      {
                        if ( v27[9] != 0xF4 || v27[11] != 44 )
                          v7 = 0;
                        *v3 = v7;
                        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                        {
                          v23 = (unsigned __int8)v27[11];
                          v25 = 74;
                          v24 = (unsigned __int8)v27[9];
                          AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
                          goto LABEL_41;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            Status = -1073741823;
          }
        }
      }
    }
LABEL_72:
    StorFreeSynchronousScsiRequest(v17);
    return (unsigned int)Status;
  }
  return (unsigned int)-1073741801;
}
