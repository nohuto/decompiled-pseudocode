/*
 * XREFs of RegisterHvFeedbackCountersCallback @ 0x1C002EEA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     DecodeGenAddressToHvPerfReg @ 0x1C002E704 (DecodeGenAddressToHvPerfReg.c)
 */

__int64 __fastcall RegisterHvFeedbackCountersCallback(__int64 a1)
{
  unsigned int v2; // r12d
  unsigned __int8 v3; // cl
  unsigned int v4; // edx
  __int64 v5; // r8
  _BYTE *v6; // rax
  SIZE_T v7; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rsi
  int v10; // ebx
  SIZE_T v11; // rbx
  _DWORD *v12; // rax
  _DWORD *v13; // r14
  __int64 *v14; // rbx
  _DWORD *v15; // r15
  unsigned int v16; // r13d
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  bool v22; // al
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(__int64, char, _QWORD *, _QWORD *); // rax
  unsigned int i; // ecx
  __int64 v26; // rax
  __int64 *v28; // [rsp+30h] [rbp-30h]
  __int64 v29; // [rsp+38h] [rbp-28h]
  __int64 v30; // [rsp+40h] [rbp-20h]
  __int64 v31; // [rsp+48h] [rbp-18h] BYREF
  _DWORD *v32; // [rsp+50h] [rbp-10h]
  __int64 v33; // [rsp+58h] [rbp-8h]
  __int64 v34; // [rsp+A0h] [rbp+40h]
  __int64 v35; // [rsp+B0h] [rbp+50h]
  _DWORD *v36; // [rsp+B8h] [rbp+58h]

  v2 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v3 = 0;
  v33 = 0LL;
  v4 = *(_DWORD *)(a1 + 36);
  if ( !v4 )
    goto LABEL_41;
  v5 = v4;
  v6 = (_BYTE *)(*(_QWORD *)(a1 + 408) + 16LL);
  do
  {
    if ( v6[1] && *v6 )
      ++v3;
    v6 += 24;
    --v5;
  }
  while ( v5 );
  if ( v3 )
  {
    v7 = 24 * *(_DWORD *)(a1 + 16) * (unsigned int)v3;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72637250u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v7);
      v11 = (unsigned int)(104 * *(_DWORD *)(a1 + 16));
      v12 = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72637250u);
      v13 = v12;
      if ( v12 )
      {
        memset(v12, 0, v11);
        v14 = *(__int64 **)(a1 + 424);
        v15 = v13;
        v16 = 0;
        v30 = *(_QWORD *)(a1 + 416);
        v28 = v14;
        v36 = v9;
        if ( *(_DWORD *)(a1 + 16) )
        {
          v17 = 0x100040000000E8LL;
          v18 = 0x100040000000E7LL;
          do
          {
            *v15 = 0;
            if ( *(_DWORD *)(a1 + 36) )
            {
              do
              {
                v19 = *(_QWORD *)(a1 + 408);
                if ( *(_BYTE *)(v19 + 24LL * v2 + 17) && *(_BYTE *)(v19 + 24LL * v2 + 16) )
                {
                  v20 = *v14;
                  v29 = *v14;
                  v34 = 3LL * (unsigned int)*v15;
                  v21 = &v15[6 * *v15];
                  if ( *(unsigned __int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, unsigned __int64 *))(*v14 + 48) == GetCpcDifferentialFeedback )
                  {
                    v35 = *(_QWORD *)(v20 + 56);
                    v10 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(v35 + 152), (__int64)(v21 + 4));
                    if ( v10 < 0 )
                      goto LABEL_37;
                    v10 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(v35 + 140), (__int64)&v15[2 * v34 + 2]);
                    if ( v10 < 0 )
                      goto LABEL_37;
                    v20 = v29;
                    v22 = 0;
                    v14 = v28;
                    v23 = v34;
                  }
                  else
                  {
                    v24 = *(__int64 (__fastcall **)(__int64, char, _QWORD *, _QWORD *))(v19 + 24LL * v2);
                    v23 = 3LL * (unsigned int)*v15;
                    *((_QWORD *)v21 + 2) = v17;
                    *(_QWORD *)&v15[2 * v34 + 2] = v18;
                    v22 = v24 != PerfReadWrappingCounter;
                  }
                  LOBYTE(v15[2 * v23 + 6]) = v22;
                  v36[1] = *(_DWORD *)(32LL * v16 + v30);
                  *v36 = *v15;
                  *(_QWORD *)(v20 + 56) = v36;
                  *(_QWORD *)(v20 + 48) = PerfHvReadFeedback;
                  ++*v15;
                  v36 += 6;
                }
                ++v14;
                ++v2;
                v28 = v14;
              }
              while ( v2 < *(_DWORD *)(a1 + 36) );
            }
            v15 += 26;
            ++v16;
            v2 = 0;
          }
          while ( v16 < *(_DWORD *)(a1 + 16) );
        }
        for ( i = 0; i < *(_DWORD *)(a1 + 36); ++i )
        {
          v26 = *(_QWORD *)(a1 + 408);
          if ( *(_BYTE *)(v26 + 24LL * i + 17) && *(_BYTE *)(v26 + 24LL * i + 16) )
            *(_BYTE *)(v26 + 24LL * i + 16) = 0;
        }
        LODWORD(v31) = 62;
        v32 = v13;
        v33 = a1;
        if ( qword_1C001B620 )
          v10 = qword_1C001B620(&v31);
        else
          v10 = -1073741822;
        if ( v10 >= 0 )
        {
          v9 = 0LL;
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x14u,
            (__int64)&WPP_aa6b72db0ffa30e8128541a88ae276d2_Traceguids,
            v10);
        }
      }
      else
      {
        v10 = -1073741670;
      }
LABEL_37:
      if ( v9 )
        ExFreePoolWithTag(v9, 0x72637250u);
      if ( v13 )
        ExFreePoolWithTag(v13, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
LABEL_41:
    LODWORD(v31) = 62;
    v32 = 0LL;
    v33 = a1;
    if ( qword_1C001B620 )
      v10 = qword_1C001B620(&v31);
    else
      v10 = -1073741822;
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x13u,
        (__int64)&WPP_aa6b72db0ffa30e8128541a88ae276d2_Traceguids,
        v10);
  }
  return (unsigned int)v10;
}
