/*
 * XREFs of PopBatteryDeviceState @ 0x14086E048
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PopBatteryDeviceState(wchar_t *a1, __int64 a2)
{
  wchar_t *v2; // r14
  signed int v4; // ebx
  __int64 v5; // rdx
  wchar_t *v6; // rax
  __int16 v7; // di
  unsigned __int16 Length; // di
  unsigned __int16 MaximumLength; // si
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax
  __int64 v12; // rdi
  __m128i v13; // xmm0
  __int64 v14; // rbx
  __int128 v15; // xmm0
  UNICODE_STRING String2; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v18; // [rsp+30h] [rbp-10h] BYREF

  v2 = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  v4 = 0;
  if ( !a1 )
    goto LABEL_10;
  v5 = 0x7FFFLL;
  v6 = a1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v4 = v5 == 0 ? 0xC000000D : 0;
  v7 = v5 ? 0x7FFF - v5 : 0;
  if ( v5 )
  {
    Length = 2 * v7;
    String2.Buffer = a1;
    String2.Length = Length;
    v2 = a1;
    MaximumLength = Length + 2;
    String2.MaximumLength = Length + 2;
  }
  else
  {
LABEL_10:
    MaximumLength = String2.MaximumLength;
    Length = String2.Length;
  }
  if ( v4 >= 0 )
  {
    if ( Length > 8u
      && (RtlPrefixUnicodeString(&PopDevicePrefixNt, &String2, 0)
       || RtlPrefixUnicodeString(&PopDevicePrefixWin32, &String2, 0)) )
    {
      CurrentThread = KeGetCurrentThread();
      String2.Buffer = v2 + 4;
      String2.Length = Length - 8;
      --CurrentThread->KernelApcDisable;
      String2.MaximumLength = MaximumLength - 8;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
      v11 = KeGetCurrentThread();
      --v11->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PopCB, 0LL);
      v12 = qword_1404189C0;
      if ( (__int64 *)qword_1404189C0 == &qword_1404189C0 )
        goto LABEL_23;
      do
      {
        v13 = *(__m128i *)(v12 + 32);
        v14 = v12;
        *(_QWORD *)&v18.Length = *(_QWORD *)(v12 + 32);
        v18.Length -= 8;
        v18.MaximumLength -= 8;
        v18.Buffer = (wchar_t *)(_mm_srli_si128(v13, 8).m128i_u64[0] + 8);
        if ( RtlEqualUnicodeString(&String2, &v18, 1u) )
          break;
        v12 = *(_QWORD *)v12;
        v14 = 0LL;
      }
      while ( (__int64 *)v12 != &qword_1404189C0 );
      if ( !v14 )
      {
LABEL_23:
        v4 = -1073741772;
      }
      else if ( *(_DWORD *)(v14 + 104) == 3 )
      {
        *(_OWORD *)a2 = *(_OWORD *)(v14 + 112);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v14 + 128);
        *(_DWORD *)(a2 + 32) = *(_DWORD *)(v14 + 144);
        v15 = *(_OWORD *)(v14 + 148);
        v4 = 0;
        *(_OWORD *)(a2 + 36) = v15;
      }
      else
      {
        v4 = -1073741661;
      }
      PopReleaseRwLock((ULONG_PTR)&PopCB);
      PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
    }
    else
    {
      return (unsigned int)-1073741773;
    }
  }
  return (unsigned int)v4;
}
