/*
 * XREFs of ?GetRenderTargetRects@CDesktopRenderTarget@@UEAAJPEAV?$DynArray@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0A@@@@Z @ 0x18015A2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetRenderTargetRects(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // xmm0_8
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
  {
    v6 = v13;
    while ( 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v3) + 168LL);
      if ( *(_QWORD *)(v7 + 152) == v7 )
      {
        v8 = *(unsigned int *)(a2 + 24);
        v9 = _mm_srli_si128(*(__m128i *)(v7 + 120), 8).m128i_u64[0];
        *(_QWORD *)&v14 = *(_QWORD *)(v7 + 120);
        *((_QWORD *)&v14 + 1) = v9;
        v10 = v8 + 1;
        if ( (int)v8 + 1 >= (unsigned int)v8 )
          v6 = v8 + 1;
        v2 = v10 < (unsigned int)v8 ? 0x80070216 : 0;
        if ( v10 < (unsigned int)v8 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v2, 0xB5u);
        }
        else if ( v6 > *(_DWORD *)(a2 + 20) )
        {
          v11 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16, 1, &v14);
          v2 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v11, 0xC0u);
        }
        else
        {
          *(_OWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)v8) = v14;
          *(_DWORD *)(a2 + 24) = v6;
        }
        if ( v2 < 0 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 32) )
        return (unsigned int)v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v2, 0x5D2u);
  }
  return (unsigned int)v2;
}
