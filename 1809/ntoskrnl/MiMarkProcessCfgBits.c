/*
 * XREFs of MiMarkProcessCfgBits @ 0x1405F57C4
 * Callers:
 *     MiCommitVadCfgBits @ 0x1405F55BC (MiCommitVadCfgBits.c)
 * Callees:
 *     MiMarkSharedImageCfgBits @ 0x1405F11D0 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1405F7524 (MiMarkPrivateOpenCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x140652574 (MiMarkPrivateImageCfgBits.c)
 */

__int64 __fastcall MiMarkProcessCfgBits(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 *a7)
{
  int v8; // ecx
  int v10; // ecx
  __int64 v11; // r9

  v8 = a1 - 1;
  if ( !v8 )
    return MiMarkSharedImageCfgBits(a6, a2, a3);
  v10 = v8 - 1;
  if ( !v10 )
    return MiMarkPrivateImageCfgBits(a6);
  if ( v10 != 1 )
    return 3221225473LL;
  if ( a7 )
    v11 = *a7;
  else
    v11 = 1LL;
  return MiMarkPrivateOpenCfgBits(a6, a4, a5, v11);
}
