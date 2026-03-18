/*
 * XREFs of ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0174164
 * Callers:
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0173FC0 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkRetrieveSubkeyInfoFromRegistry(
        HANDLE KeyHandle,
        ULONG Index,
        struct _KEY_BASIC_INFORMATION **a3)
{
  struct _KEY_BASIC_INFORMATION *v3; // rbx
  ULONG Length; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  NTSTATUS v11; // eax
  int v12; // edi
  __int64 v14; // rax
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  Length = 1024;
  do
  {
    if ( v3 )
      operator delete[](v3);
    v3 = (struct _KEY_BASIC_INFORMATION *)operator new[](Length, 0x4D677844u, PagedPool);
    if ( v3 )
    {
      ResultLength = 0;
      v11 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v3, Length, &ResultLength);
      Length = ResultLength;
      v12 = v11;
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v14 + 24) = Length;
      WdLogEvent5_WdError(v14);
      v12 = -1073741801;
    }
  }
  while ( v12 == -2147483643 || v12 == -1073741789 );
  if ( v12 < 0 )
  {
    if ( v3 )
      operator delete[](v3);
    v3 = 0LL;
  }
  *a3 = v3;
  return (unsigned int)v12;
}
