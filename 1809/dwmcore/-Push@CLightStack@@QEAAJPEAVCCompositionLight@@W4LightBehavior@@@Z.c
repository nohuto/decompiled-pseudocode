/*
 * XREFs of ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x180014824
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003C7C0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::Push(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned int v5; // r8d
  int v6; // ebx
  int v8; // eax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(unsigned int *)(a1 + 24);
  DWORD2(v9) = a3;
  *(_QWORD *)&v9 = a2;
  v5 = v3 + 1;
  v6 = (int)v3 + 1 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( (int)v3 + 1 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 16LL, 1LL, &v9);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)a1 + 16 * v3) = v9;
    *(_DWORD *)(a1 + 24) = v5;
  }
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v6, 0x20u);
  else
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return (unsigned int)v6;
}
