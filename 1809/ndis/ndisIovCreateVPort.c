/*
 * XREFs of ndisIovCreateVPort @ 0x1C00F8C80
 * Callers:
 *     ndisOidPreIovCreateVPort @ 0x1C00F9A20 (ndisOidPreIovCreateVPort.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisIovDeleteVPort @ 0x1C006FBA4 (ndisIovDeleteVPort.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C006FF78 (ndisIovFindSwitchBySwitchId.c)
 *     ndisIovFindVFByVFId @ 0x1C00F904C (ndisIovFindVFByVFId.c)
 */

char __fastcall ndisIovCreateVPort(__int64 *a1)
{
  __int64 v1; // rdi
  char *v2; // rsi
  __int64 v3; // r12
  __int64 v4; // rbp
  int v5; // r13d
  char v7; // r14
  __int64 v8; // rax
  _BYTE *OidSourceHandle; // rax
  __int64 v10; // rdi
  int *v11; // rbx
  __int64 *SwitchBySwitchId; // r15
  _DWORD *v13; // r10
  __int64 VFByVFId; // rax
  char *PoolWithTag; // rax
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _BYTE *v20; // r15
  size_t v21; // r12
  __int64 v22; // rax
  _BYTE *v23; // rcx
  _BYTE *v24; // rax
  _BYTE *v25; // rdi
  int v26; // eax
  __int64 v27; // r8
  int v28; // ecx
  int v29; // eax
  int v30; // edx
  __int64 v32; // [rsp+70h] [rbp+8h]
  _BYTE *v33; // [rsp+78h] [rbp+10h]
  int *v34; // [rsp+80h] [rbp+18h]
  __int64 v35; // [rsp+88h] [rbp+20h]

  v1 = a1[4];
  v2 = 0LL;
  v32 = 0LL;
  v3 = 0LL;
  v4 = *a1;
  v5 = 0;
  v35 = v1;
  v7 = 1;
  v8 = v1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    WPP_SF_q(0x2Du, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v4);
    v8 = a1[4];
  }
  *(_DWORD *)(v8 + 64) = 572;
  *(_DWORD *)(a1[4] + 60) = 0;
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  v33 = OidSourceHandle;
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v10 = *(_QWORD *)(v1 + 40);
    v34 = (int *)(v10 + 12);
    if ( *(_DWORD *)(v10 + 12) )
      goto LABEL_6;
    SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v4, *(_DWORD *)(v10 + 8));
    if ( !SwitchBySwitchId )
      goto LABEL_6;
    v13 = *(_DWORD **)(v4 + 3592);
    if ( *((_DWORD *)SwitchBySwitchId + 12) == v13[10] || *(_WORD *)(v10 + 16) > 0x200u )
      goto LABEL_6;
    if ( *(_WORD *)(v10 + 532) == 0xFFFF )
    {
      v32 = *(_QWORD *)(v4 + 4720);
      if ( !v32 || *(_DWORD *)(v10 + 544) != 2 )
        goto LABEL_6;
    }
    else
    {
      VFByVFId = ndisIovFindVFByVFId(v4);
      v3 = VFByVFId;
      if ( !VFByVFId || *(_DWORD *)(VFByVFId + 76) || *(_DWORD *)(v10 + 544) != 1 )
        goto LABEL_6;
    }
    if ( (v13[8] & 4) != 0 )
    {
      if ( *(_DWORD *)(v10 + 536) > (unsigned int)(v13[13]
                                                 - *((_DWORD *)SwitchBySwitchId + 162)
                                                 - *((_DWORD *)SwitchBySwitchId + 24)) )
      {
LABEL_6:
        v11 = (int *)(a1 + 5);
        *v11 = -1073741811;
        goto LABEL_48;
      }
    }
    else if ( *(_DWORD *)(v10 + 536) != v13[17] )
    {
      goto LABEL_6;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x388uLL, 0x6F69444Eu);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v11 = (int *)(a1 + 5);
      *v11 = -1073741670;
      goto LABEL_48;
    }
    memset(PoolWithTag, 0, 0x388uLL);
    *((_QWORD *)v2 + 10) = v33;
    *((_DWORD *)v2 + 26) = 1;
    *((_QWORD *)v2 + 9) = v4;
    *((_QWORD *)v2 + 11) = SwitchBySwitchId;
    if ( v3 )
      *((_DWORD *)v2 + 16) |= 2u;
    else
      v3 = v32;
    v16 = 5LL;
    *((_QWORD *)v2 + 12) = v3;
    v17 = v2 + 112;
    do
    {
      *v17 = *(_OWORD *)v10;
      v17[1] = *(_OWORD *)(v10 + 16);
      v17[2] = *(_OWORD *)(v10 + 32);
      v17[3] = *(_OWORD *)(v10 + 48);
      v17[4] = *(_OWORD *)(v10 + 64);
      v17[5] = *(_OWORD *)(v10 + 80);
      v17[6] = *(_OWORD *)(v10 + 96);
      v17 += 8;
      v18 = *(_OWORD *)(v10 + 112);
      v10 += 128LL;
      *(v17 - 1) = v18;
      --v16;
    }
    while ( v16 );
    *v17 = *(_OWORD *)v10;
    v17[1] = *(_OWORD *)(v10 + 16);
    v17[2] = *(_OWORD *)(v10 + 32);
    v17[3] = *(_OWORD *)(v10 + 48);
    v17[4] = *(_OWORD *)(v10 + 64);
    v17[5] = *(_OWORD *)(v10 + 80);
    v19 = *(_OWORD *)(v10 + 96);
    *((_QWORD *)v2 + 112) = 0LL;
    *((_QWORD *)v2 + 111) = 0LL;
    v17[6] = v19;
    *((_QWORD *)v2 + 110) = v2 + 872;
    *((_QWORD *)v2 + 109) = v2 + 872;
    v20 = *(_BYTE **)(v4 + 4800);
    v21 = *(unsigned int *)(v4 + 4808);
    if ( v20 )
    {
      v22 = 0LL;
      if ( (_DWORD)v21 )
      {
        v23 = *(_BYTE **)(v4 + 4800);
        while ( *v23 == 0xFF )
        {
          v5 += 8;
          v22 = (unsigned int)(v22 + 1);
          ++v23;
          if ( (unsigned int)v22 >= (unsigned int)v21 )
            goto LABEL_33;
        }
        v27 = (unsigned int)v22;
        v28 = 1;
        v29 = (unsigned __int8)v20[v22];
        v30 = 0;
        while ( (v29 & v28) != 0 )
        {
          v28 *= 2;
          if ( (unsigned int)++v30 >= 8 )
            goto LABEL_33;
        }
        v20[v27] = v28 | v29;
        v5 += v30;
        goto LABEL_44;
      }
    }
LABEL_33:
    v24 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v21 + 64), 0x6F69444Eu);
    v25 = v24;
    if ( v24 )
    {
      memset(&v24[v21], 0, 0x40uLL);
      if ( v20 )
      {
        memmove(v25, v20, v21);
        v25[v21] = 1;
        ExFreePoolWithTag(v20, 0);
      }
      else
      {
        *v25 = 3;
        v5 = 1;
      }
      *(_QWORD *)(v4 + 4800) = v25;
      *(_DWORD *)(v4 + 4808) = v21 + 64;
LABEL_44:
      v11 = (int *)(a1 + 5);
      *((_DWORD *)v2 + 31) = v5;
      *v34 = v5;
      *(_QWORD *)(v35 + 152) = v2;
      *v11 = 0;
      v7 = 0;
      goto LABEL_48;
    }
    v26 = -1073741670;
  }
  else
  {
    v26 = -1073741637;
  }
  v11 = (int *)(a1 + 5);
  *v11 = v26;
  if ( v2 )
    ndisIovDeleteVPort(v2);
LABEL_48:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qD(0x2Eu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v4, *v11);
  return v7;
}
