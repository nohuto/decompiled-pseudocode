/*
 * XREFs of CommonBuffer_AcquireBuffers @ 0x1C000A8DC
 * Callers:
 *     TR_EnsureSegments @ 0x1C0024620 (TR_EnsureSegments.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C00429E0 (XilCoreDeviceSlot_AllocateResources.c)
 * Callees:
 *     CommonBuffer_QueueWorkItem @ 0x1C000AB54 (CommonBuffer_QueueWorkItem.c)
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C0042064 (XilCoreCommonBuffer_AcquireBuffers.c)
 */

__int64 __fastcall CommonBuffer_AcquireBuffers(
        KSPIN_LOCK *Context,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  int v8; // eax
  unsigned int v9; // edi
  _QWORD *v10; // rbx
  KIRQL v11; // al
  PVOID *v12; // r8
  KSPIN_LOCK *v13; // r14
  char v14; // bp
  KIRQL v15; // al
  _QWORD **v16; // rsi
  KIRQL v17; // dl
  _QWORD *i; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  char v22; // [rsp+60h] [rbp+8h] BYREF

  v22 = 0;
  v8 = XilCoreCommonBuffer_AcquireBuffers((int)Context + 88, a2, a3, a4, a5, a6, (__int64)&v22);
  v9 = v8;
  if ( !v22 )
    return v9;
  v10 = a7;
  if ( v8 < 0 && a7 )
  {
    v9 = 259;
    v11 = KeAcquireSpinLockRaiseToDpc(Context + 6);
    v12 = (PVOID *)Context[8];
    if ( *v12 != Context + 7 )
      goto LABEL_18;
    *v10 = Context + 7;
    v10[1] = v12;
    *v12 = v10;
    Context[8] = (KSPIN_LOCK)v10;
    KeReleaseSpinLock(Context + 6, v11);
  }
  if ( (unsigned __int8)CommonBuffer_QueueWorkItem(Context) || !v10 )
    return v9;
  v13 = Context + 6;
  v14 = 0;
  v15 = KeAcquireSpinLockRaiseToDpc(Context + 6);
  v16 = (_QWORD **)(Context + 7);
  v17 = v15;
  for ( i = *v16; ; i = (_QWORD *)*i )
  {
    if ( v16 == i )
      goto LABEL_12;
    if ( i == v10 )
      break;
  }
  v20 = *v10;
  if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v21 = (_QWORD *)v10[1], (_QWORD *)*v21 != v10) )
LABEL_18:
    __fastfail(3u);
  *v21 = v20;
  v14 = 1;
  *(_QWORD *)(v20 + 8) = v21;
LABEL_12:
  KeReleaseSpinLock(v13, v17);
  if ( v14 )
    return (unsigned int)-1073741670;
  return v9;
}
