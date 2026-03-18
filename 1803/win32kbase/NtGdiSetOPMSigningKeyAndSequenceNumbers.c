/*
 * XREFs of NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00C69D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00C03A0 (AcquireCriticalSectionAndCheckState.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_ @ 0x1C00C4F4C (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00C6020 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 */

__int64 __fastcall NtGdiSetOPMSigningKeyAndSequenceNumbers(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *PoolWithTag; // rax
  __int64 v8; // rcx
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *v9; // rsi
  int v10; // edi
  COPM *v11; // rcx

  result = AcquireCriticalSectionAndCheckState(a1, (__int64)a2, a3);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    PoolWithTag = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x4D504F47u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      v10 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_(PoolWithTag, a2);
      if ( v10 >= 0 )
        v10 = COPM::SetSigningKeyAndSequenceNumbers(v11, a1, v9);
      ExFreePoolWithTag(v9, 0x4D504F47u);
    }
    else
    {
      v10 = -1073741801;
    }
    UserSessionSwitchLeaveCrit(v8);
    if ( v10 < 0 )
      return (unsigned int)v10;
    return v6;
  }
  return result;
}
