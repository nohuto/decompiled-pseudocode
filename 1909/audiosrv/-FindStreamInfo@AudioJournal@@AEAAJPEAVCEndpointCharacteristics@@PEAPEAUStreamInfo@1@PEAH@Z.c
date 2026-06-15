/*
 * XREFs of ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x1800289A0
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180026450 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180027510 (-StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?OnCreateStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x180102C18 (-OnCreateStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z.c)
 *     ?OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x180102D54 (-OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z.c)
 *     ?OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z @ 0x180102E90 (-OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z.c)
 * Callees:
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x1800015C0 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioJournal::FindStreamInfo(
        AudioJournal *this,
        struct CEndpointCharacteristics *a2,
        struct AudioJournal::StreamInfo **a3,
        int *a4)
{
  struct AudioJournal::StreamInfo *v5; // rax
  int v6; // r14d
  int InstanceIdFromMMDeviceId; // ebx
  int v8; // r10d
  struct AudioJournal::StreamInfo *v9; // r9
  char *v10; // rax
  char *v11; // r8
  int v12; // ecx
  int v13; // edx
  int i; // edx
  int v15; // r8d
  int v16; // eax
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  void *Src; // [rsp+20h] [rbp-39h] BYREF
  LPVOID pv[2]; // [rsp+28h] [rbp-31h] BYREF
  __int128 v22; // [rsp+38h] [rbp-21h]
  __int128 v23; // [rsp+48h] [rbp-11h]
  __int128 v24; // [rsp+58h] [rbp-1h]
  __int128 v25; // [rsp+68h] [rbp+Fh]
  char v26; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v28; // [rsp+C0h] [rbp+67h] BYREF
  int v29; // [rsp+C4h] [rbp+6Bh]
  struct AudioJournal::StreamInfo *v30; // [rsp+C8h] [rbp+6Fh] BYREF
  struct AudioJournal::StreamInfo **v31; // [rsp+D0h] [rbp+77h] BYREF
  int *v32; // [rsp+D8h] [rbp+7Fh] BYREF

  v32 = a4;
  v31 = a3;
  v29 = HIDWORD(this);
  pv[1] = (LPVOID)-2LL;
  v30 = 0LL;
  v28 = 0;
  Src = 0LL;
  *(_QWORD *)&v22 = &v31;
  *((_QWORD *)&v22 + 1) = &v30;
  *(_QWORD *)&v23 = &v32;
  *((_QWORD *)&v23 + 1) = &v28;
  v24 = v22;
  v25 = v23;
  v26 = 1;
  if ( !a2 )
  {
    v9 = (struct AudioJournal::StreamInfo *)&unk_1801B8180;
    v30 = (struct AudioJournal::StreamInfo *)&unk_1801B8180;
LABEL_24:
    InstanceIdFromMMDeviceId = 0;
    goto LABEL_25;
  }
  if ( (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a2 + 56LL))(a2) )
  {
    v5 = (struct AudioJournal::StreamInfo *)&unk_1801B7FF0;
    v6 = 2;
  }
  else
  {
    v5 = (struct AudioJournal::StreamInfo *)&unk_1801B7D98;
    v6 = 3;
  }
  v30 = v5;
  Src = 0LL;
  pv[0] = 0LL;
  InstanceIdFromMMDeviceId = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a2 + 2) + 40LL))(
                               *((_QWORD *)a2 + 2),
                               pv);
  if ( InstanceIdFromMMDeviceId >= 0 )
    InstanceIdFromMMDeviceId = mmdDevGetInstanceIdFromMMDeviceId(pv[0], &Src);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  if ( InstanceIdFromMMDeviceId >= 0 )
  {
    v28 = 0;
    v8 = 0;
    v9 = v30;
    while ( 1 )
    {
      v10 = (char *)v30 + 200 * v8;
      v11 = (char *)((_BYTE *)Src - v10);
      do
      {
        v12 = *(unsigned __int16 *)&v11[(_QWORD)v10];
        v13 = *(unsigned __int16 *)v10 - v12;
        if ( v13 )
          break;
        v10 += 2;
      }
      while ( v12 );
      if ( !v13 )
        goto LABEL_24;
      v28 = ++v8;
      if ( v8 >= v6 )
      {
        v28 = 0;
        for ( i = 0; i < v6; v28 = i )
        {
          v15 = i;
          if ( !*((_DWORD *)v30 + 50 * i + 37) )
            break;
          v15 = ++i;
        }
        if ( v15 >= v6 )
        {
          v28 = v6 - 1;
          *((_DWORD *)v30 + 50 * (unsigned int)v6 - 14) = 100;
          *((_WORD *)v30 + 100 * v28) = 0;
        }
        else
        {
          v16 = CEndpointCharacteristics::FormFactor(a2);
          *((_DWORD *)v30 + 50 * v28 + 36) = v16;
          v17 = -1LL;
          v18 = -1LL;
          do
            ++v18;
          while ( *((_WORD *)Src + v18) );
          if ( v18 >= 0x46 )
          {
            v17 = 70LL;
          }
          else
          {
            do
              ++v17;
            while ( *((_WORD *)Src + v17) );
          }
          memcpy_0((char *)v30 + 200 * v28, Src, 2 * v17);
          *((_WORD *)v30 + 100 * v28 + v17) = 0;
        }
        v9 = v30;
        goto LABEL_24;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAA,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
    (const char *)(unsigned int)InstanceIdFromMMDeviceId);
  v9 = v30;
LABEL_25:
  *v31 = v9;
  *v32 = v28;
  if ( Src )
    CoTaskMemFree(Src);
  return (unsigned int)InstanceIdFromMMDeviceId;
}
