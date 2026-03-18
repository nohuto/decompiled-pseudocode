/*
 * XREFs of DpiQueryDisplayIDDescriptor @ 0x1C0277B68
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C029D710 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E5B90 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DpiQueryDisplayIDDescriptor(__int64 a1, unsigned int *a2, void *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  char v9; // al
  unsigned __int16 v10; // ax
  unsigned int v11; // ecx
  __int64 result; // rax
  DXGADAPTER *v13; // rbx
  const GUID *v14; // r8
  unsigned int v15; // [rsp+30h] [rbp-40h] BYREF
  void *v16; // [rsp+38h] [rbp-38h]
  struct _DXGKARG_QUERYADAPTERINFO v17; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+90h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 28LL);
  if ( v6 < 0x8001 )
    return 3223126017LL;
  v7 = *(_QWORD *)(v3 + 936);
  v8 = *(_QWORD *)(v7 + 104);
  if ( !v8 || v6 < 0xA00B )
    goto LABEL_12;
  v9 = *(_BYTE *)(v8 + 123);
  if ( v9 != 2 )
  {
    if ( v9 == 1 )
      return 3223126017LL;
LABEL_12:
    v18 = *(_DWORD *)(v7 + 24);
    v15 = *a2;
    v16 = a3;
    memset(&v17, 0, sizeof(v17));
    v17.Type = DXGKQAITYPE_DISPLAYID_DESCRIPTOR;
    v17.pInputData = &v18;
    v17.InputDataSize = 4;
    v17.pOutputData = &v15;
    v17.OutputDataSize = 16;
    KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
    v13 = *(DXGADAPTER **)(v5 + 3792);
    DXGADAPTER::IsCoreResourceSharedOwner(v13);
    LODWORD(v13) = DXGADAPTER::DdiQueryAdapterInfo(v13, &v17, v14);
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
    result = (unsigned int)v13;
    *a2 = v15;
    return result;
  }
  v10 = *(_WORD *)(v7 + 96);
  if ( !v10 )
    return 3223126017LL;
  if ( a3 )
  {
    v11 = *a2;
    if ( *a2 > v10 )
    {
      *a2 = v10;
      v11 = v10;
    }
    memmove(a3, *(const void **)(v7 + 120), v11);
    return 0LL;
  }
  else
  {
    *a2 = v10;
    return 3221225507LL;
  }
}
