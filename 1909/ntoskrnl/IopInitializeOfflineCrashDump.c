/*
 * XREFs of IopInitializeOfflineCrashDump @ 0x140189844
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x1409F467C (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     IopConstructInMemoryDumpHeader @ 0x1402964B4 (IopConstructInMemoryDumpHeader.c)
 *     IopInitializeInMemoryDumpData @ 0x140296B74 (IopInitializeInMemoryDumpData.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x14070A534 (IopOpenRegistryKey.c)
 *     IoGetEnvironmentVariableEx @ 0x14085AAD4 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x14085ADC0 (IoSetEnvironmentVariableEx.c)
 *     IopCachePreviousBootData @ 0x140A39CF8 (IopCachePreviousBootData.c)
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
  _QWORD v8[2]; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  v1 = 0;
  v9 = 2012912317;
  Handle = 0LL;
  dword_140468000 = 0;
  v10 = 1295123289;
  v11 = -198680387;
  v12 = 1266192359;
  v8[0] = 8388734LL;
  v8[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v6 = 1;
  v4 = 0;
  if ( a1 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 2760) - 1) <= 1 )
    {
      PoOffCrashConfigTable = *(_OWORD *)(a1 + 2760);
      xmmword_140444DD0 = *(_OWORD *)(a1 + 2776);
      v2 = IopOpenRegistryKey(&Handle, 0LL, v8, 131097LL, 0);
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
        dword_140468000 = v2;
      }
    }
    else
    {
      dword_140468000 = -1073741736;
    }
    if ( Handle )
      ObCloseHandle(Handle, 0);
  }
  else
  {
    dword_140468000 = -1073741275;
  }
}
