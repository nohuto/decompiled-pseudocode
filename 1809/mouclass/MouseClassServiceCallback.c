/*
 * XREFs of MouseClassServiceCallback @ 0x1C0003AA0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0001780 (memmove.c)
 *     MouseClassDequeueRead @ 0x1C000286C (MouseClassDequeueRead.c)
 *     MouseClassReadCopyData @ 0x1C00036D8 (MouseClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004924 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0004E40 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0004F14 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C000500C (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C00051F8 (WPP_RECORDER_SF_qlqqd.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C00056D0 (WPP_RECORDER_SF_qqLLqq.c)
 *     WPP_RECORDER_SF_qqiL @ 0x1C0005CA8 (WPP_RECORDER_SF_qqiL.c)
 */

__int64 **__fastcall MouseClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
{
  char *v6; // rsi
  __int64 v8; // rdi
  unsigned int v9; // ebx
  size_t v10; // r12
  _QWORD *v11; // rax
  int v12; // r8d
  int v13; // r9d
  _QWORD *v14; // r15
  int v15; // edx
  unsigned int v16; // r8d
  unsigned __int64 v17; // rdx
  __int64 ***v18; // r15
  _QWORD *v19; // rax
  char *v20; // rsi
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned int v23; // r12d
  unsigned int v24; // ebx
  unsigned int v25; // r15d
  int v26; // r8d
  int v27; // r9d
  char *v28; // rsi
  char *v29; // rdx
  char *v30; // rcx
  size_t v31; // rbx
  _QWORD *v32; // rax
  int v33; // r8d
  int v34; // r9d
  _QWORD *v35; // rbx
  _QWORD *v36; // rdx
  __int64 ***v37; // rax
  __int64 v38; // rdx
  __int64 *v39; // rbx
  __int64 **result; // rax
  __int64 *v41; // rax
  __int64 *v42; // [rsp+60h] [rbp-10h] BYREF
  __int64 **v43; // [rsp+68h] [rbp-8h]
  __int64 v44; // [rsp+A0h] [rbp+30h]

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = a3 - (_DWORD)v6;
  LODWORD(v10) = 0;
  *a4 = 0;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 144));
  v43 = &v42;
  v42 = (__int64 *)&v42;
  v11 = MouseClassDequeueRead(v8);
  v13 = 0;
  v14 = v11;
  v15 = -1431655765;
  if ( v11 )
  {
    v10 = v9;
    v44 = v11[23];
    v16 = *(_DWORD *)(v44 + 8);
    if ( v9 >= v16 )
      v10 = v16;
    v17 = v10 / 0x18;
    *a4 += v10 / 0x18;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLLqq(WPP_GLOBAL_Control->DeviceExtension, v17, v16, 0);
    WPP_RECORDER_SF_qqiL(WPP_GLOBAL_Control->DeviceExtension, v17, v16, v13);
    memmove((void *)v14[3], v6, v10);
    v14[7] = v10;
    *((_DWORD *)v14 + 12) = 0;
    v18 = (__int64 ***)(v14 + 21);
    *(_DWORD *)(v44 + 8) = v10;
    v19 = v43;
    if ( *v43 != (__int64 *)&v42 )
LABEL_40:
      __fastfail(3u);
    v18[1] = v43;
    *v18 = &v42;
    *v19 = v18;
    v43 = (__int64 **)v18;
  }
  v20 = &v6[(unsigned int)v10];
  v21 = v9 - v10;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, v15, v12, v13);
  if ( v21 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, 24 * *(_DWORD *)(v8 + 84), v12, 52);
    v22 = *(_DWORD *)(v8 + 136);
    v23 = v22;
    if ( v22 >= v21 )
      v23 = v21;
    v24 = v22 - *(_DWORD *)(v8 + 112) + *(_DWORD *)(v8 + 104);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, v15, v12, 54);
    v25 = v23;
    if ( v23 >= v24 )
      v25 = v24;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v15, v12, 55);
    memmove(*(void **)(v8 + 112), v20, v25);
    *(_QWORD *)(v8 + 112) += v25;
    v28 = &v20[v25];
    v29 = *(char **)(v8 + 104);
    v30 = *(char **)(v8 + 112);
    if ( v30 >= &v29[*(unsigned int *)(v8 + 136)] )
    {
      *(_QWORD *)(v8 + 112) = v29;
      v30 = v29;
    }
    v31 = v23 - v25;
    if ( v23 != v25 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v29, v26, 56);
        v30 = *(char **)(v8 + 112);
      }
      memmove(v30, v28, v31);
      *(_QWORD *)(v8 + 112) += v31;
    }
    *(_DWORD *)(v8 + 84) += v23 / 0x18;
    *a4 += v23 / 0x18;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(WPP_GLOBAL_Control->DeviceExtension, v23 / 0x18, v26, v27);
  }
  while ( *(_DWORD *)(v8 + 84) )
  {
    v32 = MouseClassDequeueRead(v8);
    v35 = v32;
    if ( !v32 )
      break;
    *((_DWORD *)v32 + 12) = MouseClassReadCopyData(v8, v32, v33, v34);
    v36 = v43;
    v37 = (__int64 ***)(v35 + 21);
    if ( *v43 != (__int64 *)&v42 )
      goto LABEL_40;
    v35[22] = v43;
    *v37 = &v42;
    *v36 = v37;
    v43 = (__int64 **)(v35 + 21);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 144));
  while ( 1 )
  {
    v39 = v42;
    result = &v42;
    if ( v42 == (__int64 *)&v42 )
      break;
    if ( (__int64 **)v42[1] != &v42 )
      goto LABEL_40;
    v41 = (__int64 *)*v42;
    if ( *(__int64 **)(*v42 + 8) != v42 )
      goto LABEL_40;
    v42 = (__int64 *)*v42;
    v41[1] = (__int64)&v42;
    IofCompleteRequest((PIRP)(v39 - 21), 6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v39 - 21, 0x20u);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v38) = 5;
    return (__int64 **)WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v38, 3LL);
  }
  return result;
}
