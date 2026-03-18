/*
 * XREFs of ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C00D7024
 * Callers:
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C00D6D5C (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00D73F0 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bGammaRampCapable(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)this;
  if ( !*(_QWORD *)this )
    return 0LL;
  result = *(_DWORD *)(v1 + 40) & 0x401;
  if ( (_DWORD)result != 1
    || (unsigned int)(*(_DWORD *)(v1 + 2100) - 5) > 1
    || !*(_QWORD *)(v1 + 3216)
    || (*(_DWORD *)(v1 + 2120) & 0x10) == 0 )
  {
    return 0LL;
  }
  return result;
}
