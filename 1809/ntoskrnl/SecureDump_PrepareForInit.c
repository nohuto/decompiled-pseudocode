/*
 * XREFs of SecureDump_PrepareForInit @ 0x1401915AC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     SecureDump_ReadRegistry @ 0x1401916C0 (SecureDump_ReadRegistry.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SecureDump_LogErrorEvent @ 0x140286B40 (SecureDump_LogErrorEvent.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall SecureDump_PrepareForInit(__int64 a1, _BYTE *a2)
{
  unsigned int v3; // ebx
  int Registry; // eax
  int v5; // eax
  int v6; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v7; // [rsp+38h] [rbp-28h]
  int v8; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h] BYREF
  const wchar_t *v11; // [rsp+58h] [rbp-8h]
  char v12; // [rsp+70h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+20h] BYREF

  P = 0LL;
  v7 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\EncryptionCertificates\\Certificate.1";
  v11 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\ForceDumpsDisabled";
  v6 = 13238472;
  v3 = 2;
  v10 = 8388734;
  v8 = 10879140;
  ForceDumpDisabled = 1;
  if ( !a2 )
    return;
  *a2 = 0;
  memset(&dword_140439A98, 0, 0x20uLL);
  Registry = SecureDump_ReadRegistry(
               (unsigned int)&v8,
               (unsigned int)L"GuardedHost",
               4,
               (unsigned int)&P,
               (__int64)&v12);
  if ( Registry >= 0 )
  {
    dword_140439A98 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( !dword_140439A98 )
    {
LABEL_4:
      v5 = SecureDump_ReadRegistry(
             (unsigned int)&v10,
             (unsigned int)L"DumpEncryptionEnabled",
             4,
             (unsigned int)&P,
             (__int64)&v12);
      if ( v5 >= 0 )
      {
        dword_140439A9C = *(_DWORD *)P;
        ExFreePoolWithTag(P, 0);
        if ( !dword_140439A9C
          || (*a2 = 1,
              (int)SecureDump_ReadRegistry(
                     (unsigned int)&v6,
                     (unsigned int)L"PublicKey",
                     3,
                     (unsigned int)&pbInput,
                     (__int64)&dwFlags) >= 0)
          && (int)SecureDump_ReadRegistry(
                    (unsigned int)&v6,
                    (unsigned int)L"Thumbprint",
                    1,
                    (unsigned int)&qword_140439AB0,
                    (__int64)&dword_140439AAC) >= 0 )
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
