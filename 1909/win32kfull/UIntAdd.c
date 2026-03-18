/*
 * XREFs of UIntAdd @ 0x1C00F10CC
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0008AF8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  UINT v3; // eax
  UINT v4; // edx
  HRESULT result; // eax

  v3 = uAugend + uAddend;
  v4 = -1;
  if ( v3 >= uAugend )
    v4 = v3;
  result = v3 < uAugend ? 0x80070216 : 0;
  *puResult = v4;
  return result;
}
