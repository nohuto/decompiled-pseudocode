/*
 * XREFs of ndisMSetQosAttributes @ 0x1C00BB350
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C95F0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_DDDD @ 0x1C0043B98 (WPP_SF_DDDD.c)
 */

__int64 __fastcall ndisMSetQosAttributes(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  size_t v6; // rsi
  unsigned __int8 v7; // cl
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  PVOID PoolWithTag; // rax
  PVOID v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _WORD *v14; // rdx
  size_t v15; // r8
  _WORD *v16; // rdx
  unsigned __int16 v17; // ax
  int v19; // r8d
  unsigned __int16 v20; // cx
  void *v21; // rcx
  void *v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qq(0x90u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2);
  v5 = *(_QWORD *)(a2 + 64);
  v6 = 20LL;
  v7 = *(_BYTE *)(v5 + 1);
  if ( !v7 || *(_WORD *)(v5 + 2) < 0x14u )
  {
    if ( (unsigned __int8)byte_1C00A025C >= 5u )
    {
      v19 = v7;
      v20 = 145;
      goto LABEL_25;
    }
LABEL_26:
    v4 = -1073741811;
    goto LABEL_27;
  }
  v8 = *(_QWORD *)(a2 + 72);
  v9 = *(_BYTE *)(v8 + 1);
  if ( !v9 || *(_WORD *)(v8 + 2) < 0x14u )
  {
    if ( (unsigned __int8)byte_1C00A025C >= 5u )
    {
      v19 = v9;
      v20 = 146;
LABEL_25:
      WPP_SF_DDDD(v20, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v19, 1);
      goto LABEL_26;
    }
    goto LABEL_26;
  }
  if ( *(_QWORD *)(a1 + 4952) || *(_QWORD *)(a1 + 4944) )
  {
    v4 = -1073676283;
    goto LABEL_16;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x7371444Eu);
  *(_QWORD *)(a1 + 4952) = PoolWithTag;
  if ( PoolWithTag )
  {
    v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x7371444Eu);
    *(_QWORD *)(a1 + 4944) = v11;
    if ( v11 )
    {
      v12 = *(_QWORD *)(a1 + 4952);
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_DWORD *)(v12 + 16) = 0;
      v13 = *(_QWORD *)(a1 + 4944);
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_DWORD *)(v13 + 16) = 0;
      v14 = *(_WORD **)(a2 + 72);
      LOWORD(v13) = v14[1];
      v15 = (unsigned __int16)v13;
      if ( (unsigned __int16)v13 >= 0x14u )
        v15 = 20LL;
      memmove(*(void **)(a1 + 4952), v14, v15);
      v16 = *(_WORD **)(a2 + 64);
      v17 = v16[1];
      if ( v17 < 0x14u )
        v6 = v17;
      memmove(*(void **)(a1 + 4944), v16, v6);
      goto LABEL_16;
    }
  }
  v4 = -1073741670;
LABEL_27:
  v21 = *(void **)(a1 + 4952);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(a1 + 4952) = 0LL;
  }
  v22 = *(void **)(a1 + 4944);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(a1 + 4944) = 0LL;
  }
LABEL_16:
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
  {
    v23 = v4;
    WPP_SF_qqd(0x93u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2, v23);
  }
  return v4;
}
