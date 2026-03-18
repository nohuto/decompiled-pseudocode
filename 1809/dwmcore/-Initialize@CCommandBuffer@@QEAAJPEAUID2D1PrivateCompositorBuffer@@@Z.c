/*
 * XREFs of ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800C2970
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x1800C2744 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE_ARRAY@UD2D1_COMPOSITOR_DRAWING_STATE@@@@YAXAEAPEAUD2D1_COMPOSITOR_DRAWING_STATE@@@Z @ 0x1800EFC88 (--$SAFE_DELETE_ARRAY@UD2D1_COMPOSITOR_DRAWING_STATE@@@@YAXAEAPEAUD2D1_COMPOSITOR_DRAWING_STATE@@.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommandBuffer::Initialize(CCommandBuffer *this, struct ID2D1PrivateCompositorBuffer *a2)
{
  unsigned int v3; // edi
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // esi
  unsigned int v8; // ecx
  void *v9; // rbp
  unsigned int v10; // ebx
  const void *v11; // rax
  _DWORD *v12; // rax
  unsigned int v14; // [rsp+20h] [rbp-28h]
  LPVOID v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v15 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( v5 == 144 * (v5 / 0x90uLL) )
  {
    v7 = (*(unsigned int (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2) / 0x90;
    v15 = operator new(saturated_mul(v7, 0x90uLL));
    v9 = v15;
    if ( !v15 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x27u);
      goto LABEL_12;
    }
    v10 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
    v11 = (const void *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 24LL))(a2);
    memcpy_0(v9, v11, v10);
    v6 = 0;
    if ( !v7 )
    {
LABEL_11:
      *((_DWORD *)this + 2) = v7;
      *(_QWORD *)this = v9;
      v15 = 0LL;
      goto LABEL_12;
    }
    v12 = v9;
    while ( *v12 <= 3u && v12[3] <= 7u )
    {
      ++v6;
      v12 += 36;
      if ( v6 >= v7 )
        goto LABEL_11;
    }
    v14 = 52;
  }
  else
  {
    v14 = 34;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, v14);
LABEL_12:
  SAFE_DELETE_ARRAY<D2D1_COMPOSITOR_DRAWING_STATE>(&v15);
  return v3;
}
