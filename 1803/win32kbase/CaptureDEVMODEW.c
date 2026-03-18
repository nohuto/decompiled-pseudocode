/*
 * XREFs of CaptureDEVMODEW @ 0x1C006BF30
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0043B40 (NtGdiOpenDCW.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     PopThreadGuardedObject @ 0x1C001E1D0 (PopThreadGuardedObject.c)
 *     AllocThreadBufferWithTag @ 0x1C001F8F0 (AllocThreadBufferWithTag.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

_WORD *__fastcall CaptureDEVMODEW(unsigned __int16 *a1)
{
  int v1; // esi
  int v2; // r14d
  __int64 v3; // rdi
  _WORD *v4; // rbx

  v1 = a1[34];
  v2 = a1[35];
  v3 = (unsigned int)(v1 + v2);
  if ( (unsigned int)v3 <= 0x48 )
    return 0LL;
  v4 = (_WORD *)AllocThreadBufferWithTag(v3, 0x706D7447u, 0);
  if ( v4 )
  {
    if ( (unsigned __int16 *)((char *)a1 + v3) < a1 || (unsigned __int64)a1 + v3 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v4, a1, (unsigned int)v3);
    v4[34] = v1;
    v4[35] = v2;
  }
  return v4;
}
