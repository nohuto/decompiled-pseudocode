/*
 * XREFs of ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1C024DFC4
 * Callers:
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C022D1C0 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlManager::GetDeviceSupportedWaveforms(
        InteractiveControlManager *this,
        int a2,
        struct _WAVEFORM_INFO **a3,
        int *a4)
{
  int v4; // ebx
  struct _WAVEFORM_INFO *v6; // rdi
  unsigned int v10; // edx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rax
  unsigned int v15; // [rsp+30h] [rbp-29h] BYREF
  int v16; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v18; // [rsp+60h] [rbp+7h]
  int v19; // [rsp+68h] [rbp+Fh]
  int v20; // [rsp+6Ch] [rbp+13h]
  unsigned int *v21; // [rsp+70h] [rbp+17h]
  int v22; // [rsp+78h] [rbp+1Fh]
  int v23; // [rsp+7Ch] [rbp+23h]

  v15 = 0;
  v4 = 0;
  v6 = 0LL;
  if ( dword_1C0321308 > 4u )
  {
    v20 = 0;
    v23 = 0;
    v18 = "InteractiveControlManager::GetDeviceSupportedWaveforms entry";
    v21 = (unsigned int *)&v16;
    v19 = 61;
    v16 = a2;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8DF3, 0LL, 0LL, 4u, &pData);
  }
  v10 = 0;
  v11 = (__int64 *)((char *)this + 40);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 )
    {
      if ( a2 == *(_DWORD *)(v12 + 8) )
        break;
    }
    ++v10;
    ++v11;
    if ( v10 >= 5 )
    {
      v15 = -1073741667;
      goto LABEL_8;
    }
  }
  v14 = *(_QWORD *)(v12 + 384);
  if ( v14 )
  {
    v6 = *(struct _WAVEFORM_INFO **)(v14 + 80);
    v4 = *(_DWORD *)(v14 + 88);
  }
LABEL_8:
  if ( a3 )
    *a3 = v6;
  if ( a4 )
    *a4 = v4;
  if ( dword_1C0321308 > 4u )
  {
    v20 = 0;
    v23 = 0;
    v18 = "InteractiveControlManager::GetDeviceSupportedWaveforms exit";
    v21 = &v15;
    v19 = 60;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8DBA, 0LL, 0LL, 4u, &pData);
  }
  return v15;
}
