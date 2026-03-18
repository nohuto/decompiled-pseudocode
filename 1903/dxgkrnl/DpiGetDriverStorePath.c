/*
 * XREFs of DpiGetDriverStorePath @ 0x1C029C8A0
 * Callers:
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C01423C8 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021F610 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0017C3C (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     wcsstr_0 @ 0x1C0023385 (wcsstr_0.c)
 */

__int64 __fastcall DpiGetDriverStorePath(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  __int64 v3; // rcx
  int v6; // ebx
  wchar_t *v7; // rax
  wchar_t *v8; // rdx
  wchar_t i; // ax
  wchar_t *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64);
  v12 = 0LL;
  P = 0LL;
  v6 = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 32LL), &v12);
  if ( v6 >= 0 )
  {
    if ( (unsigned __int16)v12 >= (unsigned __int64)(unsigned int)*a3 - 2 )
    {
      v6 = -2147483643;
      *a3 = (unsigned __int16)v12 + 2;
    }
    else
    {
      RtlStringCbCopyW(a2, (unsigned __int16)v12, (size_t *)P);
      a2[(unsigned __int64)(unsigned __int16)v12 >> 1] = 0;
      v7 = wcsstr_0(a2, L"FileRepository");
      v8 = v7;
      if ( v7 )
      {
        for ( i = *v7; i != 92 && i; i = *v8 )
          ++v8;
        v10 = v8 + 1;
        if ( !*v8 )
          v10 = v8;
        while ( *v10 != 92 && *v10 )
          ++v10;
        *v10 = 0;
        *a3 = (_DWORD)v10 - (_DWORD)a2;
      }
      else
      {
        v6 = -1073741811;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v6;
}
