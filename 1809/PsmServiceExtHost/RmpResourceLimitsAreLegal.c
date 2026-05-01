/*
 * XREFs of RmpResourceLimitsAreLegal @ 0x180009C90
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180009870 (RmCoreRpcSrvAcquireResourceSet.c)
 *     RmpResourceSetPropertyOverridesAreSupported @ 0x180009BA8 (RmpResourceSetPropertyOverridesAreSupported.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180062480 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
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
