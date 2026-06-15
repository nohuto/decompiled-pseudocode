/*
 * XREFs of ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x1800EC438
 * Callers:
 *     s_midiOpenPort @ 0x1800EC6C0 (s_midiOpenPort.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003190C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180031950 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

__int64 __fastcall GetKsMidiDeviceInfo(const unsigned __int16 *a1, unsigned __int16 **a2, unsigned int *a3)
{
  unsigned __int16 *v5; // rsi
  int ObjectProperties; // ebx
  __int64 Property; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  const unsigned __int16 *v13; // r15
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rax
  unsigned __int64 *v19; // [rsp+28h] [rbp-81h]
  unsigned __int64 *v20; // [rsp+28h] [rbp-81h]
  unsigned int v21[2]; // [rsp+30h] [rbp-79h]
  unsigned int v22[2]; // [rsp+30h] [rbp-79h]
  unsigned __int64 v23; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int16 **v24; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int16 *v25; // [rsp+50h] [rbp-59h] BYREF
  DEVPROPKEY v26; // [rsp+60h] [rbp-49h]
  int v27; // [rsp+74h] [rbp-35h]
  __int64 v28; // [rsp+78h] [rbp-31h]
  __int128 v29; // [rsp+80h] [rbp-29h]
  int v30; // [rsp+90h] [rbp-19h]
  int v31; // [rsp+94h] [rbp-15h]
  __int64 v32; // [rsp+98h] [rbp-11h]
  __int128 v33; // [rsp+A0h] [rbp-9h]
  int v34; // [rsp+B0h] [rbp+7h]
  int v35; // [rsp+B4h] [rbp+Bh]
  __int64 v36; // [rsp+B8h] [rbp+Fh]

  v26 = DEVPKEY_DeviceInterface_ClassGuid;
  v30 = 1;
  v34 = 2;
  LODWORD(v23) = 0;
  v5 = 0LL;
  v29 = DEVPKEY_KsMidiPort_KsFilterInterfaceId;
  v24 = 0LL;
  v33 = DEVPKEY_KsMidiPort_KsPinId;
  v25 = 0LL;
  v27 = 0;
  v28 = 0LL;
  v31 = 0;
  v32 = 0LL;
  v35 = 0;
  v36 = 0LL;
  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  if ( ObjectProperties >= 0 )
  {
    Property = DevFindProperty(&DEVPKEY_DeviceInterface_ClassGuid, 0LL, 0LL, (unsigned int)v23, v24, &v23, &v24);
    if ( !Property || *(_DWORD *)(Property + 32) != 13 )
      goto LABEL_25;
    v8 = *(_QWORD **)(Property + 40);
    v9 = *v8 - DEVINTERFACE_MIDI_OUTPUT;
    if ( *v8 == DEVINTERFACE_MIDI_OUTPUT )
      v9 = v8[1] - 0x1428BFEBB3BBD480LL;
    if ( v9 )
    {
      v10 = *v8 - DEVINTERFACE_MIDI_INPUT;
      if ( *v8 == DEVINTERFACE_MIDI_INPUT )
        v10 = v8[1] - 0x2BE247378B6F3FB7LL;
      if ( v10 )
      {
        ObjectProperties = -2147024809;
        goto LABEL_26;
      }
    }
    v11 = DevFindProperty(
            &DEVPKEY_KsMidiPort_KsFilterInterfaceId,
            0LL,
            0LL,
            (unsigned int)v23,
            v24,
            v19,
            *(_QWORD *)v21);
    if ( !v11 || *(_DWORD *)(v11 + 32) != 18 )
    {
LABEL_25:
      ObjectProperties = -2147023728;
      goto LABEL_26;
    }
    v13 = *(const unsigned __int16 **)(v11 + 40);
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      ObjectProperties = -2147024362;
      goto LABEL_26;
    }
    if ( is_mul_ok(v15, 2uLL) )
    {
      v16 = CTCoAllocPolicy::Alloc(v12, 0, 2 * v15, (void **)&v25);
      v5 = v25;
      ObjectProperties = v16;
      if ( v16 >= 0 )
        StringCchCopyNExW((char *)v25, v14 + 1, v13, v14);
    }
    else
    {
      ObjectProperties = -2147024362;
    }
    if ( ObjectProperties >= 0 )
    {
      v17 = DevFindProperty(&DEVPKEY_KsMidiPort_KsPinId, 0LL, 0LL, (unsigned int)v23, v24, v20, *(_QWORD *)v22);
      if ( v17 && *(_DWORD *)(v17 + 32) == 7 )
      {
        ObjectProperties = 0;
        *a3 = **(_DWORD **)(v17 + 40);
        *a2 = v5;
        v5 = 0LL;
        goto LABEL_26;
      }
      goto LABEL_25;
    }
  }
LABEL_26:
  CoTaskMemFree(v5);
  DevFreeObjectProperties((unsigned int)v23);
  if ( ObjectProperties < 0 )
    AudSrvTraceLoggingErrorHelper("GetKsMidiDeviceInfo", 92, ObjectProperties);
  return (unsigned int)ObjectProperties;
}
