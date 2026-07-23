/*
 * XREFs of IopGetDriverNameFromKeyNode @ 0x140681500
 * Callers:
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140709C68 (IopUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14070A3F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiGetDefaultMessageString @ 0x1407549CC (PiGetDefaultMessageString.c)
 *     PnpLoadBootFilterDriver @ 0x1409C9994 (PnpLoadBootFilterDriver.c)
 *     PipInitializeCoreDriversByGroup @ 0x1409CB988 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1409CBCC4 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1409CD2D4 (PipInitializeEarlyLaunchDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryKey @ 0x1401B85B0 (ZwQueryKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 */

__int64 __fastcall IopGetDriverNameFromKeyNode(HANDLE KeyHandle, PUNICODE_STRING Destination)
{
  wchar_t *v4; // rdi
  const WCHAR *v5; // r13
  int v6; // ecx
  unsigned int v7; // r15d
  unsigned __int16 *Pool_0; // rsi
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  unsigned int v11; // ecx
  unsigned __int16 v12; // bx
  wchar_t *v13; // rax
  unsigned int v15; // eax
  _WORD *v16; // r10
  __int16 *v17; // r8
  int i; // r9d
  __int16 v19; // ax
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF
  ULONG Length; // [rsp+90h] [rbp+50h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h]

  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v4 = (wchar_t *)P;
    v15 = *((_DWORD *)P + 3);
    if ( v15 > 2 && *((_DWORD *)P + 1) == 1 )
    {
      v16 = P;
      Destination->Length = v15 - 2;
      Destination->MaximumLength = v4[6];
      v17 = (__int16 *)((char *)v4 + *((unsigned int *)v4 + 2));
      for ( i = (unsigned __int16)(v15 - 2) >> 1; i; --i )
      {
        v19 = *v17++;
        *v16++ = v19;
      }
      Destination->Buffer = v4;
      return 0LL;
    }
    v10 = -1073741472;
    goto LABEL_27;
  }
  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) )
    {
      v5 = L"\\Driver\\";
      v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      if ( v6 == 2 || (v7 = 16, v6 == 8) )
      {
        v5 = L"\\FileSystem\\";
        v7 = 24;
      }
      Length = 164;
      Pool_0 = (unsigned __int16 *)IopVerifierExAllocatePool_0(NonPagedPoolNx, 0xA4uLL);
      if ( Pool_0 )
      {
        v9 = ZwQueryKey(KeyHandle, KeyBasicInformation, Pool_0, Length, &Length);
        v10 = v9;
        if ( v9 != -2147483643 && v9 != -1073741789 )
        {
LABEL_9:
          if ( v10 < 0 )
          {
            ExFreePoolWithTag(Pool_0, 0);
          }
          else
          {
            v11 = v7 + *((_DWORD *)Pool_0 + 3);
            if ( v11 >= v7 )
            {
              v12 = v7 + Pool_0[6];
              v13 = (wchar_t *)IopVerifierExAllocatePool_0(NonPagedPoolNx, (unsigned __int16)v11);
              Destination->Buffer = v13;
              if ( v13 )
              {
                Destination->Length = 0;
                Destination->MaximumLength = v12;
                RtlAppendUnicodeToString(Destination, v5);
                Source.Length = Pool_0[6];
                Source.MaximumLength = Source.Length;
                Source.Buffer = Pool_0 + 8;
                RtlAppendUnicodeStringToString(Destination, &Source);
                ExFreePoolWithTag(Pool_0, 0);
                ExFreePoolWithTag(v4, 0);
                return 0LL;
              }
              ExFreePoolWithTag(Pool_0, 0);
              goto LABEL_26;
            }
            ExFreePoolWithTag(Pool_0, 0);
            v10 = -1073741675;
          }
LABEL_27:
          ExFreePoolWithTag(v4, 0);
          return (unsigned int)v10;
        }
        ExFreePoolWithTag(Pool_0, 0);
        Pool_0 = (unsigned __int16 *)IopVerifierExAllocatePool_0(NonPagedPoolNx, Length);
        if ( Pool_0 )
        {
          v10 = ZwQueryKey(KeyHandle, KeyBasicInformation, Pool_0, Length, &Length);
          goto LABEL_9;
        }
      }
LABEL_26:
      v10 = -1073741670;
      goto LABEL_27;
    }
    ExFreePoolWithTag(P, 0);
  }
  return 3221225824LL;
}
