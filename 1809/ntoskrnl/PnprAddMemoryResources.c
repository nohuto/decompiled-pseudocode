/*
 * XREFs of PnprAddMemoryResources @ 0x140835588
 * Callers:
 *     PnprAddDeviceResources @ 0x140835510 (PnprAddDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x140139500 (RtlCmDecodeMemIoResource.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprAddMemoryResources(__int64 a1, void **a2)
{
  unsigned int *v2; // rbx
  unsigned int *v4; // r14
  __int64 v5; // rbp
  unsigned int *v6; // rbp
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v12; // r15d
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // r13d
  unsigned int *PoolWithTag; // rax
  ULONGLONG v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned int *v21; // [rsp+78h] [rbp+10h]
  PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor; // [rsp+80h] [rbp+18h]
  unsigned __int64 Start; // [rsp+88h] [rbp+20h] BYREF

  v2 = (unsigned int *)*a2;
  v4 = (unsigned int *)*a2;
  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(unsigned int **)(v5 + 416);
  if ( !v6 )
  {
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 20984);
    if ( !v8 )
      v8 = 636;
    *(_DWORD *)(PnprContext + 20984) = v8;
    v9 = *(_DWORD *)(v7 + 20988);
    if ( !v9 )
      v9 = 6;
    *(_DWORD *)(v7 + 20988) = v9;
    goto LABEL_10;
  }
  v12 = 0;
  v13 = v6 + 1;
  if ( !*v6 )
  {
LABEL_10:
    *a2 = v2;
    if ( v2 != v4 )
      ExFreePoolWithTag(v4, 0x51706E50u);
    return 0;
  }
  while ( 1 )
  {
    v14 = 0LL;
    if ( v13[3] )
      break;
LABEL_24:
    ++v12;
    v13 = (_DWORD *)((char *)v13 + (unsigned int)(v14 + 36));
    if ( v12 >= *v6 )
      goto LABEL_10;
  }
  while ( 1 )
  {
    Descriptor = (PCM_PARTIAL_RESOURCE_DESCRIPTOR)&v13[4 * v14 + 4 + v14];
    if ( ((Descriptor->Type - 3) & 0xFB) == 0 )
      break;
LABEL_23:
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= v13[3] )
      goto LABEL_24;
  }
  v15 = v2[1];
  if ( v15 != *v2 )
  {
LABEL_22:
    v17 = RtlCmDecodeMemIoResource(Descriptor, &Start);
    *(_QWORD *)&v2[4 * v2[1] + 4] = Start;
    *(_QWORD *)&v2[4 * v2[1] + 6] = v17;
    *((_QWORD *)v2 + 1) += v17;
    ++v2[1];
    goto LABEL_23;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (v15 + 5), 0x51706E50u);
  v21 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v2, 16 * (v15 + 1));
    *v21 = v15 + 4;
    if ( v2 != v4 )
      ExFreePoolWithTag(v2, 0x51706E50u);
    v2 = v21;
    goto LABEL_22;
  }
  v18 = PnprContext;
  v10 = -1073741670;
  v19 = *(_DWORD *)(PnprContext + 20984);
  if ( !v19 )
    v19 = 676;
  *(_DWORD *)(PnprContext + 20984) = v19;
  v20 = *(_DWORD *)(v18 + 20988);
  if ( !v20 )
    v20 = 10;
  *(_DWORD *)(v18 + 20988) = v20;
  *a2 = v4;
  if ( v2 != v4 )
    ExFreePoolWithTag(v2, 0x51706E50u);
  return v10;
}
