/*
 * XREFs of ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1801C4CBC
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18007AC8C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18007A5F0 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGeneratorForHeatMap(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct ID2D1PrivateCompositorBuffer *v3; // rdx
  struct ID2D1PrivateCompositorBuffer *v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int128 v11; // [rsp+50h] [rbp-18h] BYREF
  struct CPrimitiveGroupDrawListGenerator *v12; // [rsp+78h] [rbp+10h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v3 = (struct ID2D1PrivateCompositorBuffer *)*((_QWORD *)this + 85);
  v4 = (struct ID2D1PrivateCompositorBuffer *)*((_QWORD *)this + 84);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v5 = CPrimitiveGroupDrawListGenerator::Create(v4, v3, &v11, &v10, &v9, &v12);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x30Eu, 0LL);
    if ( v12 )
      (*(void (__fastcall **)(struct CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  else
  {
    *a2 = v12;
  }
  return v7;
}
