/*
 * XREFs of PiSwStopDestroy @ 0x140730CC8
 * Callers:
 *     IopRemoveDevice @ 0x1407308C4 (IopRemoveDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpConcatPWSTR @ 0x140668EC4 (PnpConcatPWSTR.c)
 *     PiSwFindChildren @ 0x1406FE9C0 (PiSwFindChildren.c)
 *     PiSwCloseDevice @ 0x14074D4CC (PiSwCloseDevice.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rsi
  int v5; // edi
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  const wchar_t *v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  wchar_t *Str2; // [rsp+60h] [rbp+18h] BYREF

  Str2 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  RtlInitUnicodeString(&DestinationString, a2);
  Children = (_QWORD **)PiSwFindChildren();
  if ( Children )
  {
    v5 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&Str2, 2uLL);
    if ( v5 >= 0 )
    {
      v7 = *Children;
      while ( v7 != Children )
      {
        v8 = v7 - 12;
        v9 = (const wchar_t *)*(v7 - 11);
        v7 = (_QWORD *)*v7;
        if ( !wcsicmp(v9, Str2) && (*((_DWORD *)v8 + 1) & 1) == 0 )
          PiSwCloseDevice(v8);
      }
    }
    if ( Str2 )
      ExFreePoolWithTag(Str2, 0x57706E50u);
  }
  else
  {
    v5 = -1073741772;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
