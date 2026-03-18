/*
 * XREFs of ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0014C04
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C0001E6C (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0029350 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     McTemplateK0pxqPR2XR2 @ 0x1C0031BF0 (McTemplateK0pxqPR2XR2.c)
 */

__int64 __fastcall VidSchiAddPendingCommandToSyncPointList(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  _QWORD *v6; // rdi
  POOL_TYPE v7; // r12d
  _QWORD *v9; // r13
  unsigned __int64 v10; // r14
  _QWORD *v11; // rbx
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r12
  char *v17; // rax
  char *v18; // rsi
  _QWORD *v19; // rdx
  unsigned int v20; // r15d
  _QWORD *i; // rcx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  _QWORD *v25; // rcx
  _BYTE *v26; // rcx
  _BYTE *v27; // r9
  __int64 v28; // r15
  size_t v29; // rsi
  __int64 v30; // r8
  _QWORD *v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rax
  _QWORD *v36; // rbx
  _QWORD *v37; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *j; // rdx
  _QWORD *v42; // r8
  __int64 *v43; // r9
  __int64 v44; // r15
  char *v45; // r10
  __int64 v46; // rax
  _QWORD *v47; // rax
  _BYTE *v48; // rax
  _BYTE *v49; // rax
  __int64 v50; // [rsp+40h] [rbp-59h]
  _BYTE *v51; // [rsp+50h] [rbp-49h]
  _BYTE v52[16]; // [rsp+58h] [rbp-41h] BYREF
  int v53; // [rsp+68h] [rbp-31h]
  __int64 v54; // [rsp+70h] [rbp-29h]
  _QWORD *v55; // [rsp+78h] [rbp-21h]
  _BYTE *v56; // [rsp+80h] [rbp-19h]
  _BYTE P[16]; // [rsp+88h] [rbp-11h] BYREF
  int v58; // [rsp+98h] [rbp-1h]

  v9 = a1;
  v10 = a4;
  v50 = a2;
  v55 = a1;
  if ( a4 || a5 )
  {
    v11 = (_QWORD *)a1[164];
    v6 = a1 + 163;
    if ( v11 != a1 + 163 && v11[2] == a3 )
      goto LABEL_55;
    v7 = 512;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xA8uLL, 0x66616956u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[3] = 0LL;
      *((_DWORD *)PoolWithTag + 16) = 0;
      PoolWithTag[9] = 0LL;
      *((_DWORD *)PoolWithTag + 32) = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v39[7] = a6;
    v39[3] = 281LL;
    v39[4] = 3328LL;
    v39[5] = v9;
    v39[6] = a3;
    WdLogEvent5_WdCriticalError(v39);
    __debugbreak();
  }
  v11 = 0LL;
LABEL_5:
  if ( !v11 )
    return 3221225495LL;
  v11[2] = a3;
  v11[18] = v11 + 17;
  v11[17] = v11 + 17;
  v11[20] = v11 + 19;
  v11[19] = v11 + 19;
  v14 = (_QWORD *)v6[1];
  if ( (_QWORD *)*v14 != v6 )
    goto LABEL_101;
  *v11 = v6;
  v11[1] = v14;
  *v14 = v11;
  v6[1] = v11;
  if ( (unsigned int)v10 > 2 )
  {
    v13 = 0xFFFFFFFFFFFFFFFFuLL % v10;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 0x10 )
    {
      v16 = 0LL;
      goto LABEL_12;
    }
    v15 = ExAllocatePoolWithTag(v7, 16 * v10, 0x35616956u);
  }
  else
  {
    v15 = v11 + 4;
  }
  v11[3] = v15;
  *((_DWORD *)v11 + 16) = v10;
  v16 = v15;
  if ( v15 && (_DWORD)v10 )
  {
    memset(v15, 0, 16 * v10);
    v16 = (_QWORD *)v11[3];
  }
LABEL_12:
  if ( a5 > 2 )
  {
    v13 = 0xFFFFFFFFFFFFFFFFuLL % a5;
    if ( 0xFFFFFFFFFFFFFFFFuLL / a5 < 0x18 )
    {
      v18 = 0LL;
      goto LABEL_17;
    }
    v17 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * a5, 0x35616956u);
  }
  else
  {
    v17 = (char *)(v11 + 10);
  }
  v11[9] = v17;
  *((_DWORD *)v11 + 32) = a5;
  v18 = v17;
  if ( v17 && a5 )
  {
    memset(v17, 0, 24LL * a5);
    v18 = (char *)v11[9];
  }
LABEL_17:
  if ( !v16 )
  {
LABEL_99:
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v11, v13);
    return 3221225495LL;
  }
  if ( !v18 )
  {
    ExFreePoolWithTag(v16, 0);
    goto LABEL_99;
  }
  v19 = v9 + 9;
  v20 = 0;
  for ( i = (_QWORD *)v9[9]; i != v19; i = (_QWORD *)*i )
  {
    v22 = (unsigned __int64)(i - 3);
    v23 = i[19];
    if ( v23 > i[17] )
    {
      if ( v20 > (int)v10 - 1 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(i, v19);
        v40[3] = 281LL;
        v40[4] = 3328LL;
        v40[5] = *(_QWORD *)(v22 + 176);
        v40[6] = *(_QWORD *)(v22 + 160);
        v40[7] = v20;
        WdLogEvent5_WdCriticalError(v40);
        __debugbreak();
        goto LABEL_76;
      }
      v24 = 2LL * v20++;
      v16[v24 + 1] = v23;
      v16[v24] = v22;
    }
  }
  v22 = 0LL;
  v9 += 11;
  v25 = (_QWORD *)*v9;
LABEL_26:
  if ( v25 == v9 )
  {
    if ( bTracingEnabled )
    {
      v26 = 0LL;
      v27 = 0LL;
      v53 = 0;
      v22 = v10;
      v58 = 0;
      v51 = 0LL;
      v56 = 0LL;
      if ( (unsigned int)v10 > 2 )
        goto LABEL_87;
      v26 = v52;
      v51 = v52;
      goto LABEL_30;
    }
    goto LABEL_54;
  }
LABEL_76:
  for ( j = (_QWORD *)v25[4]; ; j = (_QWORD *)*j )
  {
    if ( j == v25 + 4 )
    {
      v25 = (_QWORD *)*v25;
      goto LABEL_26;
    }
    v42 = j - 1;
    v43 = j + 8;
    if ( (unsigned __int64)*v43 > j[7] || v42[12] > v42[11] )
      break;
LABEL_83:
    ;
  }
  if ( (unsigned int)v22 <= a5 - 1 )
  {
    v44 = 2LL;
    v54 = 3 * v22;
    v45 = &v18[24 * v22 + 8];
    do
    {
      v46 = *v43;
      v43 += 3;
      *(_QWORD *)v45 = v46;
      v45 += 8;
      --v44;
    }
    while ( v44 );
    v22 = (unsigned int)(v22 + 1);
    *(_QWORD *)&v18[8 * v54] = v42;
    goto LABEL_83;
  }
  v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, j);
  v47[3] = 281LL;
  v47[4] = 3328LL;
  v47[5] = 0LL;
  v47[6] = 0LL;
  v47[7] = (unsigned int)v22;
  WdLogEvent5_WdCriticalError(v47);
  __debugbreak();
LABEL_87:
  if ( 0xFFFFFFFFFFFFFFFFuLL / v22 < 8 )
  {
    v28 = 0LL;
    goto LABEL_34;
  }
  v48 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v22, 0x66616956u);
  v27 = v56;
  v26 = v48;
  v51 = v48;
LABEL_30:
  v53 = v10;
  if ( v26 && (_DWORD)v10 )
  {
    memset(v26, 0, 8 * v22);
    v26 = v51;
    v27 = v56;
  }
  v28 = (__int64)v26;
LABEL_34:
  if ( (unsigned int)v10 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v22 >= 8 )
    {
      v29 = 8 * v22;
      v49 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v22, 0x66616956u);
      v26 = v51;
      v27 = v49;
      v56 = v49;
      goto LABEL_36;
    }
    v30 = 0LL;
  }
  else
  {
    v27 = P;
    v56 = P;
    v29 = 8 * v22;
LABEL_36:
    v58 = v10;
    if ( v27 && (_DWORD)v10 )
    {
      memset(v27, 0, v29);
      v26 = v51;
      v27 = v56;
    }
    v30 = (__int64)v27;
  }
  if ( v28 && v30 )
  {
    if ( (_DWORD)v10 )
    {
      v31 = (_QWORD *)v30;
      do
      {
        v32 = *(_QWORD *)(*v16 + 56LL);
        if ( !v32 || (*(_DWORD *)(*v16 + 112LL) & 0x40) != 0 )
          v32 = *v16;
        *(_QWORD *)((char *)v31 + v28 - v30) = v32;
        v33 = v16[1];
        v16 += 2;
        *v31++ = v33;
        --v22;
      }
      while ( v22 );
      v26 = v51;
      v27 = v56;
    }
    v34 = v55[1];
    if ( !v34 )
      LODWORD(v34) = (_DWORD)v55;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pxqPR2XR2((_DWORD)v26, v34, v30, v34, v11[2], v10, v28, v30);
      v26 = v51;
      v27 = v56;
    }
  }
  if ( v27 != P && v27 )
  {
    ExFreePoolWithTag(v27, 0);
    v26 = v51;
  }
  v56 = 0LL;
  v58 = 0;
  if ( v26 != v52 )
  {
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
  }
LABEL_54:
  a2 = v50;
LABEL_55:
  if ( !a6 )
  {
    v35 = (_QWORD *)(a2 + 200);
    v36 = v11 + 17;
LABEL_58:
    v37 = (_QWORD *)v36[1];
    if ( (_QWORD *)*v37 == v36 )
    {
      *v35 = v36;
      v35[1] = v37;
      *v37 = v35;
      v36[1] = v35;
      return 0LL;
    }
LABEL_101:
    __fastfail(3u);
  }
  if ( a6 == 3 )
  {
    v35 = (_QWORD *)(a2 + 216);
    v36 = v11 + 19;
    goto LABEL_58;
  }
  return 0LL;
}
