/*
 * XREFs of ?OldDefragment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C071C
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00AAE6C (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 */

void __fastcall VIDMM_SEGMENT::OldDefragment(VIDMM_SEGMENT *this, __int64 a2, const GUID *a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  int v7; // [rsp+20h] [rbp-28h]

  v3 = (_QWORD *)((char *)this + 176);
  while ( 1 )
  {
    v4 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v5 = v4 - 48;
    LOBYTE(a3) = 1;
    LOBYTE(v7) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD *, const GUID *, _QWORD, int, _QWORD))(*(_QWORD *)*(v4 - 31) + 48LL))(
      *(v4 - 31),
      v4 - 48,
      a3,
      0LL,
      v7,
      0LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0p(v6, &EventEvictAllocation, a3, v5);
    }
  }
}
