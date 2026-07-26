/*
 * XREFs of ndisOidPreIovEnumVPorts @ 0x1C0071650
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0016F10 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisIovCopyVPortInfo @ 0x1C006F740 (ndisIovCopyVPortInfo.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C006FF78 (ndisIovFindSwitchBySwitchId.c)
 *     ndisIovFindVFByVFId @ 0x1C00F904C (ndisIovFindVFByVFId.c)
 */

char __fastcall ndisOidPreIovEnumVPorts(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  unsigned int v3; // r15d
  _BYTE *v4; // r12
  __int64 VFByVFId; // r14
  __int64 v6; // r13
  __int64 *v7; // rbx
  char v8; // si
  _DWORD *v9; // r8
  int v10; // eax
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rsi
  _BYTE *OidSourceHandle; // rax
  __int64 *v17; // rbp
  bool v18; // zf
  KIRQL v19; // r8
  _QWORD **v20; // rsi
  _QWORD *v21; // rdx
  __int64 v22; // rax
  _BYTE *v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // ebp
  __int64 v26; // rax
  _DWORD *v27; // rax
  _QWORD *v28; // r14
  unsigned int v29; // eax
  _DWORD *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 *SwitchBySwitchId; // [rsp+20h] [rbp-68h]
  __int64 v35; // [rsp+28h] [rbp-60h]
  _DWORD *v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  KIRQL v39; // [rsp+98h] [rbp+10h]
  int v40; // [rsp+A0h] [rbp+18h]

  v1 = *a1;
  v2 = a1[4];
  v3 = 0;
  v37 = *a1;
  v4 = 0LL;
  SwitchBySwitchId = 0LL;
  VFByVFId = 0LL;
  v35 = 0LL;
  v6 = 0LL;
  v7 = a1;
  v8 = 1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qq(0x35u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, a1, v1);
  *(_DWORD *)(v2 + 60) = 0;
  v9 = (_DWORD *)v7[4];
  if ( v9[1] == 12 )
  {
    *((_DWORD *)v7 + 10) = 0;
    if ( v9[12] < 0x1Cu )
    {
      v10 = -1073676268;
LABEL_8:
      v9[17] = 28;
      *((_DWORD *)v7 + 10) = v10;
      *(_DWORD *)(v7[4] + 60) = 0;
      *(_DWORD *)(v7[4] + 64) = 0;
      goto LABEL_71;
    }
    if ( v9[13] < 0x1Cu )
    {
      v10 = -1073676266;
      goto LABEL_8;
    }
    if ( !v1 )
    {
      v8 = 0;
      goto LABEL_71;
    }
    if ( ndisIovNicSwitchWithoutIovSupported(v1)
      || (v14 = *(_QWORD *)(v1 + 4648)) != 0 && *(_QWORD *)(v1 + 3592) != v13 && (*(_BYTE *)(v14 + 8) & 3) == 3 )
    {
      v15 = *(_QWORD *)(v2 + 40);
      *(_DWORD *)(v11 + 60) = v13;
      *(_DWORD *)(v7[4] + 64) = v12;
      OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v2);
      if ( OidSourceHandle && *OidSourceHandle == 18 )
        v4 = OidSourceHandle;
      if ( (*(_DWORD *)(v15 + 4) & 2) != 0 )
      {
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *(_DWORD *)(v15 + 8));
        v17 = SwitchBySwitchId;
        if ( !SwitchBySwitchId )
        {
LABEL_20:
          *((_DWORD *)v7 + 10) = -1073741811;
LABEL_21:
          v8 = 1;
          goto LABEL_71;
        }
      }
      else
      {
        v17 = 0LL;
      }
      if ( (*(_DWORD *)(v15 + 4) & 1) != 0 )
      {
        if ( *(_WORD *)(v15 + 12) == 0xFFFF )
        {
          v6 = *(_QWORD *)(v1 + 4720);
          v18 = v6 == 0;
        }
        else
        {
          VFByVFId = ndisIovFindVFByVFId(v1);
          v35 = VFByVFId;
          v18 = VFByVFId == 0;
        }
        if ( v18 )
          goto LABEL_20;
      }
      v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      v19 = v39;
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1864) = 2888554;
      if ( !v4 )
      {
        if ( v6 )
        {
          v3 = *(_DWORD *)(v6 + 28);
          v20 = (_QWORD **)(v6 + 32);
        }
        else if ( VFByVFId )
        {
          v3 = *(_DWORD *)(VFByVFId + 76);
          v20 = (_QWORD **)(VFByVFId + 80);
        }
        else if ( v17 )
        {
          v3 = *((_DWORD *)v17 + 12);
          v20 = (_QWORD **)(v17 + 7);
        }
        else
        {
          v3 = *(_DWORD *)(v1 + 4776);
          v20 = (_QWORD **)(v1 + 4784);
        }
LABEL_51:
        v25 = 576 * v3 + 28;
        *(_DWORD *)(v7[4] + 68) = v25;
        v26 = v7[4];
        if ( v25 <= *(_DWORD *)(v26 + 52) )
        {
          v27 = *(_DWORD **)(v26 + 40);
          *v27 = 1835392;
          v27[4] = 28;
          v27[5] = v3;
          v27[6] = 576;
          v28 = *v20;
          v36 = v27 + 7;
          v29 = 0;
          v40 = 0;
          if ( *v20 != v20 )
          {
            v30 = v36;
            do
            {
              if ( v29 >= v3 )
                break;
              if ( v35 || v6 )
              {
                v31 = (__int64)(v28 - 6);
              }
              else if ( SwitchBySwitchId )
              {
                v31 = (__int64)(v28 - 4);
              }
              else if ( v4 )
              {
                v31 = (__int64)(v28 - 2);
              }
              else
              {
                v31 = (__int64)v28;
              }
              v28 = (_QWORD *)*v28;
              if ( !v4 || v4 == *(_BYTE **)(v31 + 80) )
              {
                ndisIovCopyVPortInfo(v30, v31);
                v30 += 144;
                v29 = ++v40;
              }
            }
            while ( v28 != v20 );
            v7 = a1;
            v1 = v37;
            v19 = v39;
          }
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1864) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v19);
          v32 = v7[4];
          *((_DWORD *)v7 + 10) = 0;
          *(_DWORD *)(v32 + 60) = v25;
        }
        else
        {
          *((_DWORD *)v7 + 10) = -1073676266;
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1864) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v39);
        }
        goto LABEL_21;
      }
      if ( v6 )
      {
        v20 = (_QWORD **)(v6 + 32);
      }
      else if ( VFByVFId )
      {
        v20 = (_QWORD **)(VFByVFId + 80);
      }
      else
      {
        if ( !v17 )
        {
          v3 = *((_DWORD *)v4 + 206);
          v20 = (_QWORD **)(v4 + 832);
          goto LABEL_51;
        }
        v20 = (_QWORD **)(v17 + 7);
      }
      v21 = *v20;
      while ( v21 != v20 )
      {
        if ( VFByVFId || (v22 = 6LL, v6) )
          v22 = 4LL;
        v23 = (_BYTE *)v21[v22];
        v24 = v3 + 1;
        v21 = (_QWORD *)*v21;
        if ( v23 != v4 )
          v24 = v3;
        v3 = v24;
      }
      goto LABEL_51;
    }
  }
  *((_DWORD *)v7 + 10) = -1073741637;
LABEL_71:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qD(0x36u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v1, *((_DWORD *)v7 + 10));
  return v8;
}
