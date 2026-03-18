/*
 * XREFs of ?TileImage@COcclusionContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800D4990
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::TileImage(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  signed int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 15LL) )
  {
    *(_QWORD *)&v11 = *(_QWORD *)(a1 + 816);
    LOBYTE(v12) = 1;
    *((_QWORD *)&v11 + 1) = (a2 - 16) & -(__int64)(a2 != 0);
    v4 = *(unsigned int *)(a1 + 1184);
    v5 = v4 + 1;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(a2 - 16, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    else if ( v5 <= *(_DWORD *)(a1 + 1180) )
    {
      v9 = 5 * v4;
      v10 = *(_QWORD *)(a1 + 1160);
      *(_OWORD *)(v10 + 8 * v9) = v11;
      *(_OWORD *)(v10 + 8 * v9 + 16) = v12;
      *(_QWORD *)(v10 + 8 * v9 + 32) = v13;
      *(_DWORD *)(a1 + 1184) = v5;
    }
    else
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 1160, 40, 1, &v11);
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC3u, 0LL);
    }
  }
  return 0LL;
}
