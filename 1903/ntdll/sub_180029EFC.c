/*
 * XREFs of sub_180029EFC @ 0x180029EFC
 * Callers:
 *     sub_180029560 @ 0x180029560 (sub_180029560.c)
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 *     sub_18002284C @ 0x18002284C (sub_18002284C.c)
 *     sub_180022F1C @ 0x180022F1C (sub_180022F1C.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_18002A0B0 @ 0x18002A0B0 (sub_18002A0B0.c)
 *     sub_18002A2F4 @ 0x18002A2F4 (sub_18002A2F4.c)
 *     sub_18002A370 @ 0x18002A370 (sub_18002A370.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18002A4D0 (RtlIsCriticalSectionLockedByThread.c)
 *     sub_18002A4F4 @ 0x18002A4F4 (sub_18002A4F4.c)
 *     sub_18002A63C @ 0x18002A63C (sub_18002A63C.c)
 *     sub_18002A75C @ 0x18002A75C (sub_18002A75C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180070848 @ 0x180070848 (sub_180070848.c)
 *     sub_180083398 @ 0x180083398 (sub_180083398.c)
 */

__int64 __fastcall sub_180029EFC(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdi
  ULONG64 v5; // r8
  unsigned int v6; // r15d
  int v7; // r8d
  _UNICODE_STRING *v8; // rdx
  int v9; // eax
  PIMAGE_NT_HEADERS v10; // rbp
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+68h] [rbp+20h] BYREF

  v2 = sub_18002A0B0();
  v3 = v2;
  if ( v2 != 1073741838 && v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_QWORD *)(a1 + 160);
    v14 = 0LL;
    v6 = v2;
    v3 = RtlImageNtHeaderEx(0, *(PVOID *)(v4 + 48), v5, &OutHeaders);
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v10 = OutHeaders;
        v6 = 0;
        *(_DWORD *)(v4 + 128) = OutHeaders->FileHeader.TimeDateStamp;
        *(_DWORD *)(v4 + 64) = v10->OptionalHeader.SizeOfImage;
      }
      else
      {
        RtlAcquireSRWLockExclusive(&stru_1801660B0);
        v7 = *(_DWORD *)(a1 + 32);
        v8 = 0LL;
        if ( (v7 & 0x20) == 0 )
          v8 = (_UNICODE_STRING *)(v4 + 72);
        v9 = sub_18002284C((PUNICODE_STRING)(v4 + 88), v8, v7, &v14, *(_DWORD *)(v4 + 264));
        v10 = OutHeaders;
        if ( v9 == -1073741515 )
        {
          v11 = *(void **)(v4 + 48);
          LODWORD(OutHeaders) = OutHeaders->FileHeader.TimeDateStamp;
          HIDWORD(OutHeaders) = v10->OptionalHeader.SizeOfImage;
          sub_18002A75C(v11, v10);
        }
        if ( !v14 )
        {
          sub_18002A63C(v4);
          sub_18002A4F4(v4, v10);
        }
        RtlReleaseSRWLockExclusive(&stru_1801660B0);
        if ( v14 )
        {
          sub_180070848(a1);
          return (unsigned int)v3;
        }
      }
      if ( RtlIsCriticalSectionLockedByThread(&stru_18015F3F0) )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v3 = sub_18002A370(a1, v10, v6);
        if ( v3 >= 0 )
        {
          v3 = sub_180020654(v4, *(_DWORD *)(a1 + 32), 1);
          if ( v3 >= 0 )
          {
            sub_18002A2F4(*(_QWORD *)(a1 + 48), v4);
            v12 = *(_QWORD *)(a1 + 48);
            if ( v12 )
              *(_QWORD *)(v4 + 184) = *(_QWORD *)(v12 + 48);
            if ( (*(_BYTE *)(v4 + 104) & 4) != 0 || (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
            {
              if ( (*(_DWORD *)(v4 + 104) & 0x1000000) != 0 )
              {
                return (unsigned int)sub_180083398(v4);
              }
              else
              {
                sub_180022F1C(a1);
                return (unsigned int)**(_DWORD **)(a1 + 40);
              }
            }
            else
            {
              sub_1800255A8(*(_QWORD *)(v4 + 48), v4 + 72, 0x14AEu);
              v3 = 0;
              *(_DWORD *)(*(_QWORD *)(v4 + 152) + 56LL) = 9;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
