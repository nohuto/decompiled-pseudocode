/*
 * XREFs of ??$CreateRefCountedObj@UPER_APPLICATION_DATA@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@XZ @ 0x18000B654
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000B9C8 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CreateRefCountedObj<PER_APPLICATION_DATA,>(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx

  v2 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    v2[5] = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[4] = 0LL;
    *((_DWORD *)v2 + 10) = 0;
    *((_WORD *)v2 + 22) = 0;
    *v2 = &CRefCountedObject<PER_APPLICATION_DATA>::`vftable';
    *((_DWORD *)v2 + 12) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v3 + 8LL))(v3, 0LL);
  return a1;
}
