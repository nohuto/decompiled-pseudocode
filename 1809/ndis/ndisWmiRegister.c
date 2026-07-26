/*
 * XREFs of ndisWmiRegister @ 0x1C00CCD5C
 * Callers:
 *     ndisWMIDispatch @ 0x1C00B537C (ndisWMIDispatch.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisQuerySupportedGuidToOidList @ 0x1C00CC21C (ndisQuerySupportedGuidToOidList.c)
 */

__int64 __fastcall ndisWmiRegister(__int64 a1, __int64 a2, int *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // ebx
  int v7; // r14d
  const void **v8; // r15
  int v12; // edx
  unsigned int v13; // ebp
  unsigned int v14; // r14d
  int v15; // r12d
  unsigned int v16; // eax
  _DWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rcx
  const void **v26; // rax
  unsigned int v27; // ecx
  _OWORD *v28; // r14
  __int128 *i; // rdx
  __int128 v30; // xmm0
  char *v31; // rcx
  int v32; // [rsp+68h] [rbp+10h]

  v5 = 0;
  v7 = 0;
  v32 = 0;
  v8 = 0LL;
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_q(0x15u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
  *a5 = 0;
  if ( a2 )
  {
    if ( (unsigned __int8)byte_1C00A0261 >= 4u )
      WPP_SF_q(0x18u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
    v5 = -1073741811;
    goto LABEL_7;
  }
  if ( !*(_QWORD *)(a1 + 1368) && (unsigned int)ndisQuerySupportedGuidToOidList(a1) )
  {
    if ( (unsigned __int8)byte_1C00A0261 >= 2u )
      WPP_SF_q(0x16u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
    goto LABEL_33;
  }
  LOWORD(v12) = *(_WORD *)(a1 + 1388);
  if ( (_WORD)v12 )
  {
    v24 = *(_QWORD *)(a1 + 3792);
    v12 = (unsigned __int16)v12;
    v25 = *(_QWORD *)(v24 + 32);
    v26 = (const void **)(v24 + 48);
    v8 = (const void **)(v25 + 8);
    if ( !v25 )
      v8 = v26;
    v7 = 32 * (unsigned __int16)v12 + *(unsigned __int16 *)v8 + 58;
    v32 = v7;
  }
  else
  {
    v12 = 0;
  }
  v13 = *(unsigned __int16 *)(a1 + 1386) - v12;
  v14 = (v7 + 7) & 0xFFFFFFF8;
  v15 = 32 * v13 + 24;
  v16 = v15 + v14;
  if ( v15 + v14 < v14 )
  {
LABEL_33:
    v5 = -1073741823;
    goto LABEL_7;
  }
  if ( a4 < v16 )
  {
    *a3 = v16;
    v5 = -1073741789;
    *a5 = 4;
    if ( (unsigned __int8)byte_1C00A0261 < 4u )
      return v5;
    WPP_SF_q(0x17u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
  }
  else
  {
    *a5 = v16;
    memset(a3, 0, v16);
    if ( v14 && v8 )
    {
      v27 = 0;
      a3[1] = v14;
      v28 = a3 + 6;
      *a3 = v32;
      a3[4] = *(unsigned __int16 *)(a1 + 1388);
      for ( i = *(__int128 **)(a1 + 1376); v27 < *(unsigned __int16 *)(a1 + 1388); v28 += 2 )
      {
        v30 = *i;
        ++v27;
        i = (__int128 *)((char *)i + 28);
        *v28 = v30;
      }
      a3[2] = (_DWORD)v28 - (_DWORD)a3;
      *(_WORD *)v28 = *(_WORD *)v8;
      memmove((char *)v28 + 2, v8[1], *(unsigned __int16 *)v8);
      v31 = (char *)v28 + *(unsigned __int16 *)v8;
      a3[3] = (_DWORD)v31 + 2 - (_DWORD)a3;
      *((_WORD *)v31 + 1) = 30;
      *(_OWORD *)(v31 + 4) = *(_OWORD *)L"NdisMofResource";
      *(_QWORD *)(v31 + 20) = *(_QWORD *)L"esource";
      *((_DWORD *)v31 + 7) = *(_DWORD *)L"rce";
      *((_WORD *)v31 + 16) = aNdismofresourc[14];
      a3 = (int *)((char *)a3 + (unsigned int)a3[1]);
    }
    *a3 = v15;
    v17 = a3 + 6;
    a3[1] = 0;
    a3[4] = v13;
    v18 = *(_QWORD **)(a1 + 1368);
    if ( v13 )
    {
      v19 = v13;
      do
      {
        v20 = *v18 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
        if ( *v18 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
          v20 = v18[1] - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
        if ( !v20 )
          goto LABEL_30;
        v21 = *v18 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
        if ( *v18 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
          v21 = v18[1] - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
        if ( !v21 )
          goto LABEL_30;
        v22 = *v18 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
        if ( *v18 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
          v22 = v18[1] - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
        if ( !v22 )
        {
LABEL_30:
          *((_QWORD *)v17 + 3) = *(_QWORD *)(a1 + 3864);
          v17[4] = 32;
          v17[5] = 1;
        }
        v23 = *(_OWORD *)v18;
        v18 = (_QWORD *)((char *)v18 + 28);
        *(_OWORD *)v17 = v23;
        v17 += 8;
        --v19;
      }
      while ( v19 );
    }
    *((_QWORD *)a3 + 1) = 0LL;
  }
LABEL_7:
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_qD(0x19u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1, v5);
  return v5;
}
