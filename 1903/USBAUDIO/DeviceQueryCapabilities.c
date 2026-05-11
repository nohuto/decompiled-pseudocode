/*
 * XREFs of DeviceQueryCapabilities @ 0x1C0020AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceQueryCapabilities(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_WORD *)a3 < 0x40u )
    return 3221225473LL;
  *(_DWORD *)(a3 + 4) |= 0x280u;
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_DWORD *)(a3 + 56) = 0;
  *(_DWORD *)(a3 + 60) = 20000;
  return result;
}
