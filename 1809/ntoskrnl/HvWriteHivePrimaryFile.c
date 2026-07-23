/*
 * XREFs of HvWriteHivePrimaryFile @ 0x1406B95D8
 * Callers:
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x1405A74F0 (HvpHeaderCheckSum.c)
 *     HvpFindNextDirtyBlock @ 0x1405A8B38 (HvpFindNextDirtyBlock.c)
 *     HvpFinishPrimaryWrite @ 0x1406B9768 (HvpFinishPrimaryWrite.c)
 *     CmpTraceHiveFlushWrotePrimaryFile @ 0x1406B9810 (CmpTraceHiveFlushWrotePrimaryFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B9A2C (CmpFileFlushAndPurge.c)
 */

__int64 __fastcall HvWriteHivePrimaryFile(ULONG_PTR BugCheckParameter2, char a2, __int64 a3, __int64 a4)
{
  char v6; // r13
  int v7; // r15d
  _DWORD *v8; // r9
  int v9; // eax
  int v10; // eax
  __int64 (__fastcall *v11)(ULONG_PTR, _QWORD, int *, __int64, int); // rax
  int v12; // ebx
  _QWORD *PoolWithTag; // rsi
  unsigned int v14; // ebx
  ULONG v15; // eax
  bool v16; // zf
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // [rsp+40h] [rbp-28h] BYREF
  __int64 v22; // [rsp+48h] [rbp-20h]
  int v23; // [rsp+50h] [rbp-18h]
  __int64 v24; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int i; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+60h] BYREF

  v6 = 0;
  v7 = a3 & 1;
  if ( !a2 )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 128) )
    {
      v8 = *(_DWORD **)(BugCheckParameter2 + 64);
      v8[10] = *(_DWORD *)(BugCheckParameter2 + 272);
      v8[11] = 1;
      goto LABEL_4;
    }
LABEL_23:
    v12 = 0;
    goto LABEL_22;
  }
  if ( !*(_QWORD *)(BugCheckParameter2 + 1752) )
    goto LABEL_23;
  v8 = *(_DWORD **)(BugCheckParameter2 + 1768);
LABEL_4:
  v9 = *(_DWORD *)(BugCheckParameter2 + 180);
  v8[2] = v9;
  v8[1] = v9 + 1;
  v10 = HvpHeaderCheckSum(v8);
  v16 = CmpFailPrimarySave == 1;
  *(_DWORD *)(a4 + 508) = v10;
  if ( v16 )
    goto LABEL_26;
  v11 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *, __int64, int))(BugCheckParameter2 + 40);
  v22 = a4;
  v21 = 0;
  v23 = 4096;
  v6 = 1;
  v12 = v11(BugCheckParameter2, 0LL, &v21, 1LL, v7);
  if ( v12 < 0 )
  {
LABEL_22:
    v16 = a2 == 0;
    goto LABEL_19;
  }
  if ( CmpFailPrimarySave == 2 )
  {
LABEL_26:
    v12 = -1073741823;
    goto LABEL_22;
  }
  if ( a2 )
  {
    PoolWithTag = *(_QWORD **)(BugCheckParameter2 + 1752);
    v14 = *(_DWORD *)(BugCheckParameter2 + 1760);
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * *(unsigned int *)(BugCheckParameter2 + 128), 0x62534D43u);
    if ( !PoolWithTag )
    {
      v12 = -1073741801;
      goto LABEL_22;
    }
    v14 = 0;
    for ( i = 0; v14 < *(_DWORD *)(BugCheckParameter2 + 128); LODWORD(v25) = v19 + v18 )
    {
      if ( !HvpFindNextDirtyBlock(
              BugCheckParameter2,
              (unsigned int *)(BugCheckParameter2 + 112),
              &i,
              &v27,
              (unsigned int *)&v24,
              &v25,
              0) )
        break;
      v18 = v25;
      v19 = v14++;
      v20 = 3 * v19;
      PoolWithTag[v20 + 1] = v27;
      LODWORD(v19) = v24;
      LODWORD(PoolWithTag[v20]) = v18;
      LODWORD(PoolWithTag[v20 + 2]) = v19;
    }
  }
  if ( CmpFailPrimarySave == 3 )
    goto LABEL_20;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD *, _QWORD, int))(BugCheckParameter2 + 40))(
          BugCheckParameter2,
          0LL,
          PoolWithTag,
          v14,
          v7);
  if ( v12 < 0 )
    goto LABEL_17;
  if ( CmpFailPrimarySave == 4 )
    goto LABEL_20;
  v12 = CmpFileFlushAndPurge(BugCheckParameter2, 0LL);
  if ( v12 < 0 )
    goto LABEL_17;
  if ( CmpFailPrimarySave == 5 )
  {
LABEL_20:
    v12 = -1073741823;
  }
  else
  {
    if ( a2 )
      v15 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 1728));
    else
      v15 = *(_DWORD *)(BugCheckParameter2 + 128);
    CmpTraceHiveFlushWrotePrimaryFile(v15, v15 << 9);
    v6 = 0;
    v12 = 0;
  }
LABEL_17:
  if ( !PoolWithTag )
    goto LABEL_22;
  v16 = a2 == 0;
  if ( !a2 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_22;
  }
LABEL_19:
  LOBYTE(a4) = v16;
  LOBYTE(a3) = v6;
  HvpFinishPrimaryWrite(BugCheckParameter2, v12 >= 0, a3, a4);
  return (unsigned int)v12;
}
