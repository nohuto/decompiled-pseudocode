/*
 * XREFs of ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x18009B1EC
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180097B18 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18009809C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@@Z @ 0x180227088 (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_AT.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CDxHandleBitmapRealization **a5)
{
  int v9; // ebx
  LPVOID v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ecx
  CDxHandleBitmapRealization *v14; // rdi
  int v15; // eax
  unsigned int v16; // ecx
  _DWORD *v17; // rax
  unsigned int v18; // ecx
  char v19[16]; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  *a5 = 0LL;
  if ( (*(_DWORD *)(a2 + 116) & 0x100) != 0 )
  {
    if ( *(_DWORD *)(a2 + 44) )
    {
      v9 = -2003292288;
      MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_180280E38, 2u, -2003292288, 0x2Au);
    }
    else
    {
      v11 = HeapAlloc(WPF::g_processHeap, 0, 0x240uLL);
      if ( !v11 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v12 = CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
              v11,
              a1,
              a2,
              a3,
              a4);
      v14 = (CDxHandleBitmapRealization *)v12;
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v15 = CDxHandleBitmapRealization::Initialize(v14);
        v9 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_180280E38, 2u, v15, 0x34u);
        }
        else
        {
          v17 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*((_QWORD *)v14 + 18) + 24LL))(
                            (_QWORD *)v14 + 18,
                            v19);
          if ( *v17 == 28 || *v17 == 87 )
            v9 = 0;
          else
            v9 = -2003292288;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_180280E38, 2u, v9, 0x36u);
          }
          else
          {
            *a5 = v14;
            v14 = 0LL;
          }
        }
        if ( v9 < 0 )
        {
          if ( !v14 )
            return (unsigned int)v9;
          *((_QWORD *)v14 + 35) = 0LL;
        }
        if ( v14 )
          (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180280E38, 2u, -2147024882, 0x31u);
      }
    }
  }
  else
  {
    v9 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_180280E38, 2u, -2003292287, 0x25u);
  }
  return (unsigned int)v9;
}
