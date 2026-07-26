/*
 * XREFs of ndisWriteWmiStatusIndication @ 0x1C0016CD8
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008212C (-ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisSetupWmiNode @ 0x1C001B83C (ndisSetupWmiNode.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     McTemplateK0qqq @ 0x1C007D7C8 (McTemplateK0qqq.c)
 */

__int64 __fastcall ndisWriteWmiStatusIndication(__int64 a1, int a2, __int64 a3, unsigned int a4, int *Src, int a6)
{
  int v8; // eax
  bool v10; // r11
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // ecx
  unsigned int v15; // r8d
  int v16; // edx
  __int64 result; // rax
  int *v18; // r12
  size_t v19; // rbx
  int v20; // eax
  int v21; // r14d
  int v22; // eax
  int v23; // edx
  struct _MCGEN_TRACE_CONTEXT *v24; // rcx
  PVOID v25; // rbp
  __int64 v26; // rcx
  unsigned int *v27; // rdi
  _DWORD *v28; // rdi
  unsigned int v29; // eax
  int v30; // eax
  NTSTATUS v31; // ebx
  __int64 v32; // [rsp+40h] [rbp-48h] BYREF
  PVOID WnodeEventItem[8]; // [rsp+48h] [rbp-40h] BYREF
  int v34; // [rsp+90h] [rbp+8h] BYREF
  bool v35; // [rsp+A8h] [rbp+20h]

  v8 = *(_DWORD *)(a1 + 120);
  v10 = a4 - 1073807371 <= 1;
  v35 = v10;
  if ( (v8 & 0x80u) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 1368);
    v13 = 0LL;
    v32 = 0LL;
    v14 = -1073741823;
    if ( v12 )
    {
      v15 = 0;
      if ( *(_WORD *)(a1 + 1386) )
      {
        while ( (*(_DWORD *)(v12 + 24) & 2) == 0 || *(_DWORD *)(v12 + 16) != a4 )
        {
          ++v15;
          v12 += 28LL;
          if ( v15 >= *(unsigned __int16 *)(a1 + 1386) )
            goto LABEL_9;
        }
        v14 = 0;
        v32 = v12;
        v13 = v12;
      }
    }
LABEL_9:
    if ( v14 < 0 )
      return (unsigned int)v14;
LABEL_10:
    if ( v13 )
    {
      v16 = *(_DWORD *)(v13 + 24);
      if ( v16 < 0 && (*(_DWORD *)(a3 + 24) & 1) == 0 )
      {
        v18 = Src;
        v19 = a6 & (unsigned int)-(Src != 0LL);
        v20 = v19 + 4;
        if ( (v16 & 0x10) == 0 )
          v20 = Src != 0LL ? a6 : 0;
        v34 = v20;
        v21 = v20;
        if ( (v16 & 0x200) != 0 )
        {
          v22 = *(unsigned __int16 *)(a1 + 3808) + 46;
        }
        else
        {
          if ( !v10 )
          {
LABEL_20:
            ndisSetupWmiNode(a1, a2, v21, v13, (__int64)WnodeEventItem);
            v25 = WnodeEventItem[0];
            if ( WnodeEventItem[0] )
            {
              v26 = v32;
              v27 = (unsigned int *)((char *)WnodeEventItem[0] + *((unsigned int *)WnodeEventItem[0] + 14));
              if ( (*(_DWORD *)(v32 + 24) & 0x200) != 0 )
              {
                *v27 = v21 - 4;
                v28 = v27 + 1;
                *v28 = 2621699;
                v28[1] = *(_DWORD *)(a1 + 4056);
                *((_QWORD *)v28 + 1) = *(_QWORD *)(a1 + 4024);
                v28[6] = *(_DWORD *)(a3 + 16);
                if ( *(_UNKNOWN **)(a3 + 32) == &ndisIntReqWmi )
                  *((_QWORD *)v28 + 2) = *(_QWORD *)(a3 + 40);
                v28[7] = *(unsigned __int16 *)(a1 + 3808);
                v29 = v34 + 40;
                v28[8] = v34 + 40;
                memmove((char *)v28 + v29, *(const void **)(a1 + 3816), *(unsigned __int16 *)(a1 + 3808));
                v26 = v32;
                v27 = v28 + 10;
              }
              v30 = *(_DWORD *)(v26 + 24);
              if ( (_DWORD)v19 )
              {
                if ( (v30 & 0x10) != 0 )
                {
                  *v27++ = (unsigned int)v19 / *(_DWORD *)(v26 + 20);
                }
                else if ( a4 == 1073807384 && (*(_DWORD *)(a3 + 24) & 4) != 0 )
                {
                  v34 = 3;
                  v18 = &v34;
                  v19 = 4LL;
                }
                memmove(v27, v18, v19);
                v27 = (unsigned int *)((char *)v27 + v19);
              }
              else if ( (v30 & 0x10) != 0 )
              {
                *v27++ = 0;
              }
              if ( v35 )
                memmove(v27, *(const void **)(a1 + 3816), *(unsigned __int16 *)(a1 + 3808));
              v31 = IoWMIWriteEvent(v25);
              if ( v31 >= 0 )
                return (unsigned int)v31;
            }
            else
            {
              v31 = -1073741670;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v23) = 2;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v23,
                24,
                62,
                (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                a1,
                v31);
            }
            if ( (byte_1C00E8081 & 0x10) != 0 )
              McTemplateK0qqq(v24, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4008), v31, 0x10003u, 0);
            if ( v25 )
              ExFreePoolWithTag(v25, 0);
            return (unsigned int)v31;
          }
          v22 = *(unsigned __int16 *)(a1 + 3808) + 2;
        }
        v21 += v22;
        goto LABEL_20;
      }
    }
    return (unsigned int)v14;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 3760) + 360LL) + 152LL))(
             *(_QWORD *)(a1 + 24),
             a4,
             &v32);
  v14 = result;
  if ( (int)result >= 0 )
  {
    v13 = v32;
    v10 = v35;
    goto LABEL_10;
  }
  return result;
}
