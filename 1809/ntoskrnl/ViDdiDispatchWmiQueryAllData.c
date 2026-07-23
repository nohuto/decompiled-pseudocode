/*
 * XREFs of ViDdiDispatchWmiQueryAllData @ 0x1409288F8
 * Callers:
 *     ViDdiDispatchWmi @ 0x140928890 (ViDdiDispatchWmi.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     VfIrpLogLockDatabase @ 0x140942214 (VfIrpLogLockDatabase.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409424D0 (VfIrpLogRetrieveWmiData.c)
 *     VfIrpLogUnlockDatabase @ 0x1409427C0 (VfIrpLogUnlockDatabase.c)
 */

__int64 __fastcall ViDdiDispatchWmiQueryAllData(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int v6; // r12d
  unsigned int *v7; // rsi
  __int64 v8; // rbx
  int WmiData; // r14d
  unsigned int v10; // edi
  int v11; // r12d
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // [rsp+70h] [rbp+40h] BYREF
  int v15; // [rsp+78h] [rbp+48h] BYREF
  int v16; // [rsp+80h] [rbp+50h] BYREF
  int v17; // [rsp+88h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(v2 + 8) != a1 )
    return 3221225659LL;
  if ( RtlCompareMemory(*(const void **)(v2 + 16), &GUID_VERIFIER_WMI_INTERFACE, 0x10uLL) != 16 )
    return 3221226133LL;
  v6 = *(_DWORD *)(v2 + 24);
  v7 = *(unsigned int **)(a1 + 64);
  if ( v6 < 0x38 )
    return 3221225507LL;
  v8 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v8 + 16) = MEMORY[0xFFFFF78000000014];
  result = VfIrpLogLockDatabase(*v7);
  if ( (int)result >= 0 )
  {
    WmiData = VfIrpLogRetrieveWmiData(*v7, 0, (unsigned int)&v17, (unsigned int)&v15, (__int64)&v16, (__int64)&v14);
    if ( WmiData < 0 )
    {
      VfIrpLogUnlockDatabase(*v7);
      return (unsigned int)WmiData;
    }
    v10 = v14 + 72;
    v14 = v10;
    if ( v10 <= v6 )
    {
      v11 = v15;
      if ( v15 )
      {
        v12 = VfIrpLogRetrieveWmiData(*v7, v8, (unsigned int)&v17, (unsigned int)&v15, (__int64)&v16, (__int64)&v14);
        v10 = v14;
        WmiData = v12;
        v11 = v15;
      }
      VfIrpLogUnlockDatabase(*v7);
      if ( WmiData < 0 )
        return (unsigned int)WmiData;
      if ( v11 )
      {
        *(_DWORD *)v8 = 72;
        v10 = 72;
        *(_DWORD *)(v8 + 60) = 0;
        *(_DWORD *)(v8 + 48) = 0;
        *(_DWORD *)(v8 + 56) = 0;
      }
      else
      {
        v13 = *(_DWORD *)(v8 + 44) & 0xFFFFFFEF;
        *(_DWORD *)v8 = v10;
        *(_DWORD *)(v8 + 44) = v13 | 1;
        *(_DWORD *)(v8 + 48) = v16;
        *(_DWORD *)(v8 + 56) = v17;
      }
      *(_DWORD *)(v8 + 52) = 0;
      *(_QWORD *)(a2 + 56) = v10;
    }
    else
    {
      VfIrpLogUnlockDatabase(*v7);
      *(_DWORD *)(v8 + 44) |= 0x20u;
      *(_DWORD *)(v8 + 48) = v10;
      *(_QWORD *)(a2 + 56) = 56LL;
    }
    return 0LL;
  }
  return result;
}
