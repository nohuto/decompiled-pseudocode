/*
 * XREFs of ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001B3B0
 * Callers:
 *     ?GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1800059A0 (-GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180006274 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006738 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001BC50 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x18001FC20 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18003B330 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDAAC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x1800DF740 (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E7360 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     _lambda_1cf1c298c02d1937c63822c825393df5_::operator() @ 0x1801152A0 (_lambda_1cf1c298c02d1937c63822c825393df5_--operator().c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x180138590 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x180138C40 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 * Callees:
 *     ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800036FC (-IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     ??0CAudioMediaType@@IEAA@XZ @ 0x18001CC4C (--0CAudioMediaType@@IEAA@XZ.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x18013C1B0 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 */

__int64 __fastcall CAudioMediaType::Create(
        const struct tWAVEFORMATEX *a1,
        unsigned int a2,
        struct IAudioMediaType **a3,
        float a4,
        int a5)
{
  HANDLE ProcessHeap; // rax
  CAudioMediaType *v9; // rax
  CAudioMediaType *v10; // rbx
  WORD wFormatTag; // r11
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  WORD nSamplesPerSec_high; // ax
  WORD nChannels; // cx
  int valid; // r8d
  WORD wBitsPerSample; // dx
  int nBlockAlign; // r9d
  DWORD v19; // ecx
  DWORD nAvgBytesPerSec; // r9d
  unsigned int cbSize; // eax
  SIZE_T v22; // rsi
  HANDLE v23; // rax
  void *v24; // rax
  __int16 *v25; // rcx
  __int16 v26; // dx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // edi

  if ( a3 )
  {
    *a3 = 0LL;
    ProcessHeap = GetProcessHeap();
    v9 = (CAudioMediaType *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
    if ( v9 )
    {
      v10 = CAudioMediaType::CAudioMediaType(v9);
      if ( v10 )
      {
        if ( !a1 )
        {
LABEL_42:
          *((float *)v10 + 6) = a4;
          v29 = 0;
          *a3 = 0LL;
          *a3 = (struct IAudioMediaType *)v10;
          (*(void (__fastcall **)(CAudioMediaType *, _QWORD))(*(_QWORD *)v10 + 8LL))(
            v10,
            *(_QWORD *)&GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d.Data1);
          return v29;
        }
        if ( a5 )
        {
LABEL_25:
          cbSize = a1->cbSize;
          if ( cbSize + 18 < cbSize )
          {
            v29 = -2147024362;
          }
          else
          {
            if ( cbSize + 18 <= a2 )
            {
              operator delete(*((void **)v10 + 2));
              *((_QWORD *)v10 + 2) = 0LL;
              v22 = 18LL;
              if ( a1->wFormatTag != 1 )
                v22 = a1->cbSize + 18LL;
              v23 = GetProcessHeap();
              v24 = HeapAlloc(v23, 0, v22);
              *((_QWORD *)v10 + 2) = v24;
              if ( v24 )
              {
                memcpy_0(v24, a1, v22);
                if ( a1->wFormatTag == 1 )
                  *(_WORD *)(*((_QWORD *)v10 + 2) + 16LL) = 0;
                v25 = (__int16 *)*((_QWORD *)v10 + 2);
                v26 = *v25;
                if ( *v25 )
                {
                  if ( ((v26 - 1) & 0xFFFD) == 0 )
                    goto LABEL_41;
                  if ( v26 != -2 )
                    goto LABEL_46;
                  v27 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v25 + 3);
                  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v25 + 3) )
                    v27 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v25 + 4);
                  if ( !v27 )
                    goto LABEL_41;
                  v28 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v25 + 3);
                  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v25 + 3) )
                    v28 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v25 + 4);
                  if ( v28 )
LABEL_46:
                    *((_DWORD *)v10 + 3) = 1;
                  else
LABEL_41:
                    *((_DWORD *)v10 + 3) = 0;
                }
                goto LABEL_42;
              }
              goto LABEL_55;
            }
            v29 = -2147024809;
          }
LABEL_56:
          if ( v10 )
            CAudioMediaType::`vector deleting destructor'(v10, 1u);
          *a3 = 0LL;
          return v29;
        }
        wFormatTag = a1->wFormatTag;
        if ( a1->wFormatTag == 0xFFFE )
        {
          if ( a1->cbSize < 0x16u )
            goto LABEL_49;
          v12 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2)
              - *(_QWORD *)&a1[1].nAvgBytesPerSec;
          if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)&a1[1].nAvgBytesPerSec )
          {
            v13 = *(unsigned int *)&a1[1].cbSize;
            v12 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v13;
            if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v13 )
              v12 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
                  - (unsigned __int64)a1[2].nChannels;
          }
          if ( v12 )
LABEL_49:
            nSamplesPerSec_high = 0;
          else
            nSamplesPerSec_high = HIWORD(a1[1].nSamplesPerSec);
        }
        else
        {
          nSamplesPerSec_high = a1->wFormatTag;
        }
        if ( nSamplesPerSec_high == 1 )
        {
          valid = IsValidPcmWfx(a1);
        }
        else
        {
          if ( nSamplesPerSec_high != 3 )
          {
            valid = 1;
LABEL_21:
            if ( wFormatTag == 0xFFFE )
            {
              valid = 0;
              if ( a1->cbSize >= 0x16u )
                valid = a1[1].wFormatTag <= a1->wBitsPerSample;
            }
            if ( valid )
              goto LABEL_25;
LABEL_51:
            v29 = -2147024809;
            goto LABEL_56;
          }
          nChannels = a1->nChannels;
          valid = 0;
          if ( nChannels )
          {
            wBitsPerSample = a1->wBitsPerSample;
            if ( ((wBitsPerSample - 32) & 0xFFDF) == 0 )
            {
              nBlockAlign = a1->nBlockAlign;
              if ( nBlockAlign == nChannels * wBitsPerSample / 8 )
              {
                v19 = nBlockAlign * a1->nSamplesPerSec;
                valid = 1;
                nAvgBytesPerSec = a1->nAvgBytesPerSec;
                if ( nAvgBytesPerSec > v19 / 0x14 + v19 || nAvgBytesPerSec < v19 - v19 / 0x14 )
                  valid = 0;
              }
            }
          }
        }
        if ( !valid )
          goto LABEL_51;
        goto LABEL_21;
      }
    }
    else
    {
      v10 = 0LL;
    }
LABEL_55:
    v29 = -2147024882;
    goto LABEL_56;
  }
  return 2147942487LL;
}
