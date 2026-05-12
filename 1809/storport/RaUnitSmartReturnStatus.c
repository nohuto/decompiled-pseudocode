/*
 * XREFs of RaUnitSmartReturnStatus @ 0x1C00483AC
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1C0047E5C (RaUnitSmartDataIoctl.c)
 * Callees:
 *     PortSrbTranslateSrbToNtStatus @ 0x1C000E1BC (PortSrbTranslateSrbToNtStatus.c)
 *     RaSendIrpSynchronous @ 0x1C00107F0 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0021BCC (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0021C18 (StorBuildSynchronousScsiRequest.c)
 *     GetSrbScsiData @ 0x1C0021E90 (GetSrbScsiData.c)
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 *     WPP_SF_DD @ 0x1C003B9E4 (WPP_SF_DD.c)
 */

__int64 __fastcall RaUnitSmartReturnStatus(__int64 a1, unsigned __int64 a2, __int64 i)
{
  _BYTE *v3; // r14
  char v6; // di
  char v7; // r9
  unsigned int v8; // r11d
  __int64 v9; // rcx
  unsigned __int64 v10; // r10
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  IRP *v15; // rax
  IRP *v16; // rbp
  int Status; // esi
  char v18; // cl
  _BYTE *v19; // r8
  unsigned __int8 v20; // r10
  char v21; // r9
  int v22; // eax
  unsigned __int16 v23; // dx
  int v24; // r9d
  _DEVICE_OBJECT *AttachedDevice; // rcx
  _BYTE *v26; // rcx
  unsigned __int8 v27; // dl
  char v28; // r11
  unsigned __int8 v29; // al
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // al
  char *v32; // rax
  int v33; // r8d
  unsigned __int8 v34; // r8
  __int64 v36; // [rsp+20h] [rbp-38h]
  _IO_STATUS_BLOCK v37; // [rsp+30h] [rbp-28h] BYREF
  char v38; // [rsp+60h] [rbp+8h] BYREF
  _BYTE *v39; // [rsp+68h] [rbp+10h] BYREF

  v3 = (_BYTE *)i;
  v6 = 1;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = 0;
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v8 = *(_DWORD *)(a2 + 56);
      for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
      {
        v9 = *(unsigned int *)(a2 + 4 * i + 120);
        if ( (unsigned int)v9 >= 0x80 )
        {
          v10 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v9 < (unsigned int)v10 )
          {
            v11 = (unsigned int)v9;
            v12 = *(_DWORD *)(v9 + a2) - 64;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                if ( v13 == 1 && v11 + 40 <= v10 )
                  break;
              }
              else if ( v11 + 56 <= v10 )
              {
                v7 = 1;
              }
            }
            else if ( v11 + 40 <= v10 )
            {
              v7 = 1;
            }
            if ( v7 )
              break;
          }
        }
      }
    }
  }
  v14 = *(_QWORD *)(a1 + 8);
  v39 = 0LL;
  v38 = 0;
  v15 = StorBuildSynchronousScsiRequest(v14, a2, i, &v37);
  v16 = v15;
  if ( v15 )
  {
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v15);
    if ( Status >= 0 )
    {
      Status = v16->IoStatus.Status;
      if ( Status >= 0 )
      {
        Status = PortSrbTranslateSrbToNtStatus(*(_BYTE *)(a2 + 3));
        if ( Status >= 0 )
        {
          if ( *(_BYTE *)(a2 + 2) == 40 )
          {
            GetSrbScsiData(a2, 0LL, 0LL, 0LL, &v39, &v38);
            v18 = *(_BYTE *)(a2 + 3);
            v19 = v39;
            v20 = v38;
          }
          else
          {
            v19 = *(_BYTE **)(a2 + 32);
            v20 = *(_BYTE *)(a2 + 11);
          }
          if ( v18 < 0 && v19 )
          {
            v21 = *v19 & 0x7F;
            if ( (unsigned __int8)(v21 - 114) > 1u )
            {
              if ( (unsigned __int8)(v21 - 112) <= 1u )
              {
                if ( v20 >= 0xCu )
                {
                  if ( v19[10] != 0xF4 || v19[9] != 44 )
                    v6 = 0;
                  *v3 = v6;
                  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                  {
                    v22 = (unsigned __int8)v19[9];
                    v23 = 75;
                    v24 = (unsigned __int8)v19[10];
                    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_41:
                    LODWORD(v36) = v22;
                    WPP_SF_DD(
                      (__int64)AttachedDevice,
                      v23,
                      (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
                      v24,
                      v36);
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
                  (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids);
              }
              goto LABEL_72;
            }
            v26 = 0LL;
            v27 = 0;
            v28 = 0;
            if ( !v20 )
            {
              v28 = 0;
              goto LABEL_51;
            }
            if ( (unsigned __int8)(v21 - 114) <= 1u )
            {
              if ( v19 + 8 <= &v19[v20] )
              {
                v29 = v19[7];
                if ( v29 <= 0xF7u )
                {
                  v30 = v20;
                  v31 = v29 + 8;
                  if ( v31 <= v20 )
                    v30 = v31;
                  v27 = v30 - 8;
                  if ( v27 )
                  {
                    v26 = v19 + 8;
                    v28 = 1;
                  }
                }
              }
LABEL_51:
              if ( v28 )
              {
                v38 = 9;
                if ( v26 )
                {
                  if ( v27 )
                  {
LABEL_60:
                    if ( v27 >= 2u )
                    {
                      v32 = &v38;
                      v33 = 0;
                      while ( *v26 != *v32 )
                      {
                        ++v33;
                        ++v32;
                        if ( v33 )
                        {
                          v34 = v26[1] + 2;
                          if ( v27 <= v34 )
                            goto LABEL_72;
                          v26 += v34;
                          v27 -= v34;
                          goto LABEL_60;
                        }
                      }
                      if ( v27 >= 0xEu && v26 )
                      {
                        if ( v26[9] != 0xF4 || v26[11] != 44 )
                          v6 = 0;
                        *v3 = v6;
                        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                        {
                          v22 = (unsigned __int8)v26[11];
                          v23 = 74;
                          v24 = (unsigned __int8)v26[9];
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
    StorFreeSynchronousScsiRequest(v16);
    return (unsigned int)Status;
  }
  return (unsigned int)-1073741801;
}
