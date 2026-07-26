/*
 * XREFs of ndisWriteWmiStatusIndication @ 0x1C0019904
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ndisCoIndicateStatusInternal @ 0x1C011E468 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C00172D4 (ndisSetupWmiNode.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0qqq @ 0x1C004F464 (McTemplateK0qqq.c)
 */

__int64 __fastcall ndisWriteWmiStatusIndication(__int64 a1, const void **a2, __int64 a3, int a4, int *Src, int a6)
{
  __int64 v6; // rbx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v14; // ebp
  int v15; // eax
  unsigned int v16; // r15d
  int v17; // eax
  struct _MCGEN_TRACE_CONTEXT *v18; // rcx
  PVOID v19; // r14
  int v20; // eax
  unsigned int *v21; // rdi
  _DWORD *v22; // rdi
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // ebx
  PVOID WnodeEventItem[9]; // [rsp+30h] [rbp-48h] BYREF
  int v27; // [rsp+80h] [rbp+8h] BYREF
  bool v28; // [rsp+98h] [rbp+20h]

  v6 = *(_QWORD *)(a1 + 1368);
  v28 = (unsigned int)(a4 - 1073807371) <= 1;
  if ( !v6 )
    return 3221225473LL;
  v10 = *(unsigned __int16 *)(a1 + 1386);
  v11 = 0;
  if ( !*(_WORD *)(a1 + 1386) )
    return 3221225473LL;
  while ( 1 )
  {
    v12 = *(_DWORD *)(v6 + 24);
    if ( (v12 & 2) != 0 && *(_DWORD *)(v6 + 16) == a4 )
      break;
    ++v11;
    v6 += 28LL;
    if ( v11 >= v10 )
      return 3221225473LL;
  }
  if ( !v6 || v12 >= 0 || (*(_DWORD *)(a3 + 24) & 1) != 0 )
    return 0LL;
  v14 = Src != 0LL ? a6 : 0;
  v15 = v14 + 4;
  if ( (v12 & 0x10) == 0 )
    v15 = Src != 0LL ? a6 : 0;
  v27 = v15;
  v16 = v15;
  if ( (v12 & 0x200) != 0 )
  {
    v17 = *(unsigned __int16 *)(a1 + 3840) + 46;
LABEL_15:
    v16 += v17;
    goto LABEL_16;
  }
  if ( (unsigned int)(a4 - 1073807371) <= 1 )
  {
    v17 = *(unsigned __int16 *)(a1 + 3840) + 2;
    goto LABEL_15;
  }
LABEL_16:
  ndisSetupWmiNode(a1, a2, v16, (__int128 *)v6, WnodeEventItem);
  v19 = WnodeEventItem[0];
  if ( WnodeEventItem[0] )
  {
    v20 = *(_DWORD *)(v6 + 24);
    v21 = (unsigned int *)((char *)WnodeEventItem[0] + *((unsigned int *)WnodeEventItem[0] + 14));
    if ( (v20 & 0x200) != 0 )
    {
      *v21 = v16 - 4;
      v22 = v21 + 1;
      *v22 = 2621699;
      v22[1] = *(_DWORD *)(a1 + 4088);
      *((_QWORD *)v22 + 1) = *(_QWORD *)(a1 + 4056);
      v22[6] = *(_DWORD *)(a3 + 16);
      if ( *(_UNKNOWN **)(a3 + 32) == &ndisIntReqWmi )
        *((_QWORD *)v22 + 2) = *(_QWORD *)(a3 + 40);
      v22[7] = *(unsigned __int16 *)(a1 + 3840);
      v23 = v27 + 40;
      v22[8] = v27 + 40;
      memmove((char *)v22 + v23, *(const void **)(a1 + 3848), *(unsigned __int16 *)(a1 + 3840));
      v20 = *(_DWORD *)(v6 + 24);
      v21 = v22 + 10;
    }
    v24 = v20 & 0x10;
    if ( v14 )
    {
      if ( v24 )
      {
        *v21++ = v14 / *(_DWORD *)(v6 + 20);
      }
      else if ( a4 == 1073807384 && (*(_DWORD *)(a3 + 24) & 4) != 0 )
      {
        v27 = 3;
        Src = &v27;
        v14 = 4;
      }
      memmove(v21, Src, v14);
      v21 = (unsigned int *)((char *)v21 + v14);
    }
    else if ( v24 )
    {
      *v21++ = 0;
    }
    if ( v28 )
      memmove(v21, *(const void **)(a1 + 3848), *(unsigned __int16 *)(a1 + 3840));
    v25 = IoWMIWriteEvent(v19);
    if ( (v25 & 0x80000000) == 0 )
      return v25;
  }
  else
  {
    v25 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C00A0267 >= 2u )
    WPP_SF_qD(62LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v25);
  if ( (byte_1C00A2081 & 0x10) != 0 )
    McTemplateK0qqq(v18, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4040), v25, 0xF75u, 0);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  return v25;
}
