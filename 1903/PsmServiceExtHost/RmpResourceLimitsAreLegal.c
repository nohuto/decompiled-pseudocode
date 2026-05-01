/*
 * XREFs of RmpResourceLimitsAreLegal @ 0x18001A520
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180010690 (RmCoreRpcSrvAcquireResourceSet.c)
 *     RmpResourceSetPropertyOverridesAreSupported @ 0x18001A438 (RmpResourceSetPropertyOverridesAreSupported.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18006F2D0 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

_BOOL8 __fastcall RmpResourceLimitsAreLegal(__int64 a1, _QWORD *a2)
{
  _BOOL8 result; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]

  result = 0;
  if ( *(_QWORD *)a1 < 0x100uLL && (!a2 || (*(_QWORD *)a1 & *a2) == *(_QWORD *)a1) )
  {
    memset_0(v4, 0, 0x38uLL);
    if ( ((*(_BYTE *)a1 & 1) != 0 || *(_QWORD *)(a1 + 8) == -1LL)
      && ((*(_BYTE *)a1 & 2) != 0 || *(_QWORD *)(a1 + 16) == -1LL)
      && ((*(_BYTE *)a1 & 4) != 0 || *(_QWORD *)(a1 + 24) == -1LL)
      && ((*(_BYTE *)a1 & 8) != 0 || *(_QWORD *)(a1 + 32) == -1LL)
      && ((*(_QWORD *)a1 & 0x10) != 0 || *(_QWORD *)(a1 + 40) == v5)
      && ((*(_BYTE *)a1 & 0x20) != 0 || (*(_DWORD *)(a1 + 48) & 3) == 1)
      && ((*(_BYTE *)a1 & 0x40) != 0 || (*(_BYTE *)(a1 + 48) & 8) == 0)
      && (*(char *)a1 < 0 || (*(_BYTE *)(a1 + 48) & 0x20) == 0)
      && ((*(_QWORD *)a1 & 0x10LL) == 0 || (*(_BYTE *)(a1 + 48) & 0x20) != 0) )
    {
      return 1;
    }
  }
  return result;
}
