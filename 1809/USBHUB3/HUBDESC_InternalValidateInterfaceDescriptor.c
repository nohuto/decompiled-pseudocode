/*
 * XREFs of HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C0031048
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0031920 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00239AC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002E678 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x1C002F3AC (HUBDESC_InternalValidateLastInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateInterfaceDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v6; // rdi
  int v9; // r14d
  unsigned int v10; // eax
  unsigned int v11; // ebp
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned int v14; // ecx
  char v15; // bl
  unsigned __int8 v16; // si
  unsigned __int8 v17; // r15
  bool v18; // r14
  bool v19; // bp
  __int64 v20; // r8
  int v21; // r14d
  unsigned __int8 v22; // al
  int v23; // r14d
  unsigned __int8 v24; // al
  unsigned __int8 v25; // al
  int v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+90h] [rbp+8h]
  int v32; // [rsp+98h] [rbp+10h] BYREF

  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v32;
    v32 = 0;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = *a1;
  v11 = *(_DWORD *)(a2 + 72) - v9;
  v12 = a5;
  *a3 = v10;
  v31 = v9;
  if ( (unsigned __int8)v10 < 9u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 99LL);
    if ( v11 < 9 )
    {
      v14 = *a3;
    }
    else
    {
      *a3 = 9;
      v14 = 9;
    }
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
      *v6 = 2;
    if ( v14 < 9 )
    {
      v15 = 1;
      *v6 = 1;
      WPP_RECORDER_SF_DDD(v12, 2u, 512LL, 0x68u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, *a1, v9, 9);
      goto LABEL_70;
    }
    WPP_RECORDER_SF_DDDD(v12, v13, 512LL, 0x69u, v27);
  }
  if ( *a1 > 9u )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
      *v6 = 2;
    WPP_RECORDER_SF_DDD(
      v12,
      2u,
      (__int64)a3,
      0x6Au,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      *a1,
      v9,
      9);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 98LL);
  }
  if ( *a3 <= v11 )
  {
    v16 = a1[2];
    v17 = a1[3];
    v18 = (*(_DWORD *)(a2 + 256) & 1) == 0 || v16 != *(_BYTE *)(a2 + 80);
    v19 = !(*(_BYTE *)(a2 + 256) & 1);
    HUBDESC_InternalValidateLastInterface(a2, v6, v12);
    if ( *v6 != 1 )
    {
      if ( v18 )
      {
        if ( _bittest64(*(const signed __int64 **)(a2 + 216), v16) )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
            *v6 = 2;
          v21 = v31;
          LODWORD(v29) = v16;
          LODWORD(v28) = v31;
          WPP_RECORDER_SF_dD(v12, 2u, 5u, 0x6Cu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v28, v29);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 103LL);
        }
        else
        {
          v21 = v31;
        }
        if ( !v19 )
        {
          v22 = *(_BYTE *)(a2 + 80);
          if ( v22 > v16 )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
            {
              *v6 = 2;
              v22 = *(_BYTE *)(a2 + 80);
            }
            LODWORD(v30) = v22;
            LODWORD(v29) = v16;
            LODWORD(v28) = v21;
            WPP_RECORDER_SF_DDD(
              v12,
              2u,
              512LL,
              0x6Du,
              (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
              v28,
              v29,
              v30);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 106LL);
          }
        }
        if ( v17 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
            *v6 = 2;
          LODWORD(v30) = v17;
          LODWORD(v29) = v16;
          LODWORD(v28) = v21;
          WPP_RECORDER_SF_DDD(
            v12,
            2u,
            v20,
            0x6Eu,
            (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
            v28,
            v29,
            v30);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 104LL);
        }
        RtlClearAllBits((PRTL_BITMAP)(a2 + 88));
        RtlSetBit((PRTL_BITMAP)(a2 + 208), v16);
        *(_BYTE *)(a2 + 80) = v16;
        ++*(_WORD *)(a2 + 202);
      }
      else
      {
        if ( _bittest64(*(const signed __int64 **)(a2 + 96), v17) )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
            *v6 = 2;
          v23 = v31;
          LODWORD(v30) = v16;
          LODWORD(v29) = v31;
          LODWORD(v28) = v17;
          WPP_RECORDER_SF_DDD(
            v12,
            2u,
            v20,
            0x6Fu,
            (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
            v28,
            v29,
            v30);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 101LL);
        }
        else
        {
          v23 = v31;
        }
        v24 = *(_BYTE *)(a2 + 81);
        if ( v24 >= v17 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
          {
            *v6 = 2;
            v24 = *(_BYTE *)(a2 + 81);
          }
          LODWORD(v30) = v24;
          LODWORD(v29) = v17;
          LODWORD(v28) = v23;
          WPP_RECORDER_SF_DDD(
            v12,
            2u,
            v20,
            0x70u,
            (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
            v28,
            v29,
            v30);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 105LL);
        }
      }
      RtlClearAllBits((PRTL_BITMAP)(a2 + 136));
      *(_BYTE *)(a2 + 185) = 0;
      v25 = a1[4];
      *(_DWORD *)(a2 + 256) &= ~2u;
      *(_BYTE *)(a2 + 184) = v25;
      RtlSetBit((PRTL_BITMAP)(a2 + 88), v17);
      *(_BYTE *)(a2 + 81) = v17;
    }
  }
  else
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
      *v6 = 2;
    LODWORD(v28) = v9;
    WPP_RECORDER_SF_d(v12, 2u, 5u, 0x6Bu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v28);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 100LL);
  }
  v15 = 1;
LABEL_70:
  if ( *v6 )
  {
    v15 = 0;
    WPP_RECORDER_SF_(v12, 2u, 5u, 0x71u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v15;
}
