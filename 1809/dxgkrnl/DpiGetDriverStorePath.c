/*
 * XREFs of DpiGetDriverStorePath @ 0x1C0262DC0
 * Callers:
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C01D3268 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EFBB0 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     wcsstr_0 @ 0x1C00207F5 (wcsstr_0.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002EC68 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall DpiGetDriverStorePath(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  int v5; // ebx
  wchar_t *v6; // rax
  wchar_t *v7; // rdx
  wchar_t i; // ax
  wchar_t *v9; // rcx
  unsigned __int16 v11; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+28h] [rbp-10h]

  v5 = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 32LL), &v11);
  if ( v5 >= 0 )
  {
    if ( v11 >= (unsigned __int64)(unsigned int)*a3 - 2 )
    {
      v5 = -2147483643;
      *a3 = v11 + 2;
    }
    else
    {
      RtlStringCbCopyW(a2, v11, (size_t *)P);
      a2[(unsigned __int64)v11 >> 1] = 0;
      v6 = wcsstr_0(a2, L"FileRepository");
      v7 = v6;
      if ( v6 )
      {
        for ( i = *v6; i != 92 && i; i = *v7 )
          ++v7;
        v9 = v7 + 1;
        if ( !*v7 )
          v9 = v7;
        while ( *v9 != 92 && *v9 )
          ++v9;
        *v9 = 0;
        *a3 = (_DWORD)v9 - (_DWORD)a2;
      }
      else
      {
        v5 = -1073741811;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v5;
}
