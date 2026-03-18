/*
 * XREFs of ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x18003DDE4
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18003D8C4 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18003DAC4 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@@Z @ 0x1802621EC (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_AT.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CDxHandleBitmapRealization **a5)
{
  int v9; // ebx
  void *v11; // rax
  unsigned int v12; // ecx
  CDxHandleBitmapRealization *v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  _DWORD *v16; // rax
  unsigned int v17; // ecx
  char v18[16]; // [rsp+30h] [rbp-48h] BYREF

  *a5 = 0LL;
  if ( (*(_DWORD *)(a2 + 116) & 0x100) != 0 )
  {
    if ( *(_DWORD *)(a2 + 44) )
    {
      v9 = -2003292288;
      MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802B2C70, 2u, -2003292288, 0x28u, 0LL);
    }
    else
    {
      v11 = operator new(0x240uLL);
      if ( v11 )
        v13 = (CDxHandleBitmapRealization *)CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
                                              v11,
                                              a1,
                                              a2,
                                              a3,
                                              a4);
      else
        v13 = 0LL;
      if ( v13 )
      {
        (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v13 + 8LL))(v13);
        v14 = CDxHandleBitmapRealization::Initialize(v13);
        v9 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_1802B2C70, 2u, v14, 0x32u, 0LL);
        }
        else
        {
          v16 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*((_QWORD *)v13 + 18) + 24LL))(
                            (_QWORD *)v13 + 18,
                            v18);
          if ( *v16 == 28 || *v16 == 87 )
            v9 = 0;
          else
            v9 = -2003292288;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802B2C70, 2u, v9, 0x34u, 0LL);
          }
          else
          {
            *a5 = v13;
            v13 = 0LL;
          }
        }
        if ( v9 < 0 )
        {
          if ( !v13 )
            return (unsigned int)v9;
          *((_QWORD *)v13 + 35) = 0LL;
        }
        if ( v13 )
          (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802B2C70, 2u, -2147024882, 0x2Fu, 0LL);
      }
    }
  }
  else
  {
    v9 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802B2C70, 2u, -2003292287, 0x23u, 0LL);
  }
  return (unsigned int)v9;
}
