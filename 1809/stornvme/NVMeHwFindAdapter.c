/*
 * XREFs of NVMeHwFindAdapter @ 0x1C000ACD0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     GetControllerMaxTransferSize @ 0x1C0005450 (GetControllerMaxTransferSize.c)
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     ControllerAllocateUncachedExtension @ 0x1C000A91C (ControllerAllocateUncachedExtension.c)
 *     IsIntelChatham @ 0x1C000ABD8 (IsIntelChatham.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C000AC40 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C000B83C (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000DABC (NVMeControllerInitPart1.c)
 *     GetNVMeRegisterAddress @ 0x1C0018234 (GetNVMeRegisterAddress.c)
 *     GetRegistrySettings @ 0x1C001829C (GetRegistrySettings.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  int v7; // r12d
  char v8; // cl
  char v9; // al
  __int16 v10; // r14
  int v11; // eax
  int BusData; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *NVMeRegisterAddress; // rax
  unsigned int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int8 v23; // r8
  bool v24; // zf
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // r8
  unsigned int v28; // edx
  int v29; // eax
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // r8
  void **v33; // rsi
  __int64 v34; // rdx
  char v35; // r8
  int v36; // edx
  _OWORD v37[4]; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v38[8]; // [rsp+78h] [rbp-19h] BYREF

  v6 = *(_QWORD *)(a5 + 64);
  v7 = *(_DWORD *)(a1 + 20) & 2;
  if ( !v7 )
  {
    v8 = g_ControllerExtensionIndex;
    g_ControllerExtension[(unsigned __int8)g_ControllerExtensionIndex] = a1;
    g_ControllerExtensionIndex = (v8 + 1) & 0xF;
  }
  v9 = *(_BYTE *)(a5 + 197);
  v10 = 64;
  *(_BYTE *)(a1 + 16) = v9;
  if ( v9 )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 24) = 2;
      return 2LL;
    }
    StorPortExtendedFunction(45LL, a1, v6, 120LL);
    *(_WORD *)(a1 + 4) = *(_WORD *)v6;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v6 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v6 + 4);
    *(_QWORD *)(a1 + 128) = *(_QWORD *)(v6 + 8);
    *(_OWORD *)(a1 + 28) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(a1 + 44) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(a1 + 60) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(a1 + 76) = *(_OWORD *)(v6 + 64);
    *(_OWORD *)(a1 + 92) = *(_OWORD *)(v6 + 80);
    *(_OWORD *)(a1 + 108) = *(_OWORD *)(v6 + 96);
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(v6 + 112);
    v11 = *(_DWORD *)(v6 + 116);
    *(_DWORD *)(a1 + 52) |= 4u;
    *(_DWORD *)(a1 + 176) = v11;
  }
  else
  {
    memset(v38, 0, sizeof(v38));
    BusData = StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100), v38, 64);
    v14 = a1;
    if ( BusData != 64 )
    {
      v19 = 3;
      *(_DWORD *)(a1 + 24) = 3;
      goto LABEL_58;
    }
    *(_DWORD *)(a1 + 4) = v38[0];
    *(_BYTE *)(a1 + 8) = v38[1];
    if ( IsIntelChatham(a1) )
    {
      v15 = v38[3];
      v16 = 4294963200LL;
      v17 = HIDWORD(v38[3]);
    }
    else
    {
      v15 = v38[2];
      v16 = 4294950912LL;
      v17 = HIDWORD(v38[2]);
    }
    *(_QWORD *)(a1 + 128) = v16 & v15 | (v17 << 32);
  }
  NVMeRegisterAddress = (__int64 *)GetNVMeRegisterAddress(a1, a5);
  *(_QWORD *)(a1 + 136) = NVMeRegisterAddress;
  if ( NVMeRegisterAddress )
  {
    v20 = *NVMeRegisterAddress;
    v21 = *(_QWORD *)(a1 + 136);
    *(_QWORD *)(a1 + 152) = v20;
    v22 = *(_QWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(v21 + 8);
    *(_DWORD *)(a1 + 160) = 4 << (BYTE4(v22) & 0xF);
    if ( IsIntelChatham(a1) )
    {
      *(_BYTE *)(a1 + 155) = 1;
      v23 = 1;
    }
    v24 = *(_BYTE *)(a1 + 16) == 0;
    *(_DWORD *)(a1 + 164) = 500 * v23;
    if ( v24 && !v7 )
      GetRegistrySettings(a1);
    v25 = 3;
    if ( *(_DWORD *)(a5 + 20) != 1 )
      v25 = 1;
    *(_DWORD *)(a1 + 12) = v25;
    v24 = *(_BYTE *)(a1 + 16) == 0;
    v26 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 256) = 1048640;
    if ( v24 )
    {
      v27 = *(_QWORD *)(a1 + 152);
      v28 = 1024;
      if ( v26 )
        v28 = v26;
      *(_WORD *)(a1 + 260) = 256;
      if ( v28 >= (unsigned __int64)(unsigned __int16)v27 + 1 )
        v28 = (unsigned __int16)v27 + 1;
      LOWORD(v26) = -1;
      if ( v28 < 0xFFFF )
        LOWORD(v26) = v28;
    }
    else
    {
      *(_WORD *)(a1 + 260) = 64;
      if ( !v26 || v26 > 0x40 )
        goto LABEL_32;
    }
    v10 = v26;
LABEL_32:
    *(_WORD *)(a1 + 262) = v10;
    *(_DWORD *)(a5 + 48) = 3;
    v19 = 1;
    *(_BYTE *)(a5 + 81) = 1;
    *(_DWORD *)(a5 + 148) = 1;
    *(_BYTE *)(a5 + 145) = 0;
    if ( *(_DWORD *)(a5 + 20) == 1 )
    {
      *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
      v29 = 2;
    }
    else
    {
      v29 = 1;
    }
    *(_DWORD *)(a5 + 160) = v29;
    *(_DWORD *)(a5 + 216) = 0;
    if ( *(_BYTE *)(a5 + 144) == 0x80 )
      *(_BYTE *)(a5 + 144) = 2;
    v30 = *(_DWORD *)(a5 + 220) | 0xA;
    *(_BYTE *)(a5 + 147) = 0;
    v31 = v30 | 0x20;
    *(_DWORD *)(a5 + 220) = v31;
    if ( (*(_DWORD *)(a1 + 52) & 2) == 0 )
      *(_DWORD *)(a5 + 220) = v31 | 4;
    if ( !v7 )
    {
      if ( !ControllerAllocateUncachedExtension(a1, a5) )
      {
LABEL_55:
        v19 = 2;
        goto LABEL_56;
      }
      if ( !*(_BYTE *)(a1 + 16) )
      {
        v32 = *(unsigned int *)(a1 + 108);
        if ( (_DWORD)v32 )
        {
          v33 = (void **)(a1 + 3784);
          if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v32, 1701672526LL) && *v33 )
            NVMeZeroMemory(*v33, *(_DWORD *)(a1 + 108));
          v19 = 1;
        }
      }
    }
    if ( (unsigned __int8)ControllerReset(a1) )
    {
      LOBYTE(v34) = 1;
      if ( (unsigned __int8)NVMeControllerInitPart1(a1, v34) )
      {
        v35 = *(_BYTE *)(*(_QWORD *)(a1 + 1528) + 77LL);
        if ( v35 )
          v36 = (1 << v35) * (1 << ((*(_BYTE *)(a1 + 158) & 0xF) + 12));
        else
          v36 = -1;
        *(_DWORD *)(a1 + 168) = v36;
        *(_DWORD *)(a5 + 24) = GetControllerMaxTransferSize((_DWORD *)a1);
        *(_DWORD *)(a5 + 28) = 513;
        *(_BYTE *)(a5 + 72) = 1;
        *(_BYTE *)(a5 + 97) = 1;
        *(_BYTE *)(a5 + 146) = -1;
        *(_DWORD *)(a5 + 212) = 32;
        *(_DWORD *)(a5 + 204) = 32;
        *(_DWORD *)(a5 + 208) = 32;
        if ( !*(_BYTE *)(a1 + 16) )
        {
          v37[0] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1;
          v37[1] = GUID_NVME_POWER_IDLE_TIMEOUT1;
          v37[2] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2;
          v37[3] = GUID_NVME_POWER_IDLE_TIMEOUT2;
          StorPortExtendedFunction(26LL, a1, 4LL, v37);
        }
        *(_DWORD *)(a1 + 20) &= ~2u;
        return v19;
      }
    }
    goto LABEL_55;
  }
  *(_DWORD *)(a1 + 24) = 4;
  v19 = 3;
LABEL_56:
  v14 = a1;
LABEL_58:
  NVMeControllerStartFailureEventLog(v14);
  return v19;
}
