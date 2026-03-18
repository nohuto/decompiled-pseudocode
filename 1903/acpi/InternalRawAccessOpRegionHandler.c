/*
 * XREFs of InternalRawAccessOpRegionHandler @ 0x1C005C5F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     AMLIGetParent @ 0x1C000FF40 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     WPP_RECORDER_SF_qq @ 0x1C001E264 (WPP_RECORDER_SF_qq.c)
 *     GetFieldUnitRegionObj @ 0x1C00205D8 (GetFieldUnitRegionObj.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0056B14 (ACPIInternalGetDeviceFromNSOBJ.c)
 */

__int64 __fastcall InternalRawAccessOpRegionHandler(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  volatile signed __int32 *v7; // rbx
  int FieldUnitRegionObj; // ebp
  unsigned __int64 v11; // rdx
  volatile signed __int32 *v12; // r15
  __int64 v13; // r12
  int v14; // eax
  unsigned int v15; // ebp
  char *PoolWithTag; // rax
  char *v17; // rbx
  __int64 v19; // r8
  unsigned int v20; // eax
  PVOID v21; // rbp
  unsigned int v22; // edi
  __int64 v23; // [rsp+28h] [rbp-70h]
  int v24; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-50h] BYREF
  PVOID Object[9]; // [rsp+50h] [rbp-48h] BYREF

  dword_1C0082858 = 0;
  v7 = 0LL;
  pszDest = 0;
  FieldUnitRegionObj = GetFieldUnitRegionObj((__int64 *)a3, (__int64 *)&v25);
  if ( FieldUnitRegionObj >= 0 )
  {
    v11 = v25;
    if ( v25 )
    {
      v7 = (volatile signed __int32 *)(v25 + 120);
      dword_1C0082858 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v25 + 128), 1u);
        v11 = v25;
      }
      DereferenceObjectEx(v11);
    }
  }
  if ( FieldUnitRegionObj || !v7 )
    return 3221225473LL;
  v12 = (volatile signed __int32 *)AMLIGetParent((__int64)v7);
  AMLIDereferenceHandleEx(v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      3u,
      0xAu,
      (__int64)&WPP_5e58a32fdfb43147ae9192110f2623ca_Traceguids,
      a3,
      v12);
  if ( !a5 || !*(_QWORD *)(a5 + 16) )
    return 3221225473LL;
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v13 = a4 + 16;
    v14 = 8;
  }
  else
  {
    v13 = *(_QWORD *)(a4 + 32);
    v14 = *(_DWORD *)(a4 + 24);
  }
  v24 = v14;
  if ( !*(_DWORD *)(a3 + 28) || (v15 = *(_DWORD *)(a3 + 36) + 56, v15 <= 0x40) )
    v15 = 64;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x4F706341u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v15);
  v17[8] = a1;
  *(_DWORD *)v17 = 1;
  *((_DWORD *)v17 + 1) = v15;
  v17[9] = *(_BYTE *)(a3 + 20) & 0xF;
  v17[12] = (*(_DWORD *)(a3 + 20) >> 4) & 6;
  v17[10] = BYTE1(*(_DWORD *)(a3 + 20));
  *((_QWORD *)v17 + 2) = a2;
  *((_DWORD *)v17 + 6) = *(_DWORD *)(a3 + 8);
  *((_DWORD *)v17 + 7) = *(_DWORD *)(a3 + 12);
  *((_DWORD *)v17 + 8) = *(_DWORD *)(a3 + 16);
  v17[11] = *(_BYTE *)(a3 + 24);
  if ( *(_DWORD *)(a3 + 28) )
  {
    *((_DWORD *)v17 + 12) = *(_DWORD *)(a3 + 32);
    v20 = *(_DWORD *)(a3 + 36);
    *((_DWORD *)v17 + 13) = v20;
    memmove(v17 + 56, (const void *)(a3 + 40), v20);
  }
  ACPIInternalGetDeviceFromNSOBJ((__int64)v12, Object, v19, 0LL);
  v21 = Object[0];
  *((PVOID *)v17 + 5) = Object[0];
  v22 = (*(__int64 (__fastcall **)(char *, __int64, int *, _QWORD, __int64, __int64))(a5 + 16))(
          v17,
          v13,
          &v24,
          *(_QWORD *)(a5 + 24),
          a6,
          a7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v23) = v22;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      3u,
      0xBu,
      (__int64)&WPP_5e58a32fdfb43147ae9192110f2623ca_Traceguids,
      v23);
  }
  if ( v21 )
    ObfDereferenceObject(v21);
  if ( v22 == -1073741789 )
  {
    *(_DWORD *)(a4 + 16) = v24;
    *(_WORD *)(a4 + 2) = 1;
  }
  ExFreePoolWithTag(v17, 0x4F706341u);
  AMLIDereferenceHandleEx(v12);
  return v22;
}
