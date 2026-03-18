/*
 * XREFs of _ConvertMemHandle @ 0x1C012B950
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00DA8D4 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserConvertMemHandle @ 0x1C012B8E0 (NtUserConvertMemHandle.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015522C (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F7988 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMUnlockDestroyObject @ 0x1C00DEBB8 (HMUnlockDestroyObject.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall ConvertMemHandle(void *Src, size_t Size, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx

  v3 = Size;
  v5 = (unsigned int)(Size + 20);
  if ( (unsigned int)v5 < 0x18 )
    v5 = 24LL;
  if ( (unsigned int)v5 < (unsigned int)Size )
    return 0LL;
  LOBYTE(a3) = 6;
  v6 = HMAllocObject(0LL, 0LL, a3, v5);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_DWORD *)(v6 + 16) = v3;
  memmove((void *)(v6 + 20), Src, v3);
  return *(_QWORD *)v7;
}
