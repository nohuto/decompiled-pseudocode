/*
 * XREFs of ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x180056DC8
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x180062B90 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatia.c)
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180056F34 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z @ 0x1800A2FC8 (-QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z.c)
 */

__int64 __fastcall MPCInputInfoHelper::PopulateAugmentedInput(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7)
{
  int v9; // edi
  __int128 v10; // xmm1
  float v11; // xmm0_4
  float *v13; // [rsp+20h] [rbp-28h]
  float v14; // [rsp+30h] [rbp-18h] BYREF
  float v15; // [rsp+34h] [rbp-14h] BYREF
  float v16[4]; // [rsp+38h] [rbp-10h] BYREF

  v9 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(a1, 0LL, 0x2000LL, a2, a7);
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a7 + 1156) = a3;
    *(_BYTE *)(a7 + 1224) = 1;
    *(_OWORD *)(a7 + 1228) = *(_OWORD *)a5;
    *(_OWORD *)(a7 + 1244) = *(_OWORD *)(a5 + 16);
    *(_OWORD *)(a7 + 1260) = *(_OWORD *)(a5 + 32);
    *(_OWORD *)(a7 + 1276) = *(_OWORD *)(a5 + 48);
    *(_OWORD *)(a7 + 1292) = *(_OWORD *)(a5 + 64);
    *(_OWORD *)(a7 + 1308) = *(_OWORD *)(a5 + 80);
    *(_OWORD *)(a7 + 1324) = *(_OWORD *)(a5 + 96);
    *(_OWORD *)(a7 + 1340) = *(_OWORD *)(a5 + 112);
    *(_OWORD *)(a7 + 1356) = *(_OWORD *)(a5 + 128);
    *(_OWORD *)(a7 + 1372) = *(_OWORD *)(a5 + 144);
    *(_OWORD *)(a7 + 1160) = *a6;
    *(_OWORD *)(a7 + 1176) = a6[1];
    *(_OWORD *)(a7 + 1192) = a6[2];
    v10 = a6[3];
    *(_BYTE *)(a7 + 1144) = a4;
    *(_OWORD *)(a7 + 1208) = v10;
    if ( *(_BYTE *)(a5 + 120)
      && (int)SpatialInteractionDevices::QuaternionToEulerAngles(
                (SpatialInteractionDevices *)(a5 + 104),
                (const struct DirectX::XMFLOAT4 *)&v14,
                &v15,
                v16,
                v13) >= 0 )
    {
      v11 = 180.0 - (float)(v14 * 57.295776);
      *(float *)(a7 + 1148) = v15 * 57.295776;
      *(float *)(a7 + 1152) = v11;
    }
    *(_QWORD *)(a7 + 16) = *((_QWORD *)a6 + 2);
  }
  return (unsigned int)v9;
}
