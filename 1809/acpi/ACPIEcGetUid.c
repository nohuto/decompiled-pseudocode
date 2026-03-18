/*
 * XREFs of ACPIEcGetUid @ 0x1C00AAD78
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0051EE0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

void __fastcall ACPIEcGetUid(__int64 a1)
{
  __int64 *v2; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _WORD v7[28]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v2 = AMLIGetNamedChild(*(__int64 **)(a1 + 56), 1145656671);
  if ( v2 )
  {
    memset(v7, 0, 0x28uLL);
    v7[1] = 0;
    v3 = AMLIEvalNameSpaceObject((unsigned __int64 *)v2, v7, 0, 0LL);
    AMLIDereferenceHandleEx((__int64)v2);
    if ( v3 >= 0 )
    {
      if ( v7[1] == 1 )
        *(_DWORD *)(a1 + 16) = LOBYTE(v7[8]);
      AMLIFreeDataBuffs((__int64)v7, v4, v5, v6);
    }
  }
}
