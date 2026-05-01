/*
 * XREFs of ?GetPresentedWindow@CFrameApplicationPresentation@@UEBA?AV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@XZ @ 0x180065980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CFrameApplicationPresentation::GetPresentedWindow(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx

  if ( !*(_DWORD *)(a1 + 224)
    && *(_BYTE *)(a1 + 544)
    && *(_QWORD *)(a1 + 80)
    && *(_QWORD *)(a1 + 88)
    && *(_BYTE *)(a1 + 96) )
  {
    v4 = *(__int64 **)(a1 + 104);
    v5 = *v4;
    *a2 = *v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
