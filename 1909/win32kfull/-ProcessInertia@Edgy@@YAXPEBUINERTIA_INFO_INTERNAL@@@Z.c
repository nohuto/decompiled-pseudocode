/*
 * XREFs of ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01F6B10
 * Callers:
 *     EditionEdgyProcessInertia @ 0x1C01F7EF0 (EditionEdgyProcessInertia.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C01081CC (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _GetPointerDeviceType @ 0x1C01F0298 (_GetPointerDeviceType.c)
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1C01F7738 (-_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01F7B94 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __fastcall Edgy::ProcessInertia(Edgy *this, const struct INERTIA_INFO_INTERNAL *a2, const struct tagRECT *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  v4 = grpdeskRitInput;
  v5 = *(_QWORD *)(grpdeskRitInput + 240LL);
  if ( v5 )
  {
    if ( (*((_DWORD *)this + 46) & 8) != 0
      && *((float *)this + 5) > 0.0
      && (unsigned int)(*((_DWORD *)this + 6) - 1) <= 1 )
    {
      v6 = 0;
      if ( *(_DWORD *)v5 )
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v5 + 8) + 32LL * v6;
          if ( *(_DWORD *)(v7 + 16) == 1
            && (((unsigned int)GetPointerDeviceType(*(_QWORD *)v7, v4, (__int64)a3) - 1) & 0xFFFFFFFD) == 0 )
          {
            v8 = *(_QWORD *)v7;
            v9 = 0uLL;
            if ( (unsigned int)GetPointerDeviceRects(v8, 0LL, &v9) )
            {
              if ( (unsigned int)Edgy::_InertiaRegionIntersectsTopEdge(
                                   this,
                                   (const struct INERTIA_INFO_INTERNAL *)&v9,
                                   a3) )
                break;
            }
          }
          if ( ++v6 >= *(_DWORD *)v5 )
            return;
        }
        Edgy::_PostEdgyInertia(*(_QWORD *)(v7 + 8), 1LL, *(unsigned int *)(v5 + 272));
      }
    }
  }
}
