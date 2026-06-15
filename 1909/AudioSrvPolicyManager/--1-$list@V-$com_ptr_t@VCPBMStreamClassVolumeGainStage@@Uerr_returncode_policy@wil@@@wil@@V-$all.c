/*
 * XREFs of ??1?$list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180027EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>(
        _QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  volatile signed __int32 *v4; // rcx
  _QWORD *v5; // rsi

  v2 = *(_QWORD **)*a1;
  *(_QWORD *)*a1 = *a1;
  *(_QWORD *)(*a1 + 8LL) = *a1;
  a1[1] = 0LL;
  v3 = (_QWORD *)*a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (volatile signed __int32 *)v2[2];
      v5 = (_QWORD *)*v2;
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v4);
      operator delete(v2, (const struct std::nothrow_t *)0x18);
      v3 = (_QWORD *)*a1;
      v2 = v5;
    }
    while ( v5 != (_QWORD *)*a1 );
  }
  operator delete(v3, (const struct std::nothrow_t *)0x18);
}
