/*
 * XREFs of ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01F6DC0
 * Callers:
 *     EditionEdgyProcessInertia @ 0x1C01F81A0 (EditionEdgyProcessInertia.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C012CF3C (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _GetPointerDeviceType @ 0x1C01F0418 (_GetPointerDeviceType.c)
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1C01F79E8 (-_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01F7E44 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __fastcall Edgy::ProcessInertia(
        Edgy *this,
        const struct INERTIA_INFO_INTERNAL *a2,
        const struct tagRECT *a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  v5 = grpdeskRitInput;
  v6 = *(_QWORD *)(grpdeskRitInput + 240LL);
  if ( v6 )
  {
    if ( (*((_DWORD *)this + 46) & 8) != 0
      && *((float *)this + 5) > 0.0
      && (unsigned int)(*((_DWORD *)this + 6) - 1) <= 1 )
    {
      v7 = 0;
      if ( *(_DWORD *)v6 )
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v6 + 8) + 32LL * v7;
          if ( *(_DWORD *)(v8 + 16) == 1
            && (((unsigned int)GetPointerDeviceType(*(_QWORD *)v8, v5, (__int64)a3, a4) - 1) & 0xFFFFFFFD) == 0 )
          {
            v9 = *(_QWORD *)v8;
            v10 = 0uLL;
            if ( (unsigned int)GetPointerDeviceRects(v9, 0LL, &v10) )
            {
              if ( (unsigned int)Edgy::_InertiaRegionIntersectsTopEdge(
                                   this,
                                   (const struct INERTIA_INFO_INTERNAL *)&v10,
                                   a3) )
                break;
            }
          }
          if ( ++v7 >= *(_DWORD *)v6 )
            return;
        }
        Edgy::_PostEdgyInertia(*(_QWORD *)(v8 + 8), 1LL, *(unsigned int *)(v6 + 272));
      }
    }
  }
}
