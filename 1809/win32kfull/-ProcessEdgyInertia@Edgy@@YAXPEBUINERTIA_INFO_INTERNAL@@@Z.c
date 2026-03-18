/*
 * XREFs of ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01E0B10
 * Callers:
 *     AddInertiaInfo @ 0x1C0226660 (AddInertiaInfo.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C00B9184 (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _GetPointerDeviceType @ 0x1C01DAD88 (_GetPointerDeviceType.c)
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1C01E16F8 (-_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01E1B50 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __fastcall Edgy::ProcessEdgyInertia(Edgy *this, const struct INERTIA_INFO_INTERNAL *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rbx
  const struct tagRECT *v7; // r8
  __m128i v8; // [rsp+20h] [rbp-28h] BYREF

  v3 = grpdeskRitInput;
  v4 = *(_QWORD *)(grpdeskRitInput + 240LL);
  if ( v4 )
  {
    if ( (*((_DWORD *)this + 34) & 8) != 0
      && *((float *)this + 5) > 0.0
      && (unsigned int)(*((_DWORD *)this + 6) - 1) <= 1 )
    {
      v5 = 0;
      if ( *(_DWORD *)v4 )
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v4 + 8) + 32LL * v5;
          if ( *(_DWORD *)(v6 + 16) == 1
            && (((unsigned int)GetPointerDeviceType(*(_QWORD *)v6, v3) - 1) & 0xFFFFFFFD) == 0
            && (unsigned int)GetPointerDeviceRects(*(_QWORD *)v6, 0LL, &v8)
            && (unsigned int)Edgy::_InertiaRegionIntersectsTopEdge(this, (const struct INERTIA_INFO_INTERNAL *)&v8, v7) )
          {
            break;
          }
          if ( ++v5 >= *(_DWORD *)v4 )
            return;
        }
        Edgy::_PostEdgyInertia(*(_QWORD *)(v6 + 8), 1LL, *(unsigned int *)(v4 + 272));
      }
    }
  }
}
