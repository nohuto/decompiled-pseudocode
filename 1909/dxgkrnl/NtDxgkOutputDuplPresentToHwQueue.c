/*
 * XREFs of NtDxgkOutputDuplPresentToHwQueue @ 0x1C024ECA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01449F0 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C0247204 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C0248ACC (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C025C358 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall NtDxgkOutputDuplPresentToHwQueue(_OWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KTHREAD **v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  PVOID v16; // rax
  PVOID v17; // rcx
  size_t v18; // r8
  const void *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  char *v29; // r14
  __int64 v30; // rax
  struct _D3DKMT_MOVE_RECT *v31; // rsi
  const void *v32; // rdx
  ULONG64 v33; // rcx
  unsigned int v34; // ecx
  ULONG64 v35; // r9
  unsigned int v36; // ebx
  __int64 v37; // rax
  _OWORD v38[4]; // [rsp+20h] [rbp-C8h] BYREF
  int v39; // [rsp+60h] [rbp-88h]
  int v40; // [rsp+64h] [rbp-84h]
  int v41; // [rsp+68h] [rbp-80h]
  struct DXGPROCESS *v42; // [rsp+70h] [rbp-78h]
  PVOID v43; // [rsp+78h] [rbp-70h]
  PVOID P; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v45[16]; // [rsp+88h] [rbp-60h] BYREF
  int v46; // [rsp+98h] [rbp-50h]
  PVOID v47; // [rsp+A0h] [rbp-48h] BYREF
  _BYTE v48[16]; // [rsp+A8h] [rbp-40h] BYREF
  int v49; // [rsp+B8h] [rbp-30h]

  memset(v38, 0, sizeof(v38));
  Current = DXGPROCESS::GetCurrent(v3, v2);
  v8 = (struct _KTHREAD **)Current;
  v42 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v11, v10);
    v12 = v9;
LABEL_3:
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  if ( !*((_BYTE *)Current + 298) )
  {
    v14 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v14 + 24) = 2439LL;
    v12 = v14;
    goto LABEL_3;
  }
  P = 0LL;
  v46 = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v38[0] = *a1;
  v38[1] = a1[1];
  v38[2] = a1[2];
  v38[3] = a1[3];
  if ( !DWORD2(v38[0]) )
  {
    v15 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, 0LL, v7);
    *(_QWORD *)(v15 + 24) = 2451LL;
    WdLogEvent5_WdWarning(v15);
    if ( P != v45 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    P = 0LL;
    v46 = 0;
    return 3221225485LL;
  }
  v16 = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, DWORD2(v38[0]));
  v17 = P;
  if ( !v16 )
  {
    if ( P != v45 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v46 = 0;
    return 3221225495LL;
  }
  v43 = P;
  v18 = 4LL * DWORD2(v38[0]);
  v19 = *(const void **)&v38[1];
  if ( *(_QWORD *)&v38[1] + v18 < *(_QWORD *)&v38[1] || *(_QWORD *)&v38[1] + v18 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v17, v19, v18);
  *(_QWORD *)&v38[1] = P;
  v22 = 16LL * DWORD2(v38[1]);
  if ( v22 > 0xFFFFFFFF )
  {
    v37 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v20, v21);
    *(_QWORD *)(v37 + 24) = 2479LL;
LABEL_57:
    WdLogEvent5_WdWarning(v37);
    if ( P != v45 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225621LL;
  }
  v39 = 16 * DWORD2(v38[1]);
  v23 = 24LL * DWORD2(v38[2]);
  if ( v23 > 0xFFFFFFFF )
  {
    v37 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v20, v21);
    *(_QWORD *)(v37 + 24) = 2486LL;
    goto LABEL_57;
  }
  v40 = 24 * DWORD2(v38[2]);
  v24 = (unsigned int)(v23 + v22);
  if ( (unsigned int)v24 < (unsigned int)v23 )
  {
    v37 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v24, v21);
    *(_QWORD *)(v37 + 24) = 2493LL;
    goto LABEL_57;
  }
  v41 = v23 + v22;
  v47 = 0LL;
  v49 = 0;
  if ( (_DWORD)v24 )
  {
    v29 = (char *)PagedPoolZeroedArray<unsigned char,16>::AllocateElements(&v47, v24);
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
      *(_QWORD *)(v30 + 24) = 2505LL;
      WdLogEvent5_WdLowResource(v30);
      if ( v47 != v48 && v47 )
        ExFreePoolWithTag(v47, 0);
      v47 = 0LL;
      v49 = 0;
      if ( P != v45 && P )
        ExFreePoolWithTag(P, 0);
      return 3221225495LL;
    }
    v31 = (struct _D3DKMT_MOVE_RECT *)&v29[16 * DWORD2(v38[1])];
    if ( DWORD2(v38[1]) )
    {
      v32 = *(const void **)&v38[2];
      v33 = *(_QWORD *)&v38[2] + (unsigned int)v22;
      if ( v33 < *(_QWORD *)&v38[2] || v33 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v29, v32, (unsigned int)v22);
      *(_QWORD *)&v38[2] = v29;
    }
    else
    {
      *(_QWORD *)&v38[2] = 0LL;
    }
    v34 = DWORD2(v38[2]);
    if ( DWORD2(v38[2]) )
    {
      if ( (_DWORD)v23 )
      {
        v35 = *(_QWORD *)&v38[3] + (unsigned int)v23;
        if ( v35 > MmUserProbeAddress || v35 < *(_QWORD *)&v38[3] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v34 = DWORD2(v38[2]);
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(v34, *(const struct _D3DKMT_MOVE_RECT **)&v38[3], v31);
      *(_QWORD *)&v38[3] = v31;
    }
    else
    {
      *(_QWORD *)&v38[3] = 0LL;
    }
  }
  else
  {
    *(_QWORD *)&v38[2] = 0LL;
    *(_QWORD *)&v38[3] = 0LL;
  }
  v36 = OutputDuplPresentToHwQueue((struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *)v38, v8);
  if ( v47 != v48 && v47 )
    ExFreePoolWithTag(v47, 0);
  v47 = 0LL;
  v49 = 0;
  if ( P != v45 && P )
    ExFreePoolWithTag(P, 0);
  return v36;
}
