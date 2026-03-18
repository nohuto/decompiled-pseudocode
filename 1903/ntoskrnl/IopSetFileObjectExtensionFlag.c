/*
 * XREFs of IopSetFileObjectExtensionFlag @ 0x1400B8CA0
 * Callers:
 *     IopCheckInitiatorHint @ 0x14001700C (IopCheckInitiatorHint.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x1400BD200 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IopSetFileObjectExtensionFlag(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _DWORD *v6; // rcx
  _DWORD *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( (_BYTE)a3 )
  {
    result = IopAllocateFileObjectExtension(a1, &v7, a3, a4);
    v6 = v7;
    goto LABEL_3;
  }
  v6 = *(_DWORD **)(a1 + 208);
  if ( !v6 )
  {
    result = 3221226021LL;
LABEL_3:
    if ( (int)result < 0 )
      return result;
  }
  *v6 |= a2;
  return 0LL;
}
