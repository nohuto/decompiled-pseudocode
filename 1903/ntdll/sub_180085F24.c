/*
 * XREFs of sub_180085F24 @ 0x180085F24
 * Callers:
 *     sub_18002A0B0 @ 0x18002A0B0 (sub_18002A0B0.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     ZwRaiseHardError @ 0x18009F2F0 (ZwRaiseHardError.c)
 */

NTSTATUS __fastcall sub_180085F24(__int64 a1)
{
  __int64 v1; // rbx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  NTSTATUS result; // eax
  unsigned __int64 Parameters[5]; // [rsp+30h] [rbp-28h] BYREF
  ULONG Response; // [rsp+60h] [rbp+8h] BYREF
  DWORD v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = sub_18001C4DC(*(_QWORD *)(v1 + 48), 1, 0xEu, &v8, &v9);
  v4 = v9;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v4 && (*(_BYTE *)(v4 + 16) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x200000u;
    return 0;
  }
  else if ( *(_WORD *)(qword_180165308 + 72) <= 3u )
  {
    Parameters[0] = v1 + 72;
    result = ZwRaiseHardError(1073741838, 1u, 1u, Parameters, 2u, &Response);
    if ( result >= 0 )
    {
      if ( Response == 3 )
      {
        if ( dword_1801664E0 != 3 )
          ++dword_180164F28;
        return -1073741701;
      }
      else
      {
        *(_DWORD *)(v1 + 104) &= ~4u;
      }
    }
  }
  else
  {
    return 1073741838;
  }
  return result;
}
