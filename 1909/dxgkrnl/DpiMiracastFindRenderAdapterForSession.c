/*
 * XREFs of DpiMiracastFindRenderAdapterForSession @ 0x1C0157560
 * Callers:
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0051C00 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0051DA0 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0154F5C (DpiPdoHandleOpmIoctls.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0157254 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C001D9E4 (DpiGetFdoFromDevice.c)
 */

__int64 DpiMiracastFindRenderAdapterForSession()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rax

  result = DpiGetFdoFromDevice(qword_1C00A29D8);
  if ( result )
  {
    v3 = *(unsigned int *)(result + 236);
    if ( (_DWORD)v3 != 2 )
    {
      if ( *(_DWORD *)(result + 240) != 2 || (v1 = (unsigned int)(v3 - 3), (v1 & 0xFFFFFFFC) != 0) || (_DWORD)v3 == 4 )
      {
        v4 = WdLogNewEntry5_WdWarning(v1, v3, v2);
        WdLogEvent5_WdWarning(v4);
        return 0LL;
      }
    }
  }
  return result;
}
