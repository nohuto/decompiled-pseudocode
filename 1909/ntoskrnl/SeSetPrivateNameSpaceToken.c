/*
 * XREFs of SeSetPrivateNameSpaceToken @ 0x1408D9F44
 * Callers:
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall SeSetPrivateNameSpaceToken(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  int v6; // eax
  unsigned int v7; // eax
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v9, 0);
  if ( *(_BYTE *)(a1 + 204) )
  {
    v3 = -1073741525;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 200);
    if ( a2 )
      v7 = v6 | 0x10000;
    else
      v7 = v6 & 0xFFFEFFFF;
    *(_DWORD *)(a1 + 200) = v7;
  }
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v9, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
