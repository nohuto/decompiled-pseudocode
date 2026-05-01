/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x18000C004
 * Callers:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x18000B87C (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const unsigned __int16 *a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 i; // r14
  RTL_SRWLOCK *v6; // rdi
  void **v7; // rax
  void *v8; // rbp
  PVOID v9; // rax

  v4 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *, struct Microsoft::WRL::Details::ModuleBase *, const unsigned __int16 *))(*(_QWORD *)this + 32LL))(
         this,
         a2,
         a3)
     + 8;
  for ( i = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this); v4 < i; v4 += 8LL )
  {
    if ( *(_QWORD *)v4 )
    {
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this);
      if ( **(_QWORD **)(*(_QWORD *)v4 + 24LL) )
      {
        v6 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
        AcquireSRWLockExclusive(v6);
        v7 = *(void ***)(*(_QWORD *)v4 + 24LL);
        v8 = *v7;
        if ( *v7 )
        {
          *v7 = 0LL;
          if ( v6 )
            ReleaseSRWLockExclusive(v6);
          v9 = DecodePointer(v8);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
        }
        else if ( v6 )
        {
          ReleaseSRWLockExclusive(v6);
        }
      }
    }
  }
  return (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) == 0;
}
