/*
 * XREFs of KeyboardClassServiceCallback @ 0x1C00055A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0002EC0 (memmove.c)
 *     KeyboardClassDequeueRead @ 0x1C0004E7C (KeyboardClassDequeueRead.c)
 *     KeyboardClassReadCopyData @ 0x1C0005198 (KeyboardClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C00060F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000627C (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0006350 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C0006448 (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C0006634 (WPP_RECORDER_SF_qlqqd.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C00069CC (WPP_RECORDER_SF_qqLLqq.c)
 *     WPP_RECORDER_SF_qqiL @ 0x1C0006FE4 (WPP_RECORDER_SF_qqiL.c)
 */

__int64 **__fastcall KeyboardClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // r13
  char *v6; // r14
  __int64 v8; // rdi
  unsigned int v9; // ebx
  size_t v10; // r12
  int v11; // edx
  _QWORD *v12; // rsi
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r13
  unsigned int v16; // r8d
  __int64 ***v17; // rsi
  __int64 **v18; // rax
  char *v19; // r14
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  unsigned int v22; // r12d
  unsigned int v23; // ebx
  unsigned int v24; // esi
  int v25; // r8d
  int v26; // r9d
  char *v27; // r14
  char *v28; // rdx
  char *v29; // rcx
  char *v30; // rax
  _QWORD *v31; // rax
  int v32; // r8d
  int v33; // r9d
  _QWORD *v34; // rbx
  _QWORD *v35; // rdx
  __int64 ***v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rbx
  __int64 **result; // rax
  __int64 *v40; // rax
  __int64 *v41; // [rsp+60h] [rbp-10h] BYREF
  __int64 **v42; // [rsp+68h] [rbp-8h]

  v4 = a4;
  v41 = 0LL;
  v42 = 0LL;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = a3 - (_DWORD)v6;
  LODWORD(v10) = 0;
  *v4 = 0;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 160));
  v42 = &v41;
  v41 = (__int64 *)&v41;
  v12 = KeyboardClassDequeueRead(v8);
  v14 = 0;
  if ( v12 )
  {
    v15 = v12[23];
    v10 = v9;
    v16 = *(_DWORD *)(v15 + 8);
    if ( v9 >= v16 )
      v10 = v16;
    *a4 += v10 / 0xC;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLLqq(WPP_GLOBAL_Control->DeviceExtension, v10 / 0xC, v16, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqiL(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)&WPP_RECORDER_INITIALIZED, v16, v14);
    memmove((void *)v12[3], v6, v10);
    v12[7] = v10;
    v13 = 0;
    *((_DWORD *)v12 + 12) = 0;
    v17 = (__int64 ***)(v12 + 21);
    *(_DWORD *)(v15 + 8) = v10;
    v18 = v42;
    if ( *v42 != (__int64 *)&v41 )
LABEL_50:
      __fastfail(3u);
    v4 = a4;
    *v17 = &v41;
    v17[1] = v18;
    *v18 = (__int64 *)v17;
    v42 = (__int64 **)v17;
  }
  v19 = &v6[(unsigned int)v10];
  v20 = v9 - v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, v11, v13, v14);
  if ( v20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, 12 * *(_DWORD *)(v8 + 84), v13, 54);
    v21 = *(_DWORD *)(v8 + 140);
    v22 = v21;
    if ( v21 >= v20 )
      v22 = v20;
    v23 = v21 - *(_DWORD *)(v8 + 112) + *(_DWORD *)(v8 + 104);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, v11, v13, 56);
    v24 = v22;
    if ( v22 >= v23 )
      v24 = v23;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v11, v13, 57);
    memmove(*(void **)(v8 + 112), v19, v24);
    *(_QWORD *)(v8 + 112) += v24;
    v27 = &v19[v24];
    v28 = *(char **)(v8 + 104);
    v29 = *(char **)(v8 + 112);
    if ( v29 >= &v28[*(unsigned int *)(v8 + 140)] )
    {
      *(_QWORD *)(v8 + 112) = v28;
      v29 = v28;
    }
    if ( v22 != v24 )
    {
      v30 = v29;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)WPP_GLOBAL_Control, 0, 58);
        v30 = *(char **)(v8 + 112);
      }
      memmove(v30, v27, v22 - v24);
      *(_QWORD *)(v8 + 112) += v22 - v24;
    }
    *(_DWORD *)(v8 + 84) += v22 / 0xC;
    *v4 += v22 / 0xC;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(WPP_GLOBAL_Control->DeviceExtension, v22 / 0xC, v25, v26);
  }
  while ( *(_DWORD *)(v8 + 84) )
  {
    v31 = KeyboardClassDequeueRead(v8);
    v34 = v31;
    if ( !v31 )
      break;
    *((_DWORD *)v31 + 12) = KeyboardClassReadCopyData(v8, v31, v32, v33);
    v35 = v42;
    v36 = (__int64 ***)(v34 + 21);
    if ( *v42 != (__int64 *)&v41 )
      goto LABEL_50;
    v34[22] = v42;
    *v36 = &v41;
    *v35 = v36;
    v42 = (__int64 **)(v34 + 21);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 160));
  while ( 1 )
  {
    v38 = v41;
    result = &v41;
    if ( v41 == (__int64 *)&v41 )
      break;
    if ( (__int64 **)v41[1] != &v41 )
      goto LABEL_50;
    v40 = (__int64 *)*v41;
    if ( *(__int64 **)(*v41 + 8) != v41 )
      goto LABEL_50;
    v41 = (__int64 *)*v41;
    v40[1] = (__int64)&v41;
    IofCompleteRequest((PIRP)(v38 - 21), 6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v38 - 21, 0x20u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v37) = 5;
    return (__int64 **)WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v37, 3LL);
  }
  return result;
}
