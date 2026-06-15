/*
 * XREFs of ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140007170
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003868 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003AA4 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140004970 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140004F40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140005690 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140005850 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140005B10 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400066A4 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140034F74 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14003618C (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x140042720 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 * Callees:
 *     ??0CAudioMediaType@@IEAA@XZ @ 0x1400073F8 (--0CAudioMediaType@@IEAA@XZ.c)
 *     ?IsValidFloatWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x14000742C (-IsValidFloatWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x14001440C (-IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140015B14 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x140015B60 (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1400181EF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x140040460 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 */

__int64 __fastcall CAudioMediaType::Create(
        const struct tWAVEFORMATEX *a1,
        unsigned int a2,
        struct IAudioMediaType **a3,
        float a4,
        int a5)
{
  CAudioMediaType *v8; // rax
  CAudioMediaType *v9; // rbx
  unsigned int cbSize; // eax
  unsigned __int64 v11; // rsi
  void *v12; // rax
  __int16 *v13; // rcx
  __int16 v14; // dx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edi
  WORD wFormatTag; // bp
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  WORD nSamplesPerSec_high; // ax
  int valid; // eax
  BOOL v24; // ecx

  if ( a3 )
  {
    *a3 = 0LL;
    v8 = (CAudioMediaType *)operator new(0x20uLL);
    if ( v8 )
    {
      v9 = CAudioMediaType::CAudioMediaType(v8);
      if ( v9 )
      {
        if ( !a1 )
        {
LABEL_23:
          *((float *)v9 + 6) = a4;
          v17 = 0;
          *a3 = 0LL;
          *a3 = (struct IAudioMediaType *)v9;
          (*(void (__fastcall **)(CAudioMediaType *, _QWORD))(*(_QWORD *)v9 + 8LL))(
            v9,
            *(_QWORD *)&GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d.Data1);
          return v17;
        }
        if ( a5 )
        {
LABEL_6:
          cbSize = a1->cbSize;
          if ( cbSize + 18 < cbSize )
          {
            v17 = -2147024362;
          }
          else
          {
            if ( cbSize + 18 <= a2 )
            {
              operator delete(*((void **)v9 + 2));
              *((_QWORD *)v9 + 2) = 0LL;
              v11 = 18LL;
              if ( a1->wFormatTag != 1 )
                v11 = a1->cbSize + 18LL;
              v12 = operator new[](v11);
              *((_QWORD *)v9 + 2) = v12;
              if ( v12 )
              {
                memcpy_0(v12, a1, v11);
                if ( a1->wFormatTag == 1 )
                  *(_WORD *)(*((_QWORD *)v9 + 2) + 16LL) = 0;
                v13 = (__int16 *)*((_QWORD *)v9 + 2);
                v14 = *v13;
                if ( *v13 )
                {
                  if ( ((v14 - 1) & 0xFFFD) == 0 )
                    goto LABEL_22;
                  if ( v14 != -2 )
                    goto LABEL_42;
                  v15 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v13 + 3);
                  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v13 + 3) )
                    v15 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v13 + 4);
                  if ( !v15 )
                    goto LABEL_22;
                  v16 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v13 + 3);
                  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v13 + 3) )
                    v16 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v13 + 4);
                  if ( v16 )
LABEL_42:
                    *((_DWORD *)v9 + 3) = 1;
                  else
LABEL_22:
                    *((_DWORD *)v9 + 3) = 0;
                }
                goto LABEL_23;
              }
              goto LABEL_50;
            }
            v17 = -2147024809;
          }
LABEL_51:
          if ( v9 )
            CAudioMediaType::`vector deleting destructor'(v9, 1u);
          *a3 = 0LL;
          return v17;
        }
        wFormatTag = a1->wFormatTag;
        if ( a1->wFormatTag == 0xFFFE )
        {
          if ( a1->cbSize < 0x16u )
            goto LABEL_44;
          v20 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2)
              - *(_QWORD *)&a1[1].nAvgBytesPerSec;
          if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)&a1[1].nAvgBytesPerSec )
          {
            v21 = *(unsigned int *)&a1[1].cbSize;
            v20 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v21;
            if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v21 )
              v20 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
                  - (unsigned __int64)a1[2].nChannels;
          }
          if ( v20 )
LABEL_44:
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
            v24 = 1;
LABEL_36:
            if ( wFormatTag == 0xFFFE )
            {
              v24 = 0;
              if ( a1->cbSize >= 0x16u )
                v24 = a1[1].wFormatTag <= a1->wBitsPerSample;
            }
            if ( v24 )
              goto LABEL_6;
LABEL_40:
            v17 = -2147024809;
            goto LABEL_51;
          }
          valid = IsValidFloatWfx(a1);
        }
        v24 = valid;
        if ( !valid )
          goto LABEL_40;
        goto LABEL_36;
      }
    }
    else
    {
      v9 = 0LL;
    }
LABEL_50:
    v17 = -2147024882;
    goto LABEL_51;
  }
  return 2147942487LL;
}
