/*
 * XREFs of LdrpDoPostSnapWork @ 0x1800361E8
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180035D94 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpHandleTlsData @ 0x18003629C (LdrpHandleTlsData.c)
 *     ZwProtectVirtualMemory @ 0x1800A0D00 (ZwProtectVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

NTSTATUS __fastcall LdrpDoPostSnapWork(__int64 a1)
{
  int v2; // ebx
  NTSTATUS result; // eax
  _QWORD *v4; // rax
  char v5; // al
  ULONG v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 104)
    || (result = ZwProtectVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID *)(a1 + 104),
                   (PSIZE_T)(a1 + 112),
                   *(_DWORD *)(a1 + 136),
                   &v6),
        v2 = result,
        result >= 0) )
  {
    v4 = *(_QWORD **)(a1 + 152);
    if ( v4 && *v4 != *(_QWORD *)(a1 + 144) )
      __fastfail(0x13u);
    if ( *(_WORD *)(*(_QWORD *)(a1 + 56) + 110LL) || (result = LdrpHandleTlsData(), v2 = result, result >= 0) )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
      {
        v2 = LdrpUnsuppressAddressTakenIat(*(char **)(*(_QWORD *)(a1 + 56) + 48LL), 0, 0);
        if ( v2 < 0 )
        {
          v5 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              565,
              (unsigned int)"LdrpDoPostSnapWork",
              0,
              "LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the DLL based"
              " at 0x%p.Status = 0x%x\n",
              *(const void **)(*(_QWORD *)(a1 + 56) + 48LL),
              v2);
            v5 = LdrpDebugFlags;
          }
          if ( (v5 & 0x10) != 0 )
            __debugbreak();
        }
      }
      return v2;
    }
  }
  return result;
}
