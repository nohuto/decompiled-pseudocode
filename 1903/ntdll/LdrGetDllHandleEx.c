/*
 * XREFs of LdrGetDllHandleEx @ 0x1800217F0
 * Callers:
 *     LdrGetDllHandle @ 0x180021770 (LdrGetDllHandle.c)
 *     CsrClientConnectToServer @ 0x18004BB80 (CsrClientConnectToServer.c)
 *     sub_180110078 @ 0x180110078 (sub_180110078.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180021908 @ 0x180021908 (sub_180021908.c)
 *     sub_18002228C @ 0x18002228C (sub_18002228C.c)
 *     sub_18002EB1C @ 0x18002EB1C (sub_18002EB1C.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

NTSTATUS __cdecl LdrGetDllHandleEx(
        ULONG Flags,
        PWSTR DllPath,
        PULONG DllCharacteristics,
        PUNICODE_STRING DllName,
        PVOID *DllHandle)
{
  NTSTATUS v8; // ebx
  ULONG v10; // edi
  PVOID v11; // rsi
  NTSTATUS v12; // eax
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v15; // [rsp+BCh] [rbp-2Ch]

  BaseAddress[0] = 0LL;
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      844,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      (__int64)"DLL name: %wZ\n",
      DllName);
  sub_180021798((__int64)DllName->Buffer, (__int64)DllPath, (__int64 *)Path);
  if ( (Flags & 0xFFFFFFF8) != 0 || (Flags & 3) == 3 )
    goto LABEL_5;
  if ( DllHandle )
  {
    v10 = Flags & 2;
  }
  else
  {
    v10 = Flags & 2;
    if ( (Flags & 2) == 0 )
    {
LABEL_5:
      v8 = -1073741811;
      goto LABEL_6;
    }
  }
  v8 = sub_180021908(DllName, Path, BaseAddress);
  if ( v8 >= 0 )
  {
    v11 = BaseAddress[0];
    if ( v10 )
    {
      v12 = sub_18002EB1C(BaseAddress[0]);
    }
    else
    {
      if ( (Flags & 1) != 0 )
        goto LABEL_16;
      v12 = sub_18002228C(BaseAddress[0]);
    }
    v8 = v12;
LABEL_16:
    if ( v8 >= 0 && DllHandle )
      *DllHandle = (PVOID)*((_QWORD *)v11 + 6);
    sub_18001B678((char *)v11);
  }
LABEL_6:
  if ( v15 )
    RtlReleasePath(Path[0]);
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      894,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      (__int64)"Status: 0x%08lx\n",
      v8);
  return v8;
}
