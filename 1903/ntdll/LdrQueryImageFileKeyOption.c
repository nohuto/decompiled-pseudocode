/*
 * XREFs of LdrQueryImageFileKeyOption @ 0x180079A80
 * Callers:
 *     sub_18002A0B0 @ 0x18002A0B0 (sub_18002A0B0.c)
 *     sub_1800798FC @ 0x1800798FC (sub_1800798FC.c)
 *     LdrQueryImageFileExecutionOptionsEx @ 0x1800799E0 (LdrQueryImageFileExecutionOptionsEx.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D4A28 @ 0x1800D4A28 (sub_1800D4A28.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180074480 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __cdecl LdrQueryImageFileKeyOption(
        HANDLE KeyHandle,
        PCWSTR ValueName,
        ULONG Type,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnedLength)
{
  NTSTATUS result; // eax
  ULONG v10; // esi
  _BYTE *v11; // rdi
  NTSTATUS v12; // ebx
  void *v13; // r12
  ULONG Length; // ebx
  PVOID ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v17; // eax
  int v18; // ecx
  ULONG v19; // eax
  size_t v20; // r8
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  PULONG v23; // [rsp+48h] [rbp-B8h]
  _BYTE KeyValueInformation[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v23 = ReturnedLength;
  result = RtlInitUnicodeStringEx(&DestinationString, ValueName);
  if ( result < 0 )
    return result;
  v10 = BufferSize;
  if ( BufferSize >= 0x3F4 )
  {
    Length = BufferSize + 12;
    goto LABEL_9;
  }
  v11 = KeyValueInformation;
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x400u,
             &ResultLength);
  v12 = result;
  if ( result >= 0 )
  {
    v13 = 0LL;
LABEL_14:
    if ( !Type )
    {
      if ( *((_DWORD *)v11 + 2) > BufferSize )
      {
        ResultLength = *((_DWORD *)v11 + 2);
        goto LABEL_17;
      }
      Type = *((_DWORD *)v11 + 1);
      v10 = *((_DWORD *)v11 + 2);
    }
    v18 = *((_DWORD *)v11 + 1);
    if ( ((v18 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v18 == 4 )
      {
        if ( Type == 4 )
        {
          if ( v10 == 4 && *((_DWORD *)v11 + 2) == 4 )
          {
            ResultLength = 4;
            if ( Buffer )
            {
              *(_DWORD *)Buffer = *((_DWORD *)v11 + 3);
              goto LABEL_18;
            }
LABEL_17:
            v12 = -2147483643;
LABEL_18:
            if ( v23 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
              *v23 = ResultLength;
            goto LABEL_22;
          }
          goto LABEL_33;
        }
LABEL_55:
        v12 = -1073741788;
        goto LABEL_22;
      }
      if ( v18 == 11 )
      {
        if ( Type != 11 )
          goto LABEL_55;
        if ( v10 == 8 && *((_DWORD *)v11 + 2) == 8 )
        {
          ResultLength = 8;
          if ( Buffer )
          {
            *(_QWORD *)Buffer = *(_QWORD *)(v11 + 12);
            goto LABEL_18;
          }
          goto LABEL_17;
        }
LABEL_33:
        v12 = -1073741820;
        goto LABEL_22;
      }
      if ( v18 != 1 )
      {
        v12 = -1073741788;
        goto LABEL_18;
      }
      if ( Type == 4 )
      {
        if ( v10 == 4 )
        {
          if ( ((unsigned __int8)Buffer & 3) == 0 )
          {
            ResultLength = 4;
            if ( Buffer )
            {
              DestinationString.Buffer = (PWCH)(v11 + 12);
              DestinationString.Length = *((_WORD *)v11 + 4);
              DestinationString.MaximumLength = *((_WORD *)v11 + 4);
              v12 = RtlUnicodeStringToInteger(&DestinationString, 0, (PULONG)Buffer);
              goto LABEL_18;
            }
            goto LABEL_17;
          }
          v12 = -2147483646;
LABEL_22:
          if ( v13 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
          return v12;
        }
        goto LABEL_33;
      }
      v19 = *((_DWORD *)v11 + 2);
      ResultLength = v19;
      if ( v19 > v10 )
        goto LABEL_17;
      v20 = v19;
    }
    else
    {
      if ( Type != v18 )
        goto LABEL_55;
      ResultLength = *((_DWORD *)v11 + 2);
      if ( !Buffer || *((_DWORD *)v11 + 2) > v10 )
        goto LABEL_17;
      v20 = *((unsigned int *)v11 + 2);
    }
    memmove(Buffer, v11 + 12, v20);
    goto LABEL_18;
  }
  if ( result == -2147483643 )
  {
    while ( 1 )
    {
      Length = ResultLength;
LABEL_9:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return -1073741801;
      Heap = RtlAllocateHeap(ProcessHeap, Flags + 1572864, Length);
      v13 = Heap;
      if ( !Heap )
        return -1073741801;
      v11 = Heap;
      v17 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v12 = v17;
      if ( v17 >= 0 )
        goto LABEL_14;
      if ( v17 != -2147483643 )
        goto LABEL_22;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    }
  }
  return result;
}
