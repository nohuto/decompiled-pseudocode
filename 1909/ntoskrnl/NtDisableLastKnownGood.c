/*
 * XREFs of NtDisableLastKnownGood @ 0x1406E95F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C3CAC (_PnpCtxGetCachedContextBaseKey.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     IopCreateRegistryKeyEx @ 0x1406E96F0 (IopCreateRegistryKeyEx.c)
 */

NTSTATUS NtDisableLastKnownGood(void)
{
  NTSTATUS CachedContextBaseKey; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+28h] BYREF
  __int64 v5; // [rsp+70h] [rbp+30h] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return -1073741727;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v5);
  if ( CachedContextBaseKey >= 0 )
  {
    ValueName.Buffer = (wchar_t *)L"Control\\Pnp";
    *(_DWORD *)&ValueName.Length = 1572886;
    CachedContextBaseKey = ((__int64 (__fastcall *)(HANDLE *, __int64, UNICODE_STRING *, __int64, _DWORD, _QWORD))IopCreateRegistryKeyEx)(
                             &KeyHandle,
                             v5,
                             &ValueName,
                             983103LL,
                             0,
                             0LL);
    if ( CachedContextBaseKey >= 0 )
    {
      ValueName.Buffer = L"DisableLKG";
      Data = 1;
      *(_DWORD *)&ValueName.Length = 1441812;
      CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return CachedContextBaseKey;
}
