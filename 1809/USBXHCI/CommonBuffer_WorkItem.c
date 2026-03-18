/*
 * XREFs of CommonBuffer_WorkItem @ 0x1C000ADF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C000AFAC (WPP_RECORDER_SF_qqd.c)
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C0042064 (XilCoreCommonBuffer_AcquireBuffers.c)
 *     XilCoreCommonBuffer_PreAllocateBuffers @ 0x1C0042818 (XilCoreCommonBuffer_PreAllocateBuffers.c)
 */

void __fastcall CommonBuffer_WorkItem(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  KIRQL v5; // r8
  __int64 ****v6; // rdx
  __int64 ***v7; // rcx
  __int64 **v8; // rax
  _QWORD *v9; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  char *v13; // rsi
  __int64 *v14; // rbx
  __int64 *v15; // rax
  unsigned int v16; // eax
  int v17; // [rsp+20h] [rbp-40h]
  __int64 *v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v19; // [rsp+48h] [rbp-18h]
  _QWORD v20[2]; // [rsp+50h] [rbp-10h] BYREF
  char v21; // [rsp+88h] [rbp+28h] BYREF

  v21 = 0;
  v19 = &v18;
  v18 = (__int64 *)&v18;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 6);
  v6 = (__int64 ****)(Context + 56);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (__int64 ***)v6 )
      break;
    if ( v7[1] != (__int64 **)v6
      || (v8 = *v7, (*v7)[1] != (__int64 *)v7)
      || (*v6 = (__int64 ***)v8, v8[1] = (__int64 *)v6, v9 = v19, *v19 != (__int64 *)&v18) )
    {
LABEL_14:
      __fastfail(3u);
    }
    v7[1] = v19;
    *v7 = &v18;
    *v9 = v7;
    v19 = (__int64 **)v7;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 6, v5);
  v13 = Context + 88;
  while ( 1 )
  {
    v14 = v18;
    if ( v18 == (__int64 *)&v18 )
      break;
    if ( (__int64 **)v18[1] != &v18 )
      goto LABEL_14;
    v15 = (__int64 *)*v18;
    if ( *(__int64 **)(*v18 + 8) != v18 )
      goto LABEL_14;
    v18 = (__int64 *)*v18;
    v15[1] = (__int64)&v18;
    v14[1] = (__int64)v14;
    *v14 = (__int64)v14;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqd(
        *(_QWORD *)(*(_QWORD *)Context + 72LL),
        v10,
        v11,
        v12,
        v17,
        (char)v14,
        v14[2],
        *((_DWORD *)v14 + 6));
    v20[1] = v20;
    v13 = Context + 88;
    v20[0] = v20;
    v16 = XilCoreCommonBuffer_AcquireBuffers(
            (int)Context + 88,
            *((_DWORD *)v14 + 6),
            *((_DWORD *)v14 + 7),
            (unsigned int)v20,
            v14[2],
            *((_DWORD *)v14 + 8),
            (__int64)&v21);
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD *))v14[5])(v14, v16, v20);
  }
  XilCoreCommonBuffer_PreAllocateBuffers(v13);
  IoFreeWorkItem(IoWorkItem);
  KeSetEvent((PRKEVENT)Context + 1, 0, 0);
}
