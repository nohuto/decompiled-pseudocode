/*
 * XREFs of PspLocateInPEManifest @ 0x1406763BC
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14067FB08 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     MmCheckImageMapping @ 0x140675304 (MmCheckImageMapping.c)
 *     LdrResSearchResource @ 0x1406764C0 (LdrResSearchResource.c)
 */

__int64 __fastcall PspLocateInPEManifest(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r10
  __int64 result; // rax
  int v6; // eax
  __int16 v7; // ax
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 1064);
  v4 = *(_QWORD *)(a1 + 968);
  if ( v2 )
  {
    v7 = *(_WORD *)(v2 + 8);
    if ( v7 == 332 || v7 == 452 )
    {
      result = MmCheckImageMapping(a1);
      if ( (int)result < 0 )
        return result;
      if ( !(_BYTE)v9 )
        LODWORD(v4) = v4 | 1;
    }
  }
  v8[2] = 0LL;
  v9 = 0LL;
  v8[0] = 24LL;
  v8[1] = 1LL;
  result = LdrResSearchResource(v4, (unsigned int)v8, 3, 48, a2 + 304, (__int64)&v9, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v6 = v9;
    if ( v9 > 0xFFFFFFFF )
      return 3221225595LL;
    *(_BYTE *)(a2 + 8) |= 0x20u;
    *(_DWORD *)(a2 + 312) = v6;
    *(_DWORD *)(*(_QWORD *)(a2 + 208) + 8LL) |= 0x2000u;
    return 0LL;
  }
  if ( (unsigned int)(result + 1073741687) <= 2 || (_DWORD)result == -1073741308 )
    return 0LL;
  return result;
}
