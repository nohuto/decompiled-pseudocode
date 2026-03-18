/*
 * XREFs of WmipGetGuidObjectInstanceInfo @ 0x140748070
 * Callers:
 *     IoWMIDeviceObjectToInstanceName @ 0x140747F80 (IoWMIDeviceObjectToInstanceName.c)
 *     WmipTranslateFileHandle @ 0x1408F1050 (WmipTranslateFileHandle.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     IoGetDeviceInstanceName @ 0x1401744FC (IoGetDeviceInstanceName.c)
 *     _wcsnicmp @ 0x1401A0960 (_wcsnicmp.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 */

__int64 __fastcall WmipGetGuidObjectInstanceInfo(__int64 a1, ULONG_PTR a2, _OWORD *a3, _DWORD *a4)
{
  _DWORD *v5; // rbx
  _OWORD *v6; // rbp
  int DeviceInstanceName; // edi
  __int64 v8; // r15
  unsigned __int16 v9; // r12
  int v10; // r13d
  const wchar_t *v11; // rsi
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rbp
  __int128 v16; // xmm0
  wchar_t *Str2[2]; // [rsp+30h] [rbp-48h] BYREF

  Str2[0] = 0LL;
  v5 = a4;
  Str2[1] = 0LL;
  v6 = a3;
  DeviceInstanceName = IoGetDeviceInstanceName(a2, (PUNICODE_STRING)Str2);
  if ( DeviceInstanceName >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 56);
    v9 = LOWORD(Str2[0]) >> 1;
    v10 = 0;
    DeviceInstanceName = -1073741162;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v11 = Str2[1];
    if ( *(_DWORD *)(v8 + 36) )
    {
      v12 = (_QWORD *)(v8 + 56);
      v13 = (_QWORD *)*v12;
      if ( (_QWORD *)*v12 != v12 )
      {
        while ( 1 )
        {
          if ( (v13[2] & 1) != 0 )
          {
            v14 = v13[11];
            v15 = -1LL;
            do
              ++v15;
            while ( *(_WORD *)(v14 + 2 * v15 + 4) );
            if ( !wcsnicmp((const wchar_t *)(v14 + 4), v11, v9)
              && (unsigned __int16)v15 == v9 + 1
              && *(_WORD *)(v14 + 2LL * (unsigned __int16)v15 + 2) == 95 )
            {
              break;
            }
          }
          v13 = (_QWORD *)*v13;
          if ( v13 == v12 )
            goto LABEL_11;
        }
        DeviceInstanceName = 0;
        v10 = *(_DWORD *)v13[11];
LABEL_11:
        v6 = a3;
      }
      v5 = a4;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( DeviceInstanceName >= 0 )
    {
      v16 = *(_OWORD *)Str2;
      *v5 = v10;
      v11 = 0LL;
      Str2[1] = 0LL;
      DeviceInstanceName = 0;
      *v6 = v16;
    }
    if ( v11 )
      RtlFreeAnsiString((PUNICODE_STRING)Str2);
  }
  return (unsigned int)DeviceInstanceName;
}
