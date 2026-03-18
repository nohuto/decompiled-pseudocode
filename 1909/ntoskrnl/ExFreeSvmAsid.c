/*
 * XREFs of ExFreeSvmAsid @ 0x140134AFC
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExpFreeAsid @ 0x14033D6D8 (ExpFreeAsid.c)
 *     ExpSvmDereferenceDevice @ 0x14033DAD0 (ExpSvmDereferenceDevice.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
  v2 = Process[2].ActiveProcessors.Bitmap[5];
  if ( v2 )
  {
    v3 = Process[2].ActiveProcessors.Bitmap[6];
    v4 = &Process[2].ActiveProcessors.Bitmap[9];
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
    Process[2].ActiveProcessors.Bitmap[6] = 0LL;
    return (struct _KTHREAD *)ExpFreeAsid((unsigned int)(v2 - 1));
  }
  return result;
}
