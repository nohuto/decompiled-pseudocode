/*
 * XREFs of DpiPdoHandleQueryDeviceText @ 0x1C02767C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DpiPdoHandleQueryDeviceText(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  const WCHAR *v5; // rdx
  int v6; // eax
  PVOID PoolWithTag; // rax
  void *v8; // rsi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) )
  {
    return *(unsigned int *)(a2 + 48);
  }
  else if ( !*(_QWORD *)(a2 + 56) )
  {
    v5 = (const WCHAR *)(v3 + 818);
    if ( !*(_WORD *)(v3 + 818) )
    {
      v6 = *(_DWORD *)(v3 + 496);
      if ( v6 == 1 )
      {
        v5 = L"Generic Monitor";
      }
      else if ( v6 == 3 )
      {
        v5 = L"Integrated Display";
      }
      else
      {
        v5 = L"Unknown Graphics Device";
      }
    }
    RtlInitUnicodeString(&DestinationString, v5);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength, 0x74727044u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.MaximumLength);
      memmove(v8, DestinationString.Buffer, DestinationString.MaximumLength);
      *(_QWORD *)(a2 + 56) = v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v2;
}
