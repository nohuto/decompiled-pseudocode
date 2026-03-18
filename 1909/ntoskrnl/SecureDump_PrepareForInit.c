/*
 * XREFs of SecureDump_PrepareForInit @ 0x14019BB8C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     SecureDump_ReadRegistry @ 0x14019BCA4 (SecureDump_ReadRegistry.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SecureDump_LogErrorEvent @ 0x14029BA10 (SecureDump_LogErrorEvent.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SecureDump_PrepareForInit(__int64 a1, _BYTE *a2)
{
  unsigned int v3; // ebx
  int Registry; // eax
  int v5; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v8[2]; // [rsp+50h] [rbp-10h] BYREF
  char v9; // [rsp+70h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+20h] BYREF

  P = 0LL;
  v6[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\EncryptionCertificates\\Certificate.1";
  v8[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v7[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\ForceDumpsDisabled";
  v6[0] = 13238472LL;
  v3 = 2;
  v8[0] = 8388734LL;
  v7[0] = 10879140LL;
  ForceDumpDisabled = 1;
  if ( !a2 )
    return;
  *a2 = 0;
  memset(&dword_140464158, 0, 0x20uLL);
  Registry = SecureDump_ReadRegistry((unsigned int)v7, (unsigned int)L"GuardedHost", 4, (unsigned int)&P, (__int64)&v9);
  if ( Registry >= 0 )
  {
    dword_140464158 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( !dword_140464158 )
    {
LABEL_4:
      v5 = SecureDump_ReadRegistry(
             (unsigned int)v8,
             (unsigned int)L"DumpEncryptionEnabled",
             4,
             (unsigned int)&P,
             (__int64)&v9);
      if ( v5 >= 0 )
      {
        dword_14046415C = *(_DWORD *)P;
        ExFreePoolWithTag(P, 0);
        if ( !dword_14046415C
          || (*a2 = 1,
              (int)SecureDump_ReadRegistry(
                     (unsigned int)v6,
                     (unsigned int)L"PublicKey",
                     3,
                     (unsigned int)&pbInput,
                     (__int64)&dwFlags) >= 0)
          && (int)SecureDump_ReadRegistry(
                    (unsigned int)v6,
                    (unsigned int)L"Thumbprint",
                    1,
                    (unsigned int)&qword_140464170,
                    (__int64)&dword_14046416C) >= 0 )
        {
          ForceDumpDisabled = 0;
          goto LABEL_8;
        }
      }
      else if ( v5 == -1073741772 )
      {
        v3 = 0;
        ForceDumpDisabled = 0;
      }
      goto LABEL_7;
    }
    v3 = 0;
  }
  else if ( Registry == -1073741772 )
  {
    goto LABEL_4;
  }
LABEL_7:
  if ( ForceDumpDisabled != 1 )
  {
LABEL_8:
    SecureDmpEncryptionContext = 1;
    return;
  }
  if ( pbInput )
  {
    ExFreePoolWithTag(pbInput, 0);
    pbInput = 0LL;
  }
  if ( v3 )
  {
    SecureDmpEncryptionContext = 3;
    SecureDump_LogErrorEvent(v3);
  }
}
