/*
 * XREFs of sub_1800D9FD0 @ 0x1800D9FD0
 * Callers:
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180022180 @ 0x180022180 (sub_180022180.c)
 *     sub_180024FBC @ 0x180024FBC (sub_180024FBC.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

char __fastcall sub_1800D9FD0(__int64 a1)
{
  char v2; // si
  unsigned int v3; // edx
  unsigned int v4; // ecx
  _WORD *v5; // rax
  const WCHAR *NtSystemRoot; // rax
  PWCH Buffer; // rsi
  int v8; // eax
  __int64 v9; // rcx
  PIMAGE_NT_HEADERS v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17[16]; // [rsp+60h] [rbp-A8h] BYREF

  v2 = 0;
  if ( (dword_1801665D4 & 1) != 0 )
    DbgPrint("AVRF: verifier dll `%ws' \n", *(_QWORD *)(a1 + 24));
  v3 = *(unsigned __int16 *)(a1 + 16) >> 1;
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_WORD **)(a1 + 24);
    while ( *v5 != 92 && *v5 != 47 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_10;
    }
    v2 = 1;
  }
LABEL_10:
  if ( v2 == 1 )
  {
    DbgPrint("AVRF: Cannot load %ws from arbitrary location\n", *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 24));
  }
  else
  {
    Destination.Buffer = (PWCH)&unk_180166630;
    *(_DWORD *)&Destination.Length = 34078720;
    NtSystemRoot = RtlGetNtSystemRoot();
    RtlAppendUnicodeToString(&Destination, NtSystemRoot);
    RtlAppendUnicodeStringToString(&Destination, &stru_180118240);
    Buffer = Destination.Buffer;
    sub_180021798(0LL, (__int64)Destination.Buffer, v17);
    v8 = sub_180022180(a1 + 16, (__int64)v17, 1, (__int64)&v16);
    if ( v8 >= 0 )
    {
      v9 = v16;
      *(_QWORD *)(a1 + 32) = v16;
      v10 = RtlImageNtHeader(*(PVOID *)(v9 + 48));
      if ( v10 )
      {
        if ( (v10->FileHeader.Characteristics & 0x2000) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 104LL) |= 0x400u;
          v12 = *(_QWORD *)(a1 + 32);
          v13 = *(_QWORD *)(v12 + 56);
          if ( v13 )
          {
            sub_180024FBC(v13, *(_QWORD *)(v12 + 48), 4);
            DbgPrint("AVRF: provider %ws did not initialize correctly \n", *(_QWORD *)(a1 + 24));
          }
          else
          {
            DbgPrint("AVRF: cannot find an entry point for provider %ws \n", *(_QWORD *)(a1 + 24), v11);
          }
        }
        else
        {
          DbgPrint("AVRF: provider %ws is not a DLL image \n", *(_QWORD *)(a1 + 24));
        }
      }
    }
    else
    {
      DbgPrint(
        "AVRF: %ws: failed to load provider `%ws' (status %08X) from %ws\n",
        *(_QWORD *)(qword_1801653D0 + 96),
        *(_QWORD *)(a1 + 24),
        (unsigned int)v8,
        Buffer);
    }
  }
  return 0;
}
