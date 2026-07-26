/*
 * XREFs of ndisOidPreIovVPortParameters @ 0x1C00FAB60
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0016F10 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0070024 (ndisIovFindVPortByVPortId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovVPortParameters(__int64 a1)
{
  __int64 v1; // r15
  unsigned __int8 v2; // bl
  __int64 v3; // rsi
  _BYTE *v4; // r12
  __int64 v5; // rbp
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  char v11; // al
  __int64 VPortByVPortId; // r8
  int v13; // eax
  _BYTE *OidSourceHandle; // rax
  __int64 v15; // r8
  int v16; // eax
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int128 v21; // xmm1
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int128 v25; // xmm1

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0LL;
  v5 = 0LL;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qq(0x37u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v1, v3);
  v7 = *(_DWORD *)(v3 + 4);
  if ( (v7 & 0xFFFFFFFD) != 0 && v7 != 1 )
    goto LABEL_7;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) >= 0x23Cu )
  {
    if ( !v1 )
      goto LABEL_46;
    if ( ndisIovNicSwitchWithoutIovSupported(v1)
      || (v9 = *(_QWORD *)(v1 + 4648)) != 0 && *(_QWORD *)(v1 + 3592) && (*(_BYTE *)(v9 + 8) & 3) == 3 )
    {
      v10 = *(_DWORD *)(v3 + 4);
      if ( (v10 & 0xFFFFFFFD) != 0 )
      {
        if ( v10 == 1 )
        {
          v5 = *(_QWORD *)(v3 + 40);
          if ( !v5 )
          {
LABEL_16:
            *(_DWORD *)(a1 + 40) = -1073741811;
            goto LABEL_45;
          }
          v11 = *(_BYTE *)(v5 + 1);
          if ( v11 == 1 )
          {
            *(_DWORD *)(v3 + 52) = 572;
          }
          else if ( v11 == 2 )
          {
            *(_DWORD *)(v3 + 52) = 748;
          }
        }
      }
      else
      {
        v5 = *(_QWORD *)(v3 + 40);
        *(_DWORD *)(v3 + 52) = 0;
        if ( !v5 )
          goto LABEL_16;
      }
      VPortByVPortId = ndisIovFindVPortByVPortId(v8, *(_DWORD *)(v5 + 12));
      if ( !VPortByVPortId )
        goto LABEL_16;
      v13 = *(_DWORD *)(v3 + 4);
      if ( (v13 & 0xFFFFFFFD) == 0 )
      {
        *(_DWORD *)(a1 + 40) = 0;
        v17 = *(_BYTE *)(VPortByVPortId + 113);
        if ( v17 == 1 )
        {
          v18 = *(_QWORD *)(v3 + 40);
          v19 = VPortByVPortId + 112;
          v20 = 4LL;
          do
          {
            *(_OWORD *)v18 = *(_OWORD *)v19;
            *(_OWORD *)(v18 + 16) = *(_OWORD *)(v19 + 16);
            *(_OWORD *)(v18 + 32) = *(_OWORD *)(v19 + 32);
            *(_OWORD *)(v18 + 48) = *(_OWORD *)(v19 + 48);
            *(_OWORD *)(v18 + 64) = *(_OWORD *)(v19 + 64);
            *(_OWORD *)(v18 + 80) = *(_OWORD *)(v19 + 80);
            *(_OWORD *)(v18 + 96) = *(_OWORD *)(v19 + 96);
            v18 += 128LL;
            v21 = *(_OWORD *)(v19 + 112);
            v19 += 128LL;
            *(_OWORD *)(v18 - 16) = v21;
            --v20;
          }
          while ( v20 );
          *(_OWORD *)v18 = *(_OWORD *)v19;
          *(_OWORD *)(v18 + 16) = *(_OWORD *)(v19 + 16);
          *(_OWORD *)(v18 + 32) = *(_OWORD *)(v19 + 32);
          *(_QWORD *)(v18 + 48) = *(_QWORD *)(v19 + 48);
          *(_DWORD *)(v18 + 56) = *(_DWORD *)(v19 + 56);
          *(_DWORD *)(v3 + 52) = 572;
        }
        else if ( v17 == 2 )
        {
          v22 = *(_QWORD *)(v3 + 40);
          v23 = VPortByVPortId + 112;
          v24 = 5LL;
          do
          {
            *(_OWORD *)v22 = *(_OWORD *)v23;
            *(_OWORD *)(v22 + 16) = *(_OWORD *)(v23 + 16);
            *(_OWORD *)(v22 + 32) = *(_OWORD *)(v23 + 32);
            *(_OWORD *)(v22 + 48) = *(_OWORD *)(v23 + 48);
            *(_OWORD *)(v22 + 64) = *(_OWORD *)(v23 + 64);
            *(_OWORD *)(v22 + 80) = *(_OWORD *)(v23 + 80);
            *(_OWORD *)(v22 + 96) = *(_OWORD *)(v23 + 96);
            v22 += 128LL;
            v25 = *(_OWORD *)(v23 + 112);
            v23 += 128LL;
            *(_OWORD *)(v22 - 16) = v25;
            --v24;
          }
          while ( v24 );
          *(_OWORD *)v22 = *(_OWORD *)v23;
          *(_OWORD *)(v22 + 16) = *(_OWORD *)(v23 + 16);
          *(_OWORD *)(v22 + 32) = *(_OWORD *)(v23 + 32);
          *(_OWORD *)(v22 + 48) = *(_OWORD *)(v23 + 48);
          *(_OWORD *)(v22 + 64) = *(_OWORD *)(v23 + 64);
          *(_OWORD *)(v22 + 80) = *(_OWORD *)(v23 + 80);
          *(_QWORD *)(v22 + 96) = *(_QWORD *)(v23 + 96);
          *(_DWORD *)(v22 + 104) = *(_DWORD *)(v23 + 104);
          *(_DWORD *)(v3 + 52) = 748;
        }
        goto LABEL_45;
      }
      if ( v13 != 1 )
        goto LABEL_46;
      OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v3);
      if ( OidSourceHandle )
      {
        if ( *OidSourceHandle == 18 )
        {
          v4 = OidSourceHandle;
          if ( !*(_DWORD *)(v5 + 12) || *(_BYTE **)(v15 + 80) == OidSourceHandle )
          {
            v16 = *(_DWORD *)(v5 + 4);
            if ( (v16 & 0xFFFF0000) != 0
              && ((v16 & 0x20000) == 0 || *(_WORD *)(v5 + 16) <= 0x200u)
              && ((v16 & 0x80000) == 0
               || (*(_DWORD *)(v15 + 64) & 3) == 0 && *(_DWORD *)(v5 + 544) == 1 && *(_DWORD *)(v15 + 656) != 1) )
            {
              *(_QWORD *)(v3 + 152) = v15;
              goto LABEL_46;
            }
            goto LABEL_16;
          }
        }
      }
    }
LABEL_7:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_45;
  }
  *(_DWORD *)(v3 + 56) = 572;
  *(_DWORD *)(a1 + 40) = -1073676268;
LABEL_45:
  v2 = 1;
LABEL_46:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qqDD(0x38u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v1, v4, v2, *(_DWORD *)(a1 + 40));
  return v2;
}
