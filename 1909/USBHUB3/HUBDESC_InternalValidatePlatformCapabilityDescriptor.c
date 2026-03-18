/*
 * XREFs of HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C0035540
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C00373C0 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0025BE8 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C003131C (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidatePlatformCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // r14
  unsigned __int8 *v7; // rdi
  __int64 v8; // r15
  char v9; // si
  int v10; // r12d
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int *v14; // rax
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  unsigned __int16 v17; // r9
  unsigned int v18; // r12d
  __int64 v19; // rax
  _DWORD *v20; // r13
  unsigned int v21; // ecx
  unsigned __int8 *v22; // rdx
  __int64 v23; // rcx
  ULONG *v24; // r13
  ULONG v25; // r15d
  __int64 v26; // rdi
  bool v27; // zf
  unsigned __int8 v28; // cl
  __int64 v29; // rax
  int v31; // [rsp+20h] [rbp-A8h]
  __int64 v32; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v33; // [rsp+58h] [rbp-70h]
  __int64 v34; // [rsp+60h] [rbp-68h]
  __int64 v35; // [rsp+68h] [rbp-60h]
  ULONG *v36; // [rsp+70h] [rbp-58h]
  int v38; // [rsp+D8h] [rbp+10h]
  int v40; // [rsp+E8h] [rbp+20h] BYREF

  v5 = a4;
  v7 = a1;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v40 = 0;
    v5 = &v40;
  }
  v8 = a5;
  v9 = 1;
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = *(_DWORD *)(a2 + 72) - v10;
  if ( *a1 >= 0x14u )
  {
    v14 = a3;
    goto LABEL_9;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 251LL);
  if ( v11 >= 0x14 )
  {
    v14 = a3;
    *v5 = 2;
    *a3 = 20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(v8, v12, v13, 0x8Cu, v31);
      v14 = a3;
    }
LABEL_9:
    if ( *v14 > v11 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(v8, 2u, 5u, 0x8Eu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v10);
      v15 = 253LL;
      goto LABEL_16;
    }
    if ( v7[3] )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(v8, 2u, 5u, 0x8Fu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v7[3]);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 195LL);
    }
    if ( *(_QWORD *)(v7 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(v7 + 12) == *(_QWORD *)GUID_NULL.Data4 )
    {
      *v5 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v8, 2u, 5u, 0x90u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      v15 = 196LL;
      goto LABEL_16;
    }
    if ( *(_QWORD *)(v7 + 4) == *(_QWORD *)&GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data1
      && *(_QWORD *)(v7 + 12) == *(_QWORD *)GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data4 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v8, 2u, 5u, 0x91u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
        v15 = 197LL;
        goto LABEL_16;
      }
      v16 = *v7;
      if ( *v7 < 0x1Cu )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_42:
          v15 = 198LL;
          goto LABEL_16;
        }
        v17 = 146;
LABEL_41:
        LODWORD(v32) = *v7;
        WPP_RECORDER_SF_d(v8, 2u, 5u, v17, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v32);
        goto LABEL_42;
      }
      if ( ((v16 - 4) & 7) != 0 )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_42;
        v17 = 147;
        goto LABEL_41;
      }
      v18 = (((unsigned __int64)v16 - 28) >> 3) + 1;
      if ( (unsigned int)(((unsigned __int64)v16 - 28) >> 3) == -1 )
        goto LABEL_63;
      v19 = v18;
      v20 = v7 + 20;
      v21 = 1;
      v36 = (ULONG *)(v7 + 20);
      v38 = 1;
      v35 = v18;
      do
      {
        if ( v21 < v18 )
        {
          v22 = &v7[8 * v21 + 20];
          v33 = v22;
          v23 = v18 - v21;
          v34 = v23;
          do
          {
            if ( *(_DWORD *)v22 == *v20 )
            {
              *v5 = 1;
              *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v32) = *v20;
                WPP_RECORDER_SF_d(v8, 2u, 5u, 0x94u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v32);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 199LL);
              v22 = v33;
              v23 = v34;
            }
            v22 += 8;
            --v23;
            v33 = v22;
            v34 = v23;
          }
          while ( v23 );
          v7 = a1;
          v21 = v38;
          v19 = v35;
        }
        ++v21;
        v20 += 2;
        --v19;
        v38 = v21;
        v35 = v19;
      }
      while ( v19 );
      v24 = v36;
      v25 = 0;
      v26 = v18;
      do
      {
        if ( *v24 > v25 && RtlIsNtDdiVersionAvailable(*v24) )
        {
          v25 = *v24;
          *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) = v24;
        }
        v24 += 2;
        --v26;
      }
      while ( v26 );
      v27 = v25 == 0;
      v8 = a5;
      if ( v27 )
      {
LABEL_63:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v8, 2u, 5u, 0x95u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 200LL);
      }
    }
    else if ( *(_QWORD *)(v7 + 4) == *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1
           && *(_QWORD *)(v7 + 12) == *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4 )
    {
      if ( *v7 >= 0x1Au )
      {
        v28 = v7[20];
        if ( v28 == 1 )
        {
          if ( *v7 != 26 )
          {
            *v5 = 1;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v32) = *v7;
              WPP_RECORDER_SF_d(v8, 2u, 5u, 0x97u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v32);
            }
            v15 = 247LL;
            goto LABEL_16;
          }
        }
        else if ( !v28 )
        {
          *v5 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v32) = v7[20];
            WPP_RECORDER_SF_d(v8, 2u, 5u, 0x98u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v32);
          }
          v15 = 249LL;
          goto LABEL_16;
        }
        v29 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v29 + 56) )
        {
          *(_QWORD *)(v29 + 56) = v7;
          goto LABEL_86;
        }
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v8, 2u, 5u, 0x99u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
        v15 = 248LL;
        goto LABEL_16;
      }
      *v5 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v32) = *v7;
        WPP_RECORDER_SF_d(v8, 2u, 5u, 0x96u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v32);
      }
      v15 = 250LL;
LABEL_16:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v15);
    }
LABEL_86:
    if ( !*v5 )
      return v9;
    goto LABEL_87;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v8, 2u, v13, 0x8Du, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v10, *v7, 20);
    goto LABEL_86;
  }
LABEL_87:
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v8, 2u, 5u, 0x9Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v9;
}
