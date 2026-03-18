/*
 * XREFs of ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0017D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C005A914 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 */

void __fastcall CCompositionToken::Discard(CCompositionToken *this)
{
  char *v2; // rcx
  unsigned int v3; // edi
  char *v4; // rax
  __int64 v5; // rsi
  void (__fastcall ***v6)(_QWORD); // rdx

  if ( *((int *)this + 6) < 3 )
    CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
  v2 = (char *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = 0;
    if ( *((_DWORD *)this + 18) )
    {
      do
      {
        v4 = v2;
        v5 = 32LL * v3;
        v6 = *(void (__fastcall ****)(_QWORD))&v2[v5 + 24];
        if ( v6 )
        {
          (**v6)(*(_QWORD *)&v2[v5 + 24]);
          v2 = (char *)*((_QWORD *)this + 8);
          v4 = v2;
        }
        if ( *(_QWORD *)&v4[v5 + 8] )
        {
          ObfDereferenceObject(*(PVOID *)&v4[v5 + 8]);
          v2 = (char *)*((_QWORD *)this + 8);
          v4 = v2;
        }
        ++v3;
      }
      while ( v3 < *((_DWORD *)this + 18) );
      v2 = v4;
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 6) = 6;
}
