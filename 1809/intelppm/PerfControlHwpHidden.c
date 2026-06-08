/*
 * XREFs of PerfControlHwpHidden @ 0x1C0003FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfControlHwpHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned int v5; // edx
  char v6; // cl
  unsigned int v7; // r8d
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( a4 && a3 )
  {
    v9 = 0LL;
    if ( *(_BYTE *)(a1 + 94) )
    {
      v5 = (unsigned __int8)*(_DWORD *)(a1 + 32);
      LODWORD(v9) = v5;
    }
    else
    {
      v5 = 0;
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      v5 |= (unsigned __int8)*(_DWORD *)(a1 + 32) << 8;
      LODWORD(v9) = v5;
    }
    v6 = *(_BYTE *)(a1 + 96);
    if ( v6 )
      LODWORD(v9) = v5 | 0xFF000000;
    v7 = v5 | 0xFF000000;
    if ( !v6 )
      v7 = v5;
    if ( *(_BYTE *)(a1 + 93) )
      LODWORD(v9) = v7 | ((unsigned __int8)*(_DWORD *)(a1 + 32) << 16);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))qword_1C001A678)(
             *(unsigned int *)(*(_QWORD *)a1 + 80LL),
             *(unsigned int *)(a1 + 124),
             ~*(_QWORD *)(a1 + 144),
             v9);
  }
  return result;
}
