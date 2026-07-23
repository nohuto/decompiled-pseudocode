/*
 * XREFs of PiUEventNotifyDeviceInstancePropertyChange @ 0x14070FF04
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14058F940 (PiUEventProcessEventWorker.c)
 * Callees:
 *     PiUEventHashStringIntoBucket @ 0x140006568 (PiUEventHashStringIntoBucket.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     PiUEventNotifyClient @ 0x140590938 (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x140590B68 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInstancePropertyChange(__int64 a1)
{
  unsigned int v1; // ebp
  bool v2; // zf
  char **v4; // r15
  unsigned int v5; // edi
  char *v6; // r14
  char *v7; // rbx
  __int64 v9; // r13
  char *v10; // [rsp+20h] [rbp-38h] BYREF
  void *v11; // [rsp+28h] [rbp-30h]

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 88) == 9;
  v10 = 0LL;
  v11 = 0LL;
  if ( v2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v4 = &v10;
    v10 = (char *)&PiUEventDevInstancePropertyClientList
        + 16 * (unsigned int)PiUEventHashStringIntoBucket((PCWSTR)(a1 + 120));
    v5 = 0;
    v11 = &unk_1404362B0;
    do
    {
      v6 = *v4;
      v7 = *(char **)*v4;
      while ( v7 != v6 )
      {
        v9 = (__int64)v7;
        v7 = *(char **)v7;
        if ( v5 || !wcsicmp((const wchar_t *)(a1 + 120), *(const wchar_t **)(*(_QWORD *)(v9 + 24) + 16LL)) )
        {
          if ( PiUEventApplyAdditionalFilters(a1, v9) )
            v1 = PiUEventNotifyClient(a1, v9);
        }
      }
      ++v5;
      ++v4;
    }
    while ( v5 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v1;
}
