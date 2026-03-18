/*
 * XREFs of HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C003A804
 * Callers:
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C001F810 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     HUBDESC_GetNextMsOs20Descriptor @ 0x1C0039658 (HUBDESC_GetNextMsOs20Descriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20DescriptorSet(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rcx
  char v5; // r14
  int v6; // edx
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // r12
  unsigned int v11; // r15d
  __int64 v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+30h] [rbp-38h]
  int v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+30h] [rbp-38h]
  unsigned __int16 *v22; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 **)(a2 + 24);
  v5 = 1;
  v6 = *(unsigned __int16 *)(a2 + 20);
  v7 = *(_DWORD *)(a2 + 12);
  if ( v7 != v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = v6;
      v14 = *(_DWORD *)(a2 + 12);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x163u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v14,
        v19);
    }
    v8 = 188LL;
LABEL_5:
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v8);
    v5 = 0;
LABEL_38:
    *(_DWORD *)a2 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x16Bu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    return v5;
  }
  if ( v7 < 0xA )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = *(_DWORD *)(a2 + 12);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x164u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v15);
    }
    v8 = 189LL;
    goto LABEL_5;
  }
  if ( *v4 != 10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x165u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v16);
    }
    v8 = 190LL;
    goto LABEL_5;
  }
  v9 = v4[4];
  if ( (_WORD)v6 != v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = v9;
      v17 = v6;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x166u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v17,
        v20);
    }
    v8 = 191LL;
    goto LABEL_5;
  }
  if ( *((_DWORD *)v4 + 1) > *(_DWORD *)(a2 + 16) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = *(_DWORD *)(a2 + 16);
      v18 = *((_DWORD *)v4 + 1);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x167u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v18,
        v21);
    }
    v8 = 192LL;
    goto LABEL_5;
  }
  v10 = (unsigned __int64)v4 + v9;
  v22 = v4;
  while ( 1 )
  {
    v11 = v4[1];
    if ( v11 >= 9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = v4[1];
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x169u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          v13);
      }
    }
    else
    {
      v5 = ((unsigned __int8 (__fastcall *)(__int64, __int64, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + 2 * v4[1]))(
             a1,
             a2,
             v4,
             v10) != 0
         ? v5
         : 0;
      if ( v11 - 1 > 1 && (*(_BYTE *)a2 & 0x18) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(a2 + 96),
            2u,
            5u,
            0x168u,
            (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 193LL);
        v5 = 0;
      }
    }
    if ( !HUBDESC_GetNextMsOs20Descriptor(v10, &v22) )
      break;
    v4 = v22;
    if ( !v22 )
      goto LABEL_37;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x16Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 194LL);
  v5 = 0;
LABEL_37:
  if ( !v5 )
    goto LABEL_38;
  return v5;
}
