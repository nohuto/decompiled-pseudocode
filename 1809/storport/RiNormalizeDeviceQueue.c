/*
 * XREFs of RiNormalizeDeviceQueue @ 0x1C000D414
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000B940 (RaidUnitCompleteRequest.c)
 *     RaidNormalizeDeviceQueue @ 0x1C000D3B4 (RaidNormalizeDeviceQueue.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x1C000D1E8 (RiGetEnqueueReason.c)
 *     RiPeekDeviceQueue @ 0x1C000D6B0 (RiPeekDeviceQueue.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0022408 (RaidGetQosEntryForDeviceEntry.c)
 *     PortSrbGetLbaFromCdb @ 0x1C00526EC (PortSrbGetLbaFromCdb.c)
 */

__int64 __fastcall RiNormalizeDeviceQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // rbp
  char v10; // r11
  unsigned int v11; // esi
  __int64 v12; // r10
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  unsigned __int8 v19; // r10
  char v20; // si
  unsigned int v21; // r14d
  __int64 v22; // r11
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  __int64 v25; // r8
  int v26; // ecx
  int v27; // ecx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 LbaFromCdb; // rax
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rcx
  int v34; // eax
  char v35; // al
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rcx

  LOBYTE(a3) = a2;
  v4 = RiPeekDeviceQueue(a1, a2, a3);
  v6 = v4;
  if ( !v4 )
    return v6;
  *(_BYTE *)(v4 + 22) ^= (*(_BYTE *)(v4 + 22) ^ (16 * v5)) & 0x10;
  if ( (*(_BYTE *)(v4 + 22) & 0x40) == 0 )
    goto LABEL_43;
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 64) + 8LL);
  if ( *(_BYTE *)(v7 + 2) != 40 )
  {
    v19 = *(_BYTE *)(v7 + 10);
    v9 = v7 + 72;
    goto LABEL_41;
  }
  v8 = *(_DWORD *)(v7 + 20);
  v9 = 0LL;
  v10 = 0;
  if ( v8 )
    goto LABEL_15;
  v11 = *(_DWORD *)(v7 + 56);
  v12 = 0LL;
  if ( !v11 )
    goto LABEL_15;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v7 + 4 * v12 + 120);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v14 = *(unsigned int *)(v7 + 16);
      if ( (unsigned int)v13 < (unsigned int)v14 )
        break;
    }
LABEL_30:
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v11 )
      goto LABEL_15;
  }
  v15 = (unsigned int)v13;
  v16 = *(_DWORD *)(v13 + v7) - 64;
  if ( !v16 )
  {
    v28 = v15 + 40;
LABEL_26:
    if ( v28 <= v14 )
    {
      v10 = 1;
      if ( !*(_BYTE *)(v15 + v7 + 10) )
        goto LABEL_15;
      v9 = v15 + v7 + 24;
    }
LABEL_29:
    if ( v10 )
      goto LABEL_15;
    goto LABEL_30;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v28 = v15 + 56;
    goto LABEL_26;
  }
  if ( v17 != 1 || v15 + 40 > v14 )
    goto LABEL_29;
  v18 = v15 + v7 + 32;
  if ( !*(_DWORD *)(v15 + v7 + 12) )
    v18 = v9;
  v9 = v18;
LABEL_15:
  v19 = 0;
  v20 = 0;
  if ( v8 )
  {
    v19 = 0;
  }
  else
  {
    v21 = *(_DWORD *)(v7 + 56);
    v22 = 0LL;
    if ( v21 )
    {
      while ( 1 )
      {
        v23 = *(unsigned int *)(v7 + 4 * v22 + 120);
        if ( (unsigned int)v23 >= 0x80 )
        {
          v24 = *(unsigned int *)(v7 + 16);
          if ( (unsigned int)v23 < (unsigned int)v24 )
            break;
        }
LABEL_37:
        v22 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v22 >= v21 )
          goto LABEL_41;
      }
      v25 = (unsigned int)v23;
      v26 = *(_DWORD *)(v23 + v7) - 64;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          if ( v27 == 1 && v25 + 40 <= v24 )
            goto LABEL_41;
          goto LABEL_36;
        }
        v29 = v25 + 56;
      }
      else
      {
        v29 = v25 + 40;
      }
      if ( v29 <= v24 )
      {
        v19 = *(_BYTE *)(v25 + v7 + 10);
        v20 = 1;
      }
LABEL_36:
      if ( v20 )
        goto LABEL_41;
      goto LABEL_37;
    }
  }
LABEL_41:
  LbaFromCdb = PortSrbGetLbaFromCdb(v9, v19);
  if ( (unsigned int)RtlInterlockedSetClearRun(
                       v31 + 3288,
                       (unsigned int)((unsigned __int64)*(unsigned int *)(v31 + 812)
                                    * LbaFromCdb
                                    / *(_QWORD *)(v31 + 3256)),
                       1LL) == 1 )
    *(_BYTE *)(v6 + 22) &= ~0x40u;
LABEL_43:
  if ( (unsigned int)RiGetEnqueueReason(a1, v6, 0LL) )
    return 0LL;
  v32 = *(_QWORD *)v6;
  if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
    goto LABEL_59;
  v33 = *(_QWORD **)(v6 + 8);
  if ( *v33 != v6 )
    goto LABEL_59;
  *v33 = v32;
  *(_QWORD *)(v32 + 8) = v33;
  ++*(_DWORD *)(a1 + 76);
  if ( (*(_BYTE *)(v6 + 22) & 6) != 0 )
    --*(_DWORD *)(a1 + 20);
  else
    --*(_DWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v6 + 22) & 8) != 0 )
    --*(_DWORD *)(a1 + 24);
  *(_BYTE *)(v6 + 20) = 0;
  v34 = *(_DWORD *)(a1 + 76);
  if ( v34 > *(_DWORD *)(a1 + 136) )
    *(_DWORD *)(a1 + 136) = v34;
  v35 = *(_BYTE *)(v6 + 22);
  if ( (v35 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 38) = 1;
    v35 = *(_BYTE *)(v6 + 22);
  }
  if ( (v35 & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v6);
    v37 = *QosEntryForDeviceEntry;
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
    {
      v38 = (_QWORD *)QosEntryForDeviceEntry[1];
      if ( (_QWORD *)*v38 == QosEntryForDeviceEntry )
      {
        *v38 = v37;
        *(_QWORD *)(v37 + 8) = v38;
        return v6;
      }
    }
LABEL_59:
    __fastfail(3u);
  }
  return v6;
}
