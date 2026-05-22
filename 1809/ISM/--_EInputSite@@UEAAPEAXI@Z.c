/*
 * XREFs of ??_EInputSite@@UEAAPEAXI@Z @ 0x1800210F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA@XZ @ 0x1800214F0 (--1-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@InputSit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

InputSite *__fastcall InputSite::`vector deleting destructor'(InputSite *this, char a2)
{
  __int64 v4; // rdi
  InputSite **v5; // r8
  InputSite **i; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &InputSite::`vftable';
  v4 = *((_QWORD *)this + 52);
  v5 = *(InputSite ***)(v4 + 64);
  for ( i = *(InputSite ***)(v4 + 56); i != v5 && *i != this; ++i )
    ;
  memmove_0(i, i + 1, (char *)v5 - (char *)(i + 1));
  *(_QWORD *)(v4 + 64) -= 8LL;
  v7 = *((_QWORD *)this + 52);
  if ( v7 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  std::vector<InputSite::AttachedInputObjectEntry>::~vector<InputSite::AttachedInputObjectEntry>((char *)this + 392);
  if ( *((_BYTE *)this + 384) )
  {
    v8 = *((_QWORD *)this + 4);
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v8);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1A8);
  return this;
}
