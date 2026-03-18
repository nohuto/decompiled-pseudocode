/*
 * XREFs of ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HJ@@@@Z @ 0x18006F7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006F8F0 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+40h] [rbp-48h]
  __int64 v21; // [rsp+50h] [rbp-38h]

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 15LL) )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(a1 + 808);
    LOBYTE(v20) = 1;
    v12 = *(unsigned int *)(a1 + 1176);
    v13 = (a2 - 16) & -(__int64)(a2 != 0);
    *((_QWORD *)&v19 + 1) = v13;
    v14 = v12 + 1;
    if ( (int)v12 + 1 < (unsigned int)v12 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, (int)v12 + 1 < (unsigned int)v12 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v14 <= *(_DWORD *)(a1 + 1172) )
    {
      v17 = 5 * v12;
      v18 = *(_QWORD *)(a1 + 1152);
      *(_OWORD *)(v18 + 8 * v17) = v19;
      *(_OWORD *)(v18 + 8 * v17 + 16) = v20;
      *(_QWORD *)(v18 + 8 * v17 + 32) = v21;
      *(_DWORD *)(a1 + 1176) = v14;
    }
    else
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 1152, 40, 1, &v19);
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC0u);
    }
  }
  if ( !a4 )
  {
    v9 = COcclusionContext::DrawImage(a1, a2, a3, 0LL);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x46Fu);
  }
  return v6;
}
