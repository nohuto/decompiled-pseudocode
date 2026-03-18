/*
 * XREFs of NVMeHwFindAdapter @ 0x1C0008100
 * Callers:
 *     <none>
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     GetControllerMaxTransferSize @ 0x1C0003AE0 (GetControllerMaxTransferSize.c)
 *     __security_check_cookie @ 0x1C0004D50 (__security_check_cookie.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     ControllerAllocateUncachedExtension @ 0x1C0007D30 (ControllerAllocateUncachedExtension.c)
 *     IsIntelChatham @ 0x1C0008004 (IsIntelChatham.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C000806C (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0008C6C (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000B0B4 (NVMeControllerInitPart1.c)
 *     GetNVMeRegisterAddress @ 0x1C0019218 (GetNVMeRegisterAddress.c)
 *     GetRegistrySettings @ 0x1C0019280 (GetRegistrySettings.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r15
  char v7; // r12
  char v8; // cl
  char v9; // al
  __int16 v10; // r14
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *NVMeRegisterAddress; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int8 v19; // al
  bool v20; // zf
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // r8
  void **v28; // r14
  char v29; // r8
  int v30; // edx
  _QWORD v31[8]; // [rsp+70h] [rbp-29h] BYREF

  v6 = *(_QWORD *)(a5 + 64);
  if ( (*(_DWORD *)(a1 + 20) & 2) != 0 )
  {
    v7 = 1;
  }
  else
  {
    v8 = g_ControllerExtensionIndex;
    v7 = 0;
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
    StorPortExtendedFunction(45LL, a1, v6);
    *(_WORD *)(a1 + 4) = *(_WORD *)v6;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v6 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v6 + 4);
    *(_QWORD *)(a1 + 136) = *(_QWORD *)(v6 + 8);
    *(_OWORD *)(a1 + 28) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(a1 + 44) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(a1 + 60) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(a1 + 76) = *(_OWORD *)(v6 + 64);
    *(_OWORD *)(a1 + 92) = *(_OWORD *)(v6 + 80);
    *(_OWORD *)(a1 + 108) = *(_OWORD *)(v6 + 96);
    *(_QWORD *)(a1 + 124) = *(_QWORD *)(v6 + 112);
    v11 = *(_DWORD *)(v6 + 120);
    *(_DWORD *)(a1 + 52) |= 4u;
    *(_DWORD *)(a1 + 184) = v11;
  }
  else
  {
    memset(v31, 0, sizeof(v31));
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100), v31, 64) != 64 )
    {
      *(_DWORD *)(a1 + 24) = 3;
      NVMeControllerStartFailureEventLog(a1);
      goto LABEL_59;
    }
    *(_DWORD *)(a1 + 4) = v31[0];
    *(_BYTE *)(a1 + 8) = v31[1];
    if ( IsIntelChatham(a1) )
    {
      v13 = v31[3];
      v14 = 4294963200LL;
      v15 = HIDWORD(v31[3]);
    }
    else
    {
      v13 = v31[2];
      v14 = 4294950912LL;
      v15 = HIDWORD(v31[2]);
    }
    *(_QWORD *)(a1 + 136) = v14 & v13 | (v15 << 32);
  }
  NVMeRegisterAddress = (__int64 *)GetNVMeRegisterAddress(a1, a5);
  *(_QWORD *)(a1 + 144) = NVMeRegisterAddress;
  if ( !NVMeRegisterAddress )
  {
    *(_DWORD *)(a1 + 24) = 4;
    NVMeControllerStartFailureEventLog(a1);
LABEL_59:
    StorPortNotification(4108LL, a1, 0LL);
    return 3LL;
  }
  v17 = *NVMeRegisterAddress;
  v18 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 160) = v17;
  LOBYTE(v17) = HIDWORD(*(_QWORD *)(a1 + 160)) & 0xF;
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(v18 + 8);
  *(_DWORD *)(a1 + 168) = 4 << v17;
  if ( IsIntelChatham(a1) )
  {
    *(_BYTE *)(a1 + 163) = 1;
    v19 = 1;
  }
  else
  {
    v19 = *(_BYTE *)(a1 + 163);
  }
  v20 = *(_BYTE *)(a1 + 16) == 0;
  *(_DWORD *)(a1 + 172) = 500 * v19;
  if ( v20 && !v7 )
    GetRegistrySettings(a1);
  v21 = 3;
  if ( *(_DWORD *)(a5 + 20) != 1 )
    v21 = 1;
  *(_DWORD *)(a1 + 12) = v21;
  v20 = *(_BYTE *)(a1 + 16) == 0;
  v22 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 264) = 1048640;
  if ( v20 )
  {
    *(_WORD *)(a1 + 268) = 256;
    v23 = 1024;
    if ( v22 )
      v23 = v22;
    if ( v23 >= (unsigned __int64)(unsigned __int16)*(_DWORD *)(a1 + 160) + 1 )
      v23 = (unsigned __int16)*(_DWORD *)(a1 + 160) + 1;
    LOWORD(v22) = -1;
    if ( v23 < 0xFFFF )
      LOWORD(v22) = v23;
  }
  else
  {
    *(_WORD *)(a1 + 268) = 64;
    if ( !v22 || v22 > 0x40 )
      goto LABEL_35;
  }
  v10 = v22;
LABEL_35:
  *(_WORD *)(a1 + 270) = v10;
  *(_DWORD *)(a5 + 48) = 3;
  *(_BYTE *)(a5 + 81) = 1;
  *(_BYTE *)(a5 + 145) = 0;
  *(_DWORD *)(a5 + 148) = 1;
  if ( *(_DWORD *)(a5 + 20) == 1 )
  {
    *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
    v24 = 2;
  }
  else
  {
    v24 = 1;
  }
  *(_DWORD *)(a5 + 160) = v24;
  *(_DWORD *)(a5 + 216) = 0;
  if ( *(_BYTE *)(a5 + 144) == 0x80 )
    *(_BYTE *)(a5 + 144) = 2;
  v25 = *(_DWORD *)(a5 + 220) | 0x2A;
  *(_BYTE *)(a5 + 147) = 0;
  v26 = v25 | 1;
  *(_DWORD *)(a5 + 220) = v26;
  if ( (*(_DWORD *)(a1 + 52) & 2) == 0 )
    *(_DWORD *)(a5 + 220) = v26 | 4;
  if ( !v7 )
  {
    if ( !ControllerAllocateUncachedExtension(a1, a5) )
    {
LABEL_57:
      NVMeControllerStartFailureEventLog(a1);
      return 2LL;
    }
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v27 = *(unsigned int *)(a1 + 108);
      if ( (_DWORD)v27 )
      {
        v28 = (void **)(a1 + 3792);
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v27) )
        {
          if ( *v28 )
            NVMeZeroMemory(*v28, *(_DWORD *)(a1 + 108));
        }
      }
    }
  }
  if ( !(unsigned __int8)ControllerReset(a1) || !(unsigned __int8)NVMeControllerInitPart1(a1) )
    goto LABEL_57;
  v29 = *(_BYTE *)(*(_QWORD *)(a1 + 1536) + 77LL);
  if ( v29 )
    v30 = (1 << v29) * (1 << ((*(_BYTE *)(a1 + 166) & 0xF) + 12));
  else
    v30 = -1;
  *(_DWORD *)(a1 + 176) = v30;
  *(_DWORD *)(a5 + 24) = GetControllerMaxTransferSize((_DWORD *)a1);
  *(_DWORD *)(a5 + 28) = 513;
  *(_BYTE *)(a5 + 72) = 1;
  *(_BYTE *)(a5 + 97) = 1;
  *(_BYTE *)(a5 + 146) = -1;
  *(_DWORD *)(a5 + 212) = 32;
  *(_DWORD *)(a5 + 204) = 32;
  *(_DWORD *)(a5 + 208) = 32;
  if ( !*(_BYTE *)(a1 + 16) )
    StorPortExtendedFunction(26LL, a1, 4LL);
  *(_DWORD *)(a1 + 20) &= ~2u;
  return 1LL;
}
