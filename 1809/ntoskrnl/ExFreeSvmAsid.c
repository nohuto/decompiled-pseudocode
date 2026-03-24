/*
 * XREFs of ExFreeSvmAsid @ 0x140132BA8
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     ExpFreeAsid @ 0x14031DE18 (ExpFreeAsid.c)
 *     ExpSvmDereferenceDevice @ 0x14031E1F0 (ExpSvmDereferenceDevice.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *ExFreeSvmAsid()
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rbp
  int v2; // r14d
  unsigned __int64 v3; // r15
  unsigned __int64 *v4; // rdi
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // rax
  _QWORD *v7; // rbx

  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  v2 = Process[2].ActiveProcessors.Bitmap[1];
  if ( v2 )
  {
    v3 = Process[2].ActiveProcessors.Bitmap[2];
    v4 = &Process[2].ActiveProcessors.Bitmap[5];
    while ( 1 )
    {
      v5 = (unsigned __int64 *)*v4;
      if ( *(unsigned __int64 **)(*v4 + 8) != v4 || (v6 = *v5, *(unsigned __int64 **)(*v5 + 8) != v5) )
        __fastfail(3u);
      *v4 = v6;
      *(_QWORD *)(v6 + 8) = v4;
      if ( v5 == v4 )
        break;
      v7 = (_QWORD *)v5[2];
      ((void (__fastcall *)(unsigned __int64, _QWORD))HalIommuDispatch[6])(v3, v7[14]);
      ExpSvmDereferenceDevice(v7);
      ExFreePoolWithTag(v5, 0);
    }
    ((void (__fastcall *)(unsigned __int64))HalIommuDispatch[8])(v3);
    Process[2].ActiveProcessors.Bitmap[2] = 0LL;
    return (struct _KTHREAD *)ExpFreeAsid((unsigned int)(v2 - 1));
  }
  return result;
}
