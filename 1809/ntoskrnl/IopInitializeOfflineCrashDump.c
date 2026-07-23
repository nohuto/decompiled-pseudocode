/*
 * XREFs of IopInitializeOfflineCrashDump @ 0x140180DC0
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x1409C2174 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     IopConstructInMemoryDumpHeader @ 0x1402812CC (IopConstructInMemoryDumpHeader.c)
 *     IopInitializeInMemoryDumpData @ 0x140281938 (IopInitializeInMemoryDumpData.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x1406C7B50 (IopOpenRegistryKey.c)
 *     IoGetEnvironmentVariableEx @ 0x1408224FC (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1408227E8 (IoSetEnvironmentVariableEx.c)
 *     IopCachePreviousBootData @ 0x1409F59E8 (IopCachePreviousBootData.c)
 */

void __fastcall IopInitializeOfflineCrashDump(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  char v3; // al
  char v4; // [rsp+30h] [rbp-50h]
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  int v6; // [rsp+40h] [rbp-40h]
  PVOID P; // [rsp+48h] [rbp-38h]
  int v8; // [rsp+50h] [rbp-30h] BYREF
  const wchar_t *v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  v1 = 0;
  v10 = 2012912317;
  Handle = 0LL;
  dword_14043D850 = 0;
  v11 = 1295123289;
  v12 = -198680387;
  v13 = 1266192359;
  v8 = 8388734;
  v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v6 = 1;
  v4 = 0;
  if ( a1 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 2736) - 1) <= 1 )
    {
      PoOffCrashConfigTable = *(_OWORD *)(a1 + 2736);
      xmmword_14041A670 = *(_OWORD *)(a1 + 2752);
      v2 = IopOpenRegistryKey(&Handle, 0LL, &v8, 131097LL, 0);
      if ( v2 >= 0 )
      {
        if ( (int)IopGetRegistryValue(Handle) < 0 )
          goto LABEL_14;
        if ( *((_DWORD *)P + 3) )
          v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
        if ( v1 == 1 )
        {
          OfflineDumpEnabled = 1;
          v4 = 1;
        }
        else
        {
LABEL_14:
          OfflineDumpEnabled = 0;
          if ( (unsigned int)PoOffCrashConfigTable >= 2 )
          {
            v3 = 0;
            if ( (BYTE8(PoOffCrashConfigTable) & 4) != 0 )
              v3 = 4;
            v4 = v3;
          }
        }
        if ( (int)IoGetEnvironmentVariableEx(L"OfflineMemoryDumpUseCapability", 0LL) < 0 || v4 )
          IoSetEnvironmentVariableEx(L"OfflineMemoryDumpUseCapability", 7);
        if ( OfflineDumpEnabled )
        {
          IopCachePreviousBootData(&Handle);
          IopInitializeInMemoryDumpData();
          IopConstructInMemoryDumpHeader();
          if ( (int)IopGetRegistryValue(Handle) >= 0 )
          {
            if ( *((_DWORD *)P + 3) )
              DumpPolicyAttemptOffline = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
        }
      }
      else
      {
        dword_14043D850 = v2;
      }
    }
    else
    {
      dword_14043D850 = -1073741736;
    }
    if ( Handle )
      ObCloseHandle(Handle, 0);
  }
  else
  {
    dword_14043D850 = -1073741275;
  }
}
