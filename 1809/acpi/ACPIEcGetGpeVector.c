/*
 * XREFs of ACPIEcGetGpeVector @ 0x1C00AACC8
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0051EE0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIEcGetGpeVector(__int64 a1)
{
  __int64 *v2; // rdi
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _WORD v8[28]; // [rsp+20h] [rbp-38h] BYREF

  v2 = AMLIGetNamedChild(*(__int64 **)(a1 + 56), 1162889055);
  if ( !v2 )
    return 3221225524LL;
  memset(v8, 0, 0x28uLL);
  v8[1] = 0;
  v4 = AMLIEvalNameSpaceObject((unsigned __int64 *)v2, v8, 0, 0LL);
  AMLIDereferenceHandleEx((__int64)v2);
  if ( v4 >= 0 )
  {
    if ( v8[1] != 1 )
    {
      AMLIFreeDataBuffs((__int64)v8, v5, v6, v7);
      return 3222536207LL;
    }
    *(_DWORD *)(a1 + 48) = LOBYTE(v8[8]);
    AMLIFreeDataBuffs((__int64)v8, v5, v6, v7);
  }
  return (unsigned int)v4;
}
