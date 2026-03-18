/*
 * XREFs of ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0209904
 * Callers:
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EFBB0 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002EC68 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C0134E60 (DpiGetPnpRegistryKeyName.c)
 *     ?EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0209040 (-EnumSingleDriverKey@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall CDriverStoreCopy::SetRootDirectory(
        CDriverStoreCopy *this,
        struct DXGADAPTER *a2,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a3)
{
  char *v3; // rdi
  int v7; // eax
  _WORD *v8; // rax
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rax
  char *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  signed __int64 v15; // r8
  __int16 v16; // r9
  char *v17; // rax
  __int64 v18; // rcx
  int PnpRegistryKeyName; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct _UNICODE_STRING *v37; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this + 24;
  v7 = RtlStringCbCopyW((unsigned __int16 *)this + 12, 0x208uLL, (size_t *)((char *)a3 + 60));
  *((_DWORD *)a3 + 4) = v7;
  if ( v7 >= 0 )
  {
    v8 = v3;
    v9 = 260LL;
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v9;
    }
    while ( v9 );
    v10 = -1073741811;
    if ( v9 )
      v10 = 0;
    v11 = 260 - v9;
    if ( v9 )
    {
      v12 = &v3[2 * v11];
      v13 = 260 - v11;
      if ( 260 != v11 )
      {
        v14 = 2147483646LL;
        v15 = (char *)L"\\" - v12;
        do
        {
          if ( !v14 )
            break;
          v16 = *(_WORD *)&v12[v15];
          if ( !v16 )
            break;
          *(_WORD *)v12 = v16;
          --v14;
          v12 += 2;
          --v13;
        }
        while ( v13 );
      }
      v17 = v12 - 2;
      v10 = -2147483643;
      if ( v13 )
      {
        v17 = v12;
        v10 = 0;
      }
      *(_WORD *)v17 = 0;
    }
    *((_DWORD *)a3 + 4) = v10;
    v18 = *((_QWORD *)a2 + 24);
    v37 = 0LL;
    PnpRegistryKeyName = DpiGetPnpRegistryKeyName(v18, 3, (__int64 *)&v37);
    *((_DWORD *)a3 + 4) = PnpRegistryKeyName;
    if ( PnpRegistryKeyName >= 0 )
    {
      v25 = CDriverStoreCopy::EnumSingleDriverKey(this, v37);
      *((_DWORD *)a3 + 4) = v25;
      if ( v25 >= 0 )
      {
        v29 = DpiGetPnpRegistryKeyName(*((_QWORD *)a2 + 24), 2, (__int64 *)&v37);
        *((_DWORD *)a3 + 4) = v29;
        if ( v29 >= 0 )
        {
          v33 = CDriverStoreCopy::EnumSingleDriverKey(this, v37);
          *((_DWORD *)a3 + 4) = v33;
          if ( v33 >= 0 )
            return;
          v23 = WdLogNewEntry5_WdWarning(v35, v34, v36);
          v24 = *((int *)a3 + 4);
          *(_QWORD *)(v23 + 32) = 459LL;
        }
        else
        {
          v23 = WdLogNewEntry5_WdWarning(v31, v30, v32);
          v24 = *((int *)a3 + 4);
          *(_QWORD *)(v23 + 32) = 453LL;
        }
      }
      else
      {
        v23 = WdLogNewEntry5_WdWarning(v27, v26, v28);
        v24 = *((int *)a3 + 4);
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      v24 = *((int *)a3 + 4);
      *(_QWORD *)(v23 + 32) = 440LL;
    }
    *(_QWORD *)(v23 + 24) = v24;
    WdLogEvent5_WdWarning(v23);
  }
}
