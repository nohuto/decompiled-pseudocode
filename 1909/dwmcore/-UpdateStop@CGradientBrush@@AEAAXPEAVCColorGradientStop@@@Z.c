/*
 * XREFs of ?UpdateStop@CGradientBrush@@AEAAXPEAVCColorGradientStop@@@Z @ 0x18001DA88
 * Callers:
 *     ?OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001DA50 (-OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGradientBrush::UpdateStop(CGradientBrush *this, struct CColorGradientStop *a2)
{
  struct CColorGradientStop **v2; // r8
  struct CColorGradientStop **i; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _BYTE v8[20]; // [rsp+0h] [rbp-28h]

  v2 = (struct CColorGradientStop **)*((_QWORD *)this + 16);
  for ( i = (struct CColorGradientStop **)*((_QWORD *)this + 15); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    v5 = (__int64)i - *((_QWORD *)this + 15);
    v6 = *((_QWORD *)this + 18);
    *(__m128i *)&v8[4] = _mm_loadu_si128((const __m128i *)((char *)a2 + 60));
    *(_DWORD *)v8 = *((_DWORD *)a2 + 14);
    v7 = 5 * (v5 >> 3);
    *(_OWORD *)(v6 + 4 * v7) = *(_OWORD *)v8;
    *(_DWORD *)(v6 + 4 * v7 + 16) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v8[4], 12));
    *((_BYTE *)this + 176) = 0;
  }
}
