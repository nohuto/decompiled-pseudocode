/*
 * XREFs of ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1802054E4
 * Callers:
 *     ?NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z @ 0x1802050C0 (-NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pp @ 0x18014C198 (McTemplateU0pp.c)
 *     McTemplateU0nn @ 0x1802057D0 (McTemplateU0nn.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMoveOptimization(__int64 a1, __int64 a2)
{
  int v4; // ebx
  LONG v5; // eax
  struct tagRECT *v6; // r15
  int *v7; // r12
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rax
  unsigned int v13; // edx
  _OWORD *v14; // rcx
  int v15; // eax
  char v16; // al
  int v17; // ecx
  struct tagRECT v18; // xmm0
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-D8h]
  struct tagRECT v24; // [rsp+30h] [rbp-C8h] BYREF
  RECT rcSrc1; // [rsp+40h] [rbp-B8h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-A8h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-98h] BYREF
  void *v28[10]; // [rsp+70h] [rbp-88h] BYREF

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
  {
    v5 = *(_DWORD *)(a1 + 120);
    v6 = (struct tagRECT *)(a2 + 16);
    rcSrc1.top = 0;
    rcSrc1.left = 0;
    rcSrc1.right = v5;
    rcSrc1.bottom = *(_DWORD *)(a1 + 124);
    if ( IntersectRect(&rcDst, &rcSrc1, (const RECT *)(a2 + 16)) )
    {
      v7 = (int *)(a2 + 32);
      v8 = *(_DWORD *)(a2 + 32);
      v9 = *(_DWORD *)(a2 + 36);
      rc = rcDst;
      OffsetRect(&rc, v8, v9);
      if ( IntersectRect(&rcDst, &rcSrc1, &rc) )
      {
        OffsetRect(&rcDst, -*v7, -*(_DWORD *)(a2 + 36));
        *(_QWORD *)(a2 + 40) = 0LL;
        *v6 = rcDst;
        v12 = *(unsigned int *)(a1 + 368);
        v13 = v12 + 1;
        v4 = (int)v12 + 1 < (unsigned int)v12 ? 0x80070216 : 0;
        if ( (int)v12 + 1 < (unsigned int)v12 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v4, 0xB5u);
        }
        else if ( v13 > *(_DWORD *)(a1 + 364) )
        {
          v15 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 344, 48, 1, a2);
          v4 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v15, 0xC0u);
        }
        else
        {
          v14 = (_OWORD *)(*(_QWORD *)(a1 + 344) + 48 * v12);
          *v14 = *(_OWORD *)a2;
          v14[1] = *(_OWORD *)(a2 + 16);
          v14[2] = *(_OWORD *)(a2 + 32);
          *(_DWORD *)(a1 + 368) = v13;
        }
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v4, 0x145u);
        }
        else
        {
          v16 = Microsoft_Windows_Dwm_CoreEnableBits;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0pp((__int64)v14, &EVTDESC_REMOTEAPP_METADATA_STATS, a1 + 344, *(unsigned int *)(a1 + 368));
            v16 = Microsoft_Windows_Dwm_CoreEnableBits;
          }
          if ( (v16 & 0x20) != 0 )
            McTemplateU0nn((_DWORD)v14, v13, v11, a2 + 32, v23, a2 + 16);
          v17 = *v7;
          v24 = *v6;
          v18 = v24;
          v24.right += v17;
          v24.left = v17 + _mm_cvtsi128_si32((__m128i)v18);
          v19 = *(_DWORD *)(a2 + 36);
          v24.top += v19;
          v24.bottom += v19;
          FastRegion::CRegion::CRegion((FastRegion::CRegion *)v28, &v24);
          v20 = FastRegion::CRegion::Union(
                  (const struct FastRegion::Internal::CRgnData **)(a1 + 200),
                  (const struct FastRegion::Internal::CRgnData **)v28);
          v4 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x15Eu);
          FastRegion::CRegion::FreeMemory(v28);
        }
      }
    }
  }
  return (unsigned int)v4;
}
