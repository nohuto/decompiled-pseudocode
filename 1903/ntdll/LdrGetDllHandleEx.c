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

__int64 __fastcall LdrGetDllHandleEx(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v8; // ebx
  int v10; // edi
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v14[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v15; // [rsp+BCh] [rbp-2Ch]

  v13 = 0LL;
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      844,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      (__int64)"DLL name: %wZ\n",
      a4);
  sub_180021798(*(_QWORD *)(a4 + 8), a2, v14);
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 3) == 3 )
    goto LABEL_5;
  if ( a5 )
  {
    v10 = a1 & 2;
  }
  else
  {
    v10 = a1 & 2;
    if ( (a1 & 2) == 0 )
    {
LABEL_5:
      v8 = -1073741811;
      goto LABEL_6;
    }
  }
  v8 = sub_180021908(a4, v14, &v13);
  if ( v8 >= 0 )
  {
    v11 = v13;
    if ( v10 )
    {
      v12 = sub_18002EB1C(v13);
    }
    else
    {
      if ( (a1 & 1) != 0 )
        goto LABEL_16;
      v12 = sub_18002228C(v13);
    }
    v8 = v12;
LABEL_16:
    if ( v8 >= 0 && a5 )
      *a5 = *(_QWORD *)(v11 + 48);
    sub_18001B678(v11);
  }
LABEL_6:
  if ( v15 )
    RtlReleasePath(v14[0]);
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      894,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      (__int64)"Status: 0x%08lx\n",
      v8);
  return (unsigned int)v8;
}
