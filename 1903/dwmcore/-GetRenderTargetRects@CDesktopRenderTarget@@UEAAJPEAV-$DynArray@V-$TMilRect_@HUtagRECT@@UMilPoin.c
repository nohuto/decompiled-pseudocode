/*
 * XREFs of ?GetRenderTargetRects@CDesktopRenderTarget@@UEAAJPEAV?$DynArray@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0A@@@@Z @ 0x1801A8530
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetRenderTargetRects(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 i; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // xmm0_8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  signed int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 32); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i) + 168LL);
    if ( *(_QWORD *)(v6 + 152) == v6 )
    {
      v7 = _mm_srli_si128(*(__m128i *)(v6 + 120), 8).m128i_u64[0];
      *(_QWORD *)&v13 = *(_QWORD *)(v6 + 120);
      *((_QWORD *)&v13 + 1) = v7;
      v8 = *(unsigned int *)(a2 + 24);
      v9 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v9 >= (unsigned int)v8 )
      {
        if ( (unsigned int)v9 <= *(_DWORD *)(a2 + 20) )
        {
          v2 = 0;
          *(_OWORD *)(*(_QWORD *)a2 + 16 * v8) = v13;
          *(_DWORD *)(a2 + 24) = v9;
          continue;
        }
        v11 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16, 1, &v13);
        v2 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0xC3u, 0LL);
      }
      else
      {
        v2 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v2, 0x608u, 0LL);
        return v2;
      }
    }
  }
  return v2;
}
