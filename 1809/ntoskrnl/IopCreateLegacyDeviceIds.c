/*
 * XREFs of IopCreateLegacyDeviceIds @ 0x14083BAB0
 * Callers:
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmSetDeviceRegProp @ 0x1406E3CC4 (_CmSetDeviceRegProp.c)
 */

__int64 __fastcall IopCreateLegacyDeviceIds(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  wchar_t *v4; // rdi
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned int v9; // r15d
  wchar_t *PoolWithTag; // rax
  int v11; // ebx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp+8h] BYREF
  size_t pcchRemaining; // [rsp+A8h] [rbp+20h] BYREF

  ppszDestEnd = 0LL;
  v4 = 0LL;
  pcchRemaining = 0LL;
  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  if ( v5 && *(_QWORD *)(v5 + 48) )
  {
    if ( a3 )
    {
      v6 = *(_DWORD *)(a3 + 4);
      if ( (unsigned int)(v6 + 1) > 0x13 )
        v6 = 18;
    }
    else
    {
      v6 = 0;
    }
    v7 = v6;
    v8 = -1LL;
    do
      ++v8;
    while ( (&off_140356D18)[v7][v8] );
    v9 = 2 * (*a2 + (_DWORD)v8) + 42;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x6F697050u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v9);
    v11 = RtlStringCchPrintfExW(
            v4,
            (unsigned __int64)v9 >> 1,
            &ppszDestEnd,
            &pcchRemaining,
            0,
            L"%ws%ws\\%wZ",
            L"DETECTED",
            (&off_140356D18)[v7],
            a2);
    if ( v11 >= 0 )
    {
      v11 = RtlStringCchPrintfW(ppszDestEnd + 1, pcchRemaining - 1, L"%ws\\%wZ", L"DETECTED", a2);
      if ( v11 >= 0 )
        v11 = CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v5 + 48), 0LL, 3u, 7u, (__int64)v4, v9, 0);
    }
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v11;
}
