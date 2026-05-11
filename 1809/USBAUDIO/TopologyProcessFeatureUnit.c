/*
 * XREFs of TopologyProcessFeatureUnit @ 0x1C00228B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00113C0 (memset.c)
 */

__int64 __fastcall TopologyProcessFeatureUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  NTSTATUS v9; // edi
  unsigned int *v10; // rdx
  int v11; // ebp
  __int64 v12; // r15
  int v13; // r14d
  int v14; // r12d
  unsigned int v15; // r13d
  unsigned int *v16; // r10
  unsigned int v17; // r9d
  unsigned int v18; // r11d
  int v19; // esi
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  unsigned __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  __int64 (__fastcall *v28)(int, int, int, int, int, int, __int64); // rax
  __int64 v29; // r12
  unsigned int v30; // ecx
  size_t v31; // rsi
  PVOID PoolWithTag; // rax
  __int64 v33; // rbp
  int v34; // esi
  __int64 v35; // r15
  __int64 v36; // r12
  _DWORD *v37; // r8
  GUID *v38; // rax
  __int64 result; // rax
  int v40; // [rsp+20h] [rbp-88h]
  unsigned int *v41; // [rsp+28h] [rbp-80h]
  __int64 v42; // [rsp+30h] [rbp-78h]
  int v43; // [rsp+38h] [rbp-70h]
  __int64 v44; // [rsp+40h] [rbp-68h]
  __int64 v45; // [rsp+48h] [rbp-60h]
  __int64 v46; // [rsp+50h] [rbp-58h]
  unsigned __int64 v47; // [rsp+58h] [rbp-50h]
  int v51; // [rsp+C8h] [rbp+20h]

  v6 = a6;
  v7 = a3;
  v8 = a2;
  v9 = 0;
  v10 = a5;
  v11 = *a6;
  v12 = *(_QWORD *)(v8 + 72);
  v13 = *(_DWORD *)(v8 + 68);
  v14 = *(_DWORD *)(v8 + 28);
  v15 = *a5;
  v16 = (unsigned int *)(a4 + 16LL * *a6);
  v42 = v12;
  v17 = **(_DWORD **)(v8 + 56);
  v40 = v14;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( v9 < 0 )
      {
LABEL_66:
        v6 = a6;
        v10 = a5;
        goto LABEL_67;
      }
      v18 = 0;
      v19 = v13 - (v13 & (v13 - 1));
      v51 = v19;
      v13 &= v13 - 1;
      v20 = 152LL * v15 + v7;
      v45 = v20;
      *(_DWORD *)(v20 + 88) = 0;
      v21 = 0LL;
      do
      {
        if ( (v19 & *(_DWORD *)(v12 + 4 * v21)) != 0 )
        {
          ++v18;
          v22 = 2 * v14 + 1;
          v23 = v22 & (2 * v14);
          v24 = v22 - v23;
          if ( v21 )
          {
            v25 = v21;
            do
            {
              v26 = v23;
              v23 &= v23 - 1;
              v24 = v26 - v23;
              --v25;
            }
            while ( v25 );
            v8 = a2;
          }
          *(_DWORD *)(v20 + 88) |= v24;
        }
        ++v21;
      }
      while ( v21 <= *(unsigned int *)(*(_QWORD *)(v8 + 56) + 4LL) );
      v27 = 0LL;
      *(_DWORD *)(v20 + 80) = *(_DWORD *)(v8 + 16);
      ++v11;
      *(_DWORD *)(v20 + 92) = v18;
      v16[1] = 0;
      *v16 = v17;
      v16[2] = v15;
      v16[3] = 1;
      v16 += 4;
      v41 = v16;
      v43 = v11;
      if ( v19 == 2048 )
        v27 = 16LL;
      if ( v19 == 512 )
        v27 = 14LL;
      if ( v19 == 256 )
        v27 = 13LL;
      if ( v19 == 128 )
        v27 = 12LL;
      if ( v19 == 1024 )
        v27 = 15LL;
      if ( v19 == 64 )
        v27 = 11LL;
      if ( v19 == 32 )
        v27 = 10LL;
      if ( v19 == 16 )
        v27 = 9LL;
      if ( v19 == 2 )
        v27 = 8LL;
      if ( v19 == 1 )
        v27 = 7LL;
      if ( (_DWORD)v27 == 7 )
        break;
      if ( (unsigned int)v27 <= 7 )
        goto LABEL_39;
      if ( (unsigned int)v27 <= 0xB )
      {
        v28 = USBCntrlGetSetDbLevel;
        goto LABEL_38;
      }
      if ( (_DWORD)v27 == 12 )
      {
        *(_QWORD *)(v20 + 136) = USBCntrlGetSetGEQ;
        goto LABEL_40;
      }
      if ( (((_DWORD)v27 - 13) & 0xFFFFFFFC) == 0 && (_DWORD)v27 != 14 )
        break;
LABEL_39:
      if ( !(_DWORD)v27 )
      {
        v9 = -1073741438;
        goto LABEL_65;
      }
LABEL_40:
      *(_DWORD *)(v20 + 76) = v27;
      v29 = v18;
      v44 = 4 * v27;
      v47 = v18;
      *(_QWORD *)(v20 + 8) = NodeDescriptorInfo[4 * v27];
      *(_QWORD *)(v20 + 16) = NodeDescriptorInfo[4 * v27 + 1];
      v46 = LODWORD(NodeDescriptorInfo[4 * v27 + 2]);
      v30 = -1;
      if ( (unsigned __int64)v18 * v46 <= 0xFFFFFFFF )
        v30 = v18 * v46;
      else
        v9 = -1073741306;
      if ( v9 < 0 )
        goto LABEL_63;
      v31 = v30;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v30, 0x41627845u);
      *(_QWORD *)(v20 + 128) = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v31);
        *(_DWORD *)(v20 + 96) = 0;
        v33 = 0LL;
        v34 = *(_DWORD *)(v20 + 88);
        v35 = -1LL;
        if ( v29 )
        {
          v36 = 0LL;
          while ( v9 >= 0 )
          {
            v37 = (_DWORD *)(v36 + *(_QWORD *)(v20 + 128));
            do
              ++v35;
            while ( (v51 & *(_DWORD *)(v42 + 4 * v35)) == 0 );
            v20 = v45;
            *v37 = v33;
            v37[2] = v35;
            v37[1] = (v34 - (v34 & (unsigned int)(v34 - 1))) >> 1;
            v34 &= v34 - 1;
            v38 = NodeDescriptorInfo[v44 + 3];
            if ( v38 )
              v9 = ((__int64 (__fastcall *)(__int64, __int64))v38)(a1, v45);
            if ( v9 >= 0 )
              *(_DWORD *)(v45 + 96) |= 1 << v33;
            v36 += v46;
            if ( ++v33 >= v47 )
              goto LABEL_58;
          }
LABEL_60:
          ExFreePool(*(PVOID *)(v20 + 128));
        }
        else
        {
LABEL_58:
          if ( v9 < 0 )
            goto LABEL_60;
          v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v20 + 128), ExFreePool);
          if ( v9 < 0 )
            goto LABEL_60;
        }
        v12 = v42;
        v11 = v43;
        goto LABEL_62;
      }
      v9 = -1073741670;
LABEL_62:
      v8 = a2;
      v16 = v41;
LABEL_63:
      v14 = v40;
      v17 = v15++ | 0x80000000;
LABEL_65:
      v7 = a3;
      if ( !v13 )
        goto LABEL_66;
    }
    v28 = USBCntrlGetSetBoolean;
LABEL_38:
    *(_QWORD *)(v20 + 136) = v28;
    goto LABEL_39;
  }
LABEL_67:
  *v10 = v15;
  result = (unsigned int)v9;
  *v6 = v11;
  return result;
}
