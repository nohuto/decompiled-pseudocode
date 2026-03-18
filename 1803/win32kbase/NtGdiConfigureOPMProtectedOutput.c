/*
 * XREFs of NtGdiConfigureOPMProtectedOutput @ 0x1C00C6150
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00C03A0 (AcquireCriticalSectionAndCheckState.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_ @ 0x1C00C4E40 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_.c)
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C5418 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 */

__int64 __fastcall NtGdiConfigureOPMProtectedOutput(void *a1, _OWORD *a2, __int64 a3, char *a4)
{
  size_t v4; // r13
  __int64 result; // rax
  unsigned int v7; // ebx
  PVOID v8; // rsi
  COPM *v9; // rcx
  struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *PoolWithTag; // r14
  int v11; // edi

  v4 = (unsigned int)a3;
  result = AcquireCriticalSectionAndCheckState((__int64)a1, (__int64)a2, a3);
  v7 = 0;
  if ( (int)result >= 0 )
  {
    v8 = 0LL;
    PoolWithTag = (struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x4D504F47u);
    if ( PoolWithTag && (!(_DWORD)v4 || (v8 = ExAllocatePoolWithTag(PagedPool, v4, 0x4D504F47u)) != 0LL) )
    {
      v11 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_(PoolWithTag, a2);
      if ( v11 >= 0 )
      {
        if ( (_DWORD)v4 )
        {
          if ( (unsigned __int64)&a4[v4] > MmUserProbeAddress || &a4[v4] < a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v8, a4, v4);
        }
        v11 = COPM::ConfigureProtectedOutput(v9, a1, PoolWithTag, v4, (unsigned __int8 *)v8);
      }
    }
    else
    {
      v11 = -1073741801;
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0x4D504F47u);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4D504F47u);
    UserSessionSwitchLeaveCrit((__int64)v9);
    if ( v11 < 0 )
      return (unsigned int)v11;
    return v7;
  }
  return result;
}
