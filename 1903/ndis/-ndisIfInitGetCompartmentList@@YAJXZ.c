/*
 * XREFs of ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C00368FC
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0035FB0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0036BD0 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 ndisIfInitGetCompartmentList(void)
{
  char *PoolWithTag; // rdi
  int v1; // edx
  __int64 v2; // rdx
  int v3; // ebx
  unsigned int v4; // ecx
  __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned __int8 v10; // al
  unsigned __int16 v11; // dx
  int v12; // eax
  __int128 v14; // xmm0
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v16[10]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 i; // [rsp+98h] [rbp-70h]
  struct _NDIS_IF_COMPARTMENT_BLOCK *v18; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v19[14]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v20[206]; // [rsp+128h] [rbp+20h] BYREF

  memset(v16, 0, 0x48uLL);
  v18 = 0LL;
  PoolWithTag = 0LL;
  memset(v20, 0, 0x668uLL);
  v15 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      22,
      26,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids);
  }
  memset(v19, 0, sizeof(v19));
  LODWORD(v19[3]) = 7;
  v19[2] = &NPI_MS_NDIS_MODULEID;
  v19[4] = 0x100000000LL;
  v19[5] = 0LL;
  LODWORD(v19[6]) = 4;
  v19[7] = 0LL;
  LODWORD(v19[8]) = 1640;
  LODWORD(v19[13]) = 0;
  v3 = NsiEnumerateObjectsAllParametersEx(v19);
  if ( v3 >= 0 )
  {
    v4 = v19[13];
    if ( LODWORD(v19[13]) )
    {
      while ( 1 )
      {
        if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          v4 = v19[13];
          PoolWithTag = 0LL;
        }
        LODWORD(v2) = (4 * v4 + 7) & 0xFFFFFFF8;
        if ( 4 * (unsigned __int64)v4 > 0xFFFFFFFF || (unsigned int)v2 + 1640 * v4 < (unsigned int)v2 )
        {
          v3 = -1073741670;
          goto LABEL_21;
        }
        v5 = (unsigned int)v2;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v2 + 1640LL * v4, 0x6669444Eu);
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, v5 + 1640LL * LODWORD(v19[13]));
        v19[5] = PoolWithTag;
        v19[7] = &PoolWithTag[v5];
        LODWORD(v19[6]) = 4;
        LODWORD(v19[8]) = 1640;
        v3 = NsiEnumerateObjectsAllParametersEx(v19);
        if ( v3 != 261 )
          goto LABEL_11;
        v4 = v19[13];
      }
      v3 = -1073741670;
LABEL_11:
      if ( v3 >= 0 )
      {
        v2 = v19[7];
        v6 = 0;
        v7 = v19[13];
        v8 = v19[5];
        for ( i = v19[7]; v6 < v7; ++v6 )
        {
          v9 = 1640LL * v6 + v2;
          if ( *(_BYTE *)v9 == 0xAD )
          {
            v10 = *(_BYTE *)(v9 + 1);
            if ( v10 )
            {
              v11 = *(_WORD *)(v9 + 2);
              if ( v11 >= 0x448u )
              {
                if ( v10 < 3u || v11 < 0x664u )
                {
                  *(_DWORD *)v9 = 107479981;
                  memset((void *)(v9 + 1096), 0, 0x204uLL);
                  *(_QWORD *)(v9 + 1612) = 1LL;
                  if ( *(_DWORD *)(v8 + 4LL * v6) == 1 )
                  {
                    *(_WORD *)(v9 + 1096) = 38;
                    *(_OWORD *)(v9 + 1098) = *(_OWORD *)L"Default Compartment";
                    *(_OWORD *)(v9 + 1114) = *(_OWORD *)L"Compartment";
                    *(_DWORD *)(v9 + 1130) = *(_DWORD *)L"ent";
                    *(_WORD *)(v9 + 1134) = aDefaultCompart[18];
                    v14 = *(_OWORD *)(v9 + 1080);
                    *(_DWORD *)(v9 + 1616) |= 4u;
                    *(_OWORD *)(v9 + 1620) = v14;
                  }
                  v16[1] = 0LL;
                  v16[0] = 0LL;
                  v16[4] = 0LL;
                  v16[2] = &NPI_MS_NDIS_MODULEID;
                  v16[3] = 7LL;
                  v16[6] = 4LL;
                  v16[8] = 1640LL;
                  v16[5] = v8 + 4LL * v6;
                  v16[7] = v9;
                  NsiSetAllParametersEx(v16);
                }
                v12 = ndisIfCreateCompartmentBlock(
                        *(_DWORD *)(v8 + 4LL * v6),
                        0LL,
                        (struct _NDIS_NSI_COMPARTMENT_RW *)v9,
                        &v18);
                v7 = v19[13];
                v3 = v12;
              }
              v2 = i;
            }
          }
        }
      }
    }
    else
    {
      v16[2] = &NPI_MS_NDIS_MODULEID;
      v16[5] = &v15;
      *(_DWORD *)((char *)&v20[141] + 2) = *(_DWORD *)L"ent";
      *(_OWORD *)&v20[135] = xmmword_1C00D3120;
      HIWORD(v20[141]) = aDefaultCompart[18];
      v16[7] = v20;
      HIDWORD(v16[1]) = 0;
      v16[3] = 7LL;
      v16[6] = 4LL;
      v16[8] = 1640LL;
      v16[4] = 0x100000002LL;
      LODWORD(v20[0]) = 107479981;
      LOWORD(v20[137]) = 38;
      *(_OWORD *)((char *)&v20[137] + 2) = *(_OWORD *)L"Default Compartment";
      HIDWORD(v20[201]) = 1;
      *(_OWORD *)((char *)&v20[139] + 2) = *(_OWORD *)L"Compartment";
      LODWORD(v20[202]) = 4;
      v3 = NsiSetAllParametersEx(v16);
      if ( v3 >= 0 )
        goto LABEL_23;
    }
LABEL_21:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      22,
      27,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
