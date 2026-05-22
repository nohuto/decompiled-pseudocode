/*
 * XREFs of ?Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800EE920
 * Callers:
 *     <none>
 * Callees:
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800EE828 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??0MPCSixDofProcessor@@QEAA@XZ @ 0x1800F442C (--0MPCSixDofProcessor@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F5000 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800F5000.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800F5080 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPC_ea_1800F5080.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCSixDofProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  __int64 v4; // rax
  MPCSixDofProcessor *v5; // rax
  int Interface; // edi
  LARGE_INTEGER *v7; // rbx

  v4 = 2LL;
  do
  {
    *a2 = 0LL;
    --v4;
  }
  while ( v4 );
  v5 = (MPCSixDofProcessor *)operator new(0x1288uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = (LARGE_INTEGER *)MPCSixDofProcessor::MPCSixDofProcessor(v5);
    Interface = MPCSixDofProcessor::RuntimeClassInitialize(v7, a1);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::QueryInterface(
                    v7,
                    &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
                    a2);
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}
