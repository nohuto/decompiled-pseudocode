/*
 * XREFs of ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C000304C
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C0002CE0 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_CONTEXT_ID_PAIR@@$01$0DFGBGJFG@@@QEAAPEAU_VIDSCH_CONTEXT_ID_PAIR@@I@Z @ 0x1C0014054 (-AllocateElements@-$NonPagedPoolZeroedArray@U_VIDSCH_CONTEXT_ID_PAIR@@$01$0DFGBGJFG@@@QEAAPEAU_V.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEBX$01$0GGGBGJFG@@@QEAAPEAPEBXI@Z @ 0x1C00140E0 (-AllocateElements@-$NonPagedPoolZeroedArray@PEBX$01$0GGGBGJFG@@@QEAAPEAPEBXI@Z.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0029E90 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     McTemplateK0pxqPR2XR2 @ 0x1C0032440 (McTemplateK0pxqPR2XR2.c)
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
  __int64 v7; // r12
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rax
  unsigned __int64 v17; // rdx
  _QWORD *Elements; // r15
  char *v19; // rax
  char *v20; // rdi
  unsigned __int64 v21; // r8
  _QWORD *i; // rcx
  __int64 v23; // r14
  __int64 v24; // r14
  _QWORD *v25; // rsi
  unsigned __int64 v26; // r9
  _QWORD *v27; // r11
  _QWORD *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  char *v34; // r10
  __int64 v35; // r11
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // r9
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *j; // rdx
  __int64 *v42; // r10
  __int64 v43; // r11
  char *v44; // rsi
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // [rsp+40h] [rbp-49h]
  __int64 v48; // [rsp+50h] [rbp-39h]
  PVOID v49; // [rsp+58h] [rbp-31h] BYREF
  char v50; // [rsp+60h] [rbp-29h] BYREF
  int v51; // [rsp+70h] [rbp-19h]
  PVOID P; // [rsp+78h] [rbp-11h] BYREF
  char v53; // [rsp+80h] [rbp-9h] BYREF
  int v54; // [rsp+90h] [rbp+7h]

  v7 = a4;
  v47 = a2;
  if ( a4 || a5 )
  {
    v10 = (_QWORD *)a1[165];
    v6 = a1 + 164;
    if ( v10 != a1 + 164 && v10[2] == a3 )
      goto LABEL_4;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xA8uLL, 0x66616956u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[3] = 0LL;
      *((_DWORD *)PoolWithTag + 16) = 0;
      PoolWithTag[9] = 0LL;
      *((_DWORD *)PoolWithTag + 32) = 0;
      goto LABEL_12;
    }
  }
  else
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v39[7] = a6;
    v39[3] = 281LL;
    v39[4] = 3328LL;
    v39[5] = a1;
    v39[6] = a3;
    WdLogEvent5_WdCriticalError(v39);
    __debugbreak();
  }
  v10 = 0LL;
LABEL_12:
  if ( !v10 )
    return 3221225495LL;
  v10[2] = a3;
  v10[18] = v10 + 17;
  v10[17] = v10 + 17;
  v10[20] = v10 + 19;
  v10[19] = v10 + 19;
  v16 = (_QWORD *)v6[1];
  if ( (_QWORD *)*v16 != v6 )
    goto LABEL_74;
  *v10 = v6;
  v10[1] = v16;
  *v16 = v10;
  v6[1] = v10;
  Elements = (_QWORD *)NonPagedPoolZeroedArray<_VIDSCH_CONTEXT_ID_PAIR,2,895576406>::AllocateElements(
                         v10 + 3,
                         (unsigned int)v7);
  if ( a5 > 2 )
  {
    v17 = 0xFFFFFFFFFFFFFFFFuLL % a5;
    if ( 0xFFFFFFFFFFFFFFFFuLL / a5 < 0x18 )
    {
      v20 = 0LL;
      goto LABEL_19;
    }
    v19 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * a5, 0x35616956u);
  }
  else
  {
    v19 = (char *)(v10 + 10);
  }
  v10[9] = v19;
  *((_DWORD *)v10 + 32) = a5;
  v20 = v19;
  if ( v19 && a5 )
  {
    memset(v19, 0, 24LL * a5);
    v20 = (char *)v10[9];
  }
LABEL_19:
  if ( !Elements )
  {
LABEL_72:
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v10, v17);
    return 3221225495LL;
  }
  if ( !v20 )
  {
    ExFreePoolWithTag(Elements, 0);
    goto LABEL_72;
  }
  v21 = 0LL;
  for ( i = (_QWORD *)a1[9]; ; i = (_QWORD *)*i )
  {
    if ( i == a1 + 9 )
    {
      v27 = a1 + 11;
      v23 = 0LL;
      v28 = (_QWORD *)a1[11];
      goto LABEL_29;
    }
    v25 = i - 3;
    v26 = i[19];
    if ( v26 > i[17] )
      break;
LABEL_24:
    ;
  }
  v23 = (unsigned int)v21;
  if ( (unsigned int)v21 <= (int)v7 - 1 )
  {
    v24 = 2LL * (unsigned int)v21;
    v21 = (unsigned int)(v21 + 1);
    Elements[v24 + 1] = v26;
    Elements[v24] = v25;
    goto LABEL_24;
  }
  v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
  v40[3] = 281LL;
  v40[4] = 3328LL;
  v40[5] = v25[22];
  v40[6] = v25[20];
  v40[7] = v23;
  WdLogEvent5_WdCriticalError(v40);
  __debugbreak();
  do
  {
    for ( j = (_QWORD *)v28[4]; j != v28 + 4; j = (_QWORD *)*j )
    {
      v21 = (unsigned __int64)(j - 1);
      v42 = j + 8;
      if ( (unsigned __int64)*v42 > j[7] || *(_QWORD *)(v21 + 96) > *(_QWORD *)(v21 + 88) )
      {
        if ( (unsigned int)v23 > a5 - 1 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v46[3] = 281LL;
          v46[4] = 3328LL;
          v46[5] = 0LL;
          v46[6] = 0LL;
          v46[7] = (unsigned int)v23;
          WdLogEvent5_WdCriticalError(v46);
          __debugbreak();
          goto LABEL_70;
        }
        v43 = 2LL;
        v48 = 3 * v23;
        v44 = &v20[24 * v23 + 8];
        do
        {
          v45 = *v42;
          v42 += 3;
          *(_QWORD *)v44 = v45;
          v44 += 8;
          --v43;
        }
        while ( v43 );
        v27 = a1 + 11;
        v23 = (unsigned int)(v23 + 1);
        *(_QWORD *)&v20[8 * v48] = v21;
      }
    }
    v28 = (_QWORD *)*v28;
LABEL_29:
    ;
  }
  while ( v28 != v27 );
  if ( bTracingEnabled )
  {
    v49 = 0LL;
    v51 = 0;
    P = 0LL;
    v54 = 0;
    v20 = (char *)NonPagedPoolZeroedArray<void const *,2,1717659990>::AllocateElements(&v49, (unsigned int)v7, v21);
    v30 = NonPagedPoolZeroedArray<void const *,2,1717659990>::AllocateElements(&P, (unsigned int)v7, v29);
    v33 = v30;
    if ( v20 && v30 )
    {
      if ( (_DWORD)v7 )
      {
        v31 = (_QWORD *)v30;
        v34 = &v20[-v30];
        v35 = v7;
        do
        {
          v32 = *Elements;
          v36 = *(_QWORD *)(*Elements + 56LL);
          if ( !v36 || (*(_DWORD *)(v32 + 112) & 0x40) != 0 )
LABEL_70:
            v36 = v32;
          *(_QWORD *)((char *)v31 + (_QWORD)v34) = v36;
          v37 = Elements[1];
          Elements += 2;
          *v31++ = v37;
          --v35;
        }
        while ( v35 );
      }
      v38 = a1[1];
      if ( !v38 )
        LODWORD(v38) = (_DWORD)a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pxqPR2XR2(v33, (_DWORD)v31, v32, v38, v10[2], v7, (__int64)v20, v33);
    }
    if ( P != &v53 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v54 = 0;
    if ( v49 != &v50 )
    {
      if ( v49 )
        ExFreePoolWithTag(v49, 0);
    }
  }
  a2 = v47;
LABEL_4:
  if ( !a6 )
  {
    v11 = (_QWORD *)(a2 + 200);
    v12 = v10 + 17;
LABEL_7:
    v13 = (_QWORD *)v12[1];
    if ( (_QWORD *)*v13 == v12 )
    {
      *v11 = v12;
      v11[1] = v13;
      *v13 = v11;
      v12[1] = v11;
      return 0LL;
    }
LABEL_74:
    __fastfail(3u);
  }
  if ( a6 == 3 )
  {
    v11 = (_QWORD *)(a2 + 216);
    v12 = v10 + 19;
    goto LABEL_7;
  }
  return 0LL;
}
