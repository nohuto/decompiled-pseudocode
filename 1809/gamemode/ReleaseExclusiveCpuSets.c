/*
 * XREFs of ReleaseExclusiveCpuSets @ 0x1800014B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     ?IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z @ 0x180003280 (-IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180003C80 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x180004280 (__security_check_cookie.c)
 *     memset_0 @ 0x1800049A6 (memset_0.c)
 */

HRESULT __stdcall ReleaseExclusiveCpuSets()
{
  bool *v0; // rdx
  int IsCurrentProcessStronglyNamed; // eax
  unsigned __int64 v2; // rcx
  bool *v3; // r8
  const GUID *v4; // r9
  DWORD CurrentProcessId; // eax
  HANDLE v6; // rbx
  signed int LastError; // eax
  int v8; // eax
  int v9; // eax
  char v11; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int16 v12; // [rsp+41h] [rbp-28h] BYREF
  HRESULT v13; // [rsp+44h] [rbp-25h] BYREF
  int pvData; // [rsp+48h] [rbp-21h] BYREF
  int v15; // [rsp+4Ch] [rbp-1Dh] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v17[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+6Ch] [rbp+3h]
  int v21; // [rsp+70h] [rbp+7h]
  unsigned int v22; // [rsp+74h] [rbp+Bh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+17h] BYREF
  HRESULT *v24; // [rsp+A0h] [rbp+37h]
  int v25; // [rsp+A8h] [rbp+3Fh]
  int v26; // [rsp+ACh] [rbp+43h]

  memset_0(v17, 0, 0x28uLL);
  IsCurrentProcessStronglyNamed = CallerIdentity::IsCurrentProcessStronglyNamed((CallerIdentity *)&v11, v0);
  if ( IsCurrentProcessStronglyNamed >= 0 )
  {
    IsCurrentProcessStronglyNamed = CallerIdentity::CheckCallerCapability((CallerIdentity *)v2, &v12, v3);
    if ( IsCurrentProcessStronglyNamed >= 0 && (!v11 || !(_BYTE)v12) )
      IsCurrentProcessStronglyNamed = -2147024891;
  }
  v13 = IsCurrentProcessStronglyNamed;
  if ( IsCurrentProcessStronglyNamed >= 0 )
  {
    RtlGetDeviceFamilyInfoEnum(0LL, &v15, 0LL);
    if ( v15 == 5 )
    {
      v13 = -2147467263;
    }
    else
    {
      pvData = 0;
      pcbData = 4;
      if ( RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Policies\\Microsoft\\Windows\\GameDVR",
             L"AllowAutoGameMode",
             0x18u,
             0LL,
             &pvData,
             &pcbData)
        || pvData )
      {
        CurrentProcessId = GetCurrentProcessId();
        v6 = OpenProcess(0x1000u, 0, CurrentProcessId);
        if ( v6 )
        {
          RmGameModeInitializeResourceRequest(v17);
          v17[1] = 0;
          v18 = 0LL;
          v22 = v22 & 0xFFFFFFE0 | 0x10;
          v17[0] = 5;
          v19 = 2;
          v20 = 50;
          v21 = 30;
          v8 = RmGameModeRegisterProcess(v6, v17, 0LL);
          if ( v8 == -1073740008 )
          {
            RmGameModeUnregisterProcess(v6);
            v8 = RmGameModeRegisterProcess(v6, v17, 0LL);
          }
          if ( v8 >= 0 )
            v9 = 0;
          else
            v9 = v8 | 0x10000000;
          v13 = v9;
          CloseHandle(v6);
        }
        else
        {
          LastError = GetLastError();
          v2 = (unsigned __int16)LastError | 0x80070000;
          if ( LastError <= 0 )
            v2 = (unsigned int)LastError;
          v13 = v2;
        }
      }
      else
      {
        v13 = -2147019873;
      }
    }
  }
  if ( (unsigned int)dword_180007000 > 4 )
  {
    v26 = 0;
    v24 = &v13;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)v2, &unk_180005948, (LPCGUID)v3, v4, 3u, &pData);
  }
  return v13;
}
