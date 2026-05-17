/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x1800187C0
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x180017368 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CF050 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18001869C (LdrpFindLoadedDllByHandle.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18001AE58 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpHandleProtectedDelayload @ 0x18001BB70 (LdrpHandleProtectedDelayload.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180055648 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800CF348 (LdrpHandleUnprotectedDelayLoad.c)
 */

__int64 __fastcall LdrResolveDelayLoadedAPI(const void *a1, _BYTE *a2, int a3, int a4, __int64 *a5, int a6)
{
  int v7; // r12d
  __int64 v9; // rbx
  int LoadedDllByHandle; // ecx
  __int64 v11; // rsi
  int v12; // eax
  char v13; // cl
  char v15; // al
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF

  v7 = (int)a2;
  v9 = 0LL;
  if ( ((a6 & 0xFFFFDFFF) == 8 || (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a6) == 0) && (*a2 & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)a1, &v16, 0LL);
    if ( LoadedDllByHandle < 0 )
    {
      v15 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1247,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          (__int64)"LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
          a1,
          LoadedDllByHandle);
        v15 = LdrpDebugFlags;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v9 = *a5;
      v11 = v16;
      if ( *a5 - (__int64)a1 < (unsigned __int64)*(unsigned int *)(v16 + 64) )
      {
        if ( (*(_DWORD *)(v16 + 104) & 0x8000) != 0 )
        {
          v9 = LdrpHandleProtectedDelayload(v16, v7, a3, a4, (__int64)a5, a6);
        }
        else
        {
          v9 = LdrpHandleUnprotectedDelayLoad(v16, v7, a3, a4, (__int64)a5, a6);
          if ( v9 )
          {
            if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
            {
              v12 = LdrpUnsuppressAddressTakenIat(
                      a1,
                      (unsigned int)((_DWORD)a5 - (_DWORD)a1),
                      (unsigned int)((_DWORD)a5 - (_DWORD)a1));
              if ( v12 < 0 )
              {
                v13 = LdrpDebugFlags;
                if ( (LdrpDebugFlags & 3) != 0 )
                {
                  LdrpLogDbgPrint(
                    (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                    1226,
                    (unsigned int)"LdrResolveDelayLoadedAPI",
                    0,
                    (__int64)"LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are impo"
                             "rted in the DLL based at 0x%p.Status = 0x%x\n",
                    a1,
                    v12);
                  v13 = LdrpDebugFlags;
                }
                if ( (v13 & 0x10) != 0 )
                  __debugbreak();
              }
            }
          }
        }
      }
      LdrpDereferenceModule(v11);
    }
  }
  return v9;
}
