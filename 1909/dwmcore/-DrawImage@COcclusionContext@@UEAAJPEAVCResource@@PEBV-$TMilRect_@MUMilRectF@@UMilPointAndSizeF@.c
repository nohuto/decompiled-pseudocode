/*
 * XREFs of ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IK@@@@Z @ 0x1800224B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180022534 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ecx
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+40h] [rbp-48h]
  __int64 v21; // [rsp+50h] [rbp-38h]

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 15LL) )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(a1 + 816);
    LOBYTE(v20) = 1;
    v12 = *(unsigned int *)(a1 + 1184);
    v13 = (a2 - 16) & -(__int64)(a2 != 0);
    *((_QWORD *)&v19 + 1) = v13;
    v14 = v12 + 1;
    if ( (int)v12 + 1 < (unsigned int)v12 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB8u, 0LL);
    }
    else if ( v14 > *(_DWORD *)(a1 + 1180) )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 1160, 40LL, 1LL, &v19);
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xC3u, 0LL);
    }
    else
    {
      v15 = 5 * v12;
      v16 = *(_QWORD *)(a1 + 1160);
      *(_OWORD *)(v16 + 8 * v15) = v19;
      *(_OWORD *)(v16 + 8 * v15 + 16) = v20;
      *(_QWORD *)(v16 + 8 * v15 + 32) = v21;
      *(_DWORD *)(a1 + 1184) = v14;
    }
  }
  if ( !a4 )
  {
    v9 = COcclusionContext::DrawImage(a1, a2, a3, 0LL);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x423u, 0LL);
  }
  return v6;
}
