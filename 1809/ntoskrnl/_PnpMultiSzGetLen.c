/*
 * XREFs of _PnpMultiSzGetLen @ 0x14059D928
 * Callers:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14059BFC8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059C504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceSiblings @ 0x1408FDEF0 (_CmGetDeviceSiblings.c)
 *     _PnpMultiSzDeleteString @ 0x140900430 (_PnpMultiSzDeleteString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpMultiSzGetLen(_WORD *a1)
{
  unsigned int v1; // edx
  _WORD *i; // rax
  __int64 v3; // r8

  v1 = 0;
  if ( a1 )
  {
    for ( i = a1; *i; i += v3 + 1 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( i[v3] );
    }
    return (unsigned int)(i - a1) + 1;
  }
  return v1;
}
