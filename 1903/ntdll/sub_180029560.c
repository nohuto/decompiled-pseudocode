/*
 * XREFs of sub_180029560 @ 0x180029560
 * Callers:
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_18002AA74 @ 0x18002AA74 (sub_18002AA74.c)
 * Callees:
 *     sub_18002284C @ 0x18002284C (sub_18002284C.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_18002934C @ 0x18002934C (sub_18002934C.c)
 *     sub_18002952C @ 0x18002952C (sub_18002952C.c)
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 *     sub_18002A8BC @ 0x18002A8BC (sub_18002A8BC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180070848 @ 0x180070848 (sub_180070848.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall sub_180029560(_BYTE *a1)
{
  int v1; // eax
  _BYTE *v2; // rbx
  __int64 v3; // rsi
  int v4; // edi
  char v5; // al
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  v2 = a1;
  v3 = *((_QWORD *)a1 + 7);
  v4 = -1073741515;
  if ( (v1 & 0x200) != 0 )
  {
    v5 = sub_18002A8BC(a1, v7);
    a1 = v7;
  }
  else
  {
    v5 = (v1 & 0x28) == 32;
  }
  if ( v5 )
  {
    v4 = sub_18002934C((UNICODE_STRING *)a1, (PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)(v3 + 72), &Handle);
    if ( v4 >= 0 )
    {
      *((_DWORD *)v2 + 8) |= 0x100000u;
      sub_1800255A8(*(_QWORD *)(v3 + 48), v3 + 72, 0x14A5u);
      v8 = 0LL;
      *(_DWORD *)(v3 + 264) = sub_18002952C((_UNICODE_STRING *)(v3 + 88));
      RtlAcquireSRWLockExclusive(&stru_1801660B0);
      v4 = sub_18002284C(
             (PUNICODE_STRING)(v3 + 88),
             (PUNICODE_STRING)(v3 + 72),
             *((_DWORD *)v2 + 8),
             &v8,
             *(_DWORD *)(v3 + 264));
      RtlReleaseSRWLockExclusive(&stru_1801660B0);
      if ( v8 )
      {
        sub_180070848(v2);
      }
      else
      {
        sub_1800255A8(0, v3 + 72, 0x14AAu);
        v4 = sub_180029EFC(v2, Handle);
      }
      ZwClose(Handle);
    }
  }
  return (unsigned int)v4;
}
